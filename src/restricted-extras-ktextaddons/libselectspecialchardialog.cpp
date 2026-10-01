#include <QActionEvent>
#include <QByteArray>
#include <QChar>
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
#define WORKAROUND_INNER_CLASS_DEFINITION_TextAddonsWidgets__SelectSpecialCharDialog
#include <selectspecialchardialog.h>
#include "libselectspecialchardialog.h"
#include "libselectspecialchardialog.hxx"

TextAddonsWidgets__SelectSpecialCharDialog* TextAddonsWidgets__SelectSpecialCharDialog_new(QWidget* parent) {
    return new VirtualTextAddonsWidgetsSelectSpecialCharDialog(parent);
}

QMetaObject* TextAddonsWidgets__SelectSpecialCharDialog_MetaObject(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextAddonsWidgets__SelectSpecialCharDialog_Metacast(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextAddonsWidgets__SelectSpecialCharDialog_Metacall(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string TextAddonsWidgets__SelectSpecialCharDialog_Tr(const char* s) {
    auto _ret = TextAddonsWidgets::SelectSpecialCharDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextAddonsWidgets__SelectSpecialCharDialog_SetCurrentChar(TextAddonsWidgets__SelectSpecialCharDialog* self, QChar* c) {
    self->setCurrentChar(*c);
}

QChar* TextAddonsWidgets__SelectSpecialCharDialog_CurrentChar(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QChar(self->currentChar());
}

void TextAddonsWidgets__SelectSpecialCharDialog_SetOkButtonText(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setOkButtonText(text_QString);
}

void TextAddonsWidgets__SelectSpecialCharDialog_ShowSelectButton(TextAddonsWidgets__SelectSpecialCharDialog* self, bool show) {
    self->showSelectButton(show);
}

void TextAddonsWidgets__SelectSpecialCharDialog_AutoInsertChar(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->autoInsertChar();
}

void TextAddonsWidgets__SelectSpecialCharDialog_CharSelected(TextAddonsWidgets__SelectSpecialCharDialog* self, QChar* param1) {
    self->charSelected(*param1);
}

void TextAddonsWidgets__SelectSpecialCharDialog_Connect_CharSelected(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    void (*slotFunc)(TextAddonsWidgets__SelectSpecialCharDialog*, QChar*) = reinterpret_cast<void (*)(TextAddonsWidgets__SelectSpecialCharDialog*, QChar*)>(slot);
    TextAddonsWidgets::SelectSpecialCharDialog::connect(self,
                                                        static_cast<void (TextAddonsWidgets::SelectSpecialCharDialog::*)(QChar)>(&TextAddonsWidgets::SelectSpecialCharDialog::charSelected),
                                                        [self, slotFunc](QChar param1) {
                                                            QChar* sigval1 = new QChar(param1);
                                                            slotFunc(self, sigval1);
                                                        });
}

libqt_string TextAddonsWidgets__SelectSpecialCharDialog_Tr2(const char* s, const char* c) {
    auto _ret = TextAddonsWidgets::SelectSpecialCharDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TextAddonsWidgets__SelectSpecialCharDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = TextAddonsWidgets::SelectSpecialCharDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* TextAddonsWidgets__SelectSpecialCharDialog_SuperMetaObject(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return (QMetaObject*)self->TextAddonsWidgets::SelectSpecialCharDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetaObject(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_metaobject_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacast(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* param1) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetacast(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_metacast_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacall(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1, int param2, void** param3) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetacall(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_metacall_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperSetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, bool visible) {
    self->TextAddonsWidgets::SelectSpecialCharDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSetVisible(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_setvisible_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SuperSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QSize(self->TextAddonsWidgets::SelectSpecialCharDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSizeHint(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_sizehint_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* TextAddonsWidgets__SelectSpecialCharDialog_SuperMinimumSizeHint(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return new QSize(self->TextAddonsWidgets::SelectSpecialCharDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMinimumSizeHint(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_minimumsizehint_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Open(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->open();
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperOpen(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->TextAddonsWidgets::SelectSpecialCharDialog::open();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnOpen(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_open_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Exec(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->exec();
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperExec(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnExec(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_exec_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Done(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDone(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    self->TextAddonsWidgets::SelectSpecialCharDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDone(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_done_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Accept(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->accept();
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperAccept(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->TextAddonsWidgets::SelectSpecialCharDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnAccept(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_accept_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Reject(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->reject();
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperReject(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    self->TextAddonsWidgets::SelectSpecialCharDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnReject(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_reject_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnKeyPressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_keypressevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QCloseEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperCloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QCloseEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnCloseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_closeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QShowEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QShowEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnShowEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_showevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QResizeEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QResizeEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnResizeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_resizeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QContextMenuEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QContextMenuEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnContextMenuEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_contextmenuevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_EventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1, QEvent* param2) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEventFilter(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_eventfilter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_DevType(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->devType();
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperDevType(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDevType(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_devtype_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHeightForWidth(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_heightforwidth_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperHasHeightForWidth(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHasHeightForWidth(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_hasheightforwidth_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEngine(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    return self->TextAddonsWidgets::SelectSpecialCharDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEngine(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_paintengine_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_Event(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->event(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::event(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_event_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMousePressEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_mousepressevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_mousereleaseevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseDoubleClickEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMouseMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_mousemoveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QWheelEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperWheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QWheelEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnWheelEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_wheelevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnKeyReleaseEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_keyreleaseevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusInEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_focusinevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusOutEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_focusoutevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEnterEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_enterevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_leaveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QPaintEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QPaintEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_paintevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QMoveEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_moveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTabletEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperTabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTabletEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnTabletEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_tabletevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QActionEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QActionEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnActionEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_actionevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragEnterEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragEnterEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragEnterEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_dragenterevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragMoveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragMoveEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragMoveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_dragmoveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragLeaveEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragLeaveEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDragLeaveEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_dragleaveevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDropEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QDropEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDropEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_dropevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_HideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QHideEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperHideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QHideEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnHideEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_hideevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperNativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnNativeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_nativeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnChangeEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_changeevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Metric(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SuperMetric(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnMetric(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_metric_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_InitPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPainter* painter) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperInitPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPainter* painter) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInitPainter(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_initpainter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_Redirected(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* offset) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* TextAddonsWidgets__SelectSpecialCharDialog_SuperRedirected(const TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* offset) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnRedirected(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_redirected_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self));
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* TextAddonsWidgets__SelectSpecialCharDialog_SuperSharedPainter(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnSharedPainter(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_sharedpainter_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QInputMethodEvent* param1) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QInputMethodEvent* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_inputmethodevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodQuery(const TextAddonsWidgets__SelectSpecialCharDialog* self, int param1) {
    return new QVariant(self->TextAddonsWidgets::SelectSpecialCharDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodQuery(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_inputmethodquery_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, bool next) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        return vtextaddonswidgetsselectspecialchardialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, bool next) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnFocusNextPrevChild(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_focusnextprevchild_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTimerEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperTimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QTimerEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnTimerEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_timerevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QChildEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QChildEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnChildEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_childevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperCustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnCustomEvent(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_customevent_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnConnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_connectnotify_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self);
    if (vtextaddonswidgetsselectspecialchardialog) {
        vtextaddonswidgetsselectspecialchardialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_SuperDisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->TextAddonsWidgets::SelectSpecialCharDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method TextAddonsWidgets::SelectSpecialCharDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void TextAddonsWidgets__SelectSpecialCharDialog_OnDisconnectNotify(TextAddonsWidgets__SelectSpecialCharDialog* self, intptr_t slot) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))
        vtextaddonswidgetsselectspecialchardialog->textaddonswidgets__selectspecialchardialog_disconnectnotify_callback = reinterpret_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog::TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition(TextAddonsWidgets__SelectSpecialCharDialog* self, QWidget* param1) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Create(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::create();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void TextAddonsWidgets__SelectSpecialCharDialog_Destroy(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::destroy();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::focusNextChild();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = dynamic_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self)) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* TextAddonsWidgets__SelectSpecialCharDialog_Sender(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::sender();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex(const TextAddonsWidgets__SelectSpecialCharDialog* self) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int TextAddonsWidgets__SelectSpecialCharDialog_Receivers(const TextAddonsWidgets__SelectSpecialCharDialog* self, const char* signal) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::receivers(signal);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected(const TextAddonsWidgets__SelectSpecialCharDialog* self, const QMetaMethod* signal) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF(const TextAddonsWidgets__SelectSpecialCharDialog* self, int metricA, int metricB) {
    if (auto* vtextaddonswidgetsselectspecialchardialog = const_cast<VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(dynamic_cast<const VirtualTextAddonsWidgetsSelectSpecialCharDialog*>(self))) {
        return vtextaddonswidgetsselectspecialchardialog->VirtualTextAddonsWidgetsSelectSpecialCharDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method TextAddonsWidgets::SelectSpecialCharDialog::getDecodedMetricF called without a directly constructed type");
}

void TextAddonsWidgets__SelectSpecialCharDialog_Delete(TextAddonsWidgets__SelectSpecialCharDialog* self) {
    delete self;
}
