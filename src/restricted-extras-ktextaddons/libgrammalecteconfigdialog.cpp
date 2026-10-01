#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteConfigDialog
#include <grammalecteconfigdialog.h>
#include "libgrammalecteconfigdialog.h"
#include "libgrammalecteconfigdialog.hxx"

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new(QWidget* parent) {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog(parent);
}

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new2() {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog();
}

TextGrammarCheck__GrammalecteConfigDialog* TextGrammarCheck__GrammalecteConfigDialog_new3(QWidget* parent, bool disableMessageBox) {
    return new VirtualTextGrammarCheckGrammalecteConfigDialog(parent, disableMessageBox);
}

QMetaObject* TextGrammarCheck__GrammalecteConfigDialog_MetaObject(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextGrammarCheck__GrammalecteConfigDialog_Metacast(TextGrammarCheck__GrammalecteConfigDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextGrammarCheck__GrammalecteConfigDialog_Metacall(TextGrammarCheck__GrammalecteConfigDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextGrammarCheck__GrammalecteConfigDialog_Tr(const char* s) {
    auto _ret = TextGrammarCheck::GrammalecteConfigDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteConfigDialog_Tr2(const char* s, const char* c) {
    auto _ret = TextGrammarCheck::GrammalecteConfigDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextGrammarCheck__GrammalecteConfigDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextGrammarCheck::GrammalecteConfigDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextGrammarCheck__GrammalecteConfigDialog_SuperMetaObject(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return (QMetaObject*)self->TextGrammarCheck::GrammalecteConfigDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetaObject(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_metaobject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteConfigDialog_SuperMetacast(TextGrammarCheck__GrammalecteConfigDialog* self, const char* param1) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetacast(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_metacast_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperMetacall(TextGrammarCheck__GrammalecteConfigDialog* self, int param1, int param2, void** param3) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetacall(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_metacall_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperSetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, bool visible) {
    self->TextGrammarCheck::GrammalecteConfigDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSetVisible(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_setvisible_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SuperSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteConfigDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSizeHint(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_sizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextGrammarCheck__GrammalecteConfigDialog_SuperMinimumSizeHint(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return new QSize(self->TextGrammarCheck::GrammalecteConfigDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMinimumSizeHint(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_minimumsizehint_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Open(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->open();
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperOpen(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->TextGrammarCheck::GrammalecteConfigDialog::open();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnOpen(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_open_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Exec(TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->exec();
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperExec(TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnExec(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_exec_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Done(TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDone(TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    self->TextGrammarCheck::GrammalecteConfigDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDone(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_done_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Accept(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->accept();
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperAccept(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->TextGrammarCheck::GrammalecteConfigDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnAccept(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_accept_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Reject(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->reject();
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperReject(TextGrammarCheck__GrammalecteConfigDialog* self) {
    self->TextGrammarCheck::GrammalecteConfigDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnReject(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_reject_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnKeyPressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_keypressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_CloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QCloseEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperCloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QCloseEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnCloseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_closeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QShowEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QShowEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnShowEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_showevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QResizeEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QResizeEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnResizeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_resizeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QContextMenuEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QContextMenuEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnContextMenuEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_contextmenuevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_EventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperEventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEventFilter(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_eventfilter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_DevType(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->devType();
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperDevType(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDevType(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_devtype_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHeightForWidth(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_heightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperHasHeightForWidth(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHasHeightForWidth(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_hasheightforwidth_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigDialog_PaintEngine(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEngine(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    return self->TextGrammarCheck::GrammalecteConfigDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnPaintEngine(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_paintengine_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_Event(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::event(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_event_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMousePressEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_mousepressevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_mousereleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseDoubleClickEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMouseEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMouseMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_mousemoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_WheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QWheelEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperWheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QWheelEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnWheelEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_wheelevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QKeyEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnKeyReleaseEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_keyreleaseevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusInEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_focusinevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperFocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QFocusEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusOutEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_focusoutevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_EnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_enterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_leaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_PaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QPaintEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperPaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QPaintEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnPaintEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_paintevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_MoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_moveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_TabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTabletEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperTabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTabletEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnTabletEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_tabletevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QActionEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QActionEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnActionEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_actionevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragEnterEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragEnterEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragEnterEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_dragenterevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragMoveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragMoveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragMoveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_dragmoveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragLeaveEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDragLeaveEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDragLeaveEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_dragleaveevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDropEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QDropEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDropEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_dropevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_HideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QHideEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperHideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QHideEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnHideEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_hideevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_NativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperNativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnNativeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_nativeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnChangeEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_changeevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Metric(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SuperMetric(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnMetric(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_metric_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_InitPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, QPainter* painter) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperInitPainter(const TextGrammarCheck__GrammalecteConfigDialog* self, QPainter* painter) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInitPainter(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_initpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_Redirected(const TextGrammarCheck__GrammalecteConfigDialog* self, QPoint* offset) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextGrammarCheck__GrammalecteConfigDialog_SuperRedirected(const TextGrammarCheck__GrammalecteConfigDialog* self, QPoint* offset) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnRedirected(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_redirected_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigDialog_SharedPainter(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self));
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextGrammarCheck__GrammalecteConfigDialog_SuperSharedPainter(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnSharedPainter(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_sharedpainter_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QInputMethodEvent* param1) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QInputMethodEvent* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_inputmethodevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextGrammarCheck__GrammalecteConfigDialog_SuperInputMethodQuery(const TextGrammarCheck__GrammalecteConfigDialog* self, int param1) {
    return new QVariant(self->TextGrammarCheck::GrammalecteConfigDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnInputMethodQuery(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_inputmethodquery_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, bool next) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        return vtextgrammarcheckgrammalecteconfigdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_SuperFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, bool next) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnFocusNextPrevChild(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_focusnextprevchild_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_TimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperTimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QTimerEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnTimerEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_timerevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QChildEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnChildEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_childevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_CustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperCustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, QEvent* event) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnCustomEvent(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_customevent_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnConnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_connectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self);
    if (vtextgrammarcheckgrammalecteconfigdialog) {
        vtextgrammarcheckgrammalecteconfigdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_SuperDisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->TextGrammarCheck::GrammalecteConfigDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextGrammarCheck::GrammalecteConfigDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteConfigDialog_OnDisconnectNotify(TextGrammarCheck__GrammalecteConfigDialog* self, intptr_t slot) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))
        vtextgrammarcheckgrammalecteconfigdialog->textgrammarcheck__grammalecteconfigdialog_disconnectnotify_callback = reinterpret_cast<VirtualTextGrammarCheckGrammalecteConfigDialog::TextGrammarCheck__GrammalecteConfigDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_AdjustPosition(TextGrammarCheck__GrammalecteConfigDialog* self, QWidget* param1) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_UpdateMicroFocus(TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Create(TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::create();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextGrammarCheck__GrammalecteConfigDialog_Destroy(TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::destroy();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusNextChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::focusNextChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_FocusPreviousChild(TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = dynamic_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(self)) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextGrammarCheck__GrammalecteConfigDialog_Sender(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::sender();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_SenderSignalIndex(const TextGrammarCheck__GrammalecteConfigDialog* self) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextGrammarCheck__GrammalecteConfigDialog_Receivers(const TextGrammarCheck__GrammalecteConfigDialog* self, const char* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::receivers(signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextGrammarCheck__GrammalecteConfigDialog_IsSignalConnected(const TextGrammarCheck__GrammalecteConfigDialog* self, const QMetaMethod* signal) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextGrammarCheck__GrammalecteConfigDialog_GetDecodedMetricF(const TextGrammarCheck__GrammalecteConfigDialog* self, int metricA, int metricB) {
    if (auto* vtextgrammarcheckgrammalecteconfigdialog = const_cast<VirtualTextGrammarCheckGrammalecteConfigDialog*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteConfigDialog*>(self))) {
        return vtextgrammarcheckgrammalecteconfigdialog->VirtualTextGrammarCheckGrammalecteConfigDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextGrammarCheck::GrammalecteConfigDialog::getDecodedMetricF called without a directly constructed type");
}

void TextGrammarCheck__GrammalecteConfigDialog_Delete(TextGrammarCheck__GrammalecteConfigDialog* self) {
    delete self;
}
