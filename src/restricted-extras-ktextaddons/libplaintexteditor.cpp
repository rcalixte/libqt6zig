#include <QAbstractScrollArea>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCursor>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__SpellCheckDecorator
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__PlainTextEditor
#include <plaintexteditor.h>
#include "libplaintexteditor.h"
#include "libplaintexteditor.hxx"

TextCustomEditor__PlainTextEditor* TextCustomEditor__PlainTextEditor_new(QWidget* parent) {
    return new VirtualTextCustomEditorPlainTextEditor(parent);
}

TextCustomEditor__PlainTextEditor* TextCustomEditor__PlainTextEditor_new2() {
    return new VirtualTextCustomEditorPlainTextEditor();
}

QMetaObject* TextCustomEditor__PlainTextEditor_MetaObject(const TextCustomEditor__PlainTextEditor* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__PlainTextEditor_Metacast(TextCustomEditor__PlainTextEditor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__PlainTextEditor_Metacall(TextCustomEditor__PlainTextEditor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__PlainTextEditor_Tr(const char* s) {
    auto _ret = TextCustomEditor::PlainTextEditor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__PlainTextEditor_SetSearchSupport(TextCustomEditor__PlainTextEditor* self, bool b) {
    self->setSearchSupport(b);
}

bool TextCustomEditor__PlainTextEditor_SearchSupport(const TextCustomEditor__PlainTextEditor* self) {
    return self->searchSupport();
}

bool TextCustomEditor__PlainTextEditor_SpellCheckingSupport(const TextCustomEditor__PlainTextEditor* self) {
    return self->spellCheckingSupport();
}

void TextCustomEditor__PlainTextEditor_SetSpellCheckingSupport(TextCustomEditor__PlainTextEditor* self, bool check) {
    self->setSpellCheckingSupport(check);
}

void TextCustomEditor__PlainTextEditor_SetReadOnly(TextCustomEditor__PlainTextEditor* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

void TextCustomEditor__PlainTextEditor_SetTextToSpeechSupport(TextCustomEditor__PlainTextEditor* self, bool b) {
    self->setTextToSpeechSupport(b);
}

bool TextCustomEditor__PlainTextEditor_TextToSpeechSupport(const TextCustomEditor__PlainTextEditor* self) {
    return self->textToSpeechSupport();
}

void TextCustomEditor__PlainTextEditor_SetWebShortcutSupport(TextCustomEditor__PlainTextEditor* self, bool b) {
    self->setWebShortcutSupport(b);
}

bool TextCustomEditor__PlainTextEditor_WebShortcutSupport(const TextCustomEditor__PlainTextEditor* self) {
    return self->webShortcutSupport();
}

void TextCustomEditor__PlainTextEditor_CreateHighlighter(TextCustomEditor__PlainTextEditor* self) {
    self->createHighlighter();
}

void TextCustomEditor__PlainTextEditor_AddIgnoreWords(TextCustomEditor__PlainTextEditor* self, const libqt_list /* of libqt_string */ lst) {
    QList<QString> lst_QList;
    lst_QList.reserve(lst.len);
    libqt_string* lst_arr = static_cast<libqt_string*>(lst.data);
    for (size_t i = 0; i < lst.len; ++i) {
        QString lst_arr_i_QString = QString::fromUtf8(lst_arr[i].data, lst_arr[i].len);
        lst_QList.push_back(lst_arr_i_QString);
    }
    self->addIgnoreWords(lst_QList);
}

bool TextCustomEditor__PlainTextEditor_ActivateLanguageMenu(const TextCustomEditor__PlainTextEditor* self) {
    return self->activateLanguageMenu();
}

void TextCustomEditor__PlainTextEditor_SetActivateLanguageMenu(TextCustomEditor__PlainTextEditor* self, bool activate) {
    self->setActivateLanguageMenu(activate);
}

Sonnet__Highlighter* TextCustomEditor__PlainTextEditor_Highlighter(const TextCustomEditor__PlainTextEditor* self) {
    return self->highlighter();
}

bool TextCustomEditor__PlainTextEditor_CheckSpellingEnabled(const TextCustomEditor__PlainTextEditor* self) {
    return self->checkSpellingEnabled();
}

void TextCustomEditor__PlainTextEditor_SetCheckSpellingEnabled(TextCustomEditor__PlainTextEditor* self, bool check) {
    self->setCheckSpellingEnabled(check);
}

void TextCustomEditor__PlainTextEditor_SetSpellCheckingConfigFileName(TextCustomEditor__PlainTextEditor* self, const libqt_string _fileName) {
    QString _fileName_QString = QString::fromUtf8(_fileName.data, _fileName.len);
    self->setSpellCheckingConfigFileName(_fileName_QString);
}

libqt_string TextCustomEditor__PlainTextEditor_SpellCheckingConfigFileName(const TextCustomEditor__PlainTextEditor* self) {
    auto _ret = self->spellCheckingConfigFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__PlainTextEditor_SpellCheckingLanguage(const TextCustomEditor__PlainTextEditor* self) {
    const auto _ret = self->spellCheckingLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__PlainTextEditor_SetSpellCheckingLanguage(TextCustomEditor__PlainTextEditor* self, const libqt_string _language) {
    QString _language_QString = QString::fromUtf8(_language.data, _language.len);
    self->setSpellCheckingLanguage(_language_QString);
}

void TextCustomEditor__PlainTextEditor_SetEmojiSupport(TextCustomEditor__PlainTextEditor* self, bool b) {
    self->setEmojiSupport(b);
}

bool TextCustomEditor__PlainTextEditor_EmojiSupport(const TextCustomEditor__PlainTextEditor* self) {
    return self->emojiSupport();
}

void TextCustomEditor__PlainTextEditor_SlotDisplayMessageIndicator(TextCustomEditor__PlainTextEditor* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->slotDisplayMessageIndicator(message_QString);
}

void TextCustomEditor__PlainTextEditor_SlotCheckSpelling(TextCustomEditor__PlainTextEditor* self) {
    self->slotCheckSpelling();
}

void TextCustomEditor__PlainTextEditor_SlotSpeakText(TextCustomEditor__PlainTextEditor* self) {
    self->slotSpeakText();
}

void TextCustomEditor__PlainTextEditor_SlotZoomReset(TextCustomEditor__PlainTextEditor* self) {
    self->slotZoomReset();
}

void TextCustomEditor__PlainTextEditor_AddExtraMenuEntry(TextCustomEditor__PlainTextEditor* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__PlainTextEditor_ContextMenuEvent(TextCustomEditor__PlainTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->contextMenuEvent(event);
    }
}

bool TextCustomEditor__PlainTextEditor_Event(TextCustomEditor__PlainTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        return vtextcustomeditor__plaintexteditor->event(ev);
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::event called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditor_KeyPressEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->keyPressEvent(event);
    }
}

void TextCustomEditor__PlainTextEditor_WheelEvent(TextCustomEditor__PlainTextEditor* self, QWheelEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->wheelEvent(event);
    }
}

Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        return vtextcustomeditor__plaintexteditor->createSpellCheckDecorator();
    }
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::createSpellCheckDecorator called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditor_FocusInEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->focusInEvent(event);
    }
}

void TextCustomEditor__PlainTextEditor_UpdateHighLighter(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->updateHighLighter();
    }
}

void TextCustomEditor__PlainTextEditor_ClearDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor) {
        vtextcustomeditor__plaintexteditor->clearDecorator();
    }
}

