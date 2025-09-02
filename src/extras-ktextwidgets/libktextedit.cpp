#include <KTextEdit>
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
#include <QByteArray>
#include <cstring>
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
#include <ktextedit.h>
#include "libktextedit.h"
#include "libktextedit.hxx"

KTextEdit* KTextEdit_new(QWidget* parent) {
    return new VirtualKTextEdit(parent);
}

KTextEdit* KTextEdit_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKTextEdit(text_QString);
}

KTextEdit* KTextEdit_new3() {
    return new VirtualKTextEdit();
}

KTextEdit* KTextEdit_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKTextEdit(text_QString, parent);
}

QMetaObject* KTextEdit_MetaObject(const KTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEdit_Metacast(KTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEdit_Metacall(KTextEdit* self, int param1, int param2, void** param3) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEdit_Tr(const char* s) {
    QString _ret = KTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEdit_SetReadOnly(KTextEdit* self, bool readOnly) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        self->setReadOnly(readOnly);
    } else {
        ((VirtualKTextEdit*)self)->setReadOnly(readOnly);
    }
}

void KTextEdit_SetCheckSpellingEnabled(KTextEdit* self, bool check) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        self->setCheckSpellingEnabled(check);
    } else {
        ((VirtualKTextEdit*)self)->setCheckSpellingEnabled(check);
    }
}

bool KTextEdit_CheckSpellingEnabled(const KTextEdit* self) {
    auto* vktextedit = dynamic_cast<const VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return self->checkSpellingEnabled();
    } else {
        return ((VirtualKTextEdit*)self)->checkSpellingEnabled();
    }
}

bool KTextEdit_ShouldBlockBeSpellChecked(const KTextEdit* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    auto* vktextedit = dynamic_cast<const VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return self->shouldBlockBeSpellChecked(block_QString);
    } else {
        return ((VirtualKTextEdit*)self)->shouldBlockBeSpellChecked(block_QString);
    }
}

void KTextEdit_HighlightWord(KTextEdit* self, int length, int pos) {
    self->highlightWord(static_cast<int>(length), static_cast<int>(pos));
}

void KTextEdit_CreateHighlighter(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        self->createHighlighter();
    } else {
        ((VirtualKTextEdit*)self)->createHighlighter();
    }
}

Sonnet__Highlighter* KTextEdit_Highlighter(const KTextEdit* self) {
    return self->highlighter();
}

void KTextEdit_SetHighlighter(KTextEdit* self, Sonnet__Highlighter* _highLighter) {
    self->setHighlighter(_highLighter);
}

QMenu* KTextEdit_MousePopupMenu(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return self->mousePopupMenu();
    } else {
        return ((VirtualKTextEdit*)self)->mousePopupMenu();
    }
}

void KTextEdit_EnableFindReplace(KTextEdit* self, bool enabled) {
    self->enableFindReplace(enabled);
}

