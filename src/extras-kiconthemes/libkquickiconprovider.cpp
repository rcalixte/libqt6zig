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
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_RequestPixmap_IsBase(true);
        return new QPixmap(vkquickiconprovider->requestPixmap(id_QString, size, *requestedSize));
    } else {
        return new QPixmap(((VirtualKQuickIconProvider*)self)->requestPixmap(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestPixmap(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_RequestPixmap_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestPixmap_Callback>(slot));
}

// Derived class handler implementation
QMetaObject* KQuickIconProvider_MetaObject(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return (QMetaObject*)vkquickiconprovider->metaObject();
    } else {
        return (QMetaObject*)self->KQuickIconProvider::metaObject();
    }
}

// Base class handler implementation
QMetaObject* KQuickIconProvider_SuperMetaObject(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_MetaObject_IsBase(true);
        return (QMetaObject*)vkquickiconprovider->metaObject();
    } else {
        return (QMetaObject*)self->KQuickIconProvider::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetaObject(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_MetaObject_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_MetaObject_Callback>(slot));
}

// Derived class handler implementation
void* KQuickIconProvider_Metacast(KQuickIconProvider* self, const char* param1) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->qt_metacast(param1);
    } else {
        return self->KQuickIconProvider::qt_metacast(param1);
    }
}

// Base class handler implementation
void* KQuickIconProvider_SuperMetacast(KQuickIconProvider* self, const char* param1) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Metacast_IsBase(true);
        return vkquickiconprovider->qt_metacast(param1);
    } else {
        return self->KQuickIconProvider::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetacast(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Metacast_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Metacast_Callback>(slot));
}

// Derived class handler implementation
int KQuickIconProvider_Metacall(KQuickIconProvider* self, int param1, int param2, void** param3) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KQuickIconProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int KQuickIconProvider_SuperMetacall(KQuickIconProvider* self, int param1, int param2, void** param3) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Metacall_IsBase(true);
        return vkquickiconprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KQuickIconProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnMetacall(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Metacall_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Metacall_Callback>(slot));
}

// Derived class handler implementation
int KQuickIconProvider_ImageType(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return static_cast<int>(vkquickiconprovider->imageType());
    } else {
        return static_cast<int>(self->KQuickIconProvider::imageType());
    }
}

// Base class handler implementation
int KQuickIconProvider_SuperImageType(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_ImageType_IsBase(true);
        return static_cast<int>(vkquickiconprovider->imageType());
    } else {
        return static_cast<int>(self->KQuickIconProvider::imageType());
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnImageType(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_ImageType_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ImageType_Callback>(slot));
}

// Derived class handler implementation
int KQuickIconProvider_Flags(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return static_cast<int>(vkquickiconprovider->flags());
    } else {
        return static_cast<int>(self->KQuickIconProvider::flags());
    }
}

// Base class handler implementation
int KQuickIconProvider_SuperFlags(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Flags_IsBase(true);
        return static_cast<int>(vkquickiconprovider->flags());
    } else {
        return static_cast<int>(self->KQuickIconProvider::flags());
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnFlags(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Flags_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Flags_Callback>(slot));
}

// Derived class handler implementation
QImage* KQuickIconProvider_RequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return new QImage(vkquickiconprovider->requestImage(id_QString, size, *requestedSize));
    } else {
        return new QImage(((VirtualKQuickIconProvider*)self)->requestImage(id_QString, size, *requestedSize));
    }
}

// Base class handler implementation
QImage* KQuickIconProvider_SuperRequestImage(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_RequestImage_IsBase(true);
        return new QImage(vkquickiconprovider->requestImage(id_QString, size, *requestedSize));
    } else {
        return new QImage(((VirtualKQuickIconProvider*)self)->requestImage(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestImage(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_RequestImage_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestImage_Callback>(slot));
}

// Derived class handler implementation
QQuickTextureFactory* KQuickIconProvider_RequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->requestTexture(id_QString, size, *requestedSize);
    } else {
        return self->KQuickIconProvider::requestTexture(id_QString, size, *requestedSize);
    }
}

// Base class handler implementation
QQuickTextureFactory* KQuickIconProvider_SuperRequestTexture(KQuickIconProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_RequestTexture_IsBase(true);
        return vkquickiconprovider->requestTexture(id_QString, size, *requestedSize);
    } else {
        return self->KQuickIconProvider::requestTexture(id_QString, size, *requestedSize);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnRequestTexture(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_RequestTexture_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_RequestTexture_Callback>(slot));
}

