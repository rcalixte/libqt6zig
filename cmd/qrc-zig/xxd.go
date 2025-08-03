/*
 * This file incorporates code from the [go-xxd] project (https://github.com/felixge/go-xxd)
 * Copyright (c) 2016 Felix Geisendörfer (felix@debuggable.com) and contributors
 * Licensed under the MIT License. See original LICENSE for details.
 */

package main

import (
	"io"
	"strconv"
	"strings"
)

// hex lookup table for hex encoding
const (
	ldigits = "0123456789abcdef"
	udigits = "0123456789ABCDEF"
)

// variables used in xxd()
var (
	space         = []byte(" ")
	quadSpace     = []byte("    ")
	newLine       = []byte("\n")
	constDecl     = []byte("const ")
	closeAndConst = []byte("};\n\nconst ")
	equals        = []byte("_len: u32 = ")
	brackets      = []byte(" = [_]u8{")
	commaSpace    = []byte(", ")
	comma         = []byte(",")
	semiColonNl   = []byte(";\n")
)

func cfmtEncode(dst, src []byte, hextable string) {
	b := src[0]
	dst[3] = hextable[b&0x0f]
	dst[2] = hextable[b>>4]
	dst[1] = 'x'
	dst[0] = '0'
}

func xxd(r io.Reader, w *strings.Builder, fname string, upper bool) error {
	var (
		cols          = 12
		octs          = 4
		caps          = ldigits
		doConstDecl   = true
		doZigEnd      bool
		lenConstDecl  = len(constDecl)
		lenCloseConst = len(closeAndConst)
		lenFName      = len(fname)
		lenBrackets   = len(brackets)
		lenEquals     = len(equals)

		constDeclChar = make([]byte, lenConstDecl+lenFName+lenBrackets)
		constDeclLen  = make([]byte, lenCloseConst+lenFName+lenEquals)
	)

	// Copy the standard text in the output:
	// e.g. const _resourceFoo = [_]u8{ and const _resourceFoo_len: u32 =
	_ = copy(constDeclChar[0:lenConstDecl], constDecl[:])
	_ = copy(constDeclLen[0:lenCloseConst], closeAndConst[:])

	for i := range lenFName {
		if fname[i] != '.' {
			constDeclChar[lenConstDecl+i] = fname[i]
			constDeclLen[lenCloseConst+i] = fname[i]
		} else {
			constDeclChar[lenConstDecl+i] = '_'
			constDeclLen[lenCloseConst+i] = '_'
		}
	}

	_ = copy(constDeclChar[lenConstDecl+lenFName:], brackets[:])
	_ = copy(constDeclLen[lenCloseConst+lenFName:], equals[:])

	// Switch between upper- and lower-case hex chars
	if upper {
		caps = udigits
	}

	// These are bumped down from the beginning of the function in order to
	// allow for their sizes to be allocated based on the user's specifications
	var (
		line = make([]byte, cols)
		char = make([]byte, octs)
	)

	c := int64(0) // number of characters
	nl := int64(0)

	var (
		n   int
		err error
	)

	for {
		n, err = io.ReadFull(r, line)
		if err != nil && err != io.EOF && err != io.ErrUnexpectedEOF {
			return err
		}

		if n == 0 {
			doZigEnd = true
		}

		if doConstDecl {
			w.Write(constDeclChar)
			w.Write(newLine)
			doConstDecl = false
		}

		// C values
		if !doZigEnd {
			w.Write(quadSpace)
		}

		for i := range n {
			cfmtEncode(char, line[i:i+1], caps)
			w.Write(char)
			c++

			// don't add spaces to EOL
			if i != n-1 {
				w.Write(commaSpace)
			} else {
				w.Write(comma)
			}
		}

		if doZigEnd {
			w.Write(constDeclLen)
			w.Write([]byte(strconv.FormatInt(c, 10)))
			w.Write(semiColonNl)
			return nil
		}

		w.Write(newLine)
		nl++
	}
}