libqt_string KTextEdit_SpellCheckingLanguage(const KTextEdit* self) {
    const QString _ret = self->spellCheckingLanguage();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEdit_ShowTabAction(KTextEdit* self, bool show) {
    self->showTabAction(show);
}

void KTextEdit_ShowAutoCorrectButton(KTextEdit* self, bool show) {
    self->showAutoCorrectButton(show);
}

void KTextEdit_ForceSpellChecking(KTextEdit* self) {
    self->forceSpellChecking();
}

void KTextEdit_CheckSpellingChanged(KTextEdit* self, bool param1) {
    self->checkSpellingChanged(param1);
}

void KTextEdit_Connect_CheckSpellingChanged(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, bool) = reinterpret_cast<void (*)(KTextEdit*, bool)>(slot);
    KTextEdit::connect(self, &KTextEdit::checkSpellingChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KTextEdit_SpellCheckStatus(KTextEdit* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->spellCheckStatus(param1_QString);
}

void KTextEdit_Connect_SpellCheckStatus(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, const char*) = reinterpret_cast<void (*)(KTextEdit*, const char*)>(slot);
    KTextEdit::connect(self, &KTextEdit::spellCheckStatus, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KTextEdit_LanguageChanged(KTextEdit* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->languageChanged(language_QString);
}

void KTextEdit_Connect_LanguageChanged(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, const char*) = reinterpret_cast<void (*)(KTextEdit*, const char*)>(slot);
    KTextEdit::connect(self, &KTextEdit::languageChanged, [self, slotFunc](const QString& language) {
        const QString language_ret = language;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray language_b = language_ret.toUtf8();
        const char* language_str = static_cast<const char*>(malloc(language_b.length() + 1));
        memcpy((void*)language_str, language_b.data(), language_b.length());
        ((char*)language_str)[language_b.length()] = '\0';
        const char* sigval1 = language_str;
        slotFunc(self, sigval1);
        libqt_free(language_str);
    });
}

void KTextEdit_AboutToShowContextMenu(KTextEdit* self, QMenu* menu) {
    self->aboutToShowContextMenu(menu);
}

void KTextEdit_Connect_AboutToShowContextMenu(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, QMenu*) = reinterpret_cast<void (*)(KTextEdit*, QMenu*)>(slot);
    KTextEdit::connect(self, &KTextEdit::aboutToShowContextMenu, [self, slotFunc](QMenu* menu) {
        QMenu* sigval1 = menu;
        slotFunc(self, sigval1);
    });
}

void KTextEdit_SpellCheckerAutoCorrect(KTextEdit* self, const libqt_string currentWord, const libqt_string autoCorrectWord) {
    QString currentWord_QString = QString::fromUtf8(currentWord.data, currentWord.len);
    QString autoCorrectWord_QString = QString::fromUtf8(autoCorrectWord.data, autoCorrectWord.len);
    self->spellCheckerAutoCorrect(currentWord_QString, autoCorrectWord_QString);
}

void KTextEdit_Connect_SpellCheckerAutoCorrect(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, const char*, const char*) = reinterpret_cast<void (*)(KTextEdit*, const char*, const char*)>(slot);
    KTextEdit::connect(self, &KTextEdit::spellCheckerAutoCorrect, [self, slotFunc](const QString& currentWord, const QString& autoCorrectWord) {
        const QString currentWord_ret = currentWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray currentWord_b = currentWord_ret.toUtf8();
        const char* currentWord_str = static_cast<const char*>(malloc(currentWord_b.length() + 1));
        memcpy((void*)currentWord_str, currentWord_b.data(), currentWord_b.length());
        ((char*)currentWord_str)[currentWord_b.length()] = '\0';
        const char* sigval1 = currentWord_str;
        const QString autoCorrectWord_ret = autoCorrectWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray autoCorrectWord_b = autoCorrectWord_ret.toUtf8();
        const char* autoCorrectWord_str = static_cast<const char*>(malloc(autoCorrectWord_b.length() + 1));
        memcpy((void*)autoCorrectWord_str, autoCorrectWord_b.data(), autoCorrectWord_b.length());
        ((char*)autoCorrectWord_str)[autoCorrectWord_b.length()] = '\0';
        const char* sigval2 = autoCorrectWord_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(currentWord_str);
        libqt_free(autoCorrectWord_str);
    });
}

void KTextEdit_SpellCheckingFinished(KTextEdit* self) {
    self->spellCheckingFinished();
}

