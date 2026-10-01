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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEdit_Tr(const char* s) {
    auto _ret = KTextEdit::tr(s);
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
    self->setReadOnly(readOnly);
}

void KTextEdit_SetCheckSpellingEnabled(KTextEdit* self, bool check) {
    self->setCheckSpellingEnabled(check);
}

bool KTextEdit_CheckSpellingEnabled(const KTextEdit* self) {
    return self->checkSpellingEnabled();
}

bool KTextEdit_ShouldBlockBeSpellChecked(const KTextEdit* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->shouldBlockBeSpellChecked(block_QString);
}

void KTextEdit_HighlightWord(KTextEdit* self, int length, int pos) {
    self->highlightWord(static_cast<int>(length), static_cast<int>(pos));
}

void KTextEdit_CreateHighlighter(KTextEdit* self) {
    self->createHighlighter();
}

Sonnet__Highlighter* KTextEdit_Highlighter(const KTextEdit* self) {
    return self->highlighter();
}

void KTextEdit_SetHighlighter(KTextEdit* self, Sonnet__Highlighter* _highLighter) {
    self->setHighlighter(_highLighter);
}

QMenu* KTextEdit_MousePopupMenu(KTextEdit* self) {
    return self->mousePopupMenu();
}

void KTextEdit_EnableFindReplace(KTextEdit* self, bool enabled) {
    self->enableFindReplace(enabled);
}

libqt_string KTextEdit_SpellCheckingLanguage(const KTextEdit* self) {
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
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)(bool)>(&KTextEdit::checkSpellingChanged),
                       [self, slotFunc](bool param1) {
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
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)(const QString&)>(&KTextEdit::spellCheckStatus),
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

void KTextEdit_LanguageChanged(KTextEdit* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->languageChanged(language_QString);
}

void KTextEdit_Connect_LanguageChanged(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*, const char*) = reinterpret_cast<void (*)(KTextEdit*, const char*)>(slot);
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)(const QString&)>(&KTextEdit::languageChanged),
                       [self, slotFunc](const QString& language) {
                           const auto language_ret = language;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray language_b = language_ret.toUtf8();
                           auto language_str_len = language_b.length();
                           const char* language_str = static_cast<const char*>(malloc(language_str_len + 1));
                           memcpy((void*)language_str, language_b.data(), language_str_len);
                           ((char*)language_str)[language_str_len] = '\0';
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
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)(QMenu*)>(&KTextEdit::aboutToShowContextMenu),
                       [self, slotFunc](QMenu* menu) {
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
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)(const QString&, const QString&)>(&KTextEdit::spellCheckerAutoCorrect),
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

void KTextEdit_SpellCheckingFinished(KTextEdit* self) {
    self->spellCheckingFinished();
}

void KTextEdit_Connect_SpellCheckingFinished(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*) = reinterpret_cast<void (*)(KTextEdit*)>(slot);
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)()>(&KTextEdit::spellCheckingFinished),
                       [self, slotFunc]() {
                           slotFunc(self);
                       });
}

void KTextEdit_SpellCheckingCanceled(KTextEdit* self) {
    self->spellCheckingCanceled();
}

void KTextEdit_Connect_SpellCheckingCanceled(KTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KTextEdit*) = reinterpret_cast<void (*)(KTextEdit*)>(slot);
    KTextEdit::connect(self,
                       static_cast<void (KTextEdit::*)()>(&KTextEdit::spellCheckingCanceled),
                       [self, slotFunc]() {
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
    if (vktextedit) {
        return vktextedit->event(param1);
    }
    qFatal("Error: Protected method KTextEdit::event called without a directly constructed type");
}

void KTextEdit_KeyPressEvent(KTextEdit* self, QKeyEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->keyPressEvent(param1);
    }
}

void KTextEdit_FocusInEvent(KTextEdit* self, QFocusEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->focusInEvent(param1);
    }
}

void KTextEdit_DeleteWordBack(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->deleteWordBack();
    }
}

void KTextEdit_DeleteWordForward(KTextEdit* self) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->deleteWordForward();
    }
}

void KTextEdit_ContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->contextMenuEvent(param1);
    }
}

