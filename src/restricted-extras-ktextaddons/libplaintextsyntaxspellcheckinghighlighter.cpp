#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter
#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/FoldingRegion>
#include <KSyntaxHighlighting/Format>
#include <KSyntaxHighlighting/State>
#include <KSyntaxHighlighting/Theme>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextEditor
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter
#include <plaintextsyntaxspellcheckinghighlighter.h>
#include "libplaintextsyntaxspellcheckinghighlighter.h"
#include "libplaintextsyntaxspellcheckinghighlighter.hxx"

TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new(TextCustomEditor__PlainTextEditor* plainText) {
    return new VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(plainText);
}

TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_new2(TextCustomEditor__PlainTextEditor* plainText, const QColor* misspelledColor) {
    return new VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter(plainText, *misspelledColor);
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ToggleSpellHighlighting(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, bool on) {
    self->toggleSpellHighlighting(on);
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    self->setDefinition(*def);
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->highlightBlock(text_QString);
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    auto* vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter && vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    auto* vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter && vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter && vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetDefinition(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setDefinition(*def);
    } else {
        self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setDefinition(*def);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetDefinition(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperHighlightBlock(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const libqt_string text) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->highlightBlock(text_QString);
    } else {
        self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::highlightBlock(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnHighlightBlock(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnUnsetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback>(slot));
    }
}

// Derived class handler implementation
QMetaObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return (QMetaObject*)vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::metaObject();
    }
}

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetaObject(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetaObject(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback>(slot));
    }
}

// Derived class handler implementation
void* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* param1) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
    }
}

// Base class handler implementation
void* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* param1) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->eventFilter(o, e);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->eventFilter(o, e);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->eventFilter(o, e);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->eventFilter(o, e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->event(event);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::event(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->event(event);
    } else {
        return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->timerEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnTimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnDisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTheme(*theme);
    } else {
        self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setTheme(*theme);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTheme(*theme);
    } else {
        self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setTheme(*theme);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->intraWordEditing();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->intraWordEditing();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIntraWordEditing(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->intraWordEditing();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->intraWordEditing();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIntraWordEditing(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, bool editing) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setIntraWordEditing(editing);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setIntraWordEditing(editing);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetIntraWordEditing(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, bool editing) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setIntraWordEditing(editing);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setIntraWordEditing(editing);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetIntraWordEditing(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int pos) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return new QTextCharFormat(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperFormat(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int pos) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_IsBase(true);
        return new QTextCharFormat(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnFormat(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->previousBlockState();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->previousBlockState();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperPreviousBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->previousBlockState();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->previousBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnPreviousBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlockState();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->currentBlockState();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlockState();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->currentBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int newState) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockState(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int newState) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockState(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetCurrentBlockUserData(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_IsBase(true);
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetCurrentBlockUserData(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlockUserData* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlockUserData();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->currentBlockUserData();
    }
}

// Base class handler implementation
QTextBlockUserData* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlockUserData(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlockUserData();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->currentBlockUserData();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlockUserData(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return new QTextBlock(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCurrentBlock(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_IsBase(true);
        return new QTextBlock(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCurrentBlock(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSender(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSender(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSenderSignalIndex(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSenderSignalIndex(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperReceivers(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnReceivers(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperIsSignalConnected(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_IsBase(true);
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnIsSignalConnected(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self));
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
KSyntaxHighlighting__State* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightLine(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, libqt_string text, const KSyntaxHighlighting__State* state) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        return new KSyntaxHighlighting::State(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->highlightLine(text_QString, *state));
    }
    return {};
}

// Base class handler implementation
KSyntaxHighlighting__State* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperHighlightLine(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, libqt_string text, const KSyntaxHighlighting__State* state) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightLine_IsBase(true);
        return new KSyntaxHighlighting::State(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->highlightLine(text_QString, *state));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnHighlightLine(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter && vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->isVirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->setTextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightLine_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightLine_Callback>(slot));
    }
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Delete(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    delete self;
}