void KTextEdit_Connect_SpellCheckingFinished(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*) = reinterpret_cast<void (*)(KTextEdit*)>(slot);
    KTextEdit::connect(self, &KTextEdit::spellCheckingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KTextEdit_SpellCheckingCanceled(KTextEdit* self) {
    self->spellCheckingCanceled();
}

void KTextEdit_Connect_SpellCheckingCanceled(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*) = reinterpret_cast<void (*)(KTextEdit*)>(slot);
    KTextEdit::connect(self, &KTextEdit::spellCheckingCanceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KTextEdit_SetSpellCheckingLanguage(KTextEdit* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->setSpellCheckingLanguage(language_QString);
}

void KTextEdit_CheckSpelling(KTextEdit* self) {
    self->checkSpelling();
}

void KTextEdit_ShowSpellConfigDialog(KTextEdit* self) {
    self->showSpellConfigDialog();
}

void KTextEdit_Replace(KTextEdit* self) {
    self->replace();
}

void KTextEdit_AddTextDecorator(KTextEdit* self, Sonnet__SpellCheckDecorator* decorator) {
    self->addTextDecorator(decorator);
}

void KTextEdit_ClearDecorator(KTextEdit* self) {
    self->clearDecorator();
}

bool KTextEdit_Event(KTextEdit* self, QEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->event(param1);
    }
    return {};
}

void KTextEdit_KeyPressEvent(KTextEdit* self, QKeyEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->keyPressEvent(param1);
    }
}

void KTextEdit_FocusInEvent(KTextEdit* self, QFocusEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->focusInEvent(param1);
    }
}

void KTextEdit_DeleteWordBack(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->deleteWordBack();
    }
}

void KTextEdit_DeleteWordForward(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->deleteWordForward();
    }
}

void KTextEdit_ContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->contextMenuEvent(param1);
    }
}

