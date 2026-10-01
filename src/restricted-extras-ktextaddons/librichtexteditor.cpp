#include <QAbstractScrollArea>
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
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__Highlighter
#define WORKAROUND_INNER_CLASS_DEFINITION_Sonnet__SpellCheckDecorator
#define WORKAROUND_INNER_CLASS_DEFINITION_TextCustomEditor__RichTextEditor
#include <richtexteditor.h>
#include "librichtexteditor.h"
#include "librichtexteditor.hxx"

TextCustomEditor__RichTextEditor* TextCustomEditor__RichTextEditor_new(QWidget* parent) {
    return new VirtualTextCustomEditorRichTextEditor(parent);
}

TextCustomEditor__RichTextEditor* TextCustomEditor__RichTextEditor_new2() {
    return new VirtualTextCustomEditorRichTextEditor();
}

QMetaObject* TextCustomEditor__RichTextEditor_MetaObject(const TextCustomEditor__RichTextEditor* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextCustomEditor__RichTextEditor_Metacast(TextCustomEditor__RichTextEditor* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextCustomEditor__RichTextEditor_Metacall(TextCustomEditor__RichTextEditor* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextCustomEditor__RichTextEditor_Tr(const char* s) {
    auto _ret = TextCustomEditor::RichTextEditor::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextCustomEditor__RichTextEditor_SetSearchSupport(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setSearchSupport(b);
}

bool TextCustomEditor__RichTextEditor_SearchSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->searchSupport();
}

bool TextCustomEditor__RichTextEditor_SpellCheckingSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->spellCheckingSupport();
}

void TextCustomEditor__RichTextEditor_SetSpellCheckingSupport(TextCustomEditor__RichTextEditor* self, bool check) {
    self->setSpellCheckingSupport(check);
}

void TextCustomEditor__RichTextEditor_SetSpellCheckingConfigFileName(TextCustomEditor__RichTextEditor* self, const libqt_string _fileName) {
    QString _fileName_QString = QString::fromUtf8(_fileName.data, _fileName.len);
    self->setSpellCheckingConfigFileName(_fileName_QString);
}

bool TextCustomEditor__RichTextEditor_CheckSpellingEnabled(const TextCustomEditor__RichTextEditor* self) {
    return self->checkSpellingEnabled();
}

void TextCustomEditor__RichTextEditor_SetCheckSpellingEnabled(TextCustomEditor__RichTextEditor* self, bool check) {
    self->setCheckSpellingEnabled(check);
}

void TextCustomEditor__RichTextEditor_SetSpellCheckingLanguage(TextCustomEditor__RichTextEditor* self, const libqt_string _language) {
    QString _language_QString = QString::fromUtf8(_language.data, _language.len);
    self->setSpellCheckingLanguage(_language_QString);
}

libqt_string TextCustomEditor__RichTextEditor_SpellCheckingLanguage(const TextCustomEditor__RichTextEditor* self) {
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

void TextCustomEditor__RichTextEditor_SetReadOnly(TextCustomEditor__RichTextEditor* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

void TextCustomEditor__RichTextEditor_CreateHighlighter(TextCustomEditor__RichTextEditor* self) {
    self->createHighlighter();
}

bool TextCustomEditor__RichTextEditor_TextToSpeechSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->textToSpeechSupport();
}

void TextCustomEditor__RichTextEditor_SetTextToSpeechSupport(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setTextToSpeechSupport(b);
}

Sonnet__Highlighter* TextCustomEditor__RichTextEditor_Highlighter(const TextCustomEditor__RichTextEditor* self) {
    return self->highlighter();
}

bool TextCustomEditor__RichTextEditor_ActivateLanguageMenu(const TextCustomEditor__RichTextEditor* self) {
    return self->activateLanguageMenu();
}

void TextCustomEditor__RichTextEditor_SetActivateLanguageMenu(TextCustomEditor__RichTextEditor* self, bool activate) {
    self->setActivateLanguageMenu(activate);
}

void TextCustomEditor__RichTextEditor_SetAllowTabSupport(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setAllowTabSupport(b);
}

bool TextCustomEditor__RichTextEditor_AllowTabSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->allowTabSupport();
}

void TextCustomEditor__RichTextEditor_SetShowAutoCorrectButton(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setShowAutoCorrectButton(b);
}

bool TextCustomEditor__RichTextEditor_ShowAutoCorrectButton(const TextCustomEditor__RichTextEditor* self) {
    return self->showAutoCorrectButton();
}

void TextCustomEditor__RichTextEditor_ForceSpellChecking(TextCustomEditor__RichTextEditor* self) {
    self->forceSpellChecking();
}

libqt_string TextCustomEditor__RichTextEditor_SpellCheckingConfigFileName(const TextCustomEditor__RichTextEditor* self) {
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

void TextCustomEditor__RichTextEditor_SetWebShortcutSupport(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setWebShortcutSupport(b);
}

bool TextCustomEditor__RichTextEditor_WebShortcutSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->webShortcutSupport();
}

void TextCustomEditor__RichTextEditor_AddIgnoreWords(TextCustomEditor__RichTextEditor* self, const libqt_list /* of libqt_string */ lst) {
    QList<QString> lst_QList;
    lst_QList.reserve(lst.len);
    libqt_string* lst_arr = static_cast<libqt_string*>(lst.data);
    for (size_t i = 0; i < lst.len; ++i) {
        QString lst_arr_i_QString = QString::fromUtf8(lst_arr[i].data, lst_arr[i].len);
        lst_QList.push_back(lst_arr_i_QString);
    }
    self->addIgnoreWords(lst_QList);
}

void TextCustomEditor__RichTextEditor_ForceAutoCorrection(TextCustomEditor__RichTextEditor* self, bool selectedText) {
    self->forceAutoCorrection(selectedText);
}

void TextCustomEditor__RichTextEditor_SetDefaultFontSize(TextCustomEditor__RichTextEditor* self, int val) {
    self->setDefaultFontSize(static_cast<int>(val));
}

int TextCustomEditor__RichTextEditor_ZoomFactor(const TextCustomEditor__RichTextEditor* self) {
    return self->zoomFactor();
}

void TextCustomEditor__RichTextEditor_SetEmojiSupport(TextCustomEditor__RichTextEditor* self, bool b) {
    self->setEmojiSupport(b);
}

bool TextCustomEditor__RichTextEditor_EmojiSupport(const TextCustomEditor__RichTextEditor* self) {
    return self->emojiSupport();
}

void TextCustomEditor__RichTextEditor_SlotDisplayMessageIndicator(TextCustomEditor__RichTextEditor* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->slotDisplayMessageIndicator(message_QString);
}

void TextCustomEditor__RichTextEditor_SlotSpeakText(TextCustomEditor__RichTextEditor* self) {
    self->slotSpeakText();
}

void TextCustomEditor__RichTextEditor_SlotCheckSpelling(TextCustomEditor__RichTextEditor* self) {
    self->slotCheckSpelling();
}

void TextCustomEditor__RichTextEditor_SlotZoomReset(TextCustomEditor__RichTextEditor* self) {
    self->slotZoomReset();
}

void TextCustomEditor__RichTextEditor_AddExtraMenuEntry(TextCustomEditor__RichTextEditor* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__RichTextEditor_ContextMenuEvent(TextCustomEditor__RichTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->contextMenuEvent(event);
    }
}

void TextCustomEditor__RichTextEditor_FocusInEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->focusInEvent(event);
    }
}

