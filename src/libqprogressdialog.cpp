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
#include <QLabel>
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
#include <QProgressBar>
#include <QProgressDialog>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qprogressdialog.h>
#include "libqprogressdialog.h"
#include "libqprogressdialog.hxx"

QProgressDialog* QProgressDialog_new(QWidget* parent) {
    return new VirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
    return new VirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
    return new VirtualQProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(const libqt_string labelText, const libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProgressDialog_Metacall(QProgressDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QProgressDialog_Tr(const char* s) {
    auto _ret = QProgressDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
    self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
    self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
    self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
    return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
    return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
    return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
    return self->value();
}

QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
    return new QSize(self->sizeHint());
}

libqt_string QProgressDialog_LabelText(const QProgressDialog* self) {
    auto _ret = self->labelText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
    return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
    self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
    return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
    self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
    return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
    self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
    self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
    self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
    self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
    self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
    self->canceled();
}

void QProgressDialog_Connect_Canceled(QProgressDialog* self, intptr_t slot) {
    void (*slotFunc)(QProgressDialog*) = reinterpret_cast<void (*)(QProgressDialog*)>(slot);
    QProgressDialog::connect(self,
                             static_cast<void (QProgressDialog::*)()>(&QProgressDialog::canceled),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->resizeEvent(event);
    }
}

void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->closeEvent(event);
    }
}

void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->changeEvent(event);
    }
}

void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->showEvent(event);
    }
}

