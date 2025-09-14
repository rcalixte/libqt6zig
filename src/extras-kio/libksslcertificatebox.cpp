#include <KSslCertificateBox>
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
#include <QSslCertificate>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <ksslcertificatebox.h>
#include "libksslcertificatebox.h"
#include "libksslcertificatebox.hxx"

KSslCertificateBox* KSslCertificateBox_new(QWidget* parent) {
    return new VirtualKSslCertificateBox(parent);
}

KSslCertificateBox* KSslCertificateBox_new2() {
    return new VirtualKSslCertificateBox();
}

QMetaObject* KSslCertificateBox_MetaObject(const KSslCertificateBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSslCertificateBox_Metacast(KSslCertificateBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSslCertificateBox_Metacall(KSslCertificateBox* self, int param1, int param2, void** param3) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSslCertificateBox*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSslCertificateBox_Tr(const char* s) {
    QString _ret = KSslCertificateBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSslCertificateBox_SetCertificate(KSslCertificateBox* self, const QSslCertificate* cert, int party) {
    self->setCertificate(*cert, static_cast<KSslCertificateBox::CertificateParty>(party));
}

void KSslCertificateBox_Clear(KSslCertificateBox* self) {
    self->clear();
}

libqt_string KSslCertificateBox_Tr2(const char* s, const char* c) {
    QString _ret = KSslCertificateBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSslCertificateBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSslCertificateBox::tr(s, c, static_cast<int>(n));
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
int KSslCertificateBox_QBaseMetacall(KSslCertificateBox* self, int param1, int param2, void** param3) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Metacall_IsBase(true);
        return vksslcertificatebox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSslCertificateBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetacall(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Metacall_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslCertificateBox_DevType(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->devType();
    } else {
        return self->KSslCertificateBox::devType();
    }
}

// Base class handler implementation
int KSslCertificateBox_QBaseDevType(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DevType_IsBase(true);
        return vksslcertificatebox->devType();
    } else {
        return self->KSslCertificateBox::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDevType(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DevType_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_SetVisible(KSslCertificateBox* self, bool visible) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setVisible(visible);
    } else {
        self->KSslCertificateBox::setVisible(visible);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseSetVisible(KSslCertificateBox* self, bool visible) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SetVisible_IsBase(true);
        vksslcertificatebox->setVisible(visible);
    } else {
        self->KSslCertificateBox::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSetVisible(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SetVisible_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSslCertificateBox_SizeHint(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return new QSize(vksslcertificatebox->sizeHint());
    } else {
        return new QSize(((VirtualKSslCertificateBox*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KSslCertificateBox_QBaseSizeHint(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SizeHint_IsBase(true);
        return new QSize(vksslcertificatebox->sizeHint());
    } else {
        return new QSize(((VirtualKSslCertificateBox*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSizeHint(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SizeHint_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KSslCertificateBox_MinimumSizeHint(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return new QSize(vksslcertificatebox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSslCertificateBox*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KSslCertificateBox_QBaseMinimumSizeHint(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MinimumSizeHint_IsBase(true);
        return new QSize(vksslcertificatebox->minimumSizeHint());
    } else {
        return new QSize(((VirtualKSslCertificateBox*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMinimumSizeHint(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslCertificateBox_HeightForWidth(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSslCertificateBox::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KSslCertificateBox_QBaseHeightForWidth(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HeightForWidth_IsBase(true);
        return vksslcertificatebox->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KSslCertificateBox::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHeightForWidth(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HeightForWidth_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_HasHeightForWidth(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->hasHeightForWidth();
    } else {
        return self->KSslCertificateBox::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseHasHeightForWidth(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HasHeightForWidth_IsBase(true);
        return vksslcertificatebox->hasHeightForWidth();
    } else {
        return self->KSslCertificateBox::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHasHeightForWidth(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KSslCertificateBox_PaintEngine(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->paintEngine();
    } else {
        return self->KSslCertificateBox::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KSslCertificateBox_QBasePaintEngine(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_PaintEngine_IsBase(true);
        return vksslcertificatebox->paintEngine();
    } else {
        return self->KSslCertificateBox::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnPaintEngine(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_PaintEngine_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->event(event);
    } else {
        return ((VirtualKSslCertificateBox*)self)->event(event);
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Event_IsBase(true);
        return vksslcertificatebox->event(event);
    } else {
        return ((VirtualKSslCertificateBox*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Event_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->mousePressEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseMousePressEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MousePressEvent_IsBase(true);
        vksslcertificatebox->mousePressEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMousePressEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MousePressEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->mouseReleaseEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseReleaseEvent_IsBase(true);
        vksslcertificatebox->mouseReleaseEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseReleaseEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseDoubleClickEvent_IsBase(true);
        vksslcertificatebox->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseDoubleClickEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->mouseMoveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseMoveEvent_IsBase(true);
        vksslcertificatebox->mouseMoveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->wheelEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseWheelEvent(KSslCertificateBox* self, QWheelEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_WheelEvent_IsBase(true);
        vksslcertificatebox->wheelEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnWheelEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_WheelEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->keyPressEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_KeyPressEvent_IsBase(true);
        vksslcertificatebox->keyPressEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnKeyPressEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_KeyPressEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->keyReleaseEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_KeyReleaseEvent_IsBase(true);
        vksslcertificatebox->keyReleaseEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnKeyReleaseEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->focusInEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseFocusInEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusInEvent_IsBase(true);
        vksslcertificatebox->focusInEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusInEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusInEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->focusOutEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusOutEvent_IsBase(true);
        vksslcertificatebox->focusOutEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusOutEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusOutEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->enterEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseEnterEvent(KSslCertificateBox* self, QEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_EnterEvent_IsBase(true);
        vksslcertificatebox->enterEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEnterEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_EnterEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->leaveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseLeaveEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_LeaveEvent_IsBase(true);
        vksslcertificatebox->leaveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnLeaveEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_LeaveEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->paintEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBasePaintEvent(KSslCertificateBox* self, QPaintEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_PaintEvent_IsBase(true);
        vksslcertificatebox->paintEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnPaintEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_PaintEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->moveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseMoveEvent(KSslCertificateBox* self, QMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MoveEvent_IsBase(true);
        vksslcertificatebox->moveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_MoveEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->resizeEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseResizeEvent(KSslCertificateBox* self, QResizeEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ResizeEvent_IsBase(true);
        vksslcertificatebox->resizeEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnResizeEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ResizeEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->closeEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseCloseEvent(KSslCertificateBox* self, QCloseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_CloseEvent_IsBase(true);
        vksslcertificatebox->closeEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnCloseEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_CloseEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->contextMenuEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ContextMenuEvent_IsBase(true);
        vksslcertificatebox->contextMenuEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnContextMenuEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->tabletEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseTabletEvent(KSslCertificateBox* self, QTabletEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_TabletEvent_IsBase(true);
        vksslcertificatebox->tabletEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnTabletEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_TabletEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->actionEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseActionEvent(KSslCertificateBox* self, QActionEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ActionEvent_IsBase(true);
        vksslcertificatebox->actionEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnActionEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ActionEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->dragEnterEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragEnterEvent_IsBase(true);
        vksslcertificatebox->dragEnterEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragEnterEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragEnterEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->dragMoveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragMoveEvent_IsBase(true);
        vksslcertificatebox->dragMoveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragMoveEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->dragLeaveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragLeaveEvent_IsBase(true);
        vksslcertificatebox->dragLeaveEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragLeaveEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->dropEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDropEvent(KSslCertificateBox* self, QDropEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DropEvent_IsBase(true);
        vksslcertificatebox->dropEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDropEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DropEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->showEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseShowEvent(KSslCertificateBox* self, QShowEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ShowEvent_IsBase(true);
        vksslcertificatebox->showEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnShowEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ShowEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->hideEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseHideEvent(KSslCertificateBox* self, QHideEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HideEvent_IsBase(true);
        vksslcertificatebox->hideEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHideEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_HideEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSslCertificateBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_NativeEvent_IsBase(true);
        return vksslcertificatebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKSslCertificateBox*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnNativeEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_NativeEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->changeEvent(param1);
    } else {
        ((VirtualKSslCertificateBox*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseChangeEvent(KSslCertificateBox* self, QEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ChangeEvent_IsBase(true);
        vksslcertificatebox->changeEvent(param1);
    } else {
        ((VirtualKSslCertificateBox*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnChangeEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ChangeEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSslCertificateBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KSslCertificateBox_QBaseMetric(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Metric_IsBase(true);
        return vksslcertificatebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKSslCertificateBox*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetric(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Metric_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->initPainter(painter);
    } else {
        ((VirtualKSslCertificateBox*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseInitPainter(const KSslCertificateBox* self, QPainter* painter) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InitPainter_IsBase(true);
        vksslcertificatebox->initPainter(painter);
    } else {
        ((VirtualKSslCertificateBox*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInitPainter(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InitPainter_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->redirected(offset);
    } else {
        return ((VirtualKSslCertificateBox*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KSslCertificateBox_QBaseRedirected(const KSslCertificateBox* self, QPoint* offset) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Redirected_IsBase(true);
        return vksslcertificatebox->redirected(offset);
    } else {
        return ((VirtualKSslCertificateBox*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnRedirected(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Redirected_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->sharedPainter();
    } else {
        return ((VirtualKSslCertificateBox*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KSslCertificateBox_QBaseSharedPainter(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SharedPainter_IsBase(true);
        return vksslcertificatebox->sharedPainter();
    } else {
        return ((VirtualKSslCertificateBox*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSharedPainter(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SharedPainter_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->inputMethodEvent(param1);
    } else {
        ((VirtualKSslCertificateBox*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InputMethodEvent_IsBase(true);
        vksslcertificatebox->inputMethodEvent(param1);
    } else {
        ((VirtualKSslCertificateBox*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInputMethodEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InputMethodEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KSslCertificateBox_InputMethodQuery(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return new QVariant(vksslcertificatebox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSslCertificateBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KSslCertificateBox_QBaseInputMethodQuery(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InputMethodQuery_IsBase(true);
        return new QVariant(vksslcertificatebox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKSslCertificateBox*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInputMethodQuery(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_InputMethodQuery_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->focusNextPrevChild(next);
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseFocusNextPrevChild(KSslCertificateBox* self, bool next) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusNextPrevChild_IsBase(true);
        return vksslcertificatebox->focusNextPrevChild(next);
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusNextPrevChild(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_EventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->eventFilter(watched, event);
    } else {
        return self->KSslCertificateBox::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseEventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_EventFilter_IsBase(true);
        return vksslcertificatebox->eventFilter(watched, event);
    } else {
        return self->KSslCertificateBox::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEventFilter(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_EventFilter_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->timerEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseTimerEvent(KSslCertificateBox* self, QTimerEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_TimerEvent_IsBase(true);
        vksslcertificatebox->timerEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnTimerEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_TimerEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->childEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseChildEvent(KSslCertificateBox* self, QChildEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ChildEvent_IsBase(true);
        vksslcertificatebox->childEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnChildEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ChildEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->customEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseCustomEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_CustomEvent_IsBase(true);
        vksslcertificatebox->customEvent(event);
    } else {
        ((VirtualKSslCertificateBox*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnCustomEvent(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_CustomEvent_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->connectNotify(*signal);
    } else {
        ((VirtualKSslCertificateBox*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ConnectNotify_IsBase(true);
        vksslcertificatebox->connectNotify(*signal);
    } else {
        ((VirtualKSslCertificateBox*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnConnectNotify(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_ConnectNotify_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->disconnectNotify(*signal);
    } else {
        ((VirtualKSslCertificateBox*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DisconnectNotify_IsBase(true);
        vksslcertificatebox->disconnectNotify(*signal);
    } else {
        ((VirtualKSslCertificateBox*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDisconnectNotify(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_DisconnectNotify_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->updateMicroFocus();
    } else {
        ((VirtualKSslCertificateBox*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseUpdateMicroFocus(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_UpdateMicroFocus_IsBase(true);
        vksslcertificatebox->updateMicroFocus();
    } else {
        ((VirtualKSslCertificateBox*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnUpdateMicroFocus(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_Create(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->create();
    } else {
        ((VirtualKSslCertificateBox*)self)->create();
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseCreate(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Create_IsBase(true);
        vksslcertificatebox->create();
    } else {
        ((VirtualKSslCertificateBox*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnCreate(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Create_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KSslCertificateBox_Destroy(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->destroy();
    } else {
        ((VirtualKSslCertificateBox*)self)->destroy();
    }
}

// Base class handler implementation
void KSslCertificateBox_QBaseDestroy(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Destroy_IsBase(true);
        vksslcertificatebox->destroy();
    } else {
        ((VirtualKSslCertificateBox*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDestroy(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Destroy_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->focusNextChild();
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseFocusNextChild(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusNextChild_IsBase(true);
        return vksslcertificatebox->focusNextChild();
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusNextChild(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusNextChild_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->focusPreviousChild();
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseFocusPreviousChild(KSslCertificateBox* self) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusPreviousChild_IsBase(true);
        return vksslcertificatebox->focusPreviousChild();
    } else {
        return ((VirtualKSslCertificateBox*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusPreviousChild(KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->sender();
    } else {
        return ((VirtualKSslCertificateBox*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSslCertificateBox_QBaseSender(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Sender_IsBase(true);
        return vksslcertificatebox->sender();
    } else {
        return ((VirtualKSslCertificateBox*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSender(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Sender_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->senderSignalIndex();
    } else {
        return ((VirtualKSslCertificateBox*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSslCertificateBox_QBaseSenderSignalIndex(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SenderSignalIndex_IsBase(true);
        return vksslcertificatebox->senderSignalIndex();
    } else {
        return ((VirtualKSslCertificateBox*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSenderSignalIndex(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->receivers(signal);
    } else {
        return ((VirtualKSslCertificateBox*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSslCertificateBox_QBaseReceivers(const KSslCertificateBox* self, const char* signal) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Receivers_IsBase(true);
        return vksslcertificatebox->receivers(signal);
    } else {
        return ((VirtualKSslCertificateBox*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnReceivers(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_Receivers_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->isSignalConnected(*signal);
    } else {
        return ((VirtualKSslCertificateBox*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSslCertificateBox_QBaseIsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_IsSignalConnected_IsBase(true);
        return vksslcertificatebox->isSignalConnected(*signal);
    } else {
        return ((VirtualKSslCertificateBox*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnIsSignalConnected(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_IsSignalConnected_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        return vksslcertificatebox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSslCertificateBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KSslCertificateBox_QBaseGetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_GetDecodedMetricF_IsBase(true);
        return vksslcertificatebox->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKSslCertificateBox*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnGetDecodedMetricF(const KSslCertificateBox* self, intptr_t slot) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox && vksslcertificatebox->isVirtualKSslCertificateBox) {
        vksslcertificatebox->setKSslCertificateBox_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_GetDecodedMetricF_Callback>(slot));
    }
}

void KSslCertificateBox_Delete(KSslCertificateBox* self) {
    delete self;
}
