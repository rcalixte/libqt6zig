#include <KPixmapRegionSelectorDialog>
#include <KPixmapRegionSelectorWidget>
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
#include <QImage>
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
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpixmapregionselectordialog.h>
#include "libkpixmapregionselectordialog.h"
#include "libkpixmapregionselectordialog.hxx"

KPixmapRegionSelectorDialog* KPixmapRegionSelectorDialog_new(QWidget* parent) {
    return new VirtualKPixmapRegionSelectorDialog(parent);
}

KPixmapRegionSelectorDialog* KPixmapRegionSelectorDialog_new2() {
    return new VirtualKPixmapRegionSelectorDialog();
}

QMetaObject* KPixmapRegionSelectorDialog_MetaObject(const KPixmapRegionSelectorDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPixmapRegionSelectorDialog_Metacast(KPixmapRegionSelectorDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPixmapRegionSelectorDialog_Metacall(KPixmapRegionSelectorDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPixmapRegionSelectorDialog_Tr(const char* s) {
    auto _ret = KPixmapRegionSelectorDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPixmapRegionSelectorWidget* KPixmapRegionSelectorDialog_PixmapRegionSelectorWidget(const KPixmapRegionSelectorDialog* self) {
    return self->pixmapRegionSelectorWidget();
}

QRect* KPixmapRegionSelectorDialog_GetSelectedRegion(const QPixmap* pixmap) {
    return new QRect(KPixmapRegionSelectorDialog::getSelectedRegion(*pixmap));
}

QRect* KPixmapRegionSelectorDialog_GetSelectedRegion2(const QPixmap* pixmap, int aspectRatioWidth, int aspectRatioHeight) {
    return new QRect(KPixmapRegionSelectorDialog::getSelectedRegion(*pixmap, static_cast<int>(aspectRatioWidth), static_cast<int>(aspectRatioHeight)));
}

QImage* KPixmapRegionSelectorDialog_GetSelectedImage(const QPixmap* pixmap) {
    return new QImage(KPixmapRegionSelectorDialog::getSelectedImage(*pixmap));
}

QImage* KPixmapRegionSelectorDialog_GetSelectedImage2(const QPixmap* pixmap, int aspectRatioWidth, int aspectRatioHeight) {
    return new QImage(KPixmapRegionSelectorDialog::getSelectedImage(*pixmap, static_cast<int>(aspectRatioWidth), static_cast<int>(aspectRatioHeight)));
}

void KPixmapRegionSelectorDialog_AdjustRegionSelectorWidgetSizeToFitScreen(KPixmapRegionSelectorDialog* self) {
    self->adjustRegionSelectorWidgetSizeToFitScreen();
}

libqt_string KPixmapRegionSelectorDialog_Tr2(const char* s, const char* c) {
    auto _ret = KPixmapRegionSelectorDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPixmapRegionSelectorDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPixmapRegionSelectorDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QRect* KPixmapRegionSelectorDialog_GetSelectedRegion22(const QPixmap* pixmap, QWidget* parent) {
    return new QRect(KPixmapRegionSelectorDialog::getSelectedRegion(*pixmap, parent));
}

QRect* KPixmapRegionSelectorDialog_GetSelectedRegion4(const QPixmap* pixmap, int aspectRatioWidth, int aspectRatioHeight, QWidget* parent) {
    return new QRect(KPixmapRegionSelectorDialog::getSelectedRegion(*pixmap, static_cast<int>(aspectRatioWidth), static_cast<int>(aspectRatioHeight), parent));
}

QImage* KPixmapRegionSelectorDialog_GetSelectedImage22(const QPixmap* pixmap, QWidget* parent) {
    return new QImage(KPixmapRegionSelectorDialog::getSelectedImage(*pixmap, parent));
}

QImage* KPixmapRegionSelectorDialog_GetSelectedImage4(const QPixmap* pixmap, int aspectRatioWidth, int aspectRatioHeight, QWidget* parent) {
    return new QImage(KPixmapRegionSelectorDialog::getSelectedImage(*pixmap, static_cast<int>(aspectRatioWidth), static_cast<int>(aspectRatioHeight), parent));
}

// Base class handler implementation
QMetaObject* KPixmapRegionSelectorDialog_SuperMetaObject(const KPixmapRegionSelectorDialog* self) {
    return (QMetaObject*)self->KPixmapRegionSelectorDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMetaObject(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_metaobject_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPixmapRegionSelectorDialog_SuperMetacast(KPixmapRegionSelectorDialog* self, const char* param1) {
    return self->KPixmapRegionSelectorDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMetacast(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_metacast_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_SuperMetacall(KPixmapRegionSelectorDialog* self, int param1, int param2, void** param3) {
    return self->KPixmapRegionSelectorDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMetacall(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_metacall_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_SetVisible(KPixmapRegionSelectorDialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperSetVisible(KPixmapRegionSelectorDialog* self, bool visible) {
    self->KPixmapRegionSelectorDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSetVisible(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_setvisible_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorDialog_SizeHint(const KPixmapRegionSelectorDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KPixmapRegionSelectorDialog_SuperSizeHint(const KPixmapRegionSelectorDialog* self) {
    return new QSize(self->KPixmapRegionSelectorDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSizeHint(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_sizehint_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorDialog_MinimumSizeHint(const KPixmapRegionSelectorDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KPixmapRegionSelectorDialog_SuperMinimumSizeHint(const KPixmapRegionSelectorDialog* self) {
    return new QSize(self->KPixmapRegionSelectorDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMinimumSizeHint(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_minimumsizehint_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Open(KPixmapRegionSelectorDialog* self) {
    self->open();
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperOpen(KPixmapRegionSelectorDialog* self) {
    self->KPixmapRegionSelectorDialog::open();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnOpen(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_open_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_Exec(KPixmapRegionSelectorDialog* self) {
    return self->exec();
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_SuperExec(KPixmapRegionSelectorDialog* self) {
    return self->KPixmapRegionSelectorDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnExec(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_exec_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Done(KPixmapRegionSelectorDialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDone(KPixmapRegionSelectorDialog* self, int param1) {
    self->KPixmapRegionSelectorDialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDone(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_done_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Accept(KPixmapRegionSelectorDialog* self) {
    self->accept();
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperAccept(KPixmapRegionSelectorDialog* self) {
    self->KPixmapRegionSelectorDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnAccept(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_accept_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Reject(KPixmapRegionSelectorDialog* self) {
    self->reject();
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperReject(KPixmapRegionSelectorDialog* self) {
    self->KPixmapRegionSelectorDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnReject(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_reject_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_KeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperKeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnKeyPressEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_keypressevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_CloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperCloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnCloseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_closeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnShowEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_showevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnResizeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_resizeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnContextMenuEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_contextmenuevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_EventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_SuperEventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEventFilter(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_eventfilter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_DevType(const KPixmapRegionSelectorDialog* self) {
    return self->devType();
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_SuperDevType(const KPixmapRegionSelectorDialog* self) {
    return self->KPixmapRegionSelectorDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDevType(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_devtype_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_HeightForWidth(const KPixmapRegionSelectorDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_SuperHeightForWidth(const KPixmapRegionSelectorDialog* self, int param1) {
    return self->KPixmapRegionSelectorDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHeightForWidth(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_heightforwidth_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_HasHeightForWidth(const KPixmapRegionSelectorDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_SuperHasHeightForWidth(const KPixmapRegionSelectorDialog* self) {
    return self->KPixmapRegionSelectorDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHasHeightForWidth(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_hasheightforwidth_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KPixmapRegionSelectorDialog_PaintEngine(const KPixmapRegionSelectorDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KPixmapRegionSelectorDialog_SuperPaintEngine(const KPixmapRegionSelectorDialog* self) {
    return self->KPixmapRegionSelectorDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnPaintEngine(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_paintengine_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_Event(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->event(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_SuperEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::event(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_event_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperMousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMousePressEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_mousepressevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperMouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseReleaseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_mousereleaseevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperMouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_mousemoveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_WheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperWheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnWheelEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_wheelevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_KeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperKeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnKeyReleaseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_keyreleaseevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_FocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperFocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusInEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_focusinevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_FocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperFocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusOutEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_focusoutevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_EnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperEnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEnterEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_enterevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_LeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperLeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnLeaveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_leaveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_PaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperPaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnPaintEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_paintevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperMoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_moveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_TabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperTabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnTabletEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_tabletevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnActionEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_actionevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragEnterEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_dragenterevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_dragmoveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragLeaveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_dragleaveevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDropEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_dropevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_HideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperHideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHideEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_hideevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_NativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_SuperNativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnNativeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_nativeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnChangeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_changeevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_Metric(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_SuperMetric(const KPixmapRegionSelectorDialog* self, int param1) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMetric(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_metric_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_InitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperInitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInitPainter(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_initpainter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KPixmapRegionSelectorDialog_Redirected(const KPixmapRegionSelectorDialog* self, QPoint* offset) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KPixmapRegionSelectorDialog_SuperRedirected(const KPixmapRegionSelectorDialog* self, QPoint* offset) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnRedirected(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_redirected_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KPixmapRegionSelectorDialog_SharedPainter(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KPixmapRegionSelectorDialog_SuperSharedPainter(const KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSharedPainter(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_sharedpainter_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_InputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperInputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInputMethodEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_inputmethodevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KPixmapRegionSelectorDialog_InputMethodQuery(const KPixmapRegionSelectorDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KPixmapRegionSelectorDialog_SuperInputMethodQuery(const KPixmapRegionSelectorDialog* self, int param1) {
    return new QVariant(self->KPixmapRegionSelectorDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInputMethodQuery(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self)))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_inputmethodquery_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_FocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        return vkpixmapregionselectordialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_SuperFocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusNextPrevChild(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_focusnextprevchild_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_TimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperTimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnTimerEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_timerevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnChildEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_childevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_CustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperCustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnCustomEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_customevent_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnConnectNotify(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_connectnotify_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog) {
        vkpixmapregionselectordialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_SuperDisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->KPixmapRegionSelectorDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapRegionSelectorDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDisconnectNotify(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self))
        vkpixmapregionselectordialog->kpixmapregionselectordialog_disconnectnotify_callback = reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KPixmapRegionSelectorDialog_AdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapRegionSelectorDialog_UpdateMicroFocus(KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapRegionSelectorDialog_Create(KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::create();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KPixmapRegionSelectorDialog_Destroy(KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::destroy();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorDialog_FocusNextChild(KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::focusNextChild();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorDialog_FocusPreviousChild(KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self)) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KPixmapRegionSelectorDialog_Sender(const KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::sender();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapRegionSelectorDialog_SenderSignalIndex(const KPixmapRegionSelectorDialog* self) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapRegionSelectorDialog_Receivers(const KPixmapRegionSelectorDialog* self, const char* signal) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::receivers(signal);
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapRegionSelectorDialog_IsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KPixmapRegionSelectorDialog_GetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB) {
    if (auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self))) {
        return vkpixmapregionselectordialog->VirtualKPixmapRegionSelectorDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KPixmapRegionSelectorDialog::getDecodedMetricF called without a directly constructed type");
}

void KPixmapRegionSelectorDialog_Delete(KPixmapRegionSelectorDialog* self) {
    delete self;
}