void TextCustomEditor__PlainTextEditor_FindText(TextCustomEditor__PlainTextEditor* self) {
    self->findText();
}

void TextCustomEditor__PlainTextEditor_Connect_FindText(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)()>(&TextCustomEditor::PlainTextEditor::findText),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void TextCustomEditor__PlainTextEditor_ReplaceText(TextCustomEditor__PlainTextEditor* self) {
    self->replaceText();
}

void TextCustomEditor__PlainTextEditor_Connect_ReplaceText(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)()>(&TextCustomEditor::PlainTextEditor::replaceText),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void TextCustomEditor__PlainTextEditor_SpellCheckerAutoCorrect(TextCustomEditor__PlainTextEditor* self, const libqt_string currentWord, const libqt_string autoCorrectWord) {
    QString currentWord_QString = QString::fromUtf8(currentWord.data, currentWord.len);
    QString autoCorrectWord_QString = QString::fromUtf8(autoCorrectWord.data, autoCorrectWord.len);
    self->spellCheckerAutoCorrect(currentWord_QString, autoCorrectWord_QString);
}

void TextCustomEditor__PlainTextEditor_Connect_SpellCheckerAutoCorrect(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*, const char*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*, const char*, const char*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)(const QString&, const QString&)>(&TextCustomEditor::PlainTextEditor::spellCheckerAutoCorrect),
                                               [self, slotFunc](const QString& currentWord, const QString& autoCorrectWord) {
                                                   const auto currentWord_ret = currentWord;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray currentWord_b = currentWord_ret.toUtf8();
                                                   auto currentWord_str_len = currentWord_b.length();
                                                   const char* currentWord_str = static_cast<const char*>(malloc(currentWord_str_len + 1));
                                                   memcpy((void*)currentWord_str, currentWord_b.data(), currentWord_str_len);
                                                   ((char*)currentWord_str)[currentWord_str_len] = '\0';
                                                   const char* sigval1 = currentWord_str;
                                                   const auto autoCorrectWord_ret = autoCorrectWord;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray autoCorrectWord_b = autoCorrectWord_ret.toUtf8();
                                                   auto autoCorrectWord_str_len = autoCorrectWord_b.length();
                                                   const char* autoCorrectWord_str = static_cast<const char*>(malloc(autoCorrectWord_str_len + 1));
                                                   memcpy((void*)autoCorrectWord_str, autoCorrectWord_b.data(), autoCorrectWord_str_len);
                                                   ((char*)autoCorrectWord_str)[autoCorrectWord_str_len] = '\0';
                                                   const char* sigval2 = autoCorrectWord_str;
                                                   slotFunc(self, sigval1, sigval2);
                                                   libqt_free(currentWord_str);
                                                   libqt_free(autoCorrectWord_str);
                                               });
}