libqt_string KTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = KTextEdit::tr(s, c);
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
    auto _ret = KTextEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* KTextEdit_SuperMetaObject(const KTextEdit* self) {
    return (QMetaObject*)self->KTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetaObject(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_metaobject_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KTextEdit_SuperMetacast(KTextEdit* self, const char* param1) {
    return self->KTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetacast(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_metacast_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int KTextEdit_SuperMetacall(KTextEdit* self, int param1, int param2, void** param3) {
    return self->KTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetacall(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_metacall_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperSetReadOnly(KTextEdit* self, bool readOnly) {
    self->KTextEdit::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetReadOnly(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_setreadonly_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SetReadOnly_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperSetCheckSpellingEnabled(KTextEdit* self, bool check) {
    self->KTextEdit::setCheckSpellingEnabled(check);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetCheckSpellingEnabled(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_setcheckspellingenabled_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SetCheckSpellingEnabled_Callback>(slot);
}

// Base class handler implementation
bool KTextEdit_SuperCheckSpellingEnabled(const KTextEdit* self) {
    return self->KTextEdit::checkSpellingEnabled();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCheckSpellingEnabled(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_checkspellingenabled_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CheckSpellingEnabled_Callback>(slot);
}

// Base class handler implementation
bool KTextEdit_SuperShouldBlockBeSpellChecked(const KTextEdit* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->KTextEdit::shouldBlockBeSpellChecked(block_QString);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnShouldBlockBeSpellChecked(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_shouldblockbespellchecked_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ShouldBlockBeSpellChecked_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperCreateHighlighter(KTextEdit* self) {
    self->KTextEdit::createHighlighter();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCreateHighlighter(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_createhighlighter_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CreateHighlighter_Callback>(slot);
}

// Base class handler implementation
QMenu* KTextEdit_SuperMousePopupMenu(KTextEdit* self) {
    return self->KTextEdit::mousePopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMousePopupMenu(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_mousepopupmenu_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MousePopupMenu_Callback>(slot);
}

// Base class handler implementation
bool KTextEdit_SuperEvent(KTextEdit* self, QEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->KTextEdit::event(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_event_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_Event_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperKeyPressEvent(KTextEdit* self, QKeyEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnKeyPressEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_keypressevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperFocusInEvent(KTextEdit* self, QFocusEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusInEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_focusinevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperDeleteWordBack(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::deleteWordBack();
    } else
        qFatal("Error: Protected virtual method KTextEdit::deleteWordBack called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDeleteWordBack(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_deletewordback_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DeleteWordBack_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperDeleteWordForward(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::deleteWordForward();
    } else
        qFatal("Error: Protected virtual method KTextEdit::deleteWordForward called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDeleteWordForward(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_deletewordforward_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DeleteWordForward_Callback>(slot);
}

// Base class handler implementation
void KTextEdit_SuperContextMenuEvent(KTextEdit* self, QContextMenuEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnContextMenuEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_contextmenuevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTextEdit_LoadResource(KTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* KTextEdit_SuperLoadResource(KTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->KTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnLoadResource(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_loadresource_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* KTextEdit_InputMethodQuery(const KTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* KTextEdit_SuperInputMethodQuery(const KTextEdit* self, int property) {
    return new QVariant(self->KTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInputMethodQuery(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_inputmethodquery_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_TimerEvent(KTextEdit* self, QTimerEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperTimerEvent(KTextEdit* self, QTimerEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnTimerEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_timerevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_KeyReleaseEvent(KTextEdit* self, QKeyEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperKeyReleaseEvent(KTextEdit* self, QKeyEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnKeyReleaseEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_keyreleaseevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ResizeEvent(KTextEdit* self, QResizeEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperResizeEvent(KTextEdit* self, QResizeEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnResizeEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_resizeevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_PaintEvent(KTextEdit* self, QPaintEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperPaintEvent(KTextEdit* self, QPaintEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnPaintEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_paintevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_MousePressEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperMousePressEvent(KTextEdit* self, QMouseEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMousePressEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_mousepressevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_MouseMoveEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperMouseMoveEvent(KTextEdit* self, QMouseEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseMoveEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_mousemoveevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_MouseReleaseEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperMouseReleaseEvent(KTextEdit* self, QMouseEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseReleaseEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_mousereleaseevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_MouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperMouseDoubleClickEvent(KTextEdit* self, QMouseEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMouseDoubleClickEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_FocusNextPrevChild(KTextEdit* self, bool next) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        return vktextedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEdit_SuperFocusNextPrevChild(KTextEdit* self, bool next) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->KTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusNextPrevChild(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_focusnextprevchild_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DragEnterEvent(KTextEdit* self, QDragEnterEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDragEnterEvent(KTextEdit* self, QDragEnterEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragEnterEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_dragenterevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDragLeaveEvent(KTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragLeaveEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_dragleaveevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DragMoveEvent(KTextEdit* self, QDragMoveEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDragMoveEvent(KTextEdit* self, QDragMoveEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDragMoveEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_dragmoveevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DropEvent(KTextEdit* self, QDropEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDropEvent(KTextEdit* self, QDropEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDropEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_dropevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_FocusOutEvent(KTextEdit* self, QFocusEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperFocusOutEvent(KTextEdit* self, QFocusEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnFocusOutEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_focusoutevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ShowEvent(KTextEdit* self, QShowEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperShowEvent(KTextEdit* self, QShowEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnShowEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_showevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ChangeEvent(KTextEdit* self, QEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperChangeEvent(KTextEdit* self, QEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnChangeEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_changeevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_WheelEvent(KTextEdit* self, QWheelEvent* e) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperWheelEvent(KTextEdit* self, QWheelEvent* e) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnWheelEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_wheelevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KTextEdit_CreateMimeDataFromSelection(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        return vktextedit->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method KTextEdit::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* KTextEdit_SuperCreateMimeDataFromSelection(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->KTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method KTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCreateMimeDataFromSelection(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_CanInsertFromMimeData(const KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        return vktextedit->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEdit_SuperCanInsertFromMimeData(const KTextEdit* self, const QMimeData* source) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->KTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCanInsertFromMimeData(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_InsertFromMimeData(KTextEdit* self, const QMimeData* source) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperInsertFromMimeData(KTextEdit* self, const QMimeData* source) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInsertFromMimeData(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_insertfrommimedata_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_InputMethodEvent(KTextEdit* self, QInputMethodEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperInputMethodEvent(KTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInputMethodEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_inputmethodevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ScrollContentsBy(KTextEdit* self, int dx, int dy) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KTextEdit::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperScrollContentsBy(KTextEdit* self, int dx, int dy) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnScrollContentsBy(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_scrollcontentsby_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DoSetTextCursor(KTextEdit* self, const QTextCursor* cursor) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDoSetTextCursor(KTextEdit* self, const QTextCursor* cursor) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method KTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDoSetTextCursor(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_dosettextcursor_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEdit_MinimumSizeHint(const KTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KTextEdit_SuperMinimumSizeHint(const KTextEdit* self) {
    return new QSize(self->KTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMinimumSizeHint(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_minimumsizehint_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEdit_SizeHint(const KTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KTextEdit_SuperSizeHint(const KTextEdit* self) {
    return new QSize(self->KTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSizeHint(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_sizehint_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_SetupViewport(KTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KTextEdit_SuperSetupViewport(KTextEdit* self, QWidget* viewport) {
    self->KTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetupViewport(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_setupviewport_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_EventFilter(KTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        return vktextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEdit_SuperEventFilter(KTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->KTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEventFilter(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_eventfilter_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_ViewportEvent(KTextEdit* self, QEvent* param1) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        return vktextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEdit_SuperViewportEvent(KTextEdit* self, QEvent* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->KTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method KTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnViewportEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_viewportevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KTextEdit_ViewportSizeHint(const KTextEdit* self) {
    return new QSize((self->*&VirtualKTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KTextEdit_SuperViewportSizeHint(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        return new QSize(vktextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method KTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnViewportSizeHint(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_viewportsizehint_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_InitStyleOption(const KTextEdit* self, QStyleOptionFrame* option) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        vktextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperInitStyleOption(const KTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        vktextedit->KTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInitStyleOption(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_initstyleoption_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KTextEdit_DevType(const KTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int KTextEdit_SuperDevType(const KTextEdit* self) {
    return self->KTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDevType(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_devtype_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_SetVisible(KTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KTextEdit_SuperSetVisible(KTextEdit* self, bool visible) {
    self->KTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSetVisible(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_setvisible_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KTextEdit_HeightForWidth(const KTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KTextEdit_SuperHeightForWidth(const KTextEdit* self, int param1) {
    return self->KTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHeightForWidth(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_heightforwidth_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_HasHeightForWidth(const KTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KTextEdit_SuperHasHeightForWidth(const KTextEdit* self) {
    return self->KTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHasHeightForWidth(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_hasheightforwidth_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KTextEdit_PaintEngine(const KTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KTextEdit_SuperPaintEngine(const KTextEdit* self) {
    return self->KTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnPaintEngine(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_paintengine_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_EnterEvent(KTextEdit* self, QEnterEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperEnterEvent(KTextEdit* self, QEnterEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnEnterEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_enterevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_LeaveEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperLeaveEvent(KTextEdit* self, QEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnLeaveEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_leaveevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_MoveEvent(KTextEdit* self, QMoveEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperMoveEvent(KTextEdit* self, QMoveEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMoveEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_moveevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_CloseEvent(KTextEdit* self, QCloseEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperCloseEvent(KTextEdit* self, QCloseEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCloseEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_closeevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_TabletEvent(KTextEdit* self, QTabletEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperTabletEvent(KTextEdit* self, QTabletEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnTabletEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_tabletevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ActionEvent(KTextEdit* self, QActionEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperActionEvent(KTextEdit* self, QActionEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnActionEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_actionevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_HideEvent(KTextEdit* self, QHideEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperHideEvent(KTextEdit* self, QHideEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnHideEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_hideevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KTextEdit_NativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        return vktextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KTextEdit_SuperNativeEvent(KTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->KTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnNativeEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_nativeevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KTextEdit_Metric(const KTextEdit* self, int param1) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        return vktextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KTextEdit_SuperMetric(const KTextEdit* self, int param1) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->KTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnMetric(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_metric_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_InitPainter(const KTextEdit* self, QPainter* painter) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        vktextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperInitPainter(const KTextEdit* self, QPainter* painter) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        vktextedit->KTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnInitPainter(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_initpainter_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KTextEdit_Redirected(const KTextEdit* self, QPoint* offset) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        return vktextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KTextEdit_SuperRedirected(const KTextEdit* self, QPoint* offset) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->KTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnRedirected(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_redirected_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KTextEdit_SharedPainter(const KTextEdit* self) {
    auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self));
    if (vktextedit) {
        return vktextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KTextEdit_SuperSharedPainter(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->KTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnSharedPainter(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        vktextedit->ktextedit_sharedpainter_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ChildEvent(KTextEdit* self, QChildEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperChildEvent(KTextEdit* self, QChildEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnChildEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_childevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_CustomEvent(KTextEdit* self, QEvent* event) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperCustomEvent(KTextEdit* self, QEvent* event) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnCustomEvent(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_customevent_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_ConnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperConnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnConnectNotify(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_connectnotify_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KTextEdit_DisconnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self);
    if (vktextedit) {
        vktextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KTextEdit_SuperDisconnectNotify(KTextEdit* self, const QMetaMethod* signal) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->KTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KTextEdit_OnDisconnectNotify(KTextEdit* self, intptr_t slot) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self))
        vktextedit->ktextedit_disconnectnotify_callback = reinterpret_cast<VirtualKTextEdit::KTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KTextEdit_SlotDoReplace(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotDoReplace();
    } else
        qFatal("Error: Protected method KTextEdit::slotDoReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotReplaceNext(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotReplaceNext();
    } else
        qFatal("Error: Protected method KTextEdit::slotReplaceNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotDoFind(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotDoFind();
    } else
        qFatal("Error: Protected method KTextEdit::slotDoFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotFind(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotFind();
    } else
        qFatal("Error: Protected method KTextEdit::slotFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotFindNext(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotFindNext();
    } else
        qFatal("Error: Protected method KTextEdit::slotFindNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotFindPrevious(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotFindPrevious();
    } else
        qFatal("Error: Protected method KTextEdit::slotFindPrevious called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotReplace(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotReplace();
    } else
        qFatal("Error: Protected method KTextEdit::slotReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SlotSpeakText(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::slotSpeakText();
    } else
        qFatal("Error: Protected method KTextEdit::slotSpeakText called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_ZoomInF(KTextEdit* self, float range) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method KTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_SetViewportMargins(KTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KTextEdit_ViewportMargins(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self)))
        return new QMargins(vktextedit->viewportMargins());
    qFatal("Error: Protected method KTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_DrawFrame(KTextEdit* self, QPainter* param1) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method KTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_UpdateMicroFocus(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method KTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_Create(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::create();
    } else
        qFatal("Error: Protected method KTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KTextEdit_Destroy(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        vktextedit->VirtualKTextEdit::destroy();
    } else
        qFatal("Error: Protected method KTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEdit_FocusNextChild(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->VirtualKTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method KTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEdit_FocusPreviousChild(KTextEdit* self) {
    if (auto* vktextedit = dynamic_cast<VirtualKTextEdit*>(self)) {
        return vktextedit->VirtualKTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method KTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KTextEdit_Sender(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->VirtualKTextEdit::sender();
    } else
        qFatal("Error: Protected method KTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEdit_SenderSignalIndex(const KTextEdit* self) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->VirtualKTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method KTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KTextEdit_Receivers(const KTextEdit* self, const char* signal) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->VirtualKTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method KTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KTextEdit_IsSignalConnected(const KTextEdit* self, const QMetaMethod* signal) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->VirtualKTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KTextEdit_GetDecodedMetricF(const KTextEdit* self, int metricA, int metricB) {
    if (auto* vktextedit = const_cast<VirtualKTextEdit*>(dynamic_cast<const VirtualKTextEdit*>(self))) {
        return vktextedit->VirtualKTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KTextEdit::getDecodedMetricF called without a directly constructed type");
}

void KTextEdit_Delete(KTextEdit* self) {
    delete self;
}