bool TextCustomEditor__RichTextEditor_Event(TextCustomEditor__RichTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        return vtextcustomeditor__richtexteditor->event(ev);
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditor::event called without a directly constructed type");
}

void TextCustomEditor__RichTextEditor_KeyPressEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->keyPressEvent(event);
    }
}

void TextCustomEditor__RichTextEditor_WheelEvent(TextCustomEditor__RichTextEditor* self, QWheelEvent* e) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->wheelEvent(e);
    }
}

Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        return vtextcustomeditor__richtexteditor->createSpellCheckDecorator();
    }
    qFatal("Error: Protected method TextCustomEditor::RichTextEditor::createSpellCheckDecorator called without a directly constructed type");
}

void TextCustomEditor__RichTextEditor_UpdateHighLighter(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->updateHighLighter();
    }
}

void TextCustomEditor__RichTextEditor_ClearDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor) {
        vtextcustomeditor__richtexteditor->clearDecorator();
    }
}

void TextCustomEditor__RichTextEditor_Say(TextCustomEditor__RichTextEditor* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextCustomEditor__RichTextEditor_Connect_Say(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, const char*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)(const QString&)>(&TextCustomEditor::RichTextEditor::say),
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

void TextCustomEditor__RichTextEditor_FindText(TextCustomEditor__RichTextEditor* self) {
    self->findText();
}

void TextCustomEditor__RichTextEditor_Connect_FindText(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)()>(&TextCustomEditor::RichTextEditor::findText),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

void TextCustomEditor__RichTextEditor_ReplaceText(TextCustomEditor__RichTextEditor* self) {
    self->replaceText();
}

void TextCustomEditor__RichTextEditor_Connect_ReplaceText(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)()>(&TextCustomEditor::RichTextEditor::replaceText),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

void TextCustomEditor__RichTextEditor_SpellCheckerAutoCorrect(TextCustomEditor__RichTextEditor* self, const libqt_string currentWord, const libqt_string autoCorrectWord) {
    QString currentWord_QString = QString::fromUtf8(currentWord.data, currentWord.len);
    QString autoCorrectWord_QString = QString::fromUtf8(autoCorrectWord.data, autoCorrectWord.len);
    self->spellCheckerAutoCorrect(currentWord_QString, autoCorrectWord_QString);
}

void TextCustomEditor__RichTextEditor_Connect_SpellCheckerAutoCorrect(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, const char*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, const char*, const char*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)(const QString&, const QString&)>(&TextCustomEditor::RichTextEditor::spellCheckerAutoCorrect),
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

void TextCustomEditor__RichTextEditor_CheckSpellingChanged(TextCustomEditor__RichTextEditor* self, bool param1) {
    self->checkSpellingChanged(param1);
}

void TextCustomEditor__RichTextEditor_Connect_CheckSpellingChanged(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, bool) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, bool)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)(bool)>(&TextCustomEditor::RichTextEditor::checkSpellingChanged),
                                              [self, slotFunc](bool param1) {
                                                  bool sigval1 = param1;
                                                  slotFunc(self, sigval1);
                                              });
}

