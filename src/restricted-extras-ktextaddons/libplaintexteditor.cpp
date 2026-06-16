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
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->addExtraMenuEntry(menu, *pos);
    }
}

void TextCustomEditor__PlainTextEditor_ContextMenuEvent(TextCustomEditor__PlainTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->contextMenuEvent(event);
    }
}

bool TextCustomEditor__PlainTextEditor_Event(TextCustomEditor__PlainTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditor__plaintexteditor->event(ev);
    }
    return {};
}

void TextCustomEditor__PlainTextEditor_KeyPressEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->keyPressEvent(event);
    }
}

void TextCustomEditor__PlainTextEditor_WheelEvent(TextCustomEditor__PlainTextEditor* self, QWheelEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->wheelEvent(event);
    }
}

Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditor__plaintexteditor->createSpellCheckDecorator();
    }
    return {};
}

void TextCustomEditor__PlainTextEditor_FocusInEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->focusInEvent(event);
    }
}

void TextCustomEditor__PlainTextEditor_UpdateHighLighter(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->updateHighLighter();
    }
}

void TextCustomEditor__PlainTextEditor_ClearDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditor__plaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditor__plaintexteditor && vtextcustomeditor__plaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditor__plaintexteditor->clearDecorator();
    }
}

void TextCustomEditor__PlainTextEditor_FindText(TextCustomEditor__PlainTextEditor* self) {
    self->findText();
}

