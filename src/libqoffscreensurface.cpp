#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
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

QSurface* QOffscreenSurface_AsQSurface(const QOffscreenSurface* self) {
    return const_cast<QOffscreenSurface*>(self);
}

QOffscreenSurface* QOffscreenSurface_FromQSurface(const QSurface* _qsurface) {
    return dynamic_cast<QOffscreenSurface*>(const_cast<QSurface*>(_qsurface));
}

QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOffscreenSurface_Metacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOffscreenSurface_Tr(const char* s) {
    auto _ret = QOffscreenSurface::tr(s);
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
    return static_cast<int>(self->surfaceType());
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
    return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
    return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
    return new QSize(self->size());
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
    QOffscreenSurface::connect(self,
                               static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged),
                               [self, slotFunc](QScreen* screen) {
                                   QScreen* sigval1 = screen;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QOffscreenSurface_Tr2(const char* s, const char* c) {
    auto _ret = QOffscreenSurface::tr(s, c);
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
    auto _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
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
QMetaObject* QOffscreenSurface_SuperMetaObject(const QOffscreenSurface* self) {
    return (QMetaObject*)self->QOffscreenSurface::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnMetaObject(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self)))
        vqoffscreensurface->qoffscreensurface_metaobject_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QOffscreenSurface_SuperMetacast(QOffscreenSurface* self, const char* param1) {
    return self->QOffscreenSurface::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnMetacast(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_metacast_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Metacast_Callback>(slot);
}

// Base class handler implementation
int QOffscreenSurface_SuperMetacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    return self->QOffscreenSurface::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnMetacall(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_metacall_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Metacall_Callback>(slot);
}

// Base class handler implementation
int QOffscreenSurface_SuperSurfaceType(const QOffscreenSurface* self) {
    return static_cast<int>(self->QOffscreenSurface::surfaceType());
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSurfaceType(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self)))
        vqoffscreensurface->qoffscreensurface_surfacetype_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SurfaceType_Callback>(slot);
}

// Base class handler implementation
QSurfaceFormat* QOffscreenSurface_SuperFormat(const QOffscreenSurface* self) {
    return new QSurfaceFormat(self->QOffscreenSurface::format());
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnFormat(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self)))
        vqoffscreensurface->qoffscreensurface_format_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Format_Callback>(slot);
}

// Base class handler implementation
QSize* QOffscreenSurface_SuperSize(const QOffscreenSurface* self) {
    return new QSize(self->QOffscreenSurface::size());
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSize(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self)))
        vqoffscreensurface->qoffscreensurface_size_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Size_Callback>(slot);
}

// Derived class handler implementation
bool QOffscreenSurface_Event(QOffscreenSurface* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QOffscreenSurface_SuperEvent(QOffscreenSurface* self, QEvent* event) {
    return self->QOffscreenSurface::event(event);
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_event_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Event_Callback>(slot);
}

// Derived class handler implementation
bool QOffscreenSurface_EventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QOffscreenSurface_SuperEventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    return self->QOffscreenSurface::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEventFilter(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_eventfilter_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface) {
        vqoffscreensurface->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOffscreenSurface::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOffscreenSurface_SuperTimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->QOffscreenSurface::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QOffscreenSurface::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnTimerEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_timerevent_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface) {
        vqoffscreensurface->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOffscreenSurface::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOffscreenSurface_SuperChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->QOffscreenSurface::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QOffscreenSurface::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnChildEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_childevent_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface) {
        vqoffscreensurface->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QOffscreenSurface::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QOffscreenSurface_SuperCustomEvent(QOffscreenSurface* self, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->QOffscreenSurface::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QOffscreenSurface::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnCustomEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_customevent_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface) {
        vqoffscreensurface->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOffscreenSurface::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOffscreenSurface_SuperConnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->QOffscreenSurface::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOffscreenSurface::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnConnectNotify(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_connectnotify_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self);
    if (vqoffscreensurface) {
        vqoffscreensurface->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QOffscreenSurface::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QOffscreenSurface_SuperDisconnectNotify(QOffscreenSurface* self, const QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->QOffscreenSurface::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QOffscreenSurface::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnDisconnectNotify(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self))
        vqoffscreensurface->qoffscreensurface_disconnectnotify_callback = reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->VirtualQOffscreenSurface::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QOffscreenSurface::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->VirtualQOffscreenSurface::sender();
    } else
        qFatal("Error: Protected method QOffscreenSurface::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->VirtualQOffscreenSurface::senderSignalIndex();
    } else
        qFatal("Error: Protected method QOffscreenSurface::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->VirtualQOffscreenSurface::receivers(signal);
    } else
        qFatal("Error: Protected method QOffscreenSurface::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, const QMetaMethod* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->VirtualQOffscreenSurface::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QOffscreenSurface::isSignalConnected called without a directly constructed type");
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
    delete self;
}
