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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSslCertificateBox_Tr(const char* s) {
    auto _ret = KSslCertificateBox::tr(s);
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
    auto _ret = KSslCertificateBox::tr(s, c);
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
    auto _ret = KSslCertificateBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KSslCertificateBox_SuperMetaObject(const KSslCertificateBox* self) {
    return (QMetaObject*)self->KSslCertificateBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetaObject(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_metaobject_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KSslCertificateBox_SuperMetacast(KSslCertificateBox* self, const char* param1) {
    return self->KSslCertificateBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetacast(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_metacast_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KSslCertificateBox_SuperMetacall(KSslCertificateBox* self, int param1, int param2, void** param3) {
    return self->KSslCertificateBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetacall(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_metacall_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KSslCertificateBox_DevType(const KSslCertificateBox* self) {
    return self->devType();
}

// Base class handler implementation
int KSslCertificateBox_SuperDevType(const KSslCertificateBox* self) {
    return self->KSslCertificateBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDevType(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_devtype_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_SetVisible(KSslCertificateBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KSslCertificateBox_SuperSetVisible(KSslCertificateBox* self, bool visible) {
    self->KSslCertificateBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSetVisible(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_setvisible_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KSslCertificateBox_SizeHint(const KSslCertificateBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KSslCertificateBox_SuperSizeHint(const KSslCertificateBox* self) {
    return new QSize(self->KSslCertificateBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSizeHint(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_sizehint_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KSslCertificateBox_MinimumSizeHint(const KSslCertificateBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KSslCertificateBox_SuperMinimumSizeHint(const KSslCertificateBox* self) {
    return new QSize(self->KSslCertificateBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMinimumSizeHint(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_minimumsizehint_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KSslCertificateBox_HeightForWidth(const KSslCertificateBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KSslCertificateBox_SuperHeightForWidth(const KSslCertificateBox* self, int param1) {
    return self->KSslCertificateBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHeightForWidth(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_heightforwidth_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KSslCertificateBox_HasHeightForWidth(const KSslCertificateBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KSslCertificateBox_SuperHasHeightForWidth(const KSslCertificateBox* self) {
    return self->KSslCertificateBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHasHeightForWidth(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_hasheightforwidth_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KSslCertificateBox_PaintEngine(const KSslCertificateBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KSslCertificateBox_SuperPaintEngine(const KSslCertificateBox* self) {
    return self->KSslCertificateBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnPaintEngine(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_paintengine_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KSslCertificateBox_Event(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        return vksslcertificatebox->event(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslCertificateBox_SuperEvent(KSslCertificateBox* self, QEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        return vksslcertificatebox->KSslCertificateBox::event(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_event_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Event_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_MousePressEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperMousePressEvent(KSslCertificateBox* self, QMouseEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMousePressEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_mousepressevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_MouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseReleaseEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_mousereleaseevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_MouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseDoubleClickEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_MouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMouseMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_mousemoveevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_WheelEvent(KSslCertificateBox* self, QWheelEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperWheelEvent(KSslCertificateBox* self, QWheelEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnWheelEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_wheelevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_KeyPressEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnKeyPressEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_keypressevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_KeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnKeyReleaseEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_keyreleaseevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_FocusInEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperFocusInEvent(KSslCertificateBox* self, QFocusEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusInEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_focusinevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_FocusOutEvent(KSslCertificateBox* self, QFocusEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusOutEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_focusoutevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_EnterEvent(KSslCertificateBox* self, QEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperEnterEvent(KSslCertificateBox* self, QEnterEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEnterEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_enterevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_LeaveEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperLeaveEvent(KSslCertificateBox* self, QEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnLeaveEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_leaveevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_PaintEvent(KSslCertificateBox* self, QPaintEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperPaintEvent(KSslCertificateBox* self, QPaintEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnPaintEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_paintevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_MoveEvent(KSslCertificateBox* self, QMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperMoveEvent(KSslCertificateBox* self, QMoveEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_moveevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ResizeEvent(KSslCertificateBox* self, QResizeEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperResizeEvent(KSslCertificateBox* self, QResizeEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnResizeEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_resizeevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_CloseEvent(KSslCertificateBox* self, QCloseEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperCloseEvent(KSslCertificateBox* self, QCloseEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnCloseEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_closeevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnContextMenuEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_contextmenuevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_TabletEvent(KSslCertificateBox* self, QTabletEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperTabletEvent(KSslCertificateBox* self, QTabletEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnTabletEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_tabletevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ActionEvent(KSslCertificateBox* self, QActionEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperActionEvent(KSslCertificateBox* self, QActionEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnActionEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_actionevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_DragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragEnterEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_dragenterevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_DragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragMoveEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_dragmoveevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_DragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDragLeaveEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_dragleaveevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_DropEvent(KSslCertificateBox* self, QDropEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperDropEvent(KSslCertificateBox* self, QDropEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDropEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_dropevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ShowEvent(KSslCertificateBox* self, QShowEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperShowEvent(KSslCertificateBox* self, QShowEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnShowEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_showevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_HideEvent(KSslCertificateBox* self, QHideEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperHideEvent(KSslCertificateBox* self, QHideEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnHideEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_hideevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KSslCertificateBox_NativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        return vksslcertificatebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslCertificateBox_SuperNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        return vksslcertificatebox->KSslCertificateBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnNativeEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_nativeevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ChangeEvent(KSslCertificateBox* self, QEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperChangeEvent(KSslCertificateBox* self, QEvent* param1) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnChangeEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_changeevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KSslCertificateBox_Metric(const KSslCertificateBox* self, int param1) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox) {
        return vksslcertificatebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KSslCertificateBox_SuperMetric(const KSslCertificateBox* self, int param1) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->KSslCertificateBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnMetric(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_metric_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_InitPainter(const KSslCertificateBox* self, QPainter* painter) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox) {
        vksslcertificatebox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperInitPainter(const KSslCertificateBox* self, QPainter* painter) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        vksslcertificatebox->KSslCertificateBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInitPainter(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_initpainter_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KSslCertificateBox_Redirected(const KSslCertificateBox* self, QPoint* offset) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox) {
        return vksslcertificatebox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KSslCertificateBox_SuperRedirected(const KSslCertificateBox* self, QPoint* offset) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->KSslCertificateBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnRedirected(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_redirected_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KSslCertificateBox_SharedPainter(const KSslCertificateBox* self) {
    auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self));
    if (vksslcertificatebox) {
        return vksslcertificatebox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KSslCertificateBox_SuperSharedPainter(const KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->KSslCertificateBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnSharedPainter(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_sharedpainter_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_InputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInputMethodEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_inputmethodevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KSslCertificateBox_InputMethodQuery(const KSslCertificateBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KSslCertificateBox_SuperInputMethodQuery(const KSslCertificateBox* self, int param1) {
    return new QVariant(self->KSslCertificateBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnInputMethodQuery(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self)))
        vksslcertificatebox->ksslcertificatebox_inputmethodquery_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KSslCertificateBox_FocusNextPrevChild(KSslCertificateBox* self, bool next) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        return vksslcertificatebox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KSslCertificateBox_SuperFocusNextPrevChild(KSslCertificateBox* self, bool next) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        return vksslcertificatebox->KSslCertificateBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnFocusNextPrevChild(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_focusnextprevchild_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KSslCertificateBox_EventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KSslCertificateBox_SuperEventFilter(KSslCertificateBox* self, QObject* watched, QEvent* event) {
    return self->KSslCertificateBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnEventFilter(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_eventfilter_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_TimerEvent(KSslCertificateBox* self, QTimerEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperTimerEvent(KSslCertificateBox* self, QTimerEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnTimerEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_timerevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ChildEvent(KSslCertificateBox* self, QChildEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperChildEvent(KSslCertificateBox* self, QChildEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnChildEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_childevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_CustomEvent(KSslCertificateBox* self, QEvent* event) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperCustomEvent(KSslCertificateBox* self, QEvent* event) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnCustomEvent(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_customevent_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_ConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnConnectNotify(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_connectnotify_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KSslCertificateBox_DisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self);
    if (vksslcertificatebox) {
        vksslcertificatebox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KSslCertificateBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KSslCertificateBox_SuperDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->KSslCertificateBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KSslCertificateBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KSslCertificateBox_OnDisconnectNotify(KSslCertificateBox* self, intptr_t slot) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self))
        vksslcertificatebox->ksslcertificatebox_disconnectnotify_callback = reinterpret_cast<VirtualKSslCertificateBox::KSslCertificateBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KSslCertificateBox_UpdateMicroFocus(KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->VirtualKSslCertificateBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KSslCertificateBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KSslCertificateBox_Create(KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->VirtualKSslCertificateBox::create();
    } else
        qFatal("Error: Protected method KSslCertificateBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KSslCertificateBox_Destroy(KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        vksslcertificatebox->VirtualKSslCertificateBox::destroy();
    } else
        qFatal("Error: Protected method KSslCertificateBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslCertificateBox_FocusNextChild(KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        return vksslcertificatebox->VirtualKSslCertificateBox::focusNextChild();
    } else
        qFatal("Error: Protected method KSslCertificateBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslCertificateBox_FocusPreviousChild(KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = dynamic_cast<VirtualKSslCertificateBox*>(self)) {
        return vksslcertificatebox->VirtualKSslCertificateBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KSslCertificateBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KSslCertificateBox_Sender(const KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->VirtualKSslCertificateBox::sender();
    } else
        qFatal("Error: Protected method KSslCertificateBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KSslCertificateBox_SenderSignalIndex(const KSslCertificateBox* self) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->VirtualKSslCertificateBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KSslCertificateBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KSslCertificateBox_Receivers(const KSslCertificateBox* self, const char* signal) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->VirtualKSslCertificateBox::receivers(signal);
    } else
        qFatal("Error: Protected method KSslCertificateBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KSslCertificateBox_IsSignalConnected(const KSslCertificateBox* self, const QMetaMethod* signal) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->VirtualKSslCertificateBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KSslCertificateBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KSslCertificateBox_GetDecodedMetricF(const KSslCertificateBox* self, int metricA, int metricB) {
    if (auto* vksslcertificatebox = const_cast<VirtualKSslCertificateBox*>(dynamic_cast<const VirtualKSslCertificateBox*>(self))) {
        return vksslcertificatebox->VirtualKSslCertificateBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KSslCertificateBox::getDecodedMetricF called without a directly constructed type");
}

void KSslCertificateBox_Delete(KSslCertificateBox* self) {
    delete self;
}