void TextCustomEditor__PlainTextEditor_Connect_FindText(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::findText, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextCustomEditor__PlainTextEditor_ReplaceText(TextCustomEditor__PlainTextEditor* self) {
    self->replaceText();
}

void TextCustomEditor__PlainTextEditor_Connect_ReplaceText(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    void (*slotFunc)(TextCustomEditor__PlainTextEditor*) = reinterpret_cast<void (*)(TextCustomEditor__PlainTextEditor*)>(slot);
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::replaceText, [self, slotFunc]() {
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
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::spellCheckerAutoCorrect, [self, slotFunc](const QString& currentWord, const QString& autoCorrectWord) {
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
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::checkSpellingChanged, [self, slotFunc](bool param1) {
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
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::languageChanged, [self, slotFunc](const QString& param1) {
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
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::spellCheckStatus, [self, slotFunc](const QString& param1) {
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
    TextCustomEditor::PlainTextEditor::connect(self, &TextCustomEditor::PlainTextEditor::say, [self, slotFunc](const QString& text) {
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

// Base class handler implementation
QMetaObject* TextCustomEditor__PlainTextEditor_SuperMetaObject(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MetaObject_IsBase(true);
        return (QMetaObject*)vtextcustomeditorplaintexteditor->metaObject();
    } else {
        return (QMetaObject*)self->TextCustomEditor::PlainTextEditor::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetaObject(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MetaObject_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextCustomEditor__PlainTextEditor_SuperMetacast(TextCustomEditor__PlainTextEditor* self, const char* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metacast_IsBase(true);
        return vtextcustomeditorplaintexteditor->qt_metacast(param1);
    } else {
        return self->TextCustomEditor::PlainTextEditor::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetacast(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metacast_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperMetacall(TextCustomEditor__PlainTextEditor* self, int param1, int param2, void** param3) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metacall_IsBase(true);
        return vtextcustomeditorplaintexteditor->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextCustomEditor::PlainTextEditor::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetacall(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metacall_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetReadOnly(TextCustomEditor__PlainTextEditor* self, bool readOnly) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetReadOnly_IsBase(true);
        vtextcustomeditorplaintexteditor->setReadOnly(readOnly);
    } else {
        self->TextCustomEditor::PlainTextEditor::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetReadOnly(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetReadOnly_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCreateHighlighter(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateHighlighter_IsBase(true);
        vtextcustomeditorplaintexteditor->createHighlighter();
    } else {
        self->TextCustomEditor::PlainTextEditor::createHighlighter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateHighlighter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateHighlighter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateHighlighter_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry(TextCustomEditor__PlainTextEditor* self, QMenu* menu, QPoint* pos) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_AddExtraMenuEntry_IsBase(true);
        vtextcustomeditorplaintexteditor->addExtraMenuEntry(menu, *pos);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->addExtraMenuEntry(menu, *pos);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnAddExtraMenuEntry(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_AddExtraMenuEntry_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperContextMenuEvent(TextCustomEditor__PlainTextEditor* self, QContextMenuEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ContextMenuEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->contextMenuEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnContextMenuEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ContextMenuEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperEvent(TextCustomEditor__PlainTextEditor* self, QEvent* ev) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Event_IsBase(true);
        return vtextcustomeditorplaintexteditor->event(ev);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Event_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Event_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperKeyPressEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_KeyPressEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->keyPressEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnKeyPressEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_KeyPressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperWheelEvent(TextCustomEditor__PlainTextEditor* self, QWheelEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_WheelEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->wheelEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnWheelEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_WheelEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_WheelEvent_Callback>(slot));
    }
}

// Base class handler implementation
Sonnet__SpellCheckDecorator* TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_IsBase(true);
        return vtextcustomeditorplaintexteditor->createSpellCheckDecorator();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->createSpellCheckDecorator();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateSpellCheckDecorator(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperFocusInEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusInEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->focusInEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusInEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusInEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_UpdateHighLighter_IsBase(true);
        vtextcustomeditorplaintexteditor->updateHighLighter();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->updateHighLighter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnUpdateHighLighter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_UpdateHighLighter_Callback>(slot));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperClearDecorator(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ClearDecorator_IsBase(true);
        vtextcustomeditorplaintexteditor->clearDecorator();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->clearDecorator();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnClearDecorator(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ClearDecorator_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ClearDecorator_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_LoadResource(TextCustomEditor__PlainTextEditor* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QVariant(vtextcustomeditorplaintexteditor->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditor*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_SuperLoadResource(TextCustomEditor__PlainTextEditor* self, int typeVal, const QUrl* name) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_LoadResource_IsBase(true);
        return new QVariant(vtextcustomeditorplaintexteditor->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditor*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnLoadResource(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_LoadResource_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_InputMethodQuery(const TextCustomEditor__PlainTextEditor* self, int property) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QVariant(vtextcustomeditorplaintexteditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* TextCustomEditor__PlainTextEditor_SuperInputMethodQuery(const TextCustomEditor__PlainTextEditor* self, int property) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InputMethodQuery_IsBase(true);
        return new QVariant(vtextcustomeditorplaintexteditor->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualTextCustomEditorPlainTextEditor*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInputMethodQuery(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InputMethodQuery_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_TimerEvent(TextCustomEditor__PlainTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperTimerEvent(TextCustomEditor__PlainTextEditor* self, QTimerEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_TimerEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->timerEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnTimerEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_TimerEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_KeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, QKeyEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_KeyReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->keyReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnKeyReleaseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ResizeEvent(TextCustomEditor__PlainTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperResizeEvent(TextCustomEditor__PlainTextEditor* self, QResizeEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ResizeEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->resizeEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnResizeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ResizeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_PaintEvent(TextCustomEditor__PlainTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperPaintEvent(TextCustomEditor__PlainTextEditor* self, QPaintEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_PaintEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->paintEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnPaintEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_PaintEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MousePressEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->mousePressEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMousePressEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MousePressEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->mousePressEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMousePressEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MousePressEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseMoveEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->mouseMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->mouseMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->mouseReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseReleaseEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->mouseReleaseEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseReleaseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, QMouseEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->mouseDoubleClickEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMouseDoubleClickEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_FocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, bool next) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, bool next) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusNextPrevChild_IsBase(true);
        return vtextcustomeditorplaintexteditor->focusNextPrevChild(next);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusNextPrevChild(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragEnterEvent(TextCustomEditor__PlainTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragEnterEvent(TextCustomEditor__PlainTextEditor* self, QDragEnterEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragEnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->dragEnterEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragEnterEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragEnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragLeaveEvent(TextCustomEditor__PlainTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent(TextCustomEditor__PlainTextEditor* self, QDragLeaveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragLeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->dragLeaveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragLeaveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DragMoveEvent(TextCustomEditor__PlainTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDragMoveEvent(TextCustomEditor__PlainTextEditor* self, QDragMoveEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragMoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->dragMoveEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDragMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DragMoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DropEvent(TextCustomEditor__PlainTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDropEvent(TextCustomEditor__PlainTextEditor* self, QDropEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DropEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->dropEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDropEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DropEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_FocusOutEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->focusOutEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperFocusOutEvent(TextCustomEditor__PlainTextEditor* self, QFocusEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusOutEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->focusOutEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusOutEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusOutEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ShowEvent(TextCustomEditor__PlainTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperShowEvent(TextCustomEditor__PlainTextEditor* self, QShowEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ShowEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->showEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnShowEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ShowEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ChangeEvent(TextCustomEditor__PlainTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperChangeEvent(TextCustomEditor__PlainTextEditor* self, QEvent* e) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ChangeEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->changeEvent(e);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnChangeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ChangeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_IsBase(true);
        return vtextcustomeditorplaintexteditor->createMimeDataFromSelection();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreateMimeDataFromSelection(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_CanInsertFromMimeData(const TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData(const TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CanInsertFromMimeData_IsBase(true);
        return vtextcustomeditorplaintexteditor->canInsertFromMimeData(source);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCanInsertFromMimeData(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InsertFromMimeData(TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData(TextCustomEditor__PlainTextEditor* self, const QMimeData* source) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InsertFromMimeData_IsBase(true);
        vtextcustomeditorplaintexteditor->insertFromMimeData(source);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInsertFromMimeData(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InputMethodEvent(TextCustomEditor__PlainTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInputMethodEvent(TextCustomEditor__PlainTextEditor* self, QInputMethodEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InputMethodEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->inputMethodEvent(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInputMethodEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InputMethodEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ScrollContentsBy(TextCustomEditor__PlainTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperScrollContentsBy(TextCustomEditor__PlainTextEditor* self, int dx, int dy) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ScrollContentsBy_IsBase(true);
        vtextcustomeditorplaintexteditor->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnScrollContentsBy(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DoSetTextCursor(TextCustomEditor__PlainTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor(TextCustomEditor__PlainTextEditor* self, const QTextCursor* cursor) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DoSetTextCursor_IsBase(true);
        vtextcustomeditorplaintexteditor->doSetTextCursor(*cursor);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDoSetTextCursor(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_MinimumSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QSize(vtextcustomeditorplaintexteditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditor*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperMinimumSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MinimumSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditor->minimumSizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditor*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMinimumSizeHint(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QSize(vtextcustomeditorplaintexteditor->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditor*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditor->sizeHint());
    } else {
        return new QSize(((VirtualTextCustomEditorPlainTextEditor*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSizeHint(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetupViewport(TextCustomEditor__PlainTextEditor* self, QWidget* viewport) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setupViewport(viewport);
    } else {
        self->TextCustomEditor::PlainTextEditor::setupViewport(viewport);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetupViewport(TextCustomEditor__PlainTextEditor* self, QWidget* viewport) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetupViewport_IsBase(true);
        vtextcustomeditorplaintexteditor->setupViewport(viewport);
    } else {
        self->TextCustomEditor::PlainTextEditor::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetupViewport(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetupViewport_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_EventFilter(TextCustomEditor__PlainTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperEventFilter(TextCustomEditor__PlainTextEditor* self, QObject* param1, QEvent* param2) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_EventFilter_IsBase(true);
        return vtextcustomeditorplaintexteditor->eventFilter(param1, param2);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEventFilter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_EventFilter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_ViewportEvent(TextCustomEditor__PlainTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperViewportEvent(TextCustomEditor__PlainTextEditor* self, QEvent* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportEvent_IsBase(true);
        return vtextcustomeditorplaintexteditor->viewportEvent(param1);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnViewportEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* TextCustomEditor__PlainTextEditor_ViewportSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QSize(vtextcustomeditorplaintexteditor->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* TextCustomEditor__PlainTextEditor_SuperViewportSizeHint(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportSizeHint_IsBase(true);
        return new QSize(vtextcustomeditorplaintexteditor->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnViewportSizeHint(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InitStyleOption(const TextCustomEditor__PlainTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInitStyleOption(const TextCustomEditor__PlainTextEditor* self, QStyleOptionFrame* option) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InitStyleOption_IsBase(true);
        vtextcustomeditorplaintexteditor->initStyleOption(option);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInitStyleOption(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InitStyleOption_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_DevType(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditor::devType();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperDevType(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DevType_IsBase(true);
        return vtextcustomeditorplaintexteditor->devType();
    } else {
        return self->TextCustomEditor::PlainTextEditor::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDevType(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DevType_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetVisible(TextCustomEditor__PlainTextEditor* self, bool visible) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditor::setVisible(visible);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetVisible(TextCustomEditor__PlainTextEditor* self, bool visible) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetVisible_IsBase(true);
        vtextcustomeditorplaintexteditor->setVisible(visible);
    } else {
        self->TextCustomEditor::PlainTextEditor::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetVisible(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetVisible_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_HeightForWidth(const TextCustomEditor__PlainTextEditor* self, int param1) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperHeightForWidth(const TextCustomEditor__PlainTextEditor* self, int param1) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditor->heightForWidth(static_cast<int>(param1));
    } else {
        return self->TextCustomEditor::PlainTextEditor::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHeightForWidth(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_HasHeightForWidth(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditor::hasHeightForWidth();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperHasHeightForWidth(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HasHeightForWidth_IsBase(true);
        return vtextcustomeditorplaintexteditor->hasHeightForWidth();
    } else {
        return self->TextCustomEditor::PlainTextEditor::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHasHeightForWidth(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditor_PaintEngine(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditor::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* TextCustomEditor__PlainTextEditor_SuperPaintEngine(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_PaintEngine_IsBase(true);
        return vtextcustomeditorplaintexteditor->paintEngine();
    } else {
        return self->TextCustomEditor::PlainTextEditor::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnPaintEngine(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_PaintEngine_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_EnterEvent(TextCustomEditor__PlainTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperEnterEvent(TextCustomEditor__PlainTextEditor* self, QEnterEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_EnterEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->enterEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnEnterEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_EnterEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_LeaveEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperLeaveEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_LeaveEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->leaveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnLeaveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_LeaveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_MoveEvent(TextCustomEditor__PlainTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperMoveEvent(TextCustomEditor__PlainTextEditor* self, QMoveEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MoveEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->moveEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMoveEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_MoveEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_CloseEvent(TextCustomEditor__PlainTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCloseEvent(TextCustomEditor__PlainTextEditor* self, QCloseEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CloseEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->closeEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCloseEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CloseEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_TabletEvent(TextCustomEditor__PlainTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperTabletEvent(TextCustomEditor__PlainTextEditor* self, QTabletEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_TabletEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->tabletEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnTabletEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_TabletEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ActionEvent(TextCustomEditor__PlainTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperActionEvent(TextCustomEditor__PlainTextEditor* self, QActionEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ActionEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->actionEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnActionEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ActionEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_HideEvent(TextCustomEditor__PlainTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperHideEvent(TextCustomEditor__PlainTextEditor* self, QHideEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HideEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->hideEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHideEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HideEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_NativeEvent(TextCustomEditor__PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperNativeEvent(TextCustomEditor__PlainTextEditor* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_NativeEvent_IsBase(true);
        return vtextcustomeditorplaintexteditor->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnNativeEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_NativeEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_Metric(const TextCustomEditor__PlainTextEditor* self, int param1) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperMetric(const TextCustomEditor__PlainTextEditor* self, int param1) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metric_IsBase(true);
        return vtextcustomeditorplaintexteditor->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnMetric(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Metric_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_InitPainter(const TextCustomEditor__PlainTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperInitPainter(const TextCustomEditor__PlainTextEditor* self, QPainter* painter) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InitPainter_IsBase(true);
        vtextcustomeditorplaintexteditor->initPainter(painter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnInitPainter(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_InitPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditor_Redirected(const TextCustomEditor__PlainTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* TextCustomEditor__PlainTextEditor_SuperRedirected(const TextCustomEditor__PlainTextEditor* self, QPoint* offset) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Redirected_IsBase(true);
        return vtextcustomeditorplaintexteditor->redirected(offset);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnRedirected(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Redirected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* TextCustomEditor__PlainTextEditor_SharedPainter(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* TextCustomEditor__PlainTextEditor_SuperSharedPainter(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SharedPainter_IsBase(true);
        return vtextcustomeditorplaintexteditor->sharedPainter();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSharedPainter(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SharedPainter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ChildEvent(TextCustomEditor__PlainTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperChildEvent(TextCustomEditor__PlainTextEditor* self, QChildEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ChildEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->childEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnChildEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ChildEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_CustomEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCustomEvent(TextCustomEditor__PlainTextEditor* self, QEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CustomEvent_IsBase(true);
        vtextcustomeditorplaintexteditor->customEvent(event);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCustomEvent(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_CustomEvent_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ConnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperConnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ConnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditor->connectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnConnectNotify(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ConnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DisconnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDisconnectNotify(TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DisconnectNotify_IsBase(true);
        vtextcustomeditorplaintexteditor->disconnectNotify(*signal);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDisconnectNotify(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DisconnectNotify_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_OverrideShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->overrideShortcut(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->overrideShortcut(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperOverrideShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_OverrideShortcut_IsBase(true);
        return vtextcustomeditorplaintexteditor->overrideShortcut(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->overrideShortcut(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnOverrideShortcut(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_OverrideShortcut_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_OverrideShortcut_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_HandleShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->handleShortcut(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->handleShortcut(event);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperHandleShortcut(TextCustomEditor__PlainTextEditor* self, QKeyEvent* event) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HandleShortcut_IsBase(true);
        return vtextcustomeditorplaintexteditor->handleShortcut(event);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->handleShortcut(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnHandleShortcut(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_HandleShortcut_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_HandleShortcut_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetHighlighter(TextCustomEditor__PlainTextEditor* self, Sonnet__Highlighter* _highLighter) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setHighlighter(_highLighter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->setHighlighter(_highLighter);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetHighlighter(TextCustomEditor__PlainTextEditor* self, Sonnet__Highlighter* _highLighter) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetHighlighter_IsBase(true);
        vtextcustomeditorplaintexteditor->setHighlighter(_highLighter);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->setHighlighter(_highLighter);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetHighlighter(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetHighlighter_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetHighlighter_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* TextCustomEditor__PlainTextEditor_FirstVisibleBlock(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QTextBlock(vtextcustomeditorplaintexteditor->firstVisibleBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* TextCustomEditor__PlainTextEditor_SuperFirstVisibleBlock(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FirstVisibleBlock_IsBase(true);
        return new QTextBlock(vtextcustomeditorplaintexteditor->firstVisibleBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFirstVisibleBlock(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FirstVisibleBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QPointF* TextCustomEditor__PlainTextEditor_ContentOffset(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QPointF(vtextcustomeditorplaintexteditor->contentOffset());
    }
    return {};
}

// Base class handler implementation
QPointF* TextCustomEditor__PlainTextEditor_SuperContentOffset(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ContentOffset_IsBase(true);
        return new QPointF(vtextcustomeditorplaintexteditor->contentOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnContentOffset(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ContentOffset_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ContentOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingRect(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingRect(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_SuperBlockBoundingRect(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_BlockBoundingRect_IsBase(true);
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingRect(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnBlockBoundingRect(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_BlockBoundingGeometry(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingGeometry(*block));
    }
    return {};
}

// Base class handler implementation
QRectF* TextCustomEditor__PlainTextEditor_SuperBlockBoundingGeometry(const TextCustomEditor__PlainTextEditor* self, const QTextBlock* block) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_BlockBoundingGeometry_IsBase(true);
        return new QRectF(vtextcustomeditorplaintexteditor->blockBoundingGeometry(*block));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnBlockBoundingGeometry(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_BlockBoundingGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextCustomEditor__PlainTextEditor_GetPaintContext(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QAbstractTextDocumentLayout::PaintContext(vtextcustomeditorplaintexteditor->getPaintContext());
    }
    return {};
}

// Base class handler implementation
QAbstractTextDocumentLayout__PaintContext* TextCustomEditor__PlainTextEditor_SuperGetPaintContext(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_GetPaintContext_IsBase(true);
        return new QAbstractTextDocumentLayout::PaintContext(vtextcustomeditorplaintexteditor->getPaintContext());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnGetPaintContext(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_GetPaintContext_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_GetPaintContext_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_ZoomInF(TextCustomEditor__PlainTextEditor* self, float range) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperZoomInF(TextCustomEditor__PlainTextEditor* self, float range) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ZoomInF_IsBase(true);
        vtextcustomeditorplaintexteditor->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnZoomInF(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ZoomInF_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_SetViewportMargins(TextCustomEditor__PlainTextEditor* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperSetViewportMargins(TextCustomEditor__PlainTextEditor* self, int left, int top, int right, int bottom) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetViewportMargins_IsBase(true);
        vtextcustomeditorplaintexteditor->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSetViewportMargins(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SetViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* TextCustomEditor__PlainTextEditor_ViewportMargins(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return new QMargins(vtextcustomeditorplaintexteditor->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* TextCustomEditor__PlainTextEditor_SuperViewportMargins(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportMargins_IsBase(true);
        return new QMargins(vtextcustomeditorplaintexteditor->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnViewportMargins(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_ViewportMargins_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_DrawFrame(TextCustomEditor__PlainTextEditor* self, QPainter* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDrawFrame(TextCustomEditor__PlainTextEditor* self, QPainter* param1) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DrawFrame_IsBase(true);
        vtextcustomeditorplaintexteditor->drawFrame(param1);
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDrawFrame(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_DrawFrame_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_UpdateMicroFocus(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperUpdateMicroFocus(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_UpdateMicroFocus_IsBase(true);
        vtextcustomeditorplaintexteditor->updateMicroFocus();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnUpdateMicroFocus(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_Create(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->create();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperCreate(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Create_IsBase(true);
        vtextcustomeditorplaintexteditor->create();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnCreate(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Create_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void TextCustomEditor__PlainTextEditor_Destroy(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->destroy();
    }
}

// Base class handler implementation
void TextCustomEditor__PlainTextEditor_SuperDestroy(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Destroy_IsBase(true);
        vtextcustomeditorplaintexteditor->destroy();
    } else {
        ((VirtualTextCustomEditorPlainTextEditor*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnDestroy(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Destroy_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_FocusNextChild(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperFocusNextChild(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusNextChild_IsBase(true);
        return vtextcustomeditorplaintexteditor->focusNextChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusNextChild(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusNextChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_FocusPreviousChild(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperFocusPreviousChild(TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusPreviousChild_IsBase(true);
        return vtextcustomeditorplaintexteditor->focusPreviousChild();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnFocusPreviousChild(TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = dynamic_cast<VirtualTextCustomEditorPlainTextEditor*>(self);
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextCustomEditor__PlainTextEditor_Sender(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextCustomEditor__PlainTextEditor_SuperSender(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Sender_IsBase(true);
        return vtextcustomeditorplaintexteditor->sender();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSender(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Sender_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_SenderSignalIndex(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperSenderSignalIndex(const TextCustomEditor__PlainTextEditor* self) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SenderSignalIndex_IsBase(true);
        return vtextcustomeditorplaintexteditor->senderSignalIndex();
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnSenderSignalIndex(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextCustomEditor__PlainTextEditor_Receivers(const TextCustomEditor__PlainTextEditor* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextCustomEditor__PlainTextEditor_SuperReceivers(const TextCustomEditor__PlainTextEditor* self, const char* signal) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Receivers_IsBase(true);
        return vtextcustomeditorplaintexteditor->receivers(signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnReceivers(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_Receivers_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextCustomEditor__PlainTextEditor_IsSignalConnected(const TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextCustomEditor__PlainTextEditor_SuperIsSignalConnected(const TextCustomEditor__PlainTextEditor* self, const QMetaMethod* signal) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_IsSignalConnected_IsBase(true);
        return vtextcustomeditorplaintexteditor->isSignalConnected(*signal);
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnIsSignalConnected(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_IsSignalConnected_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double TextCustomEditor__PlainTextEditor_GetDecodedMetricF(const TextCustomEditor__PlainTextEditor* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        return vtextcustomeditorplaintexteditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double TextCustomEditor__PlainTextEditor_SuperGetDecodedMetricF(const TextCustomEditor__PlainTextEditor* self, int metricA, int metricB) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_GetDecodedMetricF_IsBase(true);
        return vtextcustomeditorplaintexteditor->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualTextCustomEditorPlainTextEditor*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void TextCustomEditor__PlainTextEditor_OnGetDecodedMetricF(const TextCustomEditor__PlainTextEditor* self, intptr_t slot) {
    auto* vtextcustomeditorplaintexteditor = const_cast<VirtualTextCustomEditorPlainTextEditor*>(dynamic_cast<const VirtualTextCustomEditorPlainTextEditor*>(self));
    if (vtextcustomeditorplaintexteditor && vtextcustomeditorplaintexteditor->isVirtualTextCustomEditorPlainTextEditor) {
        vtextcustomeditorplaintexteditor->setTextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback(reinterpret_cast<VirtualTextCustomEditorPlainTextEditor::TextCustomEditor__PlainTextEditor_GetDecodedMetricF_Callback>(slot));
    }
}

void TextCustomEditor__PlainTextEditor_Delete(TextCustomEditor__PlainTextEditor* self) {
    delete self;
}