void TextCustomEditor__PlainTextEditor_CheckSpellingChanged(TextCustomEditor__PlainTextEditor* self, bool param1) {
    self->checkSpellingChanged(param1);
}

void TextCustomEditor__PlainTextEditor_Connect_CheckSpellingChanged(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*, bool) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*, bool)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)(bool)>(&TextCustomEditor::PlainTextEditor::checkSpellingChanged),
                                               [self, slotFunc](bool param1) {
                                                   bool sigval1 = param1;
                                                   slotFunc(self, sigval1);
                                               });
}

void TextCustomEditor__PlainTextEditor_LanguageChanged(TextCustomEditor__PlainTextEditor* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->languageChanged(param1_QString);
}

void TextCustomEditor__PlainTextEditor_Connect_LanguageChanged(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*, const char*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)(const QString&)>(&TextCustomEditor::PlainTextEditor::languageChanged),
                                               [self, slotFunc](const QString& param1) {
                                                   const auto param1_ret = param1;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray param1_b = param1_ret.toUtf8();
                                                   auto param1_str_len = param1_b.length();
                                                   const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                                   memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                                   ((char*)param1_str)[param1_str_len] = '\0';
                                                   const char* sigval1 = param1_str;
                                                   slotFunc(self, sigval1);
                                                   libqt_free(param1_str);
                                               });
}

void TextCustomEditor__PlainTextEditor_SpellCheckStatus(TextCustomEditor__PlainTextEditor* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->spellCheckStatus(param1_QString);
}

void TextCustomEditor__PlainTextEditor_Connect_SpellCheckStatus(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*, const char*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)(const QString&)>(&TextCustomEditor::PlainTextEditor::spellCheckStatus),
                                               [self, slotFunc](const QString& param1) {
                                                   const auto param1_ret = param1;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray param1_b = param1_ret.toUtf8();
                                                   auto param1_str_len = param1_b.length();
                                                   const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                                                   memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                                                   ((char*)param1_str)[param1_str_len] = '\0';
                                                   const char* sigval1 = param1_str;
                                                   slotFunc(self, sigval1);
                                                   libqt_free(param1_str);
                                               });
}

