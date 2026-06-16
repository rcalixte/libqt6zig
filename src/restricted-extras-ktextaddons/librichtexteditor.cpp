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
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__RichTextEditor_ContextMenuEvent(TextCustomEditor__RichTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->contextMenuEvent(event);
    }
}

void TextCustomEditor__RichTextEditor_FocusInEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->focusInEvent(event);
    }
}

bool TextCustomEditor__RichTextEditor_Event(TextCustomEditor__RichTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditor__richtexteditor->event(ev);
    }
    return {};
}

void TextCustomEditor__RichTextEditor_KeyPressEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->keyPressEvent(event);
    }
}

void TextCustomEditor__RichTextEditor_WheelEvent(TextCustomEditor__RichTextEditor* self, QWheelEvent* e) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->wheelEvent(e);
    }
}

Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditor__richtexteditor->createSpellCheckDecorator();
    }
    return {};
}

void TextCustomEditor__RichTextEditor_UpdateHighLighter(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->updateHighLighter();
    }
}

void TextCustomEditor__RichTextEditor_ClearDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditor__richtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditor__richtexteditor && vtextcustomeditor__richtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditor__richtexteditor->clearDecorator();
    }
}

void TextCustomEditor__RichTextEditor_Say(TextCustomEditor__RichTextEditor* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextCustomEditor__RichTextEditor_Connect_Say(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*, const char*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*, const char*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::say, [self, slotFunc](const QString& text) {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::findText, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextCustomEditor__RichTextEditor_ReplaceText(TextCustomEditor__RichTextEditor* self) {
    self->replaceText();
}

void TextCustomEditor__RichTextEditor_Connect_ReplaceText(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::replaceText, [self, slotFunc]() {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::spellCheckerAutoCorrect, [self, slotFunc](const QString& currentWord, const QString& autoCorrectWord) {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::checkSpellingChanged, [self, slotFunc](bool param1) {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::languageChanged, [self, slotFunc](const QString& param1) {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::spellCheckStatus, [self, slotFunc](const QString& param1) {
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
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::spellCheckingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextCustomEditor__RichTextEditor_SpellCheckingCanceled(TextCustomEditor__RichTextEditor* self) {
    self->spellCheckingCanceled();
}

void TextCustomEditor__RichTextEditor_Connect_SpellCheckingCanceled(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__RichTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__RichTextEditor*)>(slot);
    TextCustomEditor::RichTextEditor::connect(self, &TextCustomEditor::RichTextEditor::spellCheckingCanceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

// Base class handler implementation
QMetaObject* TextCustomEditor__RichTextEditor_SuperMetaObject(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorrichtexteditor->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::RichTextEditor::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetaObject(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__RichTextEditor_SuperMetacast(TextCustomEditor__RichTextEditor* self, const char* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metacast_IsBase(true);
        return vtextcustomeditorrichtexteditor->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::RichTextEditor::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetacast(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperMetacall(TextCustomEditor__RichTextEditor* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metacall_IsBase(true);
        return vtextcustomeditorrichtexteditor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::RichTextEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetacall(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetReadOnly(TextCustomEditor__RichTextEditor* self, bool readOnly) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetReadOnly_IsBase(true);
        vtextcustomeditorrichtexteditor->setReadOnly(readOnly);
    } else {
        self->TextCustomEditor::RichTextEditor::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetReadOnly(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCreateHighlighter(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateHighlighter_IsBase(true);
        vtextcustomeditorrichtexteditor->createHighlighter();
    } else {
        self->TextCustomEditor::RichTextEditor::createHighlighter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateHighlighter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateHighlighter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateHighlighter_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperForceAutoCorrection(TextCustomEditor__RichTextEditor* self, bool selectedText) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ForceAutoCorrection_IsBase(true);
        vtextcustomeditorrichtexteditor->forceAutoCorrection(selectedText);
    } else {
        self->TextCustomEditor::RichTextEditor::forceAutoCorrection(selectedText);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnForceAutoCorrection(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ForceAutoCorrection_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperAddExtraMenuEntry(TextCustomEditor__RichTextEditor* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_AddExtraMenuEntry_IsBase(true);
        vtextcustomeditorrichtexteditor->addExtraMenuEntry(menu, *pos);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->addExtraMenuEntry(menu, *pos);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnAddExtraMenuEntry(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_AddExtraMenuEntry_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperContextMenuEvent(TextCustomEditor__RichTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ContextMenuEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnContextMenuEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperFocusInEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusInEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusInEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperEvent(TextCustomEditor__RichTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Event_IsBase(true);
        return vtextcustomeditorrichtexteditor->event(ev);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Event_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Event_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperKeyPressEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_KeyPressEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnKeyPressEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperWheelEvent(TextCustomEditor__RichTextEditor* self, QWheelEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_WheelEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->wheelEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnWheelEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_WheelEvent_Callback>(slot));
    }
}

// Base class handler implementation
Sonnet__SpellCheckDecorator* TextCustomEditor__RichTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_IsBase(true);
        return vtextcustomeditorrichtexteditor->createSpellCheckDecorator();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->createSpellCheckDecorator();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateSpellCheckDecorator(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateSpellCheckDecorator_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperUpdateHighLighter(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_UpdateHighLighter_IsBase(true);
        vtextcustomeditorrichtexteditor->updateHighLighter();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->updateHighLighter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnUpdateHighLighter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_UpdateHighLighter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_UpdateHighLighter_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperClearDecorator(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ClearDecorator_IsBase(true);
        vtextcustomeditorrichtexteditor->clearDecorator();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->clearDecorator();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnClearDecorator(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ClearDecorator_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ClearDecorator_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditor_LoadResource(TextCustomEditor__RichTextEditor* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QVariant(vtextcustomeditorrichtexteditor->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditor*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditor_SuperLoadResource(TextCustomEditor__RichTextEditor* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_LoadResource_IsBase(true);
        return new QVariant(vtextcustomeditorrichtexteditor->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditor*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnLoadResource(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_LoadResource_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__RichTextEditor_InputMethodQuery(const TextCustomEditor__RichTextEditor* self, int property) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QVariant(vtextcustomeditorrichtexteditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__RichTextEditor_SuperInputMethodQuery(const TextCustomEditor__RichTextEditor* self, int property) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorrichtexteditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorRichTextEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInputMethodQuery(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_TimerEvent(TextCustomEditor__RichTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperTimerEvent(TextCustomEditor__RichTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_TimerEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnTimerEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_KeyReleaseEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperKeyReleaseEvent(TextCustomEditor__RichTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnKeyReleaseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ResizeEvent(TextCustomEditor__RichTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperResizeEvent(TextCustomEditor__RichTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ResizeEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnResizeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_PaintEvent(TextCustomEditor__RichTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperPaintEvent(TextCustomEditor__RichTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_PaintEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnPaintEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MousePressEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->mousePressEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMousePressEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MousePressEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->mousePressEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMousePressEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseMoveEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->mouseMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseMoveEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->mouseMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseReleaseEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->mouseReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseReleaseEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->mouseReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseReleaseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMouseDoubleClickEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_FocusNextPrevChild(TextCustomEditor__RichTextEditor* self, bool next) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperFocusNextPrevChild(TextCustomEditor__RichTextEditor* self, bool next) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorrichtexteditor->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusNextPrevChild(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragEnterEvent(TextCustomEditor__RichTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragEnterEvent(TextCustomEditor__RichTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragEnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragEnterEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragLeaveEvent(TextCustomEditor__RichTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragLeaveEvent(TextCustomEditor__RichTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragLeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragLeaveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DragMoveEvent(TextCustomEditor__RichTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDragMoveEvent(TextCustomEditor__RichTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragMoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDragMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DropEvent(TextCustomEditor__RichTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDropEvent(TextCustomEditor__RichTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DropEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDropEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_FocusOutEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->focusOutEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperFocusOutEvent(TextCustomEditor__RichTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusOutEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->focusOutEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusOutEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ShowEvent(TextCustomEditor__RichTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperShowEvent(TextCustomEditor__RichTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ShowEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnShowEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ChangeEvent(TextCustomEditor__RichTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperChangeEvent(TextCustomEditor__RichTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ChangeEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnChangeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__RichTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_IsBase(true);
        return vtextcustomeditorrichtexteditor->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreateMimeDataFromSelection(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_CanInsertFromMimeData(const TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CanInsertFromMimeData_IsBase(true);
        return vtextcustomeditorrichtexteditor->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCanInsertFromMimeData(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InsertFromMimeData(TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInsertFromMimeData(TextCustomEditor__RichTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InsertFromMimeData_IsBase(true);
        vtextcustomeditorrichtexteditor->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInsertFromMimeData(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InputMethodEvent(TextCustomEditor__RichTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInputMethodEvent(TextCustomEditor__RichTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InputMethodEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInputMethodEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ScrollContentsBy(TextCustomEditor__RichTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperScrollContentsBy(TextCustomEditor__RichTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ScrollContentsBy_IsBase(true);
        vtextcustomeditorrichtexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnScrollContentsBy(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DoSetTextCursor(TextCustomEditor__RichTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDoSetTextCursor(TextCustomEditor__RichTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DoSetTextCursor_IsBase(true);
        vtextcustomeditorrichtexteditor->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDoSetTextCursor(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_MinimumSizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QSize(vtextcustomeditorrichtexteditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditor*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperMinimumSizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditor*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMinimumSizeHint(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_SizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QSize(vtextcustomeditorrichtexteditor->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditor*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperSizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditor->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorRichTextEditor*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSizeHint(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetupViewport(TextCustomEditor__RichTextEditor* self, QWidget* viewport) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setupViewport(viewport);
    } else {
        self->TextCustomEditor::RichTextEditor::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetupViewport(TextCustomEditor__RichTextEditor* self, QWidget* viewport) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetupViewport_IsBase(true);
        vtextcustomeditorrichtexteditor->setupViewport(viewport);
    } else {
        self->TextCustomEditor::RichTextEditor::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetupViewport(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetupViewport_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_EventFilter(TextCustomEditor__RichTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperEventFilter(TextCustomEditor__RichTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_EventFilter_IsBase(true);
        return vtextcustomeditorrichtexteditor->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEventFilter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_ViewportEvent(TextCustomEditor__RichTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperViewportEvent(TextCustomEditor__RichTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportEvent_IsBase(true);
        return vtextcustomeditorrichtexteditor->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnViewportEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__RichTextEditor_ViewportSizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QSize(vtextcustomeditorrichtexteditor->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextCustomEditor__RichTextEditor_SuperViewportSizeHint(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorrichtexteditor->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnViewportSizeHint(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InitStyleOption(const TextCustomEditor__RichTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInitStyleOption(const TextCustomEditor__RichTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InitStyleOption_IsBase(true);
        vtextcustomeditorrichtexteditor->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInitStyleOption(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InitStyleOption_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_DevType(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->devType();
    } else {
        return self->TextCustomEditor::RichTextEditor::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperDevType(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DevType_IsBase(true);
        return vtextcustomeditorrichtexteditor->devType();
    } else {
        return self->TextCustomEditor::RichTextEditor::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDevType(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetVisible(TextCustomEditor__RichTextEditor* self, bool visible) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditor::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetVisible(TextCustomEditor__RichTextEditor* self, bool visible) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetVisible_IsBase(true);
        vtextcustomeditorrichtexteditor->setVisible(visible);
    } else {
        self->TextCustomEditor::RichTextEditor::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetVisible(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_HeightForWidth(const TextCustomEditor__RichTextEditor* self, int param1) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperHeightForWidth(const TextCustomEditor__RichTextEditor* self, int param1) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::RichTextEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHeightForWidth(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_HasHeightForWidth(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditor::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperHasHeightForWidth(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorrichtexteditor->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::RichTextEditor::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHasHeightForWidth(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditor_PaintEngine(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditor::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__RichTextEditor_SuperPaintEngine(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_PaintEngine_IsBase(true);
        return vtextcustomeditorrichtexteditor->paintEngine();
    } else {
        return self->TextCustomEditor::RichTextEditor::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnPaintEngine(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_EnterEvent(TextCustomEditor__RichTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperEnterEvent(TextCustomEditor__RichTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_EnterEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnEnterEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_LeaveEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperLeaveEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_LeaveEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnLeaveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_MoveEvent(TextCustomEditor__RichTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperMoveEvent(TextCustomEditor__RichTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MoveEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMoveEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_CloseEvent(TextCustomEditor__RichTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCloseEvent(TextCustomEditor__RichTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CloseEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCloseEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_TabletEvent(TextCustomEditor__RichTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperTabletEvent(TextCustomEditor__RichTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_TabletEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnTabletEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ActionEvent(TextCustomEditor__RichTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperActionEvent(TextCustomEditor__RichTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ActionEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnActionEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_HideEvent(TextCustomEditor__RichTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperHideEvent(TextCustomEditor__RichTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HideEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnHideEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_NativeEvent(TextCustomEditor__RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperNativeEvent(TextCustomEditor__RichTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_NativeEvent_IsBase(true);
        return vtextcustomeditorrichtexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnNativeEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_Metric(const TextCustomEditor__RichTextEditor* self, int param1) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperMetric(const TextCustomEditor__RichTextEditor* self, int param1) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metric_IsBase(true);
        return vtextcustomeditorrichtexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMetric(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_InitPainter(const TextCustomEditor__RichTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperInitPainter(const TextCustomEditor__RichTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InitPainter_IsBase(true);
        vtextcustomeditorrichtexteditor->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnInitPainter(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditor_Redirected(const TextCustomEditor__RichTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__RichTextEditor_SuperRedirected(const TextCustomEditor__RichTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Redirected_IsBase(true);
        return vtextcustomeditorrichtexteditor->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnRedirected(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__RichTextEditor_SharedPainter(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__RichTextEditor_SuperSharedPainter(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SharedPainter_IsBase(true);
        return vtextcustomeditorrichtexteditor->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSharedPainter(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ChildEvent(TextCustomEditor__RichTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperChildEvent(TextCustomEditor__RichTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ChildEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->childEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnChildEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_CustomEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCustomEvent(TextCustomEditor__RichTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CustomEvent_IsBase(true);
        vtextcustomeditorrichtexteditor->customEvent(event);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCustomEvent(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ConnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperConnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ConnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditor->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnConnectNotify(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DisconnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDisconnectNotify(TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DisconnectNotify_IsBase(true);
        vtextcustomeditorrichtexteditor->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDisconnectNotify(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* TextCustomEditor__RichTextEditor_MousePopupMenu(TextCustomEditor__RichTextEditor* self, QPoint* pos) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->mousePopupMenu(*pos);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->mousePopupMenu(*pos);
    }
}

// Base class handler implementation
QMenu* TextCustomEditor__RichTextEditor_SuperMousePopupMenu(TextCustomEditor__RichTextEditor* self, QPoint* pos) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MousePopupMenu_IsBase(true);
        return vtextcustomeditorrichtexteditor->mousePopupMenu(*pos);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->mousePopupMenu(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnMousePopupMenu(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_MousePopupMenu_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_MousePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetHighlighter(TextCustomEditor__RichTextEditor* self, Sonnet__Highlighter* _highLighter) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setHighlighter(_highLighter);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->setHighlighter(_highLighter);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetHighlighter(TextCustomEditor__RichTextEditor* self, Sonnet__Highlighter* _highLighter) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetHighlighter_IsBase(true);
        vtextcustomeditorrichtexteditor->setHighlighter(_highLighter);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->setHighlighter(_highLighter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetHighlighter(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetHighlighter_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetHighlighter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_ZoomInF(TextCustomEditor__RichTextEditor* self, float range) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperZoomInF(TextCustomEditor__RichTextEditor* self, float range) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ZoomInF_IsBase(true);
        vtextcustomeditorrichtexteditor->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnZoomInF(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ZoomInF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_SetViewportMargins(TextCustomEditor__RichTextEditor* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperSetViewportMargins(TextCustomEditor__RichTextEditor* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetViewportMargins_IsBase(true);
        vtextcustomeditorrichtexteditor->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSetViewportMargins(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SetViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextCustomEditor__RichTextEditor_ViewportMargins(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return new QMargins(vtextcustomeditorrichtexteditor->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextCustomEditor__RichTextEditor_SuperViewportMargins(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportMargins_IsBase(true);
        return new QMargins(vtextcustomeditorrichtexteditor->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnViewportMargins(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_ViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_DrawFrame(TextCustomEditor__RichTextEditor* self, QPainter* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDrawFrame(TextCustomEditor__RichTextEditor* self, QPainter* param1) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DrawFrame_IsBase(true);
        vtextcustomeditorrichtexteditor->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDrawFrame(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_DrawFrame_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_UpdateMicroFocus(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperUpdateMicroFocus(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorrichtexteditor->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnUpdateMicroFocus(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_Create(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperCreate(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Create_IsBase(true);
        vtextcustomeditorrichtexteditor->create();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnCreate(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Create_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__RichTextEditor_Destroy(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__RichTextEditor_SuperDestroy(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Destroy_IsBase(true);
        vtextcustomeditorrichtexteditor->destroy();
    } else {
        ((VirtualTextCustomEditorRichTextEditor*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnDestroy(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_FocusNextChild(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperFocusNextChild(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusNextChild_IsBase(true);
        return vtextcustomeditorrichtexteditor->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusNextChild(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_FocusPreviousChild(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperFocusPreviousChild(TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorrichtexteditor->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnFocusPreviousChild(TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = dynamic_cast<VirtualTextCustomEditorRichTextEditor*>(self);
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__RichTextEditor_Sender(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__RichTextEditor_SuperSender(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Sender_IsBase(true);
        return vtextcustomeditorrichtexteditor->sender();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSender(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_SenderSignalIndex(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperSenderSignalIndex(const TextCustomEditor__RichTextEditor* self) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorrichtexteditor->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnSenderSignalIndex(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__RichTextEditor_Receivers(const TextCustomEditor__RichTextEditor* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__RichTextEditor_SuperReceivers(const TextCustomEditor__RichTextEditor* self, const char* signal) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Receivers_IsBase(true);
        return vtextcustomeditorrichtexteditor->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnReceivers(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__RichTextEditor_IsSignalConnected(const TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__RichTextEditor_SuperIsSignalConnected(const TextCustomEditor__RichTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_IsSignalConnected_IsBase(true);
        return vtextcustomeditorrichtexteditor->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnIsSignalConnected(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__RichTextEditor_GetDecodedMetricF(const TextCustomEditor__RichTextEditor* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        return vtextcustomeditorrichtexteditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__RichTextEditor_SuperGetDecodedMetricF(const TextCustomEditor__RichTextEditor* self, int metricA, int metricB) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorrichtexteditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorRichTextEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__RichTextEditor_OnGetDecodedMetricF(const TextCustomEditor__RichTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorrichtexteditor = const_cast<VirtualTextCustomEditorRichTextEditor*>(dynamic_cast<const VirtualTextCustomEditorRichTextEditor*>(self));
    if (vtextcustomeditorrichtexteditor && vtextcustomeditorrichtexteditor->isVirtualTextCustomEditorRichTextEditor) {
        vtextcustomeditorrichtexteditor->setTextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorRichTextEditor::TextCustomEditor__RichTextEditor_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__RichTextEditor_Delete(TextCustomEditor__RichTextEditor* self) {
    delete self;
}