libqt_string KTextEdit_Tr2(const char* s, const char* c) {
    QString _ret = KTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEdit_ShowSpellConfigDialog1(KTextEdit* self, const libqt_string windowIcon) {
    QString windowIcon_QString = QString::fromUtf8(windowIcon.data, windowIcon.len);
    self->showSpellConfigDialog(windowIcon_QString);
}

// Base class handler implementation
int KTextEdit_QBaseMetacall(KTextEdit* self, int param1, int param2, void** param3) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Metacall_IsBase(true);
        return vktextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetacall(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Metacall_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseSetReadOnly(KTextEdit* self, bool readOnly) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetReadOnly_IsBase(true);
        vktextedit->setReadOnly(readOnly);
    } else {
        self->KTextEdit::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetReadOnly(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetReadOnly_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SetReadOnly_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseSetCheckSpellingEnabled(KTextEdit* self, bool check) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetCheckSpellingEnabled_IsBase(true);
        vktextedit->setCheckSpellingEnabled(check);
    } else {
        self->KTextEdit::setCheckSpellingEnabled(check);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetCheckSpellingEnabled(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetCheckSpellingEnabled_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SetCheckSpellingEnabled_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEdit_QBaseCheckSpellingEnabled(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CheckSpellingEnabled_IsBase(true);
        return vktextedit->checkSpellingEnabled();
    } else {
        return self->KTextEdit::checkSpellingEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCheckSpellingEnabled(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CheckSpellingEnabled_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CheckSpellingEnabled_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEdit_QBaseShouldBlockBeSpellChecked(const KTextEdit* self, const libqt_string block) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    QString block_QString = QString::fromUtf8(block.data, block.len);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ShouldBlockBeSpellChecked_IsBase(true);
        return vktextedit->shouldBlockBeSpellChecked(block_QString);
    } else {
        return self->KTextEdit::shouldBlockBeSpellChecked(block_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnShouldBlockBeSpellChecked(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ShouldBlockBeSpellChecked_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ShouldBlockBeSpellChecked_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseCreateHighlighter(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CreateHighlighter_IsBase(true);
        vktextedit->createHighlighter();
    } else {
        self->KTextEdit::createHighlighter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCreateHighlighter(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CreateHighlighter_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CreateHighlighter_Callback>(slot));
    }
}

// Base class handler implementation
QMenu* KTextEdit_QBaseMousePopupMenu(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MousePopupMenu_IsBase(true);
        return vktextedit->mousePopupMenu();
    } else {
        return self->KTextEdit::mousePopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMousePopupMenu(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MousePopupMenu_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MousePopupMenu_Callback>(slot));
    }
}

// Base class handler implementation
bool KTextEdit_QBaseEvent(KTextEdit* self, QEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Event_IsBase(true);
        return vktextedit->event(param1);
    } else {
        return ((VirtualKTextEdit*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Event_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Event_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseKeyPressEvent(KTextEdit* self, QKeyEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_KeyPressEvent_IsBase(true);
        vktextedit->keyPressEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnKeyPressEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseFocusInEvent(KTextEdit* self, QFocusEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusInEvent_IsBase(true);
        vktextedit->focusInEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusInEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseDeleteWordBack(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DeleteWordBack_IsBase(true);
        vktextedit->deleteWordBack();
    } else {
        ((VirtualKTextEdit*)self)->deleteWordBack();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDeleteWordBack(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DeleteWordBack_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DeleteWordBack_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseDeleteWordForward(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DeleteWordForward_IsBase(true);
        vktextedit->deleteWordForward();
    } else {
        ((VirtualKTextEdit*)self)->deleteWordForward();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDeleteWordForward(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DeleteWordForward_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DeleteWordForward_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEdit_QBaseContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ContextMenuEvent_IsBase(true);
        vktextedit->contextMenuEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnContextMenuEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTextEdit_LoadResource(KTextEdit* self, int typeVal, const QUrl* name) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QVariant(vktextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* KTextEdit_QBaseLoadResource(KTextEdit* self, int typeVal, const QUrl* name) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_LoadResource_IsBase(true);
        return new QVariant(vktextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnLoadResource(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_LoadResource_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KTextEdit_InputMethodQuery(const KTextEdit* self, int property) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QVariant(vktextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* KTextEdit_QBaseInputMethodQuery(const KTextEdit* self, int property) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vktextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInputMethodQuery(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_TimerEvent(KTextEdit* self, QTimerEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->timerEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseTimerEvent(KTextEdit* self, QTimerEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_TimerEvent_IsBase(true);
        vktextedit->timerEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnTimerEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_KeyReleaseEvent(KTextEdit* self, QKeyEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->keyReleaseEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseKeyReleaseEvent(KTextEdit* self, QKeyEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_KeyReleaseEvent_IsBase(true);
        vktextedit->keyReleaseEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnKeyReleaseEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ResizeEvent(KTextEdit* self, QResizeEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->resizeEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseResizeEvent(KTextEdit* self, QResizeEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ResizeEvent_IsBase(true);
        vktextedit->resizeEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnResizeEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_PaintEvent(KTextEdit* self, QPaintEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->paintEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBasePaintEvent(KTextEdit* self, QPaintEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_PaintEvent_IsBase(true);
        vktextedit->paintEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnPaintEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_MousePressEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->mousePressEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseMousePressEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MousePressEvent_IsBase(true);
        vktextedit->mousePressEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMousePressEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_MouseMoveEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->mouseMoveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseMouseMoveEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseMoveEvent_IsBase(true);
        vktextedit->mouseMoveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseMoveEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_MouseReleaseEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseMouseReleaseEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseReleaseEvent_IsBase(true);
        vktextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseReleaseEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_MouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseMouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseDoubleClickEvent_IsBase(true);
        vktextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseDoubleClickEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_FocusNextPrevChild(KTextEdit* self, bool next) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KTextEdit_QBaseFocusNextPrevChild(KTextEdit* self, bool next) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusNextPrevChild_IsBase(true);
        return vktextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusNextPrevChild(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DragEnterEvent(KTextEdit* self, QDragEnterEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->dragEnterEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDragEnterEvent(KTextEdit* self, QDragEnterEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragEnterEvent_IsBase(true);
        vktextedit->dragEnterEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragEnterEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->dragLeaveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragLeaveEvent_IsBase(true);
        vktextedit->dragLeaveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragLeaveEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DragMoveEvent(KTextEdit* self, QDragMoveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->dragMoveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDragMoveEvent(KTextEdit* self, QDragMoveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragMoveEvent_IsBase(true);
        vktextedit->dragMoveEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragMoveEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DropEvent(KTextEdit* self, QDropEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->dropEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDropEvent(KTextEdit* self, QDropEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DropEvent_IsBase(true);
        vktextedit->dropEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDropEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DropEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_FocusOutEvent(KTextEdit* self, QFocusEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->focusOutEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseFocusOutEvent(KTextEdit* self, QFocusEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusOutEvent_IsBase(true);
        vktextedit->focusOutEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusOutEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ShowEvent(KTextEdit* self, QShowEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->showEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KTextEdit_QBaseShowEvent(KTextEdit* self, QShowEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ShowEvent_IsBase(true);
        vktextedit->showEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnShowEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ChangeEvent(KTextEdit* self, QEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->changeEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseChangeEvent(KTextEdit* self, QEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ChangeEvent_IsBase(true);
        vktextedit->changeEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnChangeEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_WheelEvent(KTextEdit* self, QWheelEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->wheelEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KTextEdit_QBaseWheelEvent(KTextEdit* self, QWheelEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_WheelEvent_IsBase(true);
        vktextedit->wheelEvent(e);
    } else {
        ((VirtualKTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnWheelEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KTextEdit_CreateMimeDataFromSelection(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualKTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* KTextEdit_QBaseCreateMimeDataFromSelection(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vktextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualKTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCreateMimeDataFromSelection(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_CanInsertFromMimeData(const KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualKTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool KTextEdit_QBaseCanInsertFromMimeData(const KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CanInsertFromMimeData_IsBase(true);
        return vktextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualKTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCanInsertFromMimeData(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_InsertFromMimeData(KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->insertFromMimeData(source);
    } else {
        ((VirtualKTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void KTextEdit_QBaseInsertFromMimeData(KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InsertFromMimeData_IsBase(true);
        vktextedit->insertFromMimeData(source);
    } else {
        ((VirtualKTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInsertFromMimeData(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_InputMethodEvent(KTextEdit* self, QInputMethodEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->inputMethodEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KTextEdit_QBaseInputMethodEvent(KTextEdit* self, QInputMethodEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InputMethodEvent_IsBase(true);
        vktextedit->inputMethodEvent(param1);
    } else {
        ((VirtualKTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInputMethodEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ScrollContentsBy(KTextEdit* self, int dx, int dy) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KTextEdit_QBaseScrollContentsBy(KTextEdit* self, int dx, int dy) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ScrollContentsBy_IsBase(true);
        vktextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnScrollContentsBy(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DoSetTextCursor(KTextEdit* self, const QTextCursor* cursor) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualKTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDoSetTextCursor(KTextEdit* self, const QTextCursor* cursor) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DoSetTextCursor_IsBase(true);
        vktextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualKTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDoSetTextCursor(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEdit_MinimumSizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QSize(vktextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KTextEdit_QBaseMinimumSizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vktextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMinimumSizeHint(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEdit_SizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QSize(vktextedit->sizeHint());
    } else {
        return new QSize(((VirtualKTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KTextEdit_QBaseSizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SizeHint_IsBase(true);
        return new QSize(vktextedit->sizeHint());
    } else {
        return new QSize(((VirtualKTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSizeHint(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SizeHint_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SetupViewport(KTextEdit* self, QWidget* viewport) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setupViewport(viewport);
    } else {
        self->KTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void KTextEdit_QBaseSetupViewport(KTextEdit* self, QWidget* viewport) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetupViewport_IsBase(true);
        vktextedit->setupViewport(viewport);
    } else {
        self->KTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetupViewport(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_EventFilter(KTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualKTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KTextEdit_QBaseEventFilter(KTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_EventFilter_IsBase(true);
        return vktextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualKTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEventFilter(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_EventFilter_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_ViewportEvent(KTextEdit* self, QEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->viewportEvent(param1);
    } else {
        return ((VirtualKTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool KTextEdit_QBaseViewportEvent(KTextEdit* self, QEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportEvent_IsBase(true);
        return vktextedit->viewportEvent(param1);
    } else {
        return ((VirtualKTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnViewportEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KTextEdit_ViewportSizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QSize(vktextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KTextEdit_QBaseViewportSizeHint(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vktextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnViewportSizeHint(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_InitStyleOption(const KTextEdit* self, QStyleOptionFrame* option) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->initStyleOption(option);
    } else {
        ((VirtualKTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KTextEdit_QBaseInitStyleOption(const KTextEdit* self, QStyleOptionFrame* option) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InitStyleOption_IsBase(true);
        vktextedit->initStyleOption(option);
    } else {
        ((VirtualKTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInitStyleOption(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEdit_DevType(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->devType();
    } else {
        return self->KTextEdit::devType();
    }
}

// Base class handler implementation
int KTextEdit_QBaseDevType(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DevType_IsBase(true);
        return vktextedit->devType();
    } else {
        return self->KTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDevType(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DevType_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SetVisible(KTextEdit* self, bool visible) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setVisible(visible);
    } else {
        self->KTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void KTextEdit_QBaseSetVisible(KTextEdit* self, bool visible) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetVisible_IsBase(true);
        vktextedit->setVisible(visible);
    } else {
        self->KTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetVisible(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetVisible_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEdit_HeightForWidth(const KTextEdit* self, int param1) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KTextEdit_QBaseHeightForWidth(const KTextEdit* self, int param1) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HeightForWidth_IsBase(true);
        return vktextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHeightForWidth(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_HasHeightForWidth(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->hasHeightForWidth();
    } else {
        return self->KTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KTextEdit_QBaseHasHeightForWidth(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HasHeightForWidth_IsBase(true);
        return vktextedit->hasHeightForWidth();
    } else {
        return self->KTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHasHeightForWidth(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KTextEdit_PaintEngine(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->paintEngine();
    } else {
        return self->KTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KTextEdit_QBasePaintEngine(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_PaintEngine_IsBase(true);
        return vktextedit->paintEngine();
    } else {
        return self->KTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnPaintEngine(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_EnterEvent(KTextEdit* self, QEnterEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->enterEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseEnterEvent(KTextEdit* self, QEnterEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_EnterEvent_IsBase(true);
        vktextedit->enterEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEnterEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_LeaveEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->leaveEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseLeaveEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_LeaveEvent_IsBase(true);
        vktextedit->leaveEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnLeaveEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_MoveEvent(KTextEdit* self, QMoveEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->moveEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseMoveEvent(KTextEdit* self, QMoveEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MoveEvent_IsBase(true);
        vktextedit->moveEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMoveEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_CloseEvent(KTextEdit* self, QCloseEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->closeEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseCloseEvent(KTextEdit* self, QCloseEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CloseEvent_IsBase(true);
        vktextedit->closeEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCloseEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_TabletEvent(KTextEdit* self, QTabletEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->tabletEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseTabletEvent(KTextEdit* self, QTabletEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_TabletEvent_IsBase(true);
        vktextedit->tabletEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnTabletEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ActionEvent(KTextEdit* self, QActionEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->actionEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseActionEvent(KTextEdit* self, QActionEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ActionEvent_IsBase(true);
        vktextedit->actionEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnActionEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_HideEvent(KTextEdit* self, QHideEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->hideEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseHideEvent(KTextEdit* self, QHideEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HideEvent_IsBase(true);
        vktextedit->hideEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHideEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_HideEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_NativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KTextEdit_QBaseNativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_NativeEvent_IsBase(true);
        return vktextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnNativeEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEdit_Metric(const KTextEdit* self, int param1) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KTextEdit_QBaseMetric(const KTextEdit* self, int param1) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Metric_IsBase(true);
        return vktextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetric(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Metric_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_InitPainter(const KTextEdit* self, QPainter* painter) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->initPainter(painter);
    } else {
        ((VirtualKTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KTextEdit_QBaseInitPainter(const KTextEdit* self, QPainter* painter) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InitPainter_IsBase(true);
        vktextedit->initPainter(painter);
    } else {
        ((VirtualKTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInitPainter(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_InitPainter_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KTextEdit_Redirected(const KTextEdit* self, QPoint* offset) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->redirected(offset);
    } else {
        return ((VirtualKTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KTextEdit_QBaseRedirected(const KTextEdit* self, QPoint* offset) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Redirected_IsBase(true);
        return vktextedit->redirected(offset);
    } else {
        return ((VirtualKTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnRedirected(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Redirected_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KTextEdit_SharedPainter(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->sharedPainter();
    } else {
        return ((VirtualKTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KTextEdit_QBaseSharedPainter(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SharedPainter_IsBase(true);
        return vktextedit->sharedPainter();
    } else {
        return ((VirtualKTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSharedPainter(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ChildEvent(KTextEdit* self, QChildEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->childEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseChildEvent(KTextEdit* self, QChildEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ChildEvent_IsBase(true);
        vktextedit->childEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnChildEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_CustomEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->customEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEdit_QBaseCustomEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CustomEvent_IsBase(true);
        vktextedit->customEvent(event);
    } else {
        ((VirtualKTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCustomEvent(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ConnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->connectNotify(*signal);
    } else {
        ((VirtualKTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEdit_QBaseConnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ConnectNotify_IsBase(true);
        vktextedit->connectNotify(*signal);
    } else {
        ((VirtualKTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnConnectNotify(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DisconnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDisconnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DisconnectNotify_IsBase(true);
        vktextedit->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDisconnectNotify(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotDoReplace(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotDoReplace();
    } else {
        ((VirtualKTextEdit*)self)->slotDoReplace();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotDoReplace(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotDoReplace_IsBase(true);
        vktextedit->slotDoReplace();
    } else {
        ((VirtualKTextEdit*)self)->slotDoReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotDoReplace(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotDoReplace_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotDoReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotReplaceNext(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotReplaceNext();
    } else {
        ((VirtualKTextEdit*)self)->slotReplaceNext();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotReplaceNext(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotReplaceNext_IsBase(true);
        vktextedit->slotReplaceNext();
    } else {
        ((VirtualKTextEdit*)self)->slotReplaceNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotReplaceNext(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotReplaceNext_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotReplaceNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotDoFind(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotDoFind();
    } else {
        ((VirtualKTextEdit*)self)->slotDoFind();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotDoFind(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotDoFind_IsBase(true);
        vktextedit->slotDoFind();
    } else {
        ((VirtualKTextEdit*)self)->slotDoFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotDoFind(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotDoFind_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotDoFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotFind(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotFind();
    } else {
        ((VirtualKTextEdit*)self)->slotFind();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotFind(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFind_IsBase(true);
        vktextedit->slotFind();
    } else {
        ((VirtualKTextEdit*)self)->slotFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotFind(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFind_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotFindNext(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotFindNext();
    } else {
        ((VirtualKTextEdit*)self)->slotFindNext();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotFindNext(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFindNext_IsBase(true);
        vktextedit->slotFindNext();
    } else {
        ((VirtualKTextEdit*)self)->slotFindNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotFindNext(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFindNext_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotFindNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotFindPrevious(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotFindPrevious();
    } else {
        ((VirtualKTextEdit*)self)->slotFindPrevious();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotFindPrevious(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFindPrevious_IsBase(true);
        vktextedit->slotFindPrevious();
    } else {
        ((VirtualKTextEdit*)self)->slotFindPrevious();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotFindPrevious(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotFindPrevious_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotFindPrevious_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotReplace(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotReplace();
    } else {
        ((VirtualKTextEdit*)self)->slotReplace();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotReplace(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotReplace_IsBase(true);
        vktextedit->slotReplace();
    } else {
        ((VirtualKTextEdit*)self)->slotReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotReplace(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotReplace_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SlotSpeakText(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->slotSpeakText();
    } else {
        ((VirtualKTextEdit*)self)->slotSpeakText();
    }
}

// Base class handler implementation
void KTextEdit_QBaseSlotSpeakText(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotSpeakText_IsBase(true);
        vktextedit->slotSpeakText();
    } else {
        ((VirtualKTextEdit*)self)->slotSpeakText();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSlotSpeakText(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SlotSpeakText_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SlotSpeakText_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_ZoomInF(KTextEdit* self, float range) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void KTextEdit_QBaseZoomInF(KTextEdit* self, float range) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ZoomInF_IsBase(true);
        vktextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnZoomInF(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_SetViewportMargins(KTextEdit* self, int left, int top, int right, int bottom) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KTextEdit_QBaseSetViewportMargins(KTextEdit* self, int left, int top, int right, int bottom) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetViewportMargins_IsBase(true);
        vktextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetViewportMargins(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KTextEdit_ViewportMargins(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return new QMargins(vktextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KTextEdit_QBaseViewportMargins(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vktextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnViewportMargins(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_DrawFrame(KTextEdit* self, QPainter* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->drawFrame(param1);
    } else {
        ((VirtualKTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KTextEdit_QBaseDrawFrame(KTextEdit* self, QPainter* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DrawFrame_IsBase(true);
        vktextedit->drawFrame(param1);
    } else {
        ((VirtualKTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDrawFrame(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_UpdateMicroFocus(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->updateMicroFocus();
    } else {
        ((VirtualKTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KTextEdit_QBaseUpdateMicroFocus(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_UpdateMicroFocus_IsBase(true);
        vktextedit->updateMicroFocus();
    } else {
        ((VirtualKTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnUpdateMicroFocus(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_Create(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->create();
    } else {
        ((VirtualKTextEdit*)self)->create();
    }
}

// Base class handler implementation
void KTextEdit_QBaseCreate(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Create_IsBase(true);
        vktextedit->create();
    } else {
        ((VirtualKTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCreate(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Create_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEdit_Destroy(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->destroy();
    } else {
        ((VirtualKTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void KTextEdit_QBaseDestroy(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Destroy_IsBase(true);
        vktextedit->destroy();
    } else {
        ((VirtualKTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDestroy(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Destroy_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_FocusNextChild(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->focusNextChild();
    } else {
        return ((VirtualKTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KTextEdit_QBaseFocusNextChild(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusNextChild_IsBase(true);
        return vktextedit->focusNextChild();
    } else {
        return ((VirtualKTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusNextChild(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_FocusPreviousChild(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->focusPreviousChild();
    } else {
        return ((VirtualKTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KTextEdit_QBaseFocusPreviousChild(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusPreviousChild_IsBase(true);
        return vktextedit->focusPreviousChild();
    } else {
        return ((VirtualKTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusPreviousChild(KTextEdit* self, intptr_t slot) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEdit_Sender(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->sender();
    } else {
        return ((VirtualKTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEdit_QBaseSender(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Sender_IsBase(true);
        return vktextedit->sender();
    } else {
        return ((VirtualKTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSender(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Sender_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEdit_SenderSignalIndex(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->senderSignalIndex();
    } else {
        return ((VirtualKTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEdit_QBaseSenderSignalIndex(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SenderSignalIndex_IsBase(true);
        return vktextedit->senderSignalIndex();
    } else {
        return ((VirtualKTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSenderSignalIndex(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEdit_Receivers(const KTextEdit* self, const char* signal) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->receivers(signal);
    } else {
        return ((VirtualKTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEdit_QBaseReceivers(const KTextEdit* self, const char* signal) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Receivers_IsBase(true);
        return vktextedit->receivers(signal);
    } else {
        return ((VirtualKTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnReceivers(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_Receivers_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEdit_IsSignalConnected(const KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEdit_QBaseIsSignalConnected(const KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_IsSignalConnected_IsBase(true);
        return vktextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnIsSignalConnected(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KTextEdit_GetDecodedMetricF(const KTextEdit* self, int metricA, int metricB) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        return vktextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KTextEdit_QBaseGetDecodedMetricF(const KTextEdit* self, int metricA, int metricB) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_GetDecodedMetricF_IsBase(true);
        return vktextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnGetDecodedMetricF(const KTextEdit* self, intptr_t slot) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit && vktextedit->isVirtualKTextEdit) {
        vktextedit->setKTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKTextEdit::KTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void KTextEdit_Delete(KTextEdit* self) {
    delete self;
}