libqt_string QProgressDialog_Tr2(const char* s, const char* c) {
    auto _ret = QProgressDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QProgressDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
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
QMetaObject* QProgressDialog_SuperMetaObject(const QProgressDialog* self) {
    return (QMetaObject*)self->QProgressDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMetaObject(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_metaobject_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QProgressDialog_SuperMetacast(QProgressDialog* self, const char* param1) {
    return self->QProgressDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMetacast(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_metacast_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QProgressDialog_SuperMetacall(QProgressDialog* self, int param1, int param2, void** param3) {
    return self->QProgressDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMetacall(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_metacall_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QProgressDialog_SuperSizeHint(const QProgressDialog* self) {
    return new QSize(self->QProgressDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSizeHint(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_sizehint_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QProgressDialog_SuperResizeEvent(QProgressDialog* self, QResizeEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnResizeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_resizeevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QProgressDialog_SuperCloseEvent(QProgressDialog* self, QCloseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCloseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_closeevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QProgressDialog_SuperChangeEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnChangeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_changeevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QProgressDialog_SuperShowEvent(QProgressDialog* self, QShowEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnShowEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_showevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_SetVisible(QProgressDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QProgressDialog_SuperSetVisible(QProgressDialog* self, bool visible) {
    self->QProgressDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSetVisible(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_setvisible_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QProgressDialog_MinimumSizeHint(const QProgressDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QProgressDialog_SuperMinimumSizeHint(const QProgressDialog* self) {
    return new QSize(self->QProgressDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMinimumSizeHint(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_minimumsizehint_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_Open(QProgressDialog* self) {
    self->open();
}

// Base class handler implementation
void QProgressDialog_SuperOpen(QProgressDialog* self) {
    self->QProgressDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnOpen(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_open_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QProgressDialog_Exec(QProgressDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QProgressDialog_SuperExec(QProgressDialog* self) {
    return self->QProgressDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnExec(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_exec_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_Done(QProgressDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void QProgressDialog_SuperDone(QProgressDialog* self, int param1) {
    self->QProgressDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDone(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_done_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_Accept(QProgressDialog* self) {
    self->accept();
}

// Base class handler implementation
void QProgressDialog_SuperAccept(QProgressDialog* self) {
    self->QProgressDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnAccept(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_accept_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_Reject(QProgressDialog* self) {
    self->reject();
}

// Base class handler implementation
void QProgressDialog_SuperReject(QProgressDialog* self) {
    self->QProgressDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnReject(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_reject_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_KeyPressEvent(QProgressDialog* self, QKeyEvent* param1) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperKeyPressEvent(QProgressDialog* self, QKeyEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnKeyPressEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_keypressevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_ContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnContextMenuEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_contextmenuevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QProgressDialog_EventFilter(QProgressDialog* self, QObject* param1, QEvent* param2) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        return vqprogressdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressDialog_SuperEventFilter(QProgressDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->QProgressDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEventFilter(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_eventfilter_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QProgressDialog_DevType(const QProgressDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QProgressDialog_SuperDevType(const QProgressDialog* self) {
    return self->QProgressDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDevType(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_devtype_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QProgressDialog_HeightForWidth(const QProgressDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QProgressDialog_SuperHeightForWidth(const QProgressDialog* self, int param1) {
    return self->QProgressDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHeightForWidth(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_heightforwidth_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QProgressDialog_HasHeightForWidth(const QProgressDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QProgressDialog_SuperHasHeightForWidth(const QProgressDialog* self) {
    return self->QProgressDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHasHeightForWidth(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QProgressDialog_PaintEngine(const QProgressDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QProgressDialog_SuperPaintEngine(const QProgressDialog* self) {
    return self->QProgressDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnPaintEngine(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_paintengine_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QProgressDialog_Event(QProgressDialog* self, QEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        return vqprogressdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressDialog_SuperEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->QProgressDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_event_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_MousePressEvent(QProgressDialog* self, QMouseEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperMousePressEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMousePressEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_mousepressevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_MouseReleaseEvent(QProgressDialog* self, QMouseEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperMouseReleaseEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseReleaseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_MouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperMouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseDoubleClickEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_MouseMoveEvent(QProgressDialog* self, QMouseEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperMouseMoveEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_mousemoveevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_WheelEvent(QProgressDialog* self, QWheelEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperWheelEvent(QProgressDialog* self, QWheelEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnWheelEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_wheelevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_KeyReleaseEvent(QProgressDialog* self, QKeyEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperKeyReleaseEvent(QProgressDialog* self, QKeyEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnKeyReleaseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_FocusInEvent(QProgressDialog* self, QFocusEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperFocusInEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusInEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_focusinevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_FocusOutEvent(QProgressDialog* self, QFocusEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperFocusOutEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusOutEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_focusoutevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_EnterEvent(QProgressDialog* self, QEnterEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperEnterEvent(QProgressDialog* self, QEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEnterEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_enterevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_LeaveEvent(QProgressDialog* self, QEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperLeaveEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnLeaveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_leaveevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_PaintEvent(QProgressDialog* self, QPaintEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperPaintEvent(QProgressDialog* self, QPaintEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnPaintEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_paintevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_MoveEvent(QProgressDialog* self, QMoveEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperMoveEvent(QProgressDialog* self, QMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_moveevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_TabletEvent(QProgressDialog* self, QTabletEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperTabletEvent(QProgressDialog* self, QTabletEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnTabletEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_tabletevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_ActionEvent(QProgressDialog* self, QActionEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperActionEvent(QProgressDialog* self, QActionEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnActionEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_actionevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_DragEnterEvent(QProgressDialog* self, QDragEnterEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperDragEnterEvent(QProgressDialog* self, QDragEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragEnterEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_dragenterevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_DragMoveEvent(QProgressDialog* self, QDragMoveEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperDragMoveEvent(QProgressDialog* self, QDragMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_dragmoveevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_DragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperDragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragLeaveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_dragleaveevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_DropEvent(QProgressDialog* self, QDropEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperDropEvent(QProgressDialog* self, QDropEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDropEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_dropevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_HideEvent(QProgressDialog* self, QHideEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperHideEvent(QProgressDialog* self, QHideEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHideEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_hideevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QProgressDialog_NativeEvent(QProgressDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        return vqprogressdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressDialog_SuperNativeEvent(QProgressDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->QProgressDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QProgressDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnNativeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_nativeevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QProgressDialog_Metric(const QProgressDialog* self, int param1) {
    auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self));
    if (vqprogressdialog) {
        return vqprogressdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QProgressDialog_SuperMetric(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->QProgressDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QProgressDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMetric(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_metric_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_InitPainter(const QProgressDialog* self, QPainter* painter) {
    auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self));
    if (vqprogressdialog) {
        vqprogressdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperInitPainter(const QProgressDialog* self, QPainter* painter) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->QProgressDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInitPainter(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_initpainter_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QProgressDialog_Redirected(const QProgressDialog* self, QPoint* offset) {
    auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self));
    if (vqprogressdialog) {
        return vqprogressdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QProgressDialog_SuperRedirected(const QProgressDialog* self, QPoint* offset) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->QProgressDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnRedirected(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_redirected_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QProgressDialog_SharedPainter(const QProgressDialog* self) {
    auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self));
    if (vqprogressdialog) {
        return vqprogressdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QProgressDialog_SuperSharedPainter(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->QProgressDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QProgressDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSharedPainter(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_sharedpainter_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_InputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperInputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInputMethodEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_inputmethodevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QProgressDialog_InputMethodQuery(const QProgressDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QProgressDialog_SuperInputMethodQuery(const QProgressDialog* self, int param1) {
    return new QVariant(self->QProgressDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInputMethodQuery(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self)))
        vqprogressdialog->qprogressdialog_inputmethodquery_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QProgressDialog_FocusNextPrevChild(QProgressDialog* self, bool next) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        return vqprogressdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QProgressDialog_SuperFocusNextPrevChild(QProgressDialog* self, bool next) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->QProgressDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusNextPrevChild(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_TimerEvent(QProgressDialog* self, QTimerEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperTimerEvent(QProgressDialog* self, QTimerEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnTimerEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_timerevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_ChildEvent(QProgressDialog* self, QChildEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperChildEvent(QProgressDialog* self, QChildEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnChildEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_childevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_CustomEvent(QProgressDialog* self, QEvent* event) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperCustomEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCustomEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_customevent_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_ConnectNotify(QProgressDialog* self, const QMetaMethod* signal) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperConnectNotify(QProgressDialog* self, const QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnConnectNotify(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_connectnotify_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QProgressDialog_DisconnectNotify(QProgressDialog* self, const QMetaMethod* signal) {
    auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self);
    if (vqprogressdialog) {
        vqprogressdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QProgressDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QProgressDialog_SuperDisconnectNotify(QProgressDialog* self, const QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->QProgressDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QProgressDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDisconnectNotify(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self))
        vqprogressdialog->qprogressdialog_disconnectnotify_callback = reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QProgressDialog_ForceShow(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->VirtualQProgressDialog::forceShow();
    } else
        qFatal("Error: Protected method QProgressDialog::forceShow called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressDialog_AdjustPosition(QProgressDialog* self, QWidget* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->VirtualQProgressDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QProgressDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressDialog_UpdateMicroFocus(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->VirtualQProgressDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QProgressDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressDialog_Create(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->VirtualQProgressDialog::create();
    } else
        qFatal("Error: Protected method QProgressDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QProgressDialog_Destroy(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->VirtualQProgressDialog::destroy();
    } else
        qFatal("Error: Protected method QProgressDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressDialog_FocusNextChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->VirtualQProgressDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QProgressDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressDialog_FocusPreviousChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->VirtualQProgressDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QProgressDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QProgressDialog_Sender(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->VirtualQProgressDialog::sender();
    } else
        qFatal("Error: Protected method QProgressDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QProgressDialog_SenderSignalIndex(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->VirtualQProgressDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QProgressDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QProgressDialog_Receivers(const QProgressDialog* self, const char* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->VirtualQProgressDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QProgressDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QProgressDialog_IsSignalConnected(const QProgressDialog* self, const QMetaMethod* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->VirtualQProgressDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QProgressDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QProgressDialog_GetDecodedMetricF(const QProgressDialog* self, int metricA, int metricB) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->VirtualQProgressDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QProgressDialog::getDecodedMetricF called without a directly constructed type");
}

void QProgressDialog_Delete(QProgressDialog* self) {
    delete self;
}