void TextCustomEditor__PlainTextEditor_Say(TextCustomEditor__PlainTextEditor* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextCustomEditor__PlainTextEditor_Connect_Say(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*, const char*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self,
                                               static_cast<void (TextCustomEditor::PlainTextEditor::*)(const QString&)>(&TextCustomEditor::PlainTextEditor::say),
                                               [self, slotFunc](const QString& text) {
                                                   const auto text_ret = text;
                                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                                   QByteArray text_b = text_ret.toUtf8();
                                                   auto text_str_len = text_b.length();
                                                   const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                                                   memcpy((void*)text_str, text_b.data(), text_str_len);
                                                   ((char*)text_str)[text_str_len] = '\0';
                                                   const char* sigval1 = text_str;
                                                   slotFunc(self, sigval1);
                                                   libqt_free(text_str);
                                               });
}

libqt_string TextCustomEditor__PlainTextEditor_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::PlainTextEditor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__PlainTextEditor_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::PlainTextEditor::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextEditor_SuperMetaObject(const TextCustomEditor__PlainTextEditor* self) {
    return (QMetaObject*)self->TextCustomEditor::PlainTextEditor::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetaObject(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditor_SuperMetacast(TextCustomEditor__PlainTextEditor* self, const char* param1) {
    return self->TextCustomEditor::PlainTextEditor::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetacast(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_metacast_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperMetacall(TextCustomEditor__PlainTextEditor* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::PlainTextEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetacall(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_metacall_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetReadOnly(TextCustomEditor__PlainTextEditor* self, bool readOnly) {
    self->TextCustomEditor::PlainTextEditor::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetReadOnly(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_setreadonly_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetReadOnly_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCreateHighlighter(TextCustomEditor__PlainTextEditor* self) {
    self->TextCustomEditor::PlainTextEditor::createHighlighter();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateHighlighter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_createhighlighter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry(TextCustomEditor__PlainTextEditor* self, QMenu* menu, QPoint* pos) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::addExtraMenuEntry(menu, *pos);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::addExtraMenuEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnAddExtraMenuEntry(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_addextramenuentry_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperContextMenuEvent(TextCustomEditor__PlainTextEditor* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnContextMenuEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperEvent(TextCustomEditor__PlainTextEditor* self, QEvent* ev) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::event(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_event_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Event_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperKeyPressEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnKeyPressEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperWheelEvent(TextCustomEditor__PlainTextEditor* self, QWheelEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnWheelEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_WheelEvent_Callback>(slot);
}

// Base class handler implementation
Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::createSpellCheckDecorator();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::createSpellCheckDecorator called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_createspellcheckdecorator_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperFocusInEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusInEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::updateHighLighter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::updateHighLighter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnUpdateHighLighter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_updatehighlighter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperClearDecorator(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::clearDecorator();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::clearDecorator called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnClearDecorator(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_cleardecorator_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ClearDecorator_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_LoadResource(TextCustomEditor__PlainTextEditor* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_SuperLoadResource(TextCustomEditor__PlainTextEditor* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextCustomEditor::PlainTextEditor::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnLoadResource(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_loadresource_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_InputMethodQuery(const TextCustomEditor__PlainTextEditor* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditor* self, int property) {
    return new QVariant(self->TextCustomEditor::PlainTextEditor::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInputMethodQuery(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_TimerEvent(TextCustomEditor__PlainTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperTimerEvent(TextCustomEditor__PlainTextEditor* self, QTimerEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnTimerEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_KeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ResizeEvent(TextCustomEditor__PlainTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperResizeEvent(TextCustomEditor__PlainTextEditor* self, QResizeEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnResizeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_PaintEvent(TextCustomEditor__PlainTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperPaintEvent(TextCustomEditor__PlainTextEditor* self, QPaintEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnPaintEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MousePressEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMousePressEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMousePressEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseMoveEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_FocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, bool next) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, bool next) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragEnterEvent(TextCustomEditor__PlainTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragEnterEvent(TextCustomEditor__PlainTextEditor* self, QDragEnterEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragEnterEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragLeaveEvent(TextCustomEditor__PlainTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditor* self, QDragLeaveEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragLeaveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragMoveEvent(TextCustomEditor__PlainTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragMoveEvent(TextCustomEditor__PlainTextEditor* self, QDragMoveEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DropEvent(TextCustomEditor__PlainTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDropEvent(TextCustomEditor__PlainTextEditor* self, QDropEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDropEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_FocusOutEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperFocusOutEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusOutEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ShowEvent(TextCustomEditor__PlainTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperShowEvent(TextCustomEditor__PlainTextEditor* self, QShowEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnShowEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_showevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ChangeEvent(TextCustomEditor__PlainTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperChangeEvent(TextCustomEditor__PlainTextEditor* self, QEvent* e) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnChangeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateMimeDataFromSelection(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_createmimedatafromselection_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_CanInsertFromMimeData(const TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCanInsertFromMimeData(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InsertFromMimeData(TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData(TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInsertFromMimeData(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_insertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InputMethodEvent(TextCustomEditor__PlainTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInputMethodEvent(TextCustomEditor__PlainTextEditor* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInputMethodEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ScrollContentsBy(TextCustomEditor__PlainTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperScrollContentsBy(TextCustomEditor__PlainTextEditor* self, int dx, int dy) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnScrollContentsBy(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_scrollcontentsby_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DoSetTextCursor(TextCustomEditor__PlainTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor(TextCustomEditor__PlainTextEditor* self, const QTextCursor* cursor) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDoSetTextCursor(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_dosettextcursor_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_MinimumSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditor::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMinimumSizeHint(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SizeHint(const TextCustomEditor__PlainTextEditor* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    return new QSize(self->TextCustomEditor::PlainTextEditor::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSizeHint(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetupViewport(TextCustomEditor__PlainTextEditor* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetupViewport(TextCustomEditor__PlainTextEditor* self, QWidget* viewport) {
    self->TextCustomEditor::PlainTextEditor::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetupViewport(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_setupviewport_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_EventFilter(TextCustomEditor__PlainTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperEventFilter(TextCustomEditor__PlainTextEditor* self, QObject* param1, QEvent* param2) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEventFilter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_ViewportEvent(TextCustomEditor__PlainTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperViewportEvent(TextCustomEditor__PlainTextEditor* self, QEvent* param1) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnViewportEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_viewportevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_ViewportSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    return new QSize((self->*&VirtualTextCustomEditorPlainTextEditor::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperViewportSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QSize(vtextcustomeditorplaintexteditor->viewportSizeHint());
    qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnViewportSizeHint(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_viewportsizehint_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InitStyleOption(const TextCustomEditor__PlainTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInitStyleOption(const TextCustomEditor__PlainTextEditor* self, QStyleOptionFrame* option) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInitStyleOption(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_initstyleoption_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_DevType(const TextCustomEditor__PlainTextEditor* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperDevType(const TextCustomEditor__PlainTextEditor* self) {
    return self->TextCustomEditor::PlainTextEditor::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDevType(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_devtype_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetVisible(TextCustomEditor__PlainTextEditor* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetVisible(TextCustomEditor__PlainTextEditor* self, bool visible) {
    self->TextCustomEditor::PlainTextEditor::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetVisible(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_HeightForWidth(const TextCustomEditor__PlainTextEditor* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperHeightForWidth(const TextCustomEditor__PlainTextEditor* self, int param1) {
    return self->TextCustomEditor::PlainTextEditor::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHeightForWidth(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_HasHeightForWidth(const TextCustomEditor__PlainTextEditor* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditor* self) {
    return self->TextCustomEditor::PlainTextEditor::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHasHeightForWidth(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditor_PaintEngine(const TextCustomEditor__PlainTextEditor* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditor_SuperPaintEngine(const TextCustomEditor__PlainTextEditor* self) {
    return self->TextCustomEditor::PlainTextEditor::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnPaintEngine(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_EnterEvent(TextCustomEditor__PlainTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperEnterEvent(TextCustomEditor__PlainTextEditor* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEnterEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_LeaveEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperLeaveEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnLeaveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MoveEvent(TextCustomEditor__PlainTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMoveEvent(TextCustomEditor__PlainTextEditor* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_CloseEvent(TextCustomEditor__PlainTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCloseEvent(TextCustomEditor__PlainTextEditor* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCloseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_TabletEvent(TextCustomEditor__PlainTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperTabletEvent(TextCustomEditor__PlainTextEditor* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnTabletEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ActionEvent(TextCustomEditor__PlainTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperActionEvent(TextCustomEditor__PlainTextEditor* self, QActionEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnActionEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_HideEvent(TextCustomEditor__PlainTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperHideEvent(TextCustomEditor__PlainTextEditor* self, QHideEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHideEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_NativeEvent(TextCustomEditor__PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperNativeEvent(TextCustomEditor__PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnNativeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_Metric(const TextCustomEditor__PlainTextEditor* self, int param1) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperMetric(const TextCustomEditor__PlainTextEditor* self, int param1) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetric(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_metric_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InitPainter(const TextCustomEditor__PlainTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInitPainter(const TextCustomEditor__PlainTextEditor* self, QPainter* painter) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInitPainter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditor_Redirected(const TextCustomEditor__PlainTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditor_SuperRedirected(const TextCustomEditor__PlainTextEditor* self, QPoint* offset) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnRedirected(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_redirected_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditor_SharedPainter(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor) {
        return vtextcustomeditorplaintexteditor->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditor_SuperSharedPainter(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSharedPainter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ChildEvent(TextCustomEditor__PlainTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperChildEvent(TextCustomEditor__PlainTextEditor* self, QChildEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnChildEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_childevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_CustomEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCustomEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCustomEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_customevent_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ConnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperConnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnConnectNotify(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DisconnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor) {
        vtextcustomeditorplaintexteditor->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDisconnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->TextCustomEditor::PlainTextEditor::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::PlainTextEditor::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDisconnectNotify(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self))
        vtextcustomeditorplaintexteditor->textcustomeditor__plaintexteditor_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditor_OverrideShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::overrideShortcut(event);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::overrideShortcut called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditor_HandleShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::handleShortcut(event);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::handleShortcut called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_SetHighlighter(TextCustomEditor__PlainTextEditor* self, Sonnet__Highlighter* _highLighter) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::setHighlighter(_highLighter);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::setHighlighter called without a directly constructed type");
}

// Derived class handler implementation
QTextBlock* TextCustomEditor__PlainTextEditor_FirstVisibleBlock(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QTextBlock(vtextcustomeditorplaintexteditor->firstVisibleBlock());
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::firstVisibleBlock called without a directly constructed type");
}

// Derived class handler implementation
QPointF* TextCustomEditor__PlainTextEditor_ContentOffset(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QPointF(vtextcustomeditorplaintexteditor->contentOffset());
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::contentOffset called without a directly constructed type");
}

// Derived class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingRect(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingRect(*block));
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::blockBoundingRect called without a directly constructed type");
}

// Derived class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingGeometry(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingGeometry(*block));
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::blockBoundingGeometry called without a directly constructed type");
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextCustomEditor__PlainTextEditor_GetPaintContext(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QAbstractTextDocumentLayout::PaintContext(vtextcustomeditorplaintexteditor->getPaintContext());
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::getPaintContext called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_ZoomInF(TextCustomEditor__PlainTextEditor* self, float range) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_SetViewportMargins(TextCustomEditor__PlainTextEditor* self, int left, int top, int right, int bottom) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextCustomEditor__PlainTextEditor_ViewportMargins(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self)))
        return new QMargins(vtextcustomeditorplaintexteditor->viewportMargins());
    qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_DrawFrame(TextCustomEditor__PlainTextEditor* self, QPainter* param1) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_UpdateMicroFocus(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_Create(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__PlainTextEditor_Destroy(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditor_FocusNextChild(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditor_FocusPreviousChild(TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self)) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__PlainTextEditor_Sender(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditor_SenderSignalIndex(const TextCustomEditor__PlainTextEditor* self) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__PlainTextEditor_Receivers(const TextCustomEditor__PlainTextEditor* self, const char* signal) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__PlainTextEditor_IsSignalConnected(const TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__PlainTextEditor_GetDecodedMetricF(const TextCustomEditor__PlainTextEditor* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self))) {
        return vtextcustomeditorplaintexteditor->VirtualTextCustomEditorPlainTextEditor::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::PlainTextEditor::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__PlainTextEditor_Delete(TextCustomEditor__PlainTextEditor* self) {
    delete self;
}
