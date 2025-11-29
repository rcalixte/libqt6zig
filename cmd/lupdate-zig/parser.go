package main

import (
	"encoding/xml"
	"go/scanner"
	"go/token"
	"os"
	"path/filepath"
	"slices"
	"sort"
	"strconv"
	"strings"
)

func parse(filePaths []string, options FlagOptions) (string, error) {
	var totalContexts []Context

	if options.KeepObsolete {
		totalContexts = append(totalContexts, options.ExistingContext...)
	}

	for _, filePath := range filePaths {
		fileContent, err := os.ReadFile(filePath)
		if err != nil {
			return "", err
		}

		var s scanner.Scanner
		var lineNo token.Pos
		var currentContext Context
		var contexts []Context
		var comments, extracomments []string

		fset := token.NewFileSet()
		file := fset.AddFile(filePath, -1, len(fileContent))
		s.Init(file, fileContent, nil, scanner.ScanComments)

		for {
			pos, tok, lit := s.Scan()
			lineNo = pos
			switch tok {
			case token.COMMENT:
				if options.AddComments {
					newComment := lit
					if len(newComment) >= 3 {
						switch newComment[:3] {
						case "//~":
							extracomments = append(extracomments, strings.TrimSpace(newComment[3:]))
						case "//:":
							slices.Reverse(extracomments)
							extracomments = append(extracomments, strings.TrimSpace(newComment[3:]))
							slices.Reverse(extracomments)
						}
					}
				}

			case token.SEMICOLON, token.LBRACE:
				comments = comments[:0]
				extracomments = extracomments[:0]

			case token.IDENT:
				var expectedParams, paramCount int
				var expectingNumerus bool
				var disambiguation, name, numerus, source string
				var numerusForms []string

				if strings.HasPrefix(lit, "Translate") || lit == "QBaseTranslate" {
					if _, tok, _ := s.Scan(); tok != token.LPAREN {
						continue
					}

					if lit == "QBaseTranslate" || lit == "Translate4" {
						expectedParams = 4
						expectingNumerus = true

					} else if lit == "Translate" {
						expectedParams = 2

					} else if lit == "Translate3" {
						expectedParams = 3

					} else {
						continue
					}

					isNameSet := false

					for {
						newPos, tok, lit := s.Scan()

						if tok == token.RPAREN || tok == token.IDENT {
							if paramCount > 0 {
								break
							}
						}

						if tok == token.SEMICOLON {
							break
						}

						if tok == token.STRING {
							if !isNameSet {

								name, err = strconv.Unquote(lit)
								if err != nil {
									return "", err
								}

								for i := range contexts {
									if contexts[i].Name == name {
										currentContext = contexts[i]
										break
									}
								}

								currentContext.Name = name
								isNameSet = true
								paramCount++

							} else {
								currentToken, err := strconv.Unquote(lit)
								if err != nil {
									return "", err
								}

								if currentToken == "" {
									continue
								}

								if strings.Contains(currentToken, "%n") {
									numerus = "yes"
									numerusForms = []string{"", ""}
								}

								if paramCount == 1 {
									source = currentToken
								} else {
									disambiguation = currentToken
									comments = append(comments, currentToken)
								}

								lineNo = newPos
								paramCount++
							}

						} else if tok == token.INT {
							if !expectingNumerus {
								break
							}

							paramCount++
							numerus = "yes"
							numerusCount, err := strconv.Atoi(lit)
							if err != nil {
								return "", err
							}

							numerusForms = make([]string, numerusCount)

							for i := range numerusCount {
								numerusForms[i] = ""
							}
							break
						}
					}

				} else if lit == "Tr" || lit == "Tr2" || lit == "Tr3" {
					name = "QObject"

					for i := range contexts {
						if contexts[i].Name == name {
							currentContext = contexts[i]
							break
						}
					}

					currentContext.Name = name

					if lit == "Tr" {
						expectedParams = 1

					} else if lit == "Tr2" {
						expectedParams = 2

					} else if lit == "Tr3" {
						expectedParams = 3
						expectingNumerus = true
					}

					for {
						newPos, tok, lit := s.Scan()
						if tok == token.RPAREN || tok == token.IDENT {
							if paramCount > 0 {
								break
							}
						}

						if tok == token.SEMICOLON {
							break
						}

						if tok == token.STRING {
							currentToken, err := strconv.Unquote(lit)
							if err != nil {
								return "", err
							}

							if currentToken == "" {
								continue
							}

							if strings.Contains(currentToken, "%n") {
								numerus = "yes"
								numerusForms = []string{"", ""}
							}

							if paramCount == 0 {
								source = currentToken
							} else {
								disambiguation = currentToken
								comments = append(comments, currentToken)
							}

							lineNo = newPos
							paramCount++

						} else if tok == token.INT {
							if !expectingNumerus {
								break
							}

							paramCount++
							numerus = "yes"
							numerusCount, err := strconv.Atoi(lit)
							if err != nil {
								return "", err
							}

							numerusForms = make([]string, numerusCount)

							for i := range numerusCount {
								numerusForms[i] = ""
							}
							break
						}
					}
				}

				if paramCount > 0 && paramCount == expectedParams {
					isDupe := false
					existingMessage := findMessageSourceInContexts(totalContexts, contexts, name, source, disambiguation)

					if existingMessage != nil {
						for _, location := range existingMessage.Locations {
							if location.Filename == filepath.Base(filePath) && location.Line == fset.Position(lineNo).Line {
								isDupe = true
								break
							}
						}

						if !isDupe {
							existingMessage.Locations = append(existingMessage.Locations, Location{Filename: filepath.Base(filePath), Line: fset.Position(lineNo).Line})
						}

					} else {
						NewCounter++

						currentContext.Messages = []Message{{
							Numerus:      numerus,
							Locations:    []Location{{Filename: filepath.Base(filePath), Line: fset.Position(lineNo).Line}},
							Source:       source,
							Comment:      strings.Join(comments, "\n"),
							ExtraComment: strings.Join(extracomments, "\n"),
							Translation:  Translation{Type: "unfinished", NumerusForm: numerusForms},
						}}
						contexts = append(contexts, currentContext)
					}
				}
			}

			if tok == token.EOF {
				break
			}
		}

		for _, context := range contexts {
			if len(context.Messages) > 0 {
				found := false

				for i := range totalContexts {
					if totalContexts[i].Name == context.Name {
						totalContexts[i].Messages = append(totalContexts[i].Messages, context.Messages...)
						found = true
						break
					}
				}

				if !found {
					totalContexts = append(totalContexts, context)
				}
			}
		}
	}

	sort.Slice(totalContexts, func(i, j int) bool {
		return totalContexts[i].Name < totalContexts[j].Name
	})

	xmlContext, err := xml.MarshalIndent(totalContexts, "", "    ")
	if err != nil {
		return "", err
	}

	return strings.ReplaceAll(string(xmlContext), "></location>", "/>"), nil
}

func findMessageSourceInContexts(totalcontexts, context []Context, name, source, disambiguation string) *Message {
	for _, c := range totalcontexts {
		if c.Name == name {
			message := findMessageBySource(c.Messages, source, disambiguation)
			if message != nil {
				return message
			}
		}
	}

	for _, c := range context {
		message := findMessageBySource(c.Messages, source, disambiguation)
		if message != nil && c.Name == name {
			return message
		}
	}

	return nil
}

func findMessageBySource(messages []Message, source, disambiguation string) *Message {
	for i, message := range messages {
		if message.Source == source {
			if disambiguation != "" {
				if message.Comment == disambiguation {
					return &messages[i]
				}
			} else {
				return &messages[i]
			}
		}
	}

	return nil
}
