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
#include <QByteArray>
#include <cstring>
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
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KPixmapRegionSelectorDialog_OnMetacall(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Metacall_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KPixmapRegionSelectorDialog_QBaseMetacall(KPixmapRegionSelectorDialog* self, int param1, int param2, void** param3) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Metacall_IsBase(true);
        return vkpixmapregionselectordialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPixmapRegionSelectorDialog_Tr(const char* s) {
    QString _ret = KPixmapRegionSelectorDialog::tr(s);
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
    QString _ret = KPixmapRegionSelectorDialog::tr(s, c);
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
    QString _ret = KPixmapRegionSelectorDialog::tr(s, c, static_cast<int>(n));
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

// Derived class handler implementation
void KPixmapRegionSelectorDialog_SetVisible(KPixmapRegionSelectorDialog* self, bool visible) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setVisible(visible);
    } else {
        self->KPixmapRegionSelectorDialog::setVisible(visible);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseSetVisible(KPixmapRegionSelectorDialog* self, bool visible) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SetVisible_IsBase(true);
        vkpixmapregionselectordialog->setVisible(visible);
    } else {
        self->KPixmapRegionSelectorDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSetVisible(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SetVisible_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorDialog_SizeHint(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return new QSize(vkpixmapregionselectordialog->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPixmapRegionSelectorDialog_QBaseSizeHint(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SizeHint_IsBase(true);
        return new QSize(vkpixmapregionselectordialog->sizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSizeHint(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SizeHint_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPixmapRegionSelectorDialog_MinimumSizeHint(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return new QSize(vkpixmapregionselectordialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPixmapRegionSelectorDialog_QBaseMinimumSizeHint(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vkpixmapregionselectordialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPixmapRegionSelectorDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMinimumSizeHint(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Open(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->open();
    } else {
        self->KPixmapRegionSelectorDialog::open();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseOpen(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Open_IsBase(true);
        vkpixmapregionselectordialog->open();
    } else {
        self->KPixmapRegionSelectorDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnOpen(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Open_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_Exec(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->exec();
    } else {
        return self->KPixmapRegionSelectorDialog::exec();
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseExec(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Exec_IsBase(true);
        return vkpixmapregionselectordialog->exec();
    } else {
        return self->KPixmapRegionSelectorDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnExec(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Exec_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Done(KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->done(static_cast<int>(param1));
    } else {
        self->KPixmapRegionSelectorDialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDone(KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Done_IsBase(true);
        vkpixmapregionselectordialog->done(static_cast<int>(param1));
    } else {
        self->KPixmapRegionSelectorDialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDone(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Done_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Accept(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->accept();
    } else {
        self->KPixmapRegionSelectorDialog::accept();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseAccept(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Accept_IsBase(true);
        vkpixmapregionselectordialog->accept();
    } else {
        self->KPixmapRegionSelectorDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnAccept(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Accept_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Reject(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->reject();
    } else {
        self->KPixmapRegionSelectorDialog::reject();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseReject(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Reject_IsBase(true);
        vkpixmapregionselectordialog->reject();
    } else {
        self->KPixmapRegionSelectorDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnReject(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Reject_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_KeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->keyPressEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseKeyPressEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_KeyPressEvent_IsBase(true);
        vkpixmapregionselectordialog->keyPressEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnKeyPressEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_CloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->closeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseCloseEvent(KPixmapRegionSelectorDialog* self, QCloseEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_CloseEvent_IsBase(true);
        vkpixmapregionselectordialog->closeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnCloseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_CloseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->showEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseShowEvent(KPixmapRegionSelectorDialog* self, QShowEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ShowEvent_IsBase(true);
        vkpixmapregionselectordialog->showEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnShowEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ShowEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->resizeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseResizeEvent(KPixmapRegionSelectorDialog* self, QResizeEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ResizeEvent_IsBase(true);
        vkpixmapregionselectordialog->resizeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnResizeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ResizeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseContextMenuEvent(KPixmapRegionSelectorDialog* self, QContextMenuEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ContextMenuEvent_IsBase(true);
        vkpixmapregionselectordialog->contextMenuEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnContextMenuEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_EventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseEventFilter(KPixmapRegionSelectorDialog* self, QObject* param1, QEvent* param2) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_EventFilter_IsBase(true);
        return vkpixmapregionselectordialog->eventFilter(param1, param2);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEventFilter(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_EventFilter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_DevType(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->devType();
    } else {
        return self->KPixmapRegionSelectorDialog::devType();
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseDevType(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DevType_IsBase(true);
        return vkpixmapregionselectordialog->devType();
    } else {
        return self->KPixmapRegionSelectorDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDevType(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DevType_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_HeightForWidth(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapRegionSelectorDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseHeightForWidth(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HeightForWidth_IsBase(true);
        return vkpixmapregionselectordialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPixmapRegionSelectorDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHeightForWidth(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HeightForWidth_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_HasHeightForWidth(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->hasHeightForWidth();
    } else {
        return self->KPixmapRegionSelectorDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseHasHeightForWidth(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HasHeightForWidth_IsBase(true);
        return vkpixmapregionselectordialog->hasHeightForWidth();
    } else {
        return self->KPixmapRegionSelectorDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHasHeightForWidth(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPixmapRegionSelectorDialog_PaintEngine(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->paintEngine();
    } else {
        return self->KPixmapRegionSelectorDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPixmapRegionSelectorDialog_QBasePaintEngine(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_PaintEngine_IsBase(true);
        return vkpixmapregionselectordialog->paintEngine();
    } else {
        return self->KPixmapRegionSelectorDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnPaintEngine(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_PaintEngine_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_Event(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->event(event);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Event_IsBase(true);
        return vkpixmapregionselectordialog->event(event);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Event_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->mousePressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseMousePressEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MousePressEvent_IsBase(true);
        vkpixmapregionselectordialog->mousePressEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMousePressEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MousePressEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseMouseReleaseEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseReleaseEvent_IsBase(true);
        vkpixmapregionselectordialog->mouseReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseReleaseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_IsBase(true);
        vkpixmapregionselectordialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseDoubleClickEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseMouseMoveEvent(KPixmapRegionSelectorDialog* self, QMouseEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseMoveEvent_IsBase(true);
        vkpixmapregionselectordialog->mouseMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMouseMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_WheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->wheelEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseWheelEvent(KPixmapRegionSelectorDialog* self, QWheelEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_WheelEvent_IsBase(true);
        vkpixmapregionselectordialog->wheelEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnWheelEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_WheelEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_KeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseKeyReleaseEvent(KPixmapRegionSelectorDialog* self, QKeyEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_KeyReleaseEvent_IsBase(true);
        vkpixmapregionselectordialog->keyReleaseEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnKeyReleaseEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_FocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->focusInEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseFocusInEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusInEvent_IsBase(true);
        vkpixmapregionselectordialog->focusInEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusInEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusInEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_FocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->focusOutEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseFocusOutEvent(KPixmapRegionSelectorDialog* self, QFocusEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusOutEvent_IsBase(true);
        vkpixmapregionselectordialog->focusOutEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusOutEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_EnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->enterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseEnterEvent(KPixmapRegionSelectorDialog* self, QEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_EnterEvent_IsBase(true);
        vkpixmapregionselectordialog->enterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnEnterEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_EnterEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_LeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->leaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseLeaveEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_LeaveEvent_IsBase(true);
        vkpixmapregionselectordialog->leaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnLeaveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_LeaveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_PaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->paintEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBasePaintEvent(KPixmapRegionSelectorDialog* self, QPaintEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_PaintEvent_IsBase(true);
        vkpixmapregionselectordialog->paintEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnPaintEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_PaintEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_MoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->moveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseMoveEvent(KPixmapRegionSelectorDialog* self, QMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MoveEvent_IsBase(true);
        vkpixmapregionselectordialog->moveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_MoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_TabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->tabletEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseTabletEvent(KPixmapRegionSelectorDialog* self, QTabletEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_TabletEvent_IsBase(true);
        vkpixmapregionselectordialog->tabletEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnTabletEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_TabletEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->actionEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseActionEvent(KPixmapRegionSelectorDialog* self, QActionEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ActionEvent_IsBase(true);
        vkpixmapregionselectordialog->actionEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnActionEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ActionEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDragEnterEvent(KPixmapRegionSelectorDialog* self, QDragEnterEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragEnterEvent_IsBase(true);
        vkpixmapregionselectordialog->dragEnterEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragEnterEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDragMoveEvent(KPixmapRegionSelectorDialog* self, QDragMoveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragMoveEvent_IsBase(true);
        vkpixmapregionselectordialog->dragMoveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragMoveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDragLeaveEvent(KPixmapRegionSelectorDialog* self, QDragLeaveEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragLeaveEvent_IsBase(true);
        vkpixmapregionselectordialog->dragLeaveEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDragLeaveEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->dropEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDropEvent(KPixmapRegionSelectorDialog* self, QDropEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DropEvent_IsBase(true);
        vkpixmapregionselectordialog->dropEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDropEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DropEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_HideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->hideEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseHideEvent(KPixmapRegionSelectorDialog* self, QHideEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HideEvent_IsBase(true);
        vkpixmapregionselectordialog->hideEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnHideEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_HideEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_NativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseNativeEvent(KPixmapRegionSelectorDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_NativeEvent_IsBase(true);
        return vkpixmapregionselectordialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnNativeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_NativeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->changeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseChangeEvent(KPixmapRegionSelectorDialog* self, QEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ChangeEvent_IsBase(true);
        vkpixmapregionselectordialog->changeEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnChangeEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ChangeEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_Metric(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseMetric(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Metric_IsBase(true);
        return vkpixmapregionselectordialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnMetric(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Metric_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_InitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->initPainter(painter);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseInitPainter(const KPixmapRegionSelectorDialog* self, QPainter* painter) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InitPainter_IsBase(true);
        vkpixmapregionselectordialog->initPainter(painter);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInitPainter(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InitPainter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPixmapRegionSelectorDialog_Redirected(const KPixmapRegionSelectorDialog* self, QPoint* offset) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->redirected(offset);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPixmapRegionSelectorDialog_QBaseRedirected(const KPixmapRegionSelectorDialog* self, QPoint* offset) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Redirected_IsBase(true);
        return vkpixmapregionselectordialog->redirected(offset);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnRedirected(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Redirected_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPixmapRegionSelectorDialog_SharedPainter(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->sharedPainter();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPixmapRegionSelectorDialog_QBaseSharedPainter(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SharedPainter_IsBase(true);
        return vkpixmapregionselectordialog->sharedPainter();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSharedPainter(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SharedPainter_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_InputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseInputMethodEvent(KPixmapRegionSelectorDialog* self, QInputMethodEvent* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InputMethodEvent_IsBase(true);
        vkpixmapregionselectordialog->inputMethodEvent(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInputMethodEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPixmapRegionSelectorDialog_InputMethodQuery(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return new QVariant(vkpixmapregionselectordialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapRegionSelectorDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPixmapRegionSelectorDialog_QBaseInputMethodQuery(const KPixmapRegionSelectorDialog* self, int param1) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vkpixmapregionselectordialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPixmapRegionSelectorDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnInputMethodQuery(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_FocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseFocusNextPrevChild(KPixmapRegionSelectorDialog* self, bool next) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusNextPrevChild_IsBase(true);
        return vkpixmapregionselectordialog->focusNextPrevChild(next);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusNextPrevChild(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_TimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->timerEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseTimerEvent(KPixmapRegionSelectorDialog* self, QTimerEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_TimerEvent_IsBase(true);
        vkpixmapregionselectordialog->timerEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnTimerEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_TimerEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->childEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseChildEvent(KPixmapRegionSelectorDialog* self, QChildEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ChildEvent_IsBase(true);
        vkpixmapregionselectordialog->childEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnChildEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ChildEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_CustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->customEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseCustomEvent(KPixmapRegionSelectorDialog* self, QEvent* event) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_CustomEvent_IsBase(true);
        vkpixmapregionselectordialog->customEvent(event);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnCustomEvent(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_CustomEvent_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_ConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->connectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseConnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ConnectNotify_IsBase(true);
        vkpixmapregionselectordialog->connectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnConnectNotify(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_ConnectNotify_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_DisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDisconnectNotify(KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DisconnectNotify_IsBase(true);
        vkpixmapregionselectordialog->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDisconnectNotify(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_AdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->adjustPosition(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseAdjustPosition(KPixmapRegionSelectorDialog* self, QWidget* param1) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_AdjustPosition_IsBase(true);
        vkpixmapregionselectordialog->adjustPosition(param1);
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnAdjustPosition(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_AdjustPosition_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_UpdateMicroFocus(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->updateMicroFocus();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseUpdateMicroFocus(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_UpdateMicroFocus_IsBase(true);
        vkpixmapregionselectordialog->updateMicroFocus();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnUpdateMicroFocus(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Create(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->create();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->create();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseCreate(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Create_IsBase(true);
        vkpixmapregionselectordialog->create();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnCreate(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Create_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapRegionSelectorDialog_Destroy(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->destroy();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->destroy();
    }
}

// Base class handler implementation
void KPixmapRegionSelectorDialog_QBaseDestroy(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Destroy_IsBase(true);
        vkpixmapregionselectordialog->destroy();
    } else {
        ((VirtualKPixmapRegionSelectorDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnDestroy(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Destroy_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_FocusNextChild(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->focusNextChild();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseFocusNextChild(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusNextChild_IsBase(true);
        return vkpixmapregionselectordialog->focusNextChild();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusNextChild(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusNextChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_FocusPreviousChild(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->focusPreviousChild();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseFocusPreviousChild(KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusPreviousChild_IsBase(true);
        return vkpixmapregionselectordialog->focusPreviousChild();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnFocusPreviousChild(KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = dynamic_cast<VirtualKPixmapRegionSelectorDialog*>(self);
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPixmapRegionSelectorDialog_Sender(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->sender();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPixmapRegionSelectorDialog_QBaseSender(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Sender_IsBase(true);
        return vkpixmapregionselectordialog->sender();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSender(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Sender_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_SenderSignalIndex(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->senderSignalIndex();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseSenderSignalIndex(const KPixmapRegionSelectorDialog* self) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SenderSignalIndex_IsBase(true);
        return vkpixmapregionselectordialog->senderSignalIndex();
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnSenderSignalIndex(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapRegionSelectorDialog_Receivers(const KPixmapRegionSelectorDialog* self, const char* signal) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->receivers(signal);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPixmapRegionSelectorDialog_QBaseReceivers(const KPixmapRegionSelectorDialog* self, const char* signal) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Receivers_IsBase(true);
        return vkpixmapregionselectordialog->receivers(signal);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnReceivers(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_Receivers_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapRegionSelectorDialog_IsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPixmapRegionSelectorDialog_QBaseIsSignalConnected(const KPixmapRegionSelectorDialog* self, const QMetaMethod* signal) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_IsSignalConnected_IsBase(true);
        return vkpixmapregionselectordialog->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnIsSignalConnected(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPixmapRegionSelectorDialog_GetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        return vkpixmapregionselectordialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPixmapRegionSelectorDialog_QBaseGetDecodedMetricF(const KPixmapRegionSelectorDialog* self, int metricA, int metricB) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_GetDecodedMetricF_IsBase(true);
        return vkpixmapregionselectordialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPixmapRegionSelectorDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapRegionSelectorDialog_OnGetDecodedMetricF(const KPixmapRegionSelectorDialog* self, intptr_t slot) {
    auto* vkpixmapregionselectordialog = const_cast<VirtualKPixmapRegionSelectorDialog*>(dynamic_cast<const VirtualKPixmapRegionSelectorDialog*>(self));
    if (vkpixmapregionselectordialog && vkpixmapregionselectordialog->isVirtualKPixmapRegionSelectorDialog) {
        vkpixmapregionselectordialog->setKPixmapRegionSelectorDialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPixmapRegionSelectorDialog::KPixmapRegionSelectorDialog_GetDecodedMetricF_Callback>(slot));
    }
}

void KPixmapRegionSelectorDialog_Delete(KPixmapRegionSelectorDialog* self) {
    delete self;
}
