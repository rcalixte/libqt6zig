#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QQmlImageProviderBase>
#include <QQuickAsyncImageProvider>
#include <QQuickImageProvider>
#include <QQuickImageResponse>
#include <QQuickTextureFactory>
#include <QQuickWindow>
#include <QSGTexture>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <qquickimageprovider.h>
#include "libqquickimageprovider.h"
#include "libqquickimageprovider.hxx"

QQuickTextureFactory* QQuickTextureFactory_new() {
    return new VirtualQQuickTextureFactory();
}

QMetaObject* QQuickTextureFactory_MetaObject(const QQuickTextureFactory* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickTextureFactory_Metacast(QQuickTextureFactory* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickTextureFactory_Metacall(QQuickTextureFactory* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickTextureFactory_Tr(const char* s) {
    auto _ret = QQuickTextureFactory::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSGTexture* QQuickTextureFactory_CreateTexture(const QQuickTextureFactory* self, QQuickWindow* window) {
    return self->createTexture(window);
}

QSize* QQuickTextureFactory_TextureSize(const QQuickTextureFactory* self) {
    return new QSize(self->textureSize());
}

int QQuickTextureFactory_TextureByteCount(const QQuickTextureFactory* self) {
    return self->textureByteCount();
}

QImage* QQuickTextureFactory_Image(const QQuickTextureFactory* self) {
    return new QImage(self->image());
}

QQuickTextureFactory* QQuickTextureFactory_TextureFactoryForImage(const QImage* image) {
    return QQuickTextureFactory::textureFactoryForImage(*image);
}

libqt_string QQuickTextureFactory_Tr2(const char* s, const char* c) {
    auto _ret = QQuickTextureFactory::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickTextureFactory_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickTextureFactory::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickTextureFactory_SuperMetaObject(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_MetaObject_IsBase(true);
        return (QMetaObject*)vqquicktexturefactory->metaObject();
    } else {
        return (QMetaObject*)self->QQuickTextureFactory::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetaObject(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_MetaObject_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickTextureFactory_SuperMetacast(QQuickTextureFactory* self, const char* param1) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Metacast_IsBase(true);
        return vqquicktexturefactory->qt_metacast(param1);
    } else {
        return self->QQuickTextureFactory::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetacast(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Metacast_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickTextureFactory_SuperMetacall(QQuickTextureFactory* self, int param1, int param2, void** param3) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Metacall_IsBase(true);
        return vqquicktexturefactory->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickTextureFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetacall(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Metacall_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Metacall_Callback>(slot));
}

// Base class handler implementation
QSGTexture* QQuickTextureFactory_SuperCreateTexture(const QQuickTextureFactory* self, QQuickWindow* window) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_CreateTexture_IsBase(true);
        return vqquicktexturefactory->createTexture(window);
    } else {
        return ((VirtualQQuickTextureFactory*)self)->createTexture(window);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnCreateTexture(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_CreateTexture_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_CreateTexture_Callback>(slot));
}

// Base class handler implementation
QSize* QQuickTextureFactory_SuperTextureSize(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_TextureSize_IsBase(true);
        return new QSize(vqquicktexturefactory->textureSize());
    } else {
        return new QSize(((VirtualQQuickTextureFactory*)self)->textureSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTextureSize(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_TextureSize_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TextureSize_Callback>(slot));
}

// Base class handler implementation
int QQuickTextureFactory_SuperTextureByteCount(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_TextureByteCount_IsBase(true);
        return vqquicktexturefactory->textureByteCount();
    } else {
        return ((VirtualQQuickTextureFactory*)self)->textureByteCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTextureByteCount(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_TextureByteCount_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TextureByteCount_Callback>(slot));
}

// Base class handler implementation
QImage* QQuickTextureFactory_SuperImage(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Image_IsBase(true);
        return new QImage(vqquicktexturefactory->image());
    } else {
        return new QImage(((VirtualQQuickTextureFactory*)self)->image());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnImage(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Image_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Image_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextureFactory_Event(QQuickTextureFactory* self, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->event(event);
    } else {
        return self->QQuickTextureFactory::event(event);
    }
}

// Base class handler implementation
bool QQuickTextureFactory_SuperEvent(QQuickTextureFactory* self, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Event_IsBase(true);
        return vqquicktexturefactory->event(event);
    } else {
        return self->QQuickTextureFactory::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnEvent(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Event_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextureFactory_EventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->eventFilter(watched, event);
    } else {
        return self->QQuickTextureFactory::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickTextureFactory_SuperEventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_EventFilter_IsBase(true);
        return vqquicktexturefactory->eventFilter(watched, event);
    } else {
        return self->QQuickTextureFactory::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnEventFilter(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_EventFilter_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextureFactory_TimerEvent(QQuickTextureFactory* self, QTimerEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->timerEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperTimerEvent(QQuickTextureFactory* self, QTimerEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_TimerEvent_IsBase(true);
        vqquicktexturefactory->timerEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTimerEvent(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_TimerEvent_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextureFactory_ChildEvent(QQuickTextureFactory* self, QChildEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->childEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperChildEvent(QQuickTextureFactory* self, QChildEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_ChildEvent_IsBase(true);
        vqquicktexturefactory->childEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnChildEvent(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_ChildEvent_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextureFactory_CustomEvent(QQuickTextureFactory* self, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->customEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperCustomEvent(QQuickTextureFactory* self, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_CustomEvent_IsBase(true);
        vqquicktexturefactory->customEvent(event);
    } else {
        ((VirtualQQuickTextureFactory*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnCustomEvent(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_CustomEvent_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextureFactory_ConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->connectNotify(*signal);
    } else {
        ((VirtualQQuickTextureFactory*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_ConnectNotify_IsBase(true);
        vqquicktexturefactory->connectNotify(*signal);
    } else {
        ((VirtualQQuickTextureFactory*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnConnectNotify(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickTextureFactory_DisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTextureFactory*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperDisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_DisconnectNotify_IsBase(true);
        vqquicktexturefactory->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickTextureFactory*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnDisconnectNotify(QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickTextureFactory_Sender(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->sender();
    } else {
        return ((VirtualQQuickTextureFactory*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickTextureFactory_SuperSender(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Sender_IsBase(true);
        return vqquicktexturefactory->sender();
    } else {
        return ((VirtualQQuickTextureFactory*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnSender(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Sender_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickTextureFactory_SenderSignalIndex(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->senderSignalIndex();
    } else {
        return ((VirtualQQuickTextureFactory*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickTextureFactory_SuperSenderSignalIndex(const QQuickTextureFactory* self) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_SenderSignalIndex_IsBase(true);
        return vqquicktexturefactory->senderSignalIndex();
    } else {
        return ((VirtualQQuickTextureFactory*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnSenderSignalIndex(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickTextureFactory_Receivers(const QQuickTextureFactory* self, const char* signal) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->receivers(signal);
    } else {
        return ((VirtualQQuickTextureFactory*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickTextureFactory_SuperReceivers(const QQuickTextureFactory* self, const char* signal) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_Receivers_IsBase(true);
        return vqquicktexturefactory->receivers(signal);
    } else {
        return ((VirtualQQuickTextureFactory*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnReceivers(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_Receivers_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickTextureFactory_IsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        return vqquicktexturefactory->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTextureFactory*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickTextureFactory_SuperIsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory) {
        vqquicktexturefactory->setQQuickTextureFactory_IsSignalConnected_IsBase(true);
        return vqquicktexturefactory->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickTextureFactory*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnIsSignalConnected(const QQuickTextureFactory* self, intptr_t slot) {
    auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self));
    if (vqquicktexturefactory && vqquicktexturefactory->isVirtualQQuickTextureFactory)
        vqquicktexturefactory->setQQuickTextureFactory_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_IsSignalConnected_Callback>(slot));
}

void QQuickTextureFactory_Delete(QQuickTextureFactory* self) {
    delete self;
}

QQuickImageResponse* QQuickImageResponse_new() {
    return new VirtualQQuickImageResponse();
}

QMetaObject* QQuickImageResponse_MetaObject(const QQuickImageResponse* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickImageResponse_Metacast(QQuickImageResponse* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickImageResponse_Metacall(QQuickImageResponse* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickImageResponse_Tr(const char* s) {
    auto _ret = QQuickImageResponse::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QQuickTextureFactory* QQuickImageResponse_TextureFactory(const QQuickImageResponse* self) {
    return self->textureFactory();
}

libqt_string QQuickImageResponse_ErrorString(const QQuickImageResponse* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickImageResponse_Cancel(QQuickImageResponse* self) {
    self->cancel();
}

void QQuickImageResponse_Finished(QQuickImageResponse* self) {
    self->finished();
}

void QQuickImageResponse_Connect_Finished(QQuickImageResponse* self, intptr_t slot) {
    void (*slotFunc)(QQuickImageResponse*) = reinterpret_cast<void (*)(QQuickImageResponse*)>(slot);
    QQuickImageResponse::connect(self, &QQuickImageResponse::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QQuickImageResponse_Tr2(const char* s, const char* c) {
    auto _ret = QQuickImageResponse::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickImageResponse_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickImageResponse::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickImageResponse_SuperMetaObject(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickimageresponse->metaObject();
    } else {
        return (QMetaObject*)self->QQuickImageResponse::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetaObject(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_MetaObject_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickImageResponse_SuperMetacast(QQuickImageResponse* self, const char* param1) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Metacast_IsBase(true);
        return vqquickimageresponse->qt_metacast(param1);
    } else {
        return self->QQuickImageResponse::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetacast(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Metacast_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickImageResponse_SuperMetacall(QQuickImageResponse* self, int param1, int param2, void** param3) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Metacall_IsBase(true);
        return vqquickimageresponse->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickImageResponse::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetacall(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Metacall_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Metacall_Callback>(slot));
}

// Base class handler implementation
QQuickTextureFactory* QQuickImageResponse_SuperTextureFactory(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_TextureFactory_IsBase(true);
        return vqquickimageresponse->textureFactory();
    } else {
        return ((VirtualQQuickImageResponse*)self)->textureFactory();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnTextureFactory(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_TextureFactory_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_TextureFactory_Callback>(slot));
}

// Base class handler implementation
libqt_string QQuickImageResponse_SuperErrorString(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_ErrorString_IsBase(true);
        auto _ret = vqquickimageresponse->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        auto _ret = self->QQuickImageResponse::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnErrorString(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_ErrorString_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ErrorString_Callback>(slot));
}

// Base class handler implementation
void QQuickImageResponse_SuperCancel(QQuickImageResponse* self) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Cancel_IsBase(true);
        vqquickimageresponse->cancel();
    } else {
        self->QQuickImageResponse::cancel();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnCancel(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Cancel_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Cancel_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageResponse_Event(QQuickImageResponse* self, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->event(event);
    } else {
        return self->QQuickImageResponse::event(event);
    }
}

// Base class handler implementation
bool QQuickImageResponse_SuperEvent(QQuickImageResponse* self, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Event_IsBase(true);
        return vqquickimageresponse->event(event);
    } else {
        return self->QQuickImageResponse::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnEvent(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Event_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageResponse_EventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->eventFilter(watched, event);
    } else {
        return self->QQuickImageResponse::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickImageResponse_SuperEventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_EventFilter_IsBase(true);
        return vqquickimageresponse->eventFilter(watched, event);
    } else {
        return self->QQuickImageResponse::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnEventFilter(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_EventFilter_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageResponse_TimerEvent(QQuickImageResponse* self, QTimerEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->timerEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperTimerEvent(QQuickImageResponse* self, QTimerEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_TimerEvent_IsBase(true);
        vqquickimageresponse->timerEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnTimerEvent(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_TimerEvent_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageResponse_ChildEvent(QQuickImageResponse* self, QChildEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->childEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperChildEvent(QQuickImageResponse* self, QChildEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_ChildEvent_IsBase(true);
        vqquickimageresponse->childEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnChildEvent(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_ChildEvent_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageResponse_CustomEvent(QQuickImageResponse* self, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->customEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperCustomEvent(QQuickImageResponse* self, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_CustomEvent_IsBase(true);
        vqquickimageresponse->customEvent(event);
    } else {
        ((VirtualQQuickImageResponse*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnCustomEvent(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_CustomEvent_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageResponse_ConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->connectNotify(*signal);
    } else {
        ((VirtualQQuickImageResponse*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_ConnectNotify_IsBase(true);
        vqquickimageresponse->connectNotify(*signal);
    } else {
        ((VirtualQQuickImageResponse*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnConnectNotify(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageResponse_DisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickImageResponse*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperDisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_DisconnectNotify_IsBase(true);
        vqquickimageresponse->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickImageResponse*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnDisconnectNotify(QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickImageResponse_Sender(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->sender();
    } else {
        return ((VirtualQQuickImageResponse*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickImageResponse_SuperSender(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Sender_IsBase(true);
        return vqquickimageresponse->sender();
    } else {
        return ((VirtualQQuickImageResponse*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnSender(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Sender_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickImageResponse_SenderSignalIndex(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->senderSignalIndex();
    } else {
        return ((VirtualQQuickImageResponse*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickImageResponse_SuperSenderSignalIndex(const QQuickImageResponse* self) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_SenderSignalIndex_IsBase(true);
        return vqquickimageresponse->senderSignalIndex();
    } else {
        return ((VirtualQQuickImageResponse*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnSenderSignalIndex(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickImageResponse_Receivers(const QQuickImageResponse* self, const char* signal) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->receivers(signal);
    } else {
        return ((VirtualQQuickImageResponse*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickImageResponse_SuperReceivers(const QQuickImageResponse* self, const char* signal) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_Receivers_IsBase(true);
        return vqquickimageresponse->receivers(signal);
    } else {
        return ((VirtualQQuickImageResponse*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnReceivers(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_Receivers_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageResponse_IsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        return vqquickimageresponse->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickImageResponse*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickImageResponse_SuperIsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse) {
        vqquickimageresponse->setQQuickImageResponse_IsSignalConnected_IsBase(true);
        return vqquickimageresponse->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickImageResponse*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnIsSignalConnected(const QQuickImageResponse* self, intptr_t slot) {
    auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self));
    if (vqquickimageresponse && vqquickimageresponse->isVirtualQQuickImageResponse)
        vqquickimageresponse->setQQuickImageResponse_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_IsSignalConnected_Callback>(slot));
}

void QQuickImageResponse_Delete(QQuickImageResponse* self) {
    delete self;
}

QQuickImageProvider* QQuickImageProvider_new(int typeVal) {
    return new VirtualQQuickImageProvider(static_cast<QQmlImageProviderBase::ImageType>(typeVal));
}

QQuickImageProvider* QQuickImageProvider_new2(int typeVal, int flags) {
    return new VirtualQQuickImageProvider(static_cast<QQmlImageProviderBase::ImageType>(typeVal), static_cast<QQmlImageProviderBase::Flags>(flags));
}

QMetaObject* QQuickImageProvider_MetaObject(const QQuickImageProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickImageProvider_Metacast(QQuickImageProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickImageProvider_Metacall(QQuickImageProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickImageProvider_Tr(const char* s) {
    auto _ret = QQuickImageProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QQuickImageProvider_ImageType(const QQuickImageProvider* self) {
    return static_cast<int>(self->imageType());
}

int QQuickImageProvider_Flags(const QQuickImageProvider* self) {
    return static_cast<int>(self->flags());
}

QImage* QQuickImageProvider_RequestImage(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->requestImage(id_QString, size, *requestedSize));
}

QPixmap* QQuickImageProvider_RequestPixmap(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->requestPixmap(id_QString, size, *requestedSize));
}

QQuickTextureFactory* QQuickImageProvider_RequestTexture(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->requestTexture(id_QString, size, *requestedSize);
}

libqt_string QQuickImageProvider_Tr2(const char* s, const char* c) {
    auto _ret = QQuickImageProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickImageProvider_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickImageProvider::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickImageProvider_SuperMetaObject(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickimageprovider->metaObject();
    } else {
        return (QMetaObject*)self->QQuickImageProvider::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetaObject(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_MetaObject_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickImageProvider_SuperMetacast(QQuickImageProvider* self, const char* param1) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Metacast_IsBase(true);
        return vqquickimageprovider->qt_metacast(param1);
    } else {
        return self->QQuickImageProvider::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetacast(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Metacast_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickImageProvider_SuperMetacall(QQuickImageProvider* self, int param1, int param2, void** param3) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Metacall_IsBase(true);
        return vqquickimageprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickImageProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetacall(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Metacall_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Metacall_Callback>(slot));
}

// Base class handler implementation
int QQuickImageProvider_SuperImageType(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_ImageType_IsBase(true);
        return static_cast<int>(vqquickimageprovider->imageType());
    } else {
        return static_cast<int>(self->QQuickImageProvider::imageType());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnImageType(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_ImageType_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ImageType_Callback>(slot));
}

// Base class handler implementation
int QQuickImageProvider_SuperFlags(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Flags_IsBase(true);
        return static_cast<int>(vqquickimageprovider->flags());
    } else {
        return static_cast<int>(self->QQuickImageProvider::flags());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnFlags(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Flags_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Flags_Callback>(slot));
}

// Base class handler implementation
QImage* QQuickImageProvider_SuperRequestImage(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_RequestImage_IsBase(true);
        return new QImage(vqquickimageprovider->requestImage(id_QString, size, *requestedSize));
    } else {
        return new QImage(((VirtualQQuickImageProvider*)self)->requestImage(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestImage(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_RequestImage_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestImage_Callback>(slot));
}

// Base class handler implementation
QPixmap* QQuickImageProvider_SuperRequestPixmap(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_RequestPixmap_IsBase(true);
        return new QPixmap(vqquickimageprovider->requestPixmap(id_QString, size, *requestedSize));
    } else {
        return new QPixmap(((VirtualQQuickImageProvider*)self)->requestPixmap(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestPixmap(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_RequestPixmap_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestPixmap_Callback>(slot));
}

// Base class handler implementation
QQuickTextureFactory* QQuickImageProvider_SuperRequestTexture(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_RequestTexture_IsBase(true);
        return vqquickimageprovider->requestTexture(id_QString, size, *requestedSize);
    } else {
        return self->QQuickImageProvider::requestTexture(id_QString, size, *requestedSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestTexture(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_RequestTexture_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestTexture_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageProvider_Event(QQuickImageProvider* self, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->event(event);
    } else {
        return self->QQuickImageProvider::event(event);
    }
}

// Base class handler implementation
bool QQuickImageProvider_SuperEvent(QQuickImageProvider* self, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Event_IsBase(true);
        return vqquickimageprovider->event(event);
    } else {
        return self->QQuickImageProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnEvent(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Event_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageProvider_EventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->eventFilter(watched, event);
    } else {
        return self->QQuickImageProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickImageProvider_SuperEventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_EventFilter_IsBase(true);
        return vqquickimageprovider->eventFilter(watched, event);
    } else {
        return self->QQuickImageProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnEventFilter(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_EventFilter_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageProvider_TimerEvent(QQuickImageProvider* self, QTimerEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->timerEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperTimerEvent(QQuickImageProvider* self, QTimerEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_TimerEvent_IsBase(true);
        vqquickimageprovider->timerEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnTimerEvent(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_TimerEvent_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageProvider_ChildEvent(QQuickImageProvider* self, QChildEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->childEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperChildEvent(QQuickImageProvider* self, QChildEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_ChildEvent_IsBase(true);
        vqquickimageprovider->childEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnChildEvent(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_ChildEvent_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageProvider_CustomEvent(QQuickImageProvider* self, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->customEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperCustomEvent(QQuickImageProvider* self, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_CustomEvent_IsBase(true);
        vqquickimageprovider->customEvent(event);
    } else {
        ((VirtualQQuickImageProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnCustomEvent(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_CustomEvent_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageProvider_ConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->connectNotify(*signal);
    } else {
        ((VirtualQQuickImageProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_ConnectNotify_IsBase(true);
        vqquickimageprovider->connectNotify(*signal);
    } else {
        ((VirtualQQuickImageProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnConnectNotify(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickImageProvider_DisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickImageProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperDisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_DisconnectNotify_IsBase(true);
        vqquickimageprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickImageProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnDisconnectNotify(QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickImageProvider_Sender(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->sender();
    } else {
        return ((VirtualQQuickImageProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickImageProvider_SuperSender(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Sender_IsBase(true);
        return vqquickimageprovider->sender();
    } else {
        return ((VirtualQQuickImageProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnSender(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Sender_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickImageProvider_SenderSignalIndex(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->senderSignalIndex();
    } else {
        return ((VirtualQQuickImageProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickImageProvider_SuperSenderSignalIndex(const QQuickImageProvider* self) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_SenderSignalIndex_IsBase(true);
        return vqquickimageprovider->senderSignalIndex();
    } else {
        return ((VirtualQQuickImageProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnSenderSignalIndex(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickImageProvider_Receivers(const QQuickImageProvider* self, const char* signal) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->receivers(signal);
    } else {
        return ((VirtualQQuickImageProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickImageProvider_SuperReceivers(const QQuickImageProvider* self, const char* signal) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_Receivers_IsBase(true);
        return vqquickimageprovider->receivers(signal);
    } else {
        return ((VirtualQQuickImageProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnReceivers(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_Receivers_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickImageProvider_IsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        return vqquickimageprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickImageProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickImageProvider_SuperIsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider) {
        vqquickimageprovider->setQQuickImageProvider_IsSignalConnected_IsBase(true);
        return vqquickimageprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickImageProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnIsSignalConnected(const QQuickImageProvider* self, intptr_t slot) {
    auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self));
    if (vqquickimageprovider && vqquickimageprovider->isVirtualQQuickImageProvider)
        vqquickimageprovider->setQQuickImageProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_IsSignalConnected_Callback>(slot));
}

void QQuickImageProvider_Delete(QQuickImageProvider* self) {
    delete self;
}

QQuickAsyncImageProvider* QQuickAsyncImageProvider_new() {
    return new VirtualQQuickAsyncImageProvider();
}

QQuickImageResponse* QQuickAsyncImageProvider_RequestImageResponse(QQuickAsyncImageProvider* self, const libqt_string id, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->requestImageResponse(id_QString, *requestedSize);
}

// Base class handler implementation
QQuickImageResponse* QQuickAsyncImageProvider_SuperRequestImageResponse(QQuickAsyncImageProvider* self, const libqt_string id, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestImageResponse_IsBase(true);
        return vqquickasyncimageprovider->requestImageResponse(id_QString, *requestedSize);
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->requestImageResponse(id_QString, *requestedSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestImageResponse(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestImageResponse_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestImageResponse_Callback>(slot));
}

// Derived class handler implementation
QMetaObject* QQuickAsyncImageProvider_MetaObject(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return (QMetaObject*)vqquickasyncimageprovider->metaObject();
    } else {
        return (QMetaObject*)self->QQuickAsyncImageProvider::metaObject();
    }
}

// Base class handler implementation
QMetaObject* QQuickAsyncImageProvider_SuperMetaObject(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickasyncimageprovider->metaObject();
    } else {
        return (QMetaObject*)self->QQuickAsyncImageProvider::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetaObject(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_MetaObject_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_MetaObject_Callback>(slot));
}

// Derived class handler implementation
void* QQuickAsyncImageProvider_Metacast(QQuickAsyncImageProvider* self, const char* param1) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->qt_metacast(param1);
    } else {
        return self->QQuickAsyncImageProvider::qt_metacast(param1);
    }
}

// Base class handler implementation
void* QQuickAsyncImageProvider_SuperMetacast(QQuickAsyncImageProvider* self, const char* param1) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Metacast_IsBase(true);
        return vqquickasyncimageprovider->qt_metacast(param1);
    } else {
        return self->QQuickAsyncImageProvider::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetacast(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Metacast_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Metacast_Callback>(slot));
}

// Derived class handler implementation
int QQuickAsyncImageProvider_Metacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickAsyncImageProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperMetacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Metacall_IsBase(true);
        return vqquickasyncimageprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickAsyncImageProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetacall(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Metacall_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Metacall_Callback>(slot));
}

// Derived class handler implementation
int QQuickAsyncImageProvider_ImageType(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return static_cast<int>(vqquickasyncimageprovider->imageType());
    } else {
        return static_cast<int>(self->QQuickAsyncImageProvider::imageType());
    }
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperImageType(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ImageType_IsBase(true);
        return static_cast<int>(vqquickasyncimageprovider->imageType());
    } else {
        return static_cast<int>(self->QQuickAsyncImageProvider::imageType());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnImageType(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ImageType_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ImageType_Callback>(slot));
}

// Derived class handler implementation
int QQuickAsyncImageProvider_Flags(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return static_cast<int>(vqquickasyncimageprovider->flags());
    } else {
        return static_cast<int>(self->QQuickAsyncImageProvider::flags());
    }
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperFlags(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Flags_IsBase(true);
        return static_cast<int>(vqquickasyncimageprovider->flags());
    } else {
        return static_cast<int>(self->QQuickAsyncImageProvider::flags());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnFlags(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Flags_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Flags_Callback>(slot));
}

// Derived class handler implementation
QImage* QQuickAsyncImageProvider_RequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return new QImage(vqquickasyncimageprovider->requestImage(id_QString, size, *requestedSize));
    } else {
        return new QImage(((VirtualQQuickAsyncImageProvider*)self)->requestImage(id_QString, size, *requestedSize));
    }
}

// Base class handler implementation
QImage* QQuickAsyncImageProvider_SuperRequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestImage_IsBase(true);
        return new QImage(vqquickasyncimageprovider->requestImage(id_QString, size, *requestedSize));
    } else {
        return new QImage(((VirtualQQuickAsyncImageProvider*)self)->requestImage(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestImage(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestImage_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestImage_Callback>(slot));
}

// Derived class handler implementation
QPixmap* QQuickAsyncImageProvider_RequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return new QPixmap(vqquickasyncimageprovider->requestPixmap(id_QString, size, *requestedSize));
    } else {
        return new QPixmap(((VirtualQQuickAsyncImageProvider*)self)->requestPixmap(id_QString, size, *requestedSize));
    }
}

// Base class handler implementation
QPixmap* QQuickAsyncImageProvider_SuperRequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestPixmap_IsBase(true);
        return new QPixmap(vqquickasyncimageprovider->requestPixmap(id_QString, size, *requestedSize));
    } else {
        return new QPixmap(((VirtualQQuickAsyncImageProvider*)self)->requestPixmap(id_QString, size, *requestedSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestPixmap(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestPixmap_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestPixmap_Callback>(slot));
}

// Derived class handler implementation
QQuickTextureFactory* QQuickAsyncImageProvider_RequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->requestTexture(id_QString, size, *requestedSize);
    } else {
        return self->QQuickAsyncImageProvider::requestTexture(id_QString, size, *requestedSize);
    }
}

// Base class handler implementation
QQuickTextureFactory* QQuickAsyncImageProvider_SuperRequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    QString id_QString = QString::fromUtf8(id.data, id.len);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestTexture_IsBase(true);
        return vqquickasyncimageprovider->requestTexture(id_QString, size, *requestedSize);
    } else {
        return self->QQuickAsyncImageProvider::requestTexture(id_QString, size, *requestedSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestTexture(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_RequestTexture_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestTexture_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAsyncImageProvider_Event(QQuickAsyncImageProvider* self, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->event(event);
    } else {
        return self->QQuickAsyncImageProvider::event(event);
    }
}

// Base class handler implementation
bool QQuickAsyncImageProvider_SuperEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Event_IsBase(true);
        return vqquickasyncimageprovider->event(event);
    } else {
        return self->QQuickAsyncImageProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Event_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAsyncImageProvider_EventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->eventFilter(watched, event);
    } else {
        return self->QQuickAsyncImageProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickAsyncImageProvider_SuperEventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_EventFilter_IsBase(true);
        return vqquickasyncimageprovider->eventFilter(watched, event);
    } else {
        return self->QQuickAsyncImageProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnEventFilter(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_EventFilter_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickAsyncImageProvider_TimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->timerEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperTimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_TimerEvent_IsBase(true);
        vqquickasyncimageprovider->timerEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnTimerEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_TimerEvent_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAsyncImageProvider_ChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->childEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ChildEvent_IsBase(true);
        vqquickasyncimageprovider->childEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnChildEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ChildEvent_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAsyncImageProvider_CustomEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->customEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperCustomEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_CustomEvent_IsBase(true);
        vqquickasyncimageprovider->customEvent(event);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnCustomEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_CustomEvent_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickAsyncImageProvider_ConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->connectNotify(*signal);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ConnectNotify_IsBase(true);
        vqquickasyncimageprovider->connectNotify(*signal);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnConnectNotify(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickAsyncImageProvider_DisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperDisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_DisconnectNotify_IsBase(true);
        vqquickasyncimageprovider->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickAsyncImageProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnDisconnectNotify(QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickAsyncImageProvider_Sender(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->sender();
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickAsyncImageProvider_SuperSender(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Sender_IsBase(true);
        return vqquickasyncimageprovider->sender();
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnSender(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Sender_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickAsyncImageProvider_SenderSignalIndex(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->senderSignalIndex();
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperSenderSignalIndex(const QQuickAsyncImageProvider* self) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_SenderSignalIndex_IsBase(true);
        return vqquickasyncimageprovider->senderSignalIndex();
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnSenderSignalIndex(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickAsyncImageProvider_Receivers(const QQuickAsyncImageProvider* self, const char* signal) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->receivers(signal);
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperReceivers(const QQuickAsyncImageProvider* self, const char* signal) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Receivers_IsBase(true);
        return vqquickasyncimageprovider->receivers(signal);
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnReceivers(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_Receivers_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickAsyncImageProvider_IsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        return vqquickasyncimageprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickAsyncImageProvider_SuperIsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider) {
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_IsSignalConnected_IsBase(true);
        return vqquickasyncimageprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickAsyncImageProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnIsSignalConnected(const QQuickAsyncImageProvider* self, intptr_t slot) {
    auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self));
    if (vqquickasyncimageprovider && vqquickasyncimageprovider->isVirtualQQuickAsyncImageProvider)
        vqquickasyncimageprovider->setQQuickAsyncImageProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_IsSignalConnected_Callback>(slot));
}

void QQuickAsyncImageProvider_Delete(QQuickAsyncImageProvider* self) {
    delete self;
}
