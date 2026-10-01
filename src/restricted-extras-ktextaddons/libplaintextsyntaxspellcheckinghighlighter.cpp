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

KSyntaxHighlighting__AbstractHighlighter* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_AsKSyntaxHighlighting__AbstractHighlighter(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    return const_cast<TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter*>(self);
}

TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_FromKSyntaxHighlighting__AbstractHighlighter(const KSyntaxHighlighting::AbstractHighlighter* _ksyntaxhighlighting__abstracthighlighter) {
    return dynamic_cast<TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter*>(const_cast<KSyntaxHighlighting::AbstractHighlighter*>(_ksyntaxhighlighting__abstracthighlighter));
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
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    auto* vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->setMisspelled(static_cast<int>(start), static_cast<int>(count));
    }
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditor__plaintextsyntaxspellcheckinghighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetDefinition(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setDefinition(*def);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetDefinition(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setdefinition_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetDefinition_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperHighlightBlock(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::highlightBlock(text_QString);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnHighlightBlock(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlightblock_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightBlock_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperUnsetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::unsetMisspelled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnUnsetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unsetmisspelled_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_UnsetMisspelled_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setMisspelled(static_cast<int>(start), static_cast<int>(count));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setMisspelled called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetMisspelled(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_setmisspelled_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetMisspelled_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFormat called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyformat_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFormat_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetaObject(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    return (QMetaObject*)self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetaObject(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* param1) {
    return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacast(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacast_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperMetacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnMetacall(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->eventFilter(o, e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::eventFilter(o, e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEventFilter(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    return self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::event(event);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Event_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperTimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnTimerEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnChildEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_childevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperCustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnCustomEvent(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_customevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnConnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperDisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnDisconnectNotify(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    self->setTheme(*theme);
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperSetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    self->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setTheme(*theme);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnSetTheme(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_settheme_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetTheme_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self);
    if (vtextcustomeditorplaintextsyntaxspellcheckinghighlighter) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFolding called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SuperApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::applyFolding called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_OnApplyFolding(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->textcustomeditor__plaintextsyntaxspellcheckinghighlighter_applyfolding_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_ApplyFolding_Callback>(slot);
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IntraWordEditing(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::intraWordEditing();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::intraWordEditing called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetIntraWordEditing(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, bool editing) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::setIntraWordEditing(editing);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setIntraWordEditing called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetFormat(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, const QTextCharFormat* format) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setFormat called without a directly constructed type");
}

// Derived class handler implementation
QTextCharFormat* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Format(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int pos) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)))
        return new QTextCharFormat(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->format(static_cast<int>(pos)));
    qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::format called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_PreviousBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::previousBlockState();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::previousBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockState(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::currentBlockState();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockState(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int newState) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockState(static_cast<int>(newState));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockState called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SetCurrentBlockUserData(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)) {
        vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockUserData(data);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::setCurrentBlockUserData called without a directly constructed type");
}

// Derived class protected handler implementation
QTextBlockUserData* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlockUserData(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::currentBlockUserData();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlockUserData called without a directly constructed type");
}

// Derived class handler implementation
QTextBlock* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_CurrentBlock(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self)))
        return new QTextBlock(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->currentBlock());
    qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::currentBlock called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Sender(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_SenderSignalIndex(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Receivers(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_IsSignalConnected(const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = const_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(dynamic_cast<const VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))) {
        return vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::isSignalConnected called without a directly constructed type");
}

// Derived class handler implementation
KSyntaxHighlighting__State* TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_HighlightLine(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, libqt_string text, const KSyntaxHighlighting__State* state) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vtextcustomeditorplaintextsyntaxspellcheckinghighlighter = dynamic_cast<VirtualTextCustomEditorPlainTextSyntaxSpellCheckingHighlighter*>(self))
        return new KSyntaxHighlighting::State(vtextcustomeditorplaintextsyntaxspellcheckinghighlighter->highlightLine(text_QString, *state));
    qFatal("Error: Protected method TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter::highlightLine called without a directly constructed type");
}

void TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter_Delete(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self) {
    delete self;
}
