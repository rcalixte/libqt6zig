#include <KRichTextEdit>
#include <KTextEdit>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
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
#include <krichtextedit.h>
#include "libkrichtextedit.h"
#include "libkrichtextedit.hxx"

KRichTextEdit* KRichTextEdit_new(QWidget* parent) {
    return new VirtualKRichTextEdit(parent);
}

KRichTextEdit* KRichTextEdit_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextEdit(text_QString);
}

KRichTextEdit* KRichTextEdit_new3() {
    return new VirtualKRichTextEdit();
}

KRichTextEdit* KRichTextEdit_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextEdit(text_QString, parent);
}

QMetaObject* KRichTextEdit_MetaObject(const KRichTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRichTextEdit_Metacast(KRichTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRichTextEdit_Metacall(KRichTextEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRichTextEdit_Tr(const char* s) {
    auto _ret = KRichTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_EnableRichTextMode(KRichTextEdit* self) {
    self->enableRichTextMode();
}

int KRichTextEdit_TextMode(const KRichTextEdit* self) {
    return static_cast<int>(self->textMode());
}

libqt_string KRichTextEdit_TextOrHtml(const KRichTextEdit* self) {
    auto _ret = self->textOrHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SetTextOrHtml(KRichTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTextOrHtml(text_QString);
}

libqt_string KRichTextEdit_CurrentLinkText(const KRichTextEdit* self) {
    auto _ret = self->currentLinkText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRichTextEdit_CurrentLinkUrl(const KRichTextEdit* self) {
    auto _ret = self->currentLinkUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SelectLinkText(const KRichTextEdit* self, QTextCursor* cursor) {
    self->selectLinkText(cursor);
}

void KRichTextEdit_SelectLinkText2(const KRichTextEdit* self) {
    self->selectLinkText();
}

void KRichTextEdit_UpdateLink(KRichTextEdit* self, const libqt_string linkUrl, const libqt_string linkText) {
    QString linkUrl_QString = QString::fromUtf8(linkUrl.data, linkUrl.len);
    QString linkText_QString = QString::fromUtf8(linkText.data, linkText.len);
    self->updateLink(linkUrl_QString, linkText_QString);
}

bool KRichTextEdit_CanIndentList(const KRichTextEdit* self) {
    return self->canIndentList();
}

bool KRichTextEdit_CanDedentList(const KRichTextEdit* self) {
    return self->canDedentList();
}

void KRichTextEdit_AlignLeft(KRichTextEdit* self) {
    self->alignLeft();
}

void KRichTextEdit_AlignCenter(KRichTextEdit* self) {
    self->alignCenter();
}

void KRichTextEdit_AlignRight(KRichTextEdit* self) {
    self->alignRight();
}

void KRichTextEdit_AlignJustify(KRichTextEdit* self) {
    self->alignJustify();
}

void KRichTextEdit_MakeRightToLeft(KRichTextEdit* self) {
    self->makeRightToLeft();
}

void KRichTextEdit_MakeLeftToRight(KRichTextEdit* self) {
    self->makeLeftToRight();
}

void KRichTextEdit_SetListStyle(KRichTextEdit* self, int _styleIndex) {
    self->setListStyle(static_cast<int>(_styleIndex));
}

void KRichTextEdit_IndentListMore(KRichTextEdit* self) {
    self->indentListMore();
}

void KRichTextEdit_IndentListLess(KRichTextEdit* self) {
    self->indentListLess();
}

void KRichTextEdit_SetFontFamily(KRichTextEdit* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setFontFamily(fontFamily_QString);
}

void KRichTextEdit_SetFontSize(KRichTextEdit* self, int size) {
    self->setFontSize(static_cast<int>(size));
}

void KRichTextEdit_SetFont(KRichTextEdit* self, const QFont* font) {
    self->setFont(*font);
}

void KRichTextEdit_SetTextBold(KRichTextEdit* self, bool bold) {
    self->setTextBold(bold);
}

void KRichTextEdit_SetTextItalic(KRichTextEdit* self, bool italic) {
    self->setTextItalic(italic);
}

void KRichTextEdit_SetTextUnderline(KRichTextEdit* self, bool underline) {
    self->setTextUnderline(underline);
}

void KRichTextEdit_SetTextStrikeOut(KRichTextEdit* self, bool strikeOut) {
    self->setTextStrikeOut(strikeOut);
}

void KRichTextEdit_SetTextForegroundColor(KRichTextEdit* self, const QColor* color) {
    self->setTextForegroundColor(*color);
}

void KRichTextEdit_SetTextBackgroundColor(KRichTextEdit* self, const QColor* color) {
    self->setTextBackgroundColor(*color);
}

void KRichTextEdit_InsertHorizontalRule(KRichTextEdit* self) {
    self->insertHorizontalRule();
}

void KRichTextEdit_SwitchToPlainText(KRichTextEdit* self) {
    self->switchToPlainText();
}

libqt_string KRichTextEdit_ToCleanHtml(const KRichTextEdit* self) {
    auto _ret = self->toCleanHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SetTextSuperScript(KRichTextEdit* self, bool superscript) {
    self->setTextSuperScript(superscript);
}

void KRichTextEdit_SetTextSubScript(KRichTextEdit* self, bool subscript) {
    self->setTextSubScript(subscript);
}

void KRichTextEdit_SetHeadingLevel(KRichTextEdit* self, int level) {
    self->setHeadingLevel(static_cast<int>(level));
}

void KRichTextEdit_InsertPlainTextImplementation(KRichTextEdit* self) {
    self->insertPlainTextImplementation();
}

void KRichTextEdit_TextModeChanged(KRichTextEdit* self, int mode) {
    self->textModeChanged(static_cast<KRichTextEdit::Mode>(mode));
}

void KRichTextEdit_Connect_TextModeChanged(KRichTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KRichTextEdit*, int) = reinterpret_cast<void (*)(KRichTextEdit*, int)>(slot);
    KRichTextEdit::connect(self,
                           static_cast<void (KRichTextEdit::*)(KRichTextEdit::Mode)>(&KRichTextEdit::textModeChanged),
                           [self, slotFunc](KRichTextEdit::Mode mode) {
                               int sigval1 = static_cast<int>(mode);
                               slotFunc(self, sigval1);
                           });
}

void KRichTextEdit_KeyPressEvent(KRichTextEdit* self, QKeyEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->keyPressEvent(event);
    }
}

libqt_string KRichTextEdit_Tr2(const char* s, const char* c) {
    auto _ret = KRichTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRichTextEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRichTextEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* KRichTextEdit_SuperMetaObject(const KRichTextEdit* self) {
    return (QMetaObject*)self->KRichTextEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetaObject(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_metaobject_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRichTextEdit_SuperMetacast(KRichTextEdit* self, const char* param1) {
    return self->KRichTextEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetacast(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_metacast_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRichTextEdit_SuperMetacall(KRichTextEdit* self, int param1, int param2, void** param3) {
    return self->KRichTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetacall(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_metacall_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
void KRichTextEdit_SuperKeyPressEvent(KRichTextEdit* self, QKeyEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnKeyPressEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_keypressevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_SetReadOnly(KRichTextEdit* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

// Base class handler implementation
void KRichTextEdit_SuperSetReadOnly(KRichTextEdit* self, bool readOnly) {
    self->KRichTextEdit::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetReadOnly(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_setreadonly_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetReadOnly_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_SetCheckSpellingEnabled(KRichTextEdit* self, bool check) {
    self->setCheckSpellingEnabled(check);
}

// Base class handler implementation
void KRichTextEdit_SuperSetCheckSpellingEnabled(KRichTextEdit* self, bool check) {
    self->KRichTextEdit::setCheckSpellingEnabled(check);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetCheckSpellingEnabled(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_setcheckspellingenabled_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetCheckSpellingEnabled_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_CheckSpellingEnabled(const KRichTextEdit* self) {
    return self->checkSpellingEnabled();
}

// Base class handler implementation
bool KRichTextEdit_SuperCheckSpellingEnabled(const KRichTextEdit* self) {
    return self->KRichTextEdit::checkSpellingEnabled();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCheckSpellingEnabled(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_checkspellingenabled_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CheckSpellingEnabled_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_ShouldBlockBeSpellChecked(const KRichTextEdit* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->shouldBlockBeSpellChecked(block_QString);
}

// Base class handler implementation
bool KRichTextEdit_SuperShouldBlockBeSpellChecked(const KRichTextEdit* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->KRichTextEdit::shouldBlockBeSpellChecked(block_QString);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnShouldBlockBeSpellChecked(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_shouldblockbespellchecked_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ShouldBlockBeSpellChecked_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_CreateHighlighter(KRichTextEdit* self) {
    self->createHighlighter();
}

// Base class handler implementation
void KRichTextEdit_SuperCreateHighlighter(KRichTextEdit* self) {
    self->KRichTextEdit::createHighlighter();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCreateHighlighter(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_createhighlighter_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CreateHighlighter_Callback>(slot);
}

// Derived class handler implementation
QMenu* KRichTextEdit_MousePopupMenu(KRichTextEdit* self) {
    return self->mousePopupMenu();
}

// Base class handler implementation
QMenu* KRichTextEdit_SuperMousePopupMenu(KRichTextEdit* self) {
    return self->KRichTextEdit::mousePopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMousePopupMenu(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_mousepopupmenu_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MousePopupMenu_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_Event(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        return vkrichtextedit->event(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperEvent(KRichTextEdit* self, QEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->KRichTextEdit::event(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_event_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Event_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_FocusInEvent(KRichTextEdit* self, QFocusEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperFocusInEvent(KRichTextEdit* self, QFocusEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusInEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_focusinevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DeleteWordBack(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->deleteWordBack();
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::deleteWordBack called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDeleteWordBack(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::deleteWordBack();
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::deleteWordBack called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDeleteWordBack(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_deletewordback_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DeleteWordBack_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DeleteWordForward(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->deleteWordForward();
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::deleteWordForward called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDeleteWordForward(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::deleteWordForward();
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::deleteWordForward called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDeleteWordForward(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_deletewordforward_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DeleteWordForward_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnContextMenuEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_contextmenuevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRichTextEdit_LoadResource(KRichTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* KRichTextEdit_SuperLoadResource(KRichTextEdit* self, int typeVal, const QUrl* name) {
    return new QVariant(self->KRichTextEdit::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnLoadResource(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_loadresource_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRichTextEdit_InputMethodQuery(const KRichTextEdit* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* KRichTextEdit_SuperInputMethodQuery(const KRichTextEdit* self, int property) {
    return new QVariant(self->KRichTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInputMethodQuery(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_inputmethodquery_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_TimerEvent(KRichTextEdit* self, QTimerEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperTimerEvent(KRichTextEdit* self, QTimerEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnTimerEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_timerevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_KeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperKeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnKeyReleaseEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_keyreleaseevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ResizeEvent(KRichTextEdit* self, QResizeEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperResizeEvent(KRichTextEdit* self, QResizeEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnResizeEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_resizeevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_PaintEvent(KRichTextEdit* self, QPaintEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperPaintEvent(KRichTextEdit* self, QPaintEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnPaintEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_paintevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_MousePressEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperMousePressEvent(KRichTextEdit* self, QMouseEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMousePressEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_mousepressevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_MouseMoveEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperMouseMoveEvent(KRichTextEdit* self, QMouseEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseMoveEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_mousemoveevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_MouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperMouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseReleaseEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_mousereleaseevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_MouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperMouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseDoubleClickEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_FocusNextPrevChild(KRichTextEdit* self, bool next) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        return vkrichtextedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperFocusNextPrevChild(KRichTextEdit* self, bool next) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->KRichTextEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusNextPrevChild(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_focusnextprevchild_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragEnterEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_dragenterevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragLeaveEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_dragleaveevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragMoveEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_dragmoveevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DropEvent(KRichTextEdit* self, QDropEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDropEvent(KRichTextEdit* self, QDropEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDropEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_dropevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_FocusOutEvent(KRichTextEdit* self, QFocusEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperFocusOutEvent(KRichTextEdit* self, QFocusEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusOutEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_focusoutevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ShowEvent(KRichTextEdit* self, QShowEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperShowEvent(KRichTextEdit* self, QShowEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnShowEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_showevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ChangeEvent(KRichTextEdit* self, QEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperChangeEvent(KRichTextEdit* self, QEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnChangeEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_changeevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_WheelEvent(KRichTextEdit* self, QWheelEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperWheelEvent(KRichTextEdit* self, QWheelEvent* e) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnWheelEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_wheelevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KRichTextEdit_CreateMimeDataFromSelection(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        return vkrichtextedit->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* KRichTextEdit_SuperCreateMimeDataFromSelection(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->KRichTextEdit::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCreateMimeDataFromSelection(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_createmimedatafromselection_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_CanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        return vkrichtextedit->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperCanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->KRichTextEdit::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCanInsertFromMimeData(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_caninsertfrommimedata_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_InsertFromMimeData(KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperInsertFromMimeData(KRichTextEdit* self, const QMimeData* source) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInsertFromMimeData(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_insertfrommimedata_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_InputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperInputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInputMethodEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_inputmethodevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ScrollContentsBy(KRichTextEdit* self, int dx, int dy) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperScrollContentsBy(KRichTextEdit* self, int dx, int dy) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnScrollContentsBy(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_scrollcontentsby_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDoSetTextCursor(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_dosettextcursor_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextEdit_MinimumSizeHint(const KRichTextEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KRichTextEdit_SuperMinimumSizeHint(const KRichTextEdit* self) {
    return new QSize(self->KRichTextEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMinimumSizeHint(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_minimumsizehint_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextEdit_SizeHint(const KRichTextEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KRichTextEdit_SuperSizeHint(const KRichTextEdit* self) {
    return new QSize(self->KRichTextEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSizeHint(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_sizehint_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_SetupViewport(KRichTextEdit* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KRichTextEdit_SuperSetupViewport(KRichTextEdit* self, QWidget* viewport) {
    self->KRichTextEdit::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetupViewport(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_setupviewport_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_EventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        return vkrichtextedit->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperEventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->KRichTextEdit::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEventFilter(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_eventfilter_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_ViewportEvent(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        return vkrichtextedit->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperViewportEvent(KRichTextEdit* self, QEvent* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->KRichTextEdit::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnViewportEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_viewportevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextEdit_ViewportSizeHint(const KRichTextEdit* self) {
    return new QSize((self->*&VirtualKRichTextEdit::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KRichTextEdit_SuperViewportSizeHint(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        return new QSize(vkrichtextedit->viewportSizeHint());
    qFatal("Error: Protected virtual method KRichTextEdit::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnViewportSizeHint(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_viewportsizehint_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_InitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        vkrichtextedit->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperInitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        vkrichtextedit->KRichTextEdit::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInitStyleOption(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_initstyleoption_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KRichTextEdit_DevType(const KRichTextEdit* self) {
    return self->devType();
}

// Base class handler implementation
int KRichTextEdit_SuperDevType(const KRichTextEdit* self) {
    return self->KRichTextEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDevType(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_devtype_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_SetVisible(KRichTextEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KRichTextEdit_SuperSetVisible(KRichTextEdit* self, bool visible) {
    self->KRichTextEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetVisible(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_setvisible_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KRichTextEdit_HeightForWidth(const KRichTextEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KRichTextEdit_SuperHeightForWidth(const KRichTextEdit* self, int param1) {
    return self->KRichTextEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHeightForWidth(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_heightforwidth_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_HasHeightForWidth(const KRichTextEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KRichTextEdit_SuperHasHeightForWidth(const KRichTextEdit* self) {
    return self->KRichTextEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHasHeightForWidth(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_hasheightforwidth_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KRichTextEdit_PaintEngine(const KRichTextEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KRichTextEdit_SuperPaintEngine(const KRichTextEdit* self) {
    return self->KRichTextEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnPaintEngine(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_paintengine_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_EnterEvent(KRichTextEdit* self, QEnterEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperEnterEvent(KRichTextEdit* self, QEnterEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEnterEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_enterevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_LeaveEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperLeaveEvent(KRichTextEdit* self, QEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnLeaveEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_leaveevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_MoveEvent(KRichTextEdit* self, QMoveEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperMoveEvent(KRichTextEdit* self, QMoveEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMoveEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_moveevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_CloseEvent(KRichTextEdit* self, QCloseEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperCloseEvent(KRichTextEdit* self, QCloseEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCloseEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_closeevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_TabletEvent(KRichTextEdit* self, QTabletEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperTabletEvent(KRichTextEdit* self, QTabletEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnTabletEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_tabletevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ActionEvent(KRichTextEdit* self, QActionEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperActionEvent(KRichTextEdit* self, QActionEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnActionEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_actionevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_HideEvent(KRichTextEdit* self, QHideEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperHideEvent(KRichTextEdit* self, QHideEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHideEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_hideevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextEdit_NativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        return vkrichtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextEdit_SuperNativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->KRichTextEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnNativeEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_nativeevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRichTextEdit_Metric(const KRichTextEdit* self, int param1) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        return vkrichtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KRichTextEdit_SuperMetric(const KRichTextEdit* self, int param1) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->KRichTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetric(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_metric_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_InitPainter(const KRichTextEdit* self, QPainter* painter) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        vkrichtextedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperInitPainter(const KRichTextEdit* self, QPainter* painter) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        vkrichtextedit->KRichTextEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInitPainter(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_initpainter_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KRichTextEdit_Redirected(const KRichTextEdit* self, QPoint* offset) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        return vkrichtextedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KRichTextEdit_SuperRedirected(const KRichTextEdit* self, QPoint* offset) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->KRichTextEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnRedirected(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_redirected_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KRichTextEdit_SharedPainter(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit) {
        return vkrichtextedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KRichTextEdit_SuperSharedPainter(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->KRichTextEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSharedPainter(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        vkrichtextedit->krichtextedit_sharedpainter_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ChildEvent(KRichTextEdit* self, QChildEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperChildEvent(KRichTextEdit* self, QChildEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnChildEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_childevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_CustomEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperCustomEvent(KRichTextEdit* self, QEvent* event) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCustomEvent(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_customevent_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_ConnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperConnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnConnectNotify(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_connectnotify_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRichTextEdit_DisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit) {
        vkrichtextedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRichTextEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextEdit_SuperDisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->KRichTextEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRichTextEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDisconnectNotify(KRichTextEdit* self, intptr_t slot) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self))
        vkrichtextedit->krichtextedit_disconnectnotify_callback = reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRichTextEdit_SlotDoReplace(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotDoReplace();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotDoReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotReplaceNext(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotReplaceNext();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotReplaceNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotDoFind(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotDoFind();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotDoFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotFind(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotFind();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotFindNext(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotFindNext();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotFindNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotFindPrevious(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotFindPrevious();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotFindPrevious called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotReplace(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotReplace();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SlotSpeakText(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::slotSpeakText();
    } else
        qFatal("Error: Protected method KRichTextEdit::slotSpeakText called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_ZoomInF(KRichTextEdit* self, float range) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method KRichTextEdit::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_SetViewportMargins(KRichTextEdit* self, int left, int top, int right, int bottom) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KRichTextEdit::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KRichTextEdit_ViewportMargins(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self)))
        return new QMargins(vkrichtextedit->viewportMargins());
    qFatal("Error: Protected method KRichTextEdit::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_DrawFrame(KRichTextEdit* self, QPainter* param1) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::drawFrame(param1);
    } else
        qFatal("Error: Protected method KRichTextEdit::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_UpdateMicroFocus(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method KRichTextEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_Create(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::create();
    } else
        qFatal("Error: Protected method KRichTextEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextEdit_Destroy(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        vkrichtextedit->VirtualKRichTextEdit::destroy();
    } else
        qFatal("Error: Protected method KRichTextEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextEdit_FocusNextChild(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->VirtualKRichTextEdit::focusNextChild();
    } else
        qFatal("Error: Protected method KRichTextEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextEdit_FocusPreviousChild(KRichTextEdit* self) {
    if (auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self)) {
        return vkrichtextedit->VirtualKRichTextEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method KRichTextEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRichTextEdit_Sender(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->VirtualKRichTextEdit::sender();
    } else
        qFatal("Error: Protected method KRichTextEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRichTextEdit_SenderSignalIndex(const KRichTextEdit* self) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->VirtualKRichTextEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRichTextEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRichTextEdit_Receivers(const KRichTextEdit* self, const char* signal) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->VirtualKRichTextEdit::receivers(signal);
    } else
        qFatal("Error: Protected method KRichTextEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextEdit_IsSignalConnected(const KRichTextEdit* self, const QMetaMethod* signal) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->VirtualKRichTextEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRichTextEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KRichTextEdit_GetDecodedMetricF(const KRichTextEdit* self, int metricA, int metricB) {
    if (auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self))) {
        return vkrichtextedit->VirtualKRichTextEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KRichTextEdit::getDecodedMetricF called without a directly constructed type");
}

void KRichTextEdit_Delete(KRichTextEdit* self) {
    delete self;
}
