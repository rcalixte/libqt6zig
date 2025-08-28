#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTimerEvent>
#include <qoffscreensurface.h>
#include "libqoffscreensurface.h"
#include "libqoffscreensurface.hxx"

QOffscreenSurface* QOffscreenSurface_new() {
    return new VirtualQOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen) {
    return new VirtualQOffscreenSurface(screen);
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent) {
    return new VirtualQOffscreenSurface(screen, parent);
}

QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOffscreenSurface_Metacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOffscreenSurface*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOffscreenSurface_Tr(const char* s) {
    QString _ret = QOffscreenSurface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return static_cast<int>(self->surfaceType());
    } else {
        return static_cast<int>(((VirtualQOffscreenSurface*)self)->surfaceType());
    }
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
    self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
    self->destroy();
}

bool QOffscreenSurface_IsValid(const QOffscreenSurface* self) {
    return self->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, const QSurfaceFormat* format) {
    self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return new QSurfaceFormat(self->format());
    } else {
        return new QSurfaceFormat(((VirtualQOffscreenSurface*)self)->format());
    }
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
    return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = dynamic_cast<const VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return new QSize(self->size());
    } else {
        return new QSize(((VirtualQOffscreenSurface*)self)->size());
    }
}

QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self) {
    return self->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
    self->setScreen(screen);
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
    self->screenChanged(screen);
}

void QOffscreenSurface_Connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot) {
    void (*slotFunc)(QOffscreenSurface*, QScreen*) = reinterpret_cast<void (*)(QOffscreenSurface*, QScreen*)>(slot);
    QOffscreenSurface::connect(self, &QOffscreenSurface::screenChanged, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

libqt_string QOffscreenSurface_Tr2(const char* s, const char* c) {
    QString _ret = QOffscreenSurface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
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
int QOffscreenSurface_QBaseMetacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Metacall_IsBase(true);
        return vqoffscreensurface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOffscreenSurface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnMetacall(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Metacall_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseSurfaceType(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_SurfaceType_IsBase(true);
        return static_cast<int>(vqoffscreensurface->surfaceType());
    } else {
        return static_cast<int>(self->QOffscreenSurface::surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSurfaceType(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_SurfaceType_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SurfaceType_Callback>(slot));
    }
}

// Base class handler implementation
QSurfaceFormat* QOffscreenSurface_QBaseFormat(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Format_IsBase(true);
        return new QSurfaceFormat(vqoffscreensurface->format());
    } else {
        return new QSurfaceFormat(((VirtualQOffscreenSurface*)self)->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnFormat(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Format_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Format_Callback>(slot));
    }
}

// Base class handler implementation
QSize* QOffscreenSurface_QBaseSize(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Size_IsBase(true);
        return new QSize(vqoffscreensurface->size());
    } else {
        return new QSize(((VirtualQOffscreenSurface*)self)->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSize(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Size_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_Event(QOffscreenSurface* self, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->event(event);
    } else {
        return self->QOffscreenSurface::event(event);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseEvent(QOffscreenSurface* self, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Event_IsBase(true);
        return vqoffscreensurface->event(event);
    } else {
        return self->QOffscreenSurface::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEvent(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Event_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_EventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->eventFilter(watched, event);
    } else {
        return self->QOffscreenSurface::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseEventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_EventFilter_IsBase(true);
        return vqoffscreensurface->eventFilter(watched, event);
    } else {
        return self->QOffscreenSurface::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEventFilter(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_EventFilter_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->timerEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseTimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_TimerEvent_IsBase(true);
        vqoffscreensurface->timerEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnTimerEvent(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_TimerEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->childEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ChildEvent_IsBase(true);
        vqoffscreensurface->childEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnChildEvent(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ChildEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->customEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseCustomEvent(QOffscreenSurface* self, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_CustomEvent_IsBase(true);
        vqoffscreensurface->customEvent(event);
    } else {
        ((VirtualQOffscreenSurface*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnCustomEvent(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_CustomEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->connectNotify(*signal);
    } else {
        ((VirtualQOffscreenSurface*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ConnectNotify_IsBase(true);
        vqoffscreensurface->connectNotify(*signal);
    } else {
        ((VirtualQOffscreenSurface*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnConnectNotify(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ConnectNotify_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->disconnectNotify(*signal);
    } else {
        ((VirtualQOffscreenSurface*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_DisconnectNotify_IsBase(true);
        vqoffscreensurface->disconnectNotify(*signal);
    } else {
        ((VirtualQOffscreenSurface*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnDisconnectNotify(QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_DisconnectNotify_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOffscreenSurface*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ResolveInterface_IsBase(true);
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOffscreenSurface*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnResolveInterface(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_ResolveInterface_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->sender();
    } else {
        return ((VirtualQOffscreenSurface*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOffscreenSurface_QBaseSender(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Sender_IsBase(true);
        return vqoffscreensurface->sender();
    } else {
        return ((VirtualQOffscreenSurface*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSender(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Sender_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->senderSignalIndex();
    } else {
        return ((VirtualQOffscreenSurface*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseSenderSignalIndex(const QOffscreenSurface* self) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_SenderSignalIndex_IsBase(true);
        return vqoffscreensurface->senderSignalIndex();
    } else {
        return ((VirtualQOffscreenSurface*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSenderSignalIndex(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->receivers(signal);
    } else {
        return ((VirtualQOffscreenSurface*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseReceivers(const QOffscreenSurface* self, const char* signal) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Receivers_IsBase(true);
        return vqoffscreensurface->receivers(signal);
    } else {
        return ((VirtualQOffscreenSurface*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnReceivers(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_Receivers_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        return vqoffscreensurface->isSignalConnected(*signal);
    } else {
        return ((VirtualQOffscreenSurface*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseIsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_IsSignalConnected_IsBase(true);
        return vqoffscreensurface->isSignalConnected(*signal);
    } else {
        return ((VirtualQOffscreenSurface*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnIsSignalConnected(const QOffscreenSurface* self, intptr_t slot) {
    auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self));
    if (vqoffscreensurface && vqoffscreensurface->isVirtualQOffscreenSurface) {
        vqoffscreensurface->setQOffscreenSurface_IsSignalConnected_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_IsSignalConnected_Callback>(slot));
    }
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
    delete self;
}