void TextCustomEditor__RichTextEditor_LanguageChanged(TextCustomEditor__RichTextEditor* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->languageChanged(param1_QString);
}

void TextCustomEditor__RichTextEditor_Connect_LanguageChanged(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, const char*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)(const QString&)>(&TextCustomEditor::RichTextEditor::languageChanged),
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

void TextCustomEditor__RichTextEditor_SpellCheckStatus(TextCustomEditor__RichTextEditor* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->spellCheckStatus(param1_QString);
}

void TextCustomEditor__RichTextEditor_Connect_SpellCheckStatus(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, const char*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)(const QString&)>(&TextCustomEditor::RichTextEditor::spellCheckStatus),
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

void TextCustomEditor__RichTextEditor_SpellCheckingFinished(TextCustomEditor__RichTextEditor* self) {
    self->spellCheckingFinished();
}

void TextCustomEditor__RichTextEditor_Connect_SpellCheckingFinished(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)()>(&TextCustomEditor::RichTextEditor::spellCheckingFinished),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

void TextCustomEditor__RichTextEditor_SpellCheckingCanceled(TextCustomEditor__RichTextEditor* self) {
    self->spellCheckingCanceled();
}

void TextCustomEditor__RichTextEditor_Connect_SpellCheckingCanceled(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self,
                                              static_cast<void (TextCustomEditor::RichTextEditor::*)()>(&TextCustomEditor::RichTextEditor::spellCheckingCanceled),
                                              [self, slotFunc]() {
                                                  slotFunc(self);
                                              });
}