// Derived class handler implementation
bool KQuickIconProvider_Event(KQuickIconProvider* self, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->event(event);
    } else {
        return self->KQuickIconProvider::event(event);
    }
}

// Base class handler implementation
bool KQuickIconProvider_SuperEvent(KQuickIconProvider* self, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Event_IsBase(true);
        return vkquickiconprovider->event(event);
    } else {
        return self->KQuickIconProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnEvent(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Event_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Event_Callback>(slot));
}

// Derived class handler implementation
bool KQuickIconProvider_EventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->eventFilter(watched, event);
    } else {
        return self->KQuickIconProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KQuickIconProvider_SuperEventFilter(KQuickIconProvider* self, QObject* watched, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_EventFilter_IsBase(true);
        return vkquickiconprovider->eventFilter(watched, event);
    } else {
        return self->KQuickIconProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnEventFilter(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_EventFilter_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void KQuickIconProvider_TimerEvent(KQuickIconProvider* self, QTimerEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->timerEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperTimerEvent(KQuickIconProvider* self, QTimerEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_TimerEvent_IsBase(true);
        vkquickiconprovider->timerEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnTimerEvent(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_TimerEvent_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void KQuickIconProvider_ChildEvent(KQuickIconProvider* self, QChildEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->childEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperChildEvent(KQuickIconProvider* self, QChildEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_ChildEvent_IsBase(true);
        vkquickiconprovider->childEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnChildEvent(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_ChildEvent_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void KQuickIconProvider_CustomEvent(KQuickIconProvider* self, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->customEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperCustomEvent(KQuickIconProvider* self, QEvent* event) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_CustomEvent_IsBase(true);
        vkquickiconprovider->customEvent(event);
    } else {
        ((VirtualKQuickIconProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnCustomEvent(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_CustomEvent_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void KQuickIconProvider_ConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->connectNotify(*signal);
    } else {
        ((VirtualKQuickIconProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperConnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_ConnectNotify_IsBase(true);
        vkquickiconprovider->connectNotify(*signal);
    } else {
        ((VirtualKQuickIconProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnConnectNotify(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_ConnectNotify_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void KQuickIconProvider_DisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKQuickIconProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KQuickIconProvider_SuperDisconnectNotify(KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_DisconnectNotify_IsBase(true);
        vkquickiconprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKQuickIconProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnDisconnectNotify(KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = dynamic_cast<VirtualKQuickIconProvider*>(self);
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* KQuickIconProvider_Sender(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->sender();
    } else {
        return ((VirtualKQuickIconProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* KQuickIconProvider_SuperSender(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Sender_IsBase(true);
        return vkquickiconprovider->sender();
    } else {
        return ((VirtualKQuickIconProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnSender(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Sender_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Sender_Callback>(slot));
}

// Derived class handler implementation
int KQuickIconProvider_SenderSignalIndex(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->senderSignalIndex();
    } else {
        return ((VirtualKQuickIconProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KQuickIconProvider_SuperSenderSignalIndex(const KQuickIconProvider* self) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_SenderSignalIndex_IsBase(true);
        return vkquickiconprovider->senderSignalIndex();
    } else {
        return ((VirtualKQuickIconProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnSenderSignalIndex(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int KQuickIconProvider_Receivers(const KQuickIconProvider* self, const char* signal) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->receivers(signal);
    } else {
        return ((VirtualKQuickIconProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KQuickIconProvider_SuperReceivers(const KQuickIconProvider* self, const char* signal) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_Receivers_IsBase(true);
        return vkquickiconprovider->receivers(signal);
    } else {
        return ((VirtualKQuickIconProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnReceivers(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_Receivers_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool KQuickIconProvider_IsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        return vkquickiconprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKQuickIconProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KQuickIconProvider_SuperIsSignalConnected(const KQuickIconProvider* self, const QMetaMethod* signal) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider) {
        vkquickiconprovider->setKQuickIconProvider_IsSignalConnected_IsBase(true);
        return vkquickiconprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKQuickIconProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KQuickIconProvider_OnIsSignalConnected(const KQuickIconProvider* self, intptr_t slot) {
    auto* vkquickiconprovider = const_cast<VirtualKQuickIconProvider*>(dynamic_cast<const VirtualKQuickIconProvider*>(self));
    if (vkquickiconprovider && vkquickiconprovider->isVirtualKQuickIconProvider)
        vkquickiconprovider->setKQuickIconProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualKQuickIconProvider::KQuickIconProvider_IsSignalConnected_Callback>(slot));
}

void KQuickIconProvider_Delete(KQuickIconProvider* self) {
    delete self;
}
