#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter
#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/FoldingRegion>
#include <KSyntaxHighlighting/Format>
#include <KSyntaxHighlighting/Theme>
#include <abstracthighlighter.h>
#include "libabstracthighlighter.h"
#include "libabstracthighlighter.hxx"

KSyntaxHighlighting__Definition* KSyntaxHighlighting__AbstractHighlighter_Definition(const KSyntaxHighlighting__AbstractHighlighter* self) {
    return new KSyntaxHighlighting::Definition(self->definition());
}

void KSyntaxHighlighting__AbstractHighlighter_SetDefinition(KSyntaxHighlighting__AbstractHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    self->setDefinition(*def);
}

KSyntaxHighlighting__Theme* KSyntaxHighlighting__AbstractHighlighter_Theme(const KSyntaxHighlighting__AbstractHighlighter* self) {
    return new KSyntaxHighlighting::Theme(self->theme());
}

void KSyntaxHighlighting__AbstractHighlighter_SetTheme(KSyntaxHighlighting__AbstractHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    self->setTheme(*theme);
}

void KSyntaxHighlighting__AbstractHighlighter_Delete(KSyntaxHighlighting__AbstractHighlighter* self) {
    delete self;
}
