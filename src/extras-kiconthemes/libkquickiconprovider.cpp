#include <KQuickIconProvider>
#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QQmlImageProviderBase>
#include <QQuickImageProvider>
#include <QQuickTextureFactory>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <kquickiconprovider.h>
#include "libkquickiconprovider.h"
#include "libkquickiconprovider.hxx"

KQuickIconProvider* KQuickIconProvider_new() {
    return new VirtualKQuickIconProvider();
}

QPixmap* KQuickIconProvider_RequestPixmap(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->requestPixmap(id_QString, size, *requestedSize));
}

// Base class handler implementation
QPixmap* KQuickIconProvider_SuperRequestPixmap(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->KQuickIconProvider::requestPixmap(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestPixmap(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_requestpixmap_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestPixmap_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* KQuickIconProvider_MetaObject(const KQuickIconProvider* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* KQuickIconProvider_SuperMetaObject(const KQuickIconProvider* self) {
    return (QMetaObject*)self->KQuickIconProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetaObject(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self)))
        vkquickiconprovider->kquickiconprovider_metaobject_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* KQuickIconProvider_Metacast(KQuickIconProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* KQuickIconProvider_SuperMetacast(KQuickIconProvider* self, const char* param1) {
    return self->KQuickIconProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetacast(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_metacast_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Metacast_Callback>(slot);
}

// Derived class handler implementation
int KQuickIconProvider_Metacall(KQuickIconProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int KQuickIconProvider_SuperMetacall(KQuickIconProvider* self, int param1, int param2, void** param3) {
    return self->KQuickIconProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetacall(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_metacall_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KQuickIconProvider_ImageType(const KQuickIconProvider* self) {
    return static_cast<int>(self->imageType());
}

// Base class handler implementation
int KQuickIconProvider_SuperImageType(const KQuickIconProvider* self) {
    return static_cast<int>(self->KQuickIconProvider::imageType());
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnImageType(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self)))
        vkquickiconprovider->kquickiconprovider_imagetype_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ImageType_Callback>(slot);
}

// Derived class handler implementation
int KQuickIconProvider_Flags(const KQuickIconProvider* self) {
    return static_cast<int>(self->flags());
}

// Base class handler implementation
int KQuickIconProvider_SuperFlags(const KQuickIconProvider* self) {
    return static_cast<int>(self->KQuickIconProvider::flags());
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnFlags(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self)))
        vkquickiconprovider->kquickiconprovider_flags_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Flags_Callback>(slot);
}

// Derived class handler implementation
QImage* KQuickIconProvider_RequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->requestImage(id_QString, size, *requestedSize));
}

// Base class handler implementation
QImage* KQuickIconProvider_SuperRequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->KQuickIconProvider::requestImage(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestImage(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_requestimage_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestImage_Callback>(slot);
}

// Derived class handler implementation
QQuickTextureFactory* KQuickIconProvider_RequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->requestTexture(id_QString, size, *requestedSize);
}

// Base class handler implementation
QQuickTextureFactory* KQuickIconProvider_SuperRequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->KQuickIconProvider::requestTexture(id_QString, size, *requestedSize);
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestTexture(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_requesttexture_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestTexture_Callback>(slot);
}

// Derived class handler implementation
bool KQuickIconProvider_Event(KQuickIconProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KQuickIconProvider_SuperEvent(KQuickIconProvider* self, QEvent* event) {
    return self->KQuickIconProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnEvent(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_event_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool KQuickIconProvider_EventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KQuickIconProvider_SuperEventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event) {
    return self->KQuickIconProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnEventFilter(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_eventfilter_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KQuickIconProvider_TimerEvent(KQuickIconProvider* self, QTimerEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider) {
        vkquickiconprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KQuickIconProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperTimerEvent(KQuickIconProvider* self, QTimerEvent* event) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self)) {
        vkquickiconprovider->KQuickIconProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KQuickIconProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnTimerEvent(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_timerevent_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KQuickIconProvider_ChildEvent(KQuickIconProvider* self, QChildEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider) {
        vkquickiconprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KQuickIconProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperChildEvent(KQuickIconProvider* self, QChildEvent* event) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self)) {
        vkquickiconprovider->KQuickIconProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KQuickIconProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnChildEvent(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_childevent_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KQuickIconProvider_CustomEvent(KQuickIconProvider* self, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider) {
        vkquickiconprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KQuickIconProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperCustomEvent(KQuickIconProvider* self, QEvent* event) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self)) {
        vkquickiconprovider->KQuickIconProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KQuickIconProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnCustomEvent(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_customevent_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KQuickIconProvider_ConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider) {
        vkquickiconprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KQuickIconProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self)) {
        vkquickiconprovider->KQuickIconProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KQuickIconProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnConnectNotify(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_connectnotify_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KQuickIconProvider_DisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider) {
        vkquickiconprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KQuickIconProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperDisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self)) {
        vkquickiconprovider->KQuickIconProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KQuickIconProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnDisconnectNotify(KQuickIconProvider* self, intptr_t slot) {
    if (auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self))
        vkquickiconprovider->kquickiconprovider_disconnectnotify_callback = reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KQuickIconProvider_Sender(const KQuickIconProvider* self) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self))) {
        return vkquickiconprovider->VirtualKQuickIconProvider::sender();
    } else
        qFatal("Error: Protected method KQuickIconProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KQuickIconProvider_SenderSignalIndex(const KQuickIconProvider* self) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self))) {
        return vkquickiconprovider->VirtualKQuickIconProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method KQuickIconProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KQuickIconProvider_Receivers(const KQuickIconProvider* self, const char* signal) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self))) {
        return vkquickiconprovider->VirtualKQuickIconProvider::receivers(signal);
    } else
        qFatal("Error: Protected method KQuickIconProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KQuickIconProvider_IsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal) {
    if (auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self))) {
        return vkquickiconprovider->VirtualKQuickIconProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KQuickIconProvider::isSignalConnected called without a directly constructed type");
}

void KQuickIconProvider_Delete(KQuickIconProvider* self) {
    delete self;
}