libqt_string TextCustomEditor__RichTextEditor_Tr2(const char* s, const char* c) {
    auto _ret = TextCustomEditor::RichTextEditor::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextCustomEditor__RichTextEditor_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextCustomEditor::RichTextEditor::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextCustomEditor__RichTextEditor_SuperMetaObject(const TextCustomEditor__RichTextEditor* self) {
    return (QMetaObject*)self->TextCustomEditor::RichTextEditor::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetaObject(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_metaobject_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditor_SuperMetacast(TextCustomEditor__RichTextEditor* self, const char* param1) {
    return self->TextCustomEditor::RichTextEditor::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetacast(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_metacast_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperMetacall(TextCustomEditor__RichTextEditor* self, int param1, int param2, void** param3) {
    return self->TextCustomEditor::RichTextEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetacall(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_metacall_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metacall_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetReadOnly(TextCustomEditor__RichTextEditor* self, bool readOnly) {
    self->TextCustomEditor::RichTextEditor::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetReadOnly(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_setreadonly_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetReadOnly_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCreateHighlighter(TextCustomEditor__RichTextEditor* self) {
    self->TextCustomEditor::RichTextEditor::createHighlighter();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateHighlighter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_createhighlighter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateHighlighter_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperForceAutoCorrection(TextCustomEditor__RichTextEditor* self, bool selectedText) {
    self->TextCustomEditor::RichTextEditor::forceAutoCorrection(selectedText);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnForceAutoCorrection(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_forceautocorrection_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperAddExtraMenuEntry(TextCustomEditor__RichTextEditor* self, QMenu* menu, QPoint* pos) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::addExtraMenuEntry(menu, *pos);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::addExtraMenuEntry called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnAddExtraMenuEntry(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_addextramenuentry_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperContextMenuEvent(TextCustomEditor__RichTextEditor* self, QContextMenuEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnContextMenuEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_contextmenuevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperFocusInEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusInEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_focusinevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperEvent(TextCustomEditor__RichTextEditor* self, QEvent* ev) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::event(ev);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_event_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Event_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperKeyPressEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnKeyPressEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_keypressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperWheelEvent(TextCustomEditor__RichTextEditor* self, QWheelEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnWheelEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_wheelevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_WheelEvent_Callback>(slot);
}

// Base class handler implementation
Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::createSpellCheckDecorator();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::createSpellCheckDecorator called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_createspellcheckdecorator_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperUpdateHighLighter(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::updateHighLighter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::updateHighLighter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnUpdateHighLighter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_updatehighlighter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback>(slot);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperClearDecorator(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::clearDecorator();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::clearDecorator called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnClearDecorator(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_cleardecorator_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ClearDecorator_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditor_LoadResource(TextCustomEditor__RichTextEditor* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditor_SuperLoadResource(TextCustomEditor__RichTextEditor* self, int typeVal, const QUrl* name) {
    return new QVariant(self->TextCustomEditor::RichTextEditor::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnLoadResource(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_loadresource_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditor_InputMethodQuery(const TextCustomEditor__RichTextEditor* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditor_SuperInputMethodQuery(const TextCustomEditor__RichTextEditor* self, int property) {
    return new QVariant(self->TextCustomEditor::RichTextEditor::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInputMethodQuery(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_inputmethodquery_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_TimerEvent(TextCustomEditor__RichTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperTimerEvent(TextCustomEditor__RichTextEditor* self, QTimerEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnTimerEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_timerevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_KeyReleaseEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnKeyReleaseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_keyreleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ResizeEvent(TextCustomEditor__RichTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperResizeEvent(TextCustomEditor__RichTextEditor* self, QResizeEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnResizeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_resizeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_PaintEvent(TextCustomEditor__RichTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperPaintEvent(TextCustomEditor__RichTextEditor* self, QPaintEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnPaintEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_paintevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MousePressEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMousePressEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMousePressEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_mousepressevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseMoveEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseMoveEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_mousemoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseReleaseEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseReleaseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_mousereleaseevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_FocusNextPrevChild(TextCustomEditor__RichTextEditor* self, bool next) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditor* self, bool next) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusNextPrevChild(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_focusnextprevchild_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragEnterEvent(TextCustomEditor__RichTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragEnterEvent(TextCustomEditor__RichTextEditor* self, QDragEnterEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragEnterEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_dragenterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragLeaveEvent(TextCustomEditor__RichTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragLeaveEvent(TextCustomEditor__RichTextEditor* self, QDragLeaveEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragLeaveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_dragleaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragMoveEvent(TextCustomEditor__RichTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragMoveEvent(TextCustomEditor__RichTextEditor* self, QDragMoveEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_dragmoveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DropEvent(TextCustomEditor__RichTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDropEvent(TextCustomEditor__RichTextEditor* self, QDropEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDropEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_dropevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_FocusOutEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperFocusOutEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusOutEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_focusoutevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ShowEvent(TextCustomEditor__RichTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperShowEvent(TextCustomEditor__RichTextEditor* self, QShowEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnShowEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_showevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ChangeEvent(TextCustomEditor__RichTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperChangeEvent(TextCustomEditor__RichTextEditor* self, QEvent* e) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnChangeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_changeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__RichTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateMimeDataFromSelection(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_createmimedatafromselection_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_CanInsertFromMimeData(const TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCanInsertFromMimeData(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_caninsertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InsertFromMimeData(TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInsertFromMimeData(TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInsertFromMimeData(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_insertfrommimedata_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InputMethodEvent(TextCustomEditor__RichTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInputMethodEvent(TextCustomEditor__RichTextEditor* self, QInputMethodEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInputMethodEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_inputmethodevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ScrollContentsBy(TextCustomEditor__RichTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperScrollContentsBy(TextCustomEditor__RichTextEditor* self, int dx, int dy) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnScrollContentsBy(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_scrollcontentsby_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DoSetTextCursor(TextCustomEditor__RichTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDoSetTextCursor(TextCustomEditor__RichTextEditor* self, const QTextCursor* cursor) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDoSetTextCursor(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_dosettextcursor_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_MinimumSizeHint(const TextCustomEditor__RichTextEditor* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditor* self) {
    return new QSize(self->TextCustomEditor::RichTextEditor::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMinimumSizeHint(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_minimumsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_SizeHint(const TextCustomEditor__RichTextEditor* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperSizeHint(const TextCustomEditor__RichTextEditor* self) {
    return new QSize(self->TextCustomEditor::RichTextEditor::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSizeHint(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_sizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetupViewport(TextCustomEditor__RichTextEditor* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetupViewport(TextCustomEditor__RichTextEditor* self, QWidget* viewport) {
    self->TextCustomEditor::RichTextEditor::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetupViewport(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_setupviewport_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_EventFilter(TextCustomEditor__RichTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperEventFilter(TextCustomEditor__RichTextEditor* self, QObject* param1, QEvent* param2) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEventFilter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_eventfilter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_ViewportEvent(TextCustomEditor__RichTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperViewportEvent(TextCustomEditor__RichTextEditor* self, QEvent* param1) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnViewportEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_viewportevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_ViewportSizeHint(const TextCustomEditor__RichTextEditor* self) {
    return new QSize((self->*&VirtualTextCustomEditorRichTextEditor::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperViewportSizeHint(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        return new QSize(vtextcustomeditorrichtexteditor->viewportSizeHint());
    qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnViewportSizeHint(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_viewportsizehint_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InitStyleOption(const TextCustomEditor__RichTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInitStyleOption(const TextCustomEditor__RichTextEditor* self, QStyleOptionFrame* option) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInitStyleOption(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_initstyleoption_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_DevType(const TextCustomEditor__RichTextEditor* self) {
    return self->devType();
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperDevType(const TextCustomEditor__RichTextEditor* self) {
    return self->TextCustomEditor::RichTextEditor::devType();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDevType(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_devtype_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DevType_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetVisible(TextCustomEditor__RichTextEditor* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetVisible(TextCustomEditor__RichTextEditor* self, bool visible) {
    self->TextCustomEditor::RichTextEditor::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetVisible(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_setvisible_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_HeightForWidth(const TextCustomEditor__RichTextEditor* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperHeightForWidth(const TextCustomEditor__RichTextEditor* self, int param1) {
    return self->TextCustomEditor::RichTextEditor::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHeightForWidth(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_heightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_HasHeightForWidth(const TextCustomEditor__RichTextEditor* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditor* self) {
    return self->TextCustomEditor::RichTextEditor::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHasHeightForWidth(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_hasheightforwidth_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditor_PaintEngine(const TextCustomEditor__RichTextEditor* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditor_SuperPaintEngine(const TextCustomEditor__RichTextEditor* self) {
    return self->TextCustomEditor::RichTextEditor::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnPaintEngine(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_paintengine_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_EnterEvent(TextCustomEditor__RichTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperEnterEvent(TextCustomEditor__RichTextEditor* self, QEnterEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEnterEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_enterevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_LeaveEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperLeaveEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnLeaveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_leaveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MoveEvent(TextCustomEditor__RichTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMoveEvent(TextCustomEditor__RichTextEditor* self, QMoveEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_moveevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_CloseEvent(TextCustomEditor__RichTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCloseEvent(TextCustomEditor__RichTextEditor* self, QCloseEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCloseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_closeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_TabletEvent(TextCustomEditor__RichTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperTabletEvent(TextCustomEditor__RichTextEditor* self, QTabletEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnTabletEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_tabletevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ActionEvent(TextCustomEditor__RichTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperActionEvent(TextCustomEditor__RichTextEditor* self, QActionEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnActionEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_actionevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_HideEvent(TextCustomEditor__RichTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperHideEvent(TextCustomEditor__RichTextEditor* self, QHideEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHideEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_hideevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_NativeEvent(TextCustomEditor__RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperNativeEvent(TextCustomEditor__RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnNativeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_nativeevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_Metric(const TextCustomEditor__RichTextEditor* self, int param1) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperMetric(const TextCustomEditor__RichTextEditor* self, int param1) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetric(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_metric_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InitPainter(const TextCustomEditor__RichTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInitPainter(const TextCustomEditor__RichTextEditor* self, QPainter* painter) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInitPainter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_initpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditor_Redirected(const TextCustomEditor__RichTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditor_SuperRedirected(const TextCustomEditor__RichTextEditor* self, QPoint* offset) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnRedirected(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_redirected_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditor_SharedPainter(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor) {
        return vtextcustomeditorrichtexteditor->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditor_SuperSharedPainter(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSharedPainter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_sharedpainter_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ChildEvent(TextCustomEditor__RichTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperChildEvent(TextCustomEditor__RichTextEditor* self, QChildEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnChildEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_childevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_CustomEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCustomEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCustomEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_customevent_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ConnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperConnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnConnectNotify(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_connectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DisconnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor) {
        vtextcustomeditorrichtexteditor->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDisconnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->TextCustomEditor::RichTextEditor::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextCustomEditor::RichTextEditor::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDisconnectNotify(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self))
        vtextcustomeditorrichtexteditor->textcustomeditor__richtexteditor_disconnectnotify_callback = reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QMenu* TextCustomEditor__RichTextEditor_MousePopupMenu(TextCustomEditor__RichTextEditor* self, QPoint* pos) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::mousePopupMenu(*pos);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::mousePopupMenu called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_SetHighlighter(TextCustomEditor__RichTextEditor* self, Sonnet__Highlighter* _highLighter) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::setHighlighter(_highLighter);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::setHighlighter called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_ZoomInF(TextCustomEditor__RichTextEditor* self, float range) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_SetViewportMargins(TextCustomEditor__RichTextEditor* self, int left, int top, int right, int bottom) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* TextCustomEditor__RichTextEditor_ViewportMargins(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self)))
        return new QMargins(vtextcustomeditorrichtexteditor->viewportMargins());
    qFatal("Error: Protected method TextCustomEditor::RichTextEditor::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_DrawFrame(TextCustomEditor__RichTextEditor* self, QPainter* param1) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::drawFrame(param1);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_UpdateMicroFocus(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_Create(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::create();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextCustomEditor__RichTextEditor_Destroy(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::destroy();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditor_FocusNextChild(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::focusNextChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditor_FocusPreviousChild(TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self)) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextCustomEditor__RichTextEditor_Sender(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::sender();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditor_SenderSignalIndex(const TextCustomEditor__RichTextEditor* self) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextCustomEditor__RichTextEditor_Receivers(const TextCustomEditor__RichTextEditor* self, const char* signal) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::receivers(signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextCustomEditor__RichTextEditor_IsSignalConnected(const TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextCustomEditor__RichTextEditor_GetDecodedMetricF(const TextCustomEditor__RichTextEditor* self, int metricA, int metricB) {
    if (auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self))) {
        return vtextcustomeditorrichtexteditor->VirtualTextCustomEditorRichTextEditor::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextCustomEditor::RichTextEditor::getDecodedMetricF called without a directly constructed type");
}

void TextCustomEditor__RichTextEditor_Delete(TextCustomEditor__RichTextEditor* self) {
    delete self;
}
