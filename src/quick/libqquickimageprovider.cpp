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
    return (QMetaObject*)self->QQuickTextureFactory::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetaObject(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self)))
        vqquicktexturefactory->qquicktexturefactory_metaobject_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickTextureFactory_SuperMetacast(QQuickTextureFactory* self, const char* param1) {
    return self->QQuickTextureFactory::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetacast(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_metacast_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickTextureFactory_SuperMetacall(QQuickTextureFactory* self, int param1, int param2, void** param3) {
    return self->QQuickTextureFactory::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnMetacall(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_metacall_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnCreateTexture(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self)))
        vqquicktexturefactory->qquicktexturefactory_createtexture_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_CreateTexture_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTextureSize(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self)))
        vqquicktexturefactory->qquicktexturefactory_texturesize_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TextureSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTextureByteCount(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self)))
        vqquicktexturefactory->qquicktexturefactory_texturebytecount_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TextureByteCount_Callback>(slot);
}

// Base class handler implementation
QImage* QQuickTextureFactory_SuperImage(const QQuickTextureFactory* self) {
    return new QImage(self->QQuickTextureFactory::image());
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnImage(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self)))
        vqquicktexturefactory->qquicktexturefactory_image_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Image_Callback>(slot);
}

// Derived class handler implementation
bool QQuickTextureFactory_Event(QQuickTextureFactory* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickTextureFactory_SuperEvent(QQuickTextureFactory* self, QEvent* event) {
    return self->QQuickTextureFactory::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnEvent(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_event_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickTextureFactory_EventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickTextureFactory_SuperEventFilter(QQuickTextureFactory* self, QObject* watched, QEvent* event) {
    return self->QQuickTextureFactory::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnEventFilter(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_eventfilter_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextureFactory_TimerEvent(QQuickTextureFactory* self, QTimerEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory) {
        vqquicktexturefactory->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextureFactory::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperTimerEvent(QQuickTextureFactory* self, QTimerEvent* event) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self)) {
        vqquicktexturefactory->QQuickTextureFactory::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextureFactory::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnTimerEvent(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_timerevent_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextureFactory_ChildEvent(QQuickTextureFactory* self, QChildEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory) {
        vqquicktexturefactory->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextureFactory::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperChildEvent(QQuickTextureFactory* self, QChildEvent* event) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self)) {
        vqquicktexturefactory->QQuickTextureFactory::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextureFactory::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnChildEvent(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_childevent_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextureFactory_CustomEvent(QQuickTextureFactory* self, QEvent* event) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory) {
        vqquicktexturefactory->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickTextureFactory::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperCustomEvent(QQuickTextureFactory* self, QEvent* event) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self)) {
        vqquicktexturefactory->QQuickTextureFactory::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickTextureFactory::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnCustomEvent(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_customevent_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextureFactory_ConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory) {
        vqquicktexturefactory->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickTextureFactory::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperConnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self)) {
        vqquicktexturefactory->QQuickTextureFactory::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickTextureFactory::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnConnectNotify(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_connectnotify_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickTextureFactory_DisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self);
    if (vqquicktexturefactory) {
        vqquicktexturefactory->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickTextureFactory::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickTextureFactory_SuperDisconnectNotify(QQuickTextureFactory* self, const QMetaMethod* signal) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self)) {
        vqquicktexturefactory->QQuickTextureFactory::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickTextureFactory::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickTextureFactory_OnDisconnectNotify(QQuickTextureFactory* self, intptr_t slot) {
    if (auto* vqquicktexturefactory = dynamic_cast<VirtualQQuickTextureFactory*>(self))
        vqquicktexturefactory->qquicktexturefactory_disconnectnotify_callback = reinterpret_cast<VirtualQQuickTextureFactory::QQuickTextureFactory_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickTextureFactory_Sender(const QQuickTextureFactory* self) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self))) {
        return vqquicktexturefactory->VirtualQQuickTextureFactory::sender();
    } else
        qFatal("Error: Protected method QQuickTextureFactory::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickTextureFactory_SenderSignalIndex(const QQuickTextureFactory* self) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self))) {
        return vqquicktexturefactory->VirtualQQuickTextureFactory::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickTextureFactory::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickTextureFactory_Receivers(const QQuickTextureFactory* self, const char* signal) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self))) {
        return vqquicktexturefactory->VirtualQQuickTextureFactory::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickTextureFactory::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickTextureFactory_IsSignalConnected(const QQuickTextureFactory* self, const QMetaMethod* signal) {
    if (auto* vqquicktexturefactory = const_cast<VirtualQQuickTextureFactory*>(dynamic_cast<const VirtualQQuickTextureFactory*>(self))) {
        return vqquicktexturefactory->VirtualQQuickTextureFactory::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickTextureFactory::isSignalConnected called without a directly constructed type");
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
    QQuickImageResponse::connect(self,
                                 static_cast<void (QQuickImageResponse::*)()>(&QQuickImageResponse::finished),
                                 [self, slotFunc]() {
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
    return (QMetaObject*)self->QQuickImageResponse::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetaObject(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self)))
        vqquickimageresponse->qquickimageresponse_metaobject_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickImageResponse_SuperMetacast(QQuickImageResponse* self, const char* param1) {
    return self->QQuickImageResponse::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetacast(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_metacast_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickImageResponse_SuperMetacall(QQuickImageResponse* self, int param1, int param2, void** param3) {
    return self->QQuickImageResponse::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnMetacall(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_metacall_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnTextureFactory(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self)))
        vqquickimageresponse->qquickimageresponse_texturefactory_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_TextureFactory_Callback>(slot);
}

// Base class handler implementation
libqt_string QQuickImageResponse_SuperErrorString(const QQuickImageResponse* self) {
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

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnErrorString(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self)))
        vqquickimageresponse->qquickimageresponse_errorstring_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ErrorString_Callback>(slot);
}

// Base class handler implementation
void QQuickImageResponse_SuperCancel(QQuickImageResponse* self) {
    self->QQuickImageResponse::cancel();
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnCancel(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_cancel_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Cancel_Callback>(slot);
}

// Derived class handler implementation
bool QQuickImageResponse_Event(QQuickImageResponse* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickImageResponse_SuperEvent(QQuickImageResponse* self, QEvent* event) {
    return self->QQuickImageResponse::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnEvent(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_event_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickImageResponse_EventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickImageResponse_SuperEventFilter(QQuickImageResponse* self, QObject* watched, QEvent* event) {
    return self->QQuickImageResponse::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnEventFilter(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_eventfilter_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageResponse_TimerEvent(QQuickImageResponse* self, QTimerEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse) {
        vqquickimageresponse->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageResponse::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperTimerEvent(QQuickImageResponse* self, QTimerEvent* event) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self)) {
        vqquickimageresponse->QQuickImageResponse::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageResponse::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnTimerEvent(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_timerevent_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageResponse_ChildEvent(QQuickImageResponse* self, QChildEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse) {
        vqquickimageresponse->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageResponse::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperChildEvent(QQuickImageResponse* self, QChildEvent* event) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self)) {
        vqquickimageresponse->QQuickImageResponse::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageResponse::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnChildEvent(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_childevent_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageResponse_CustomEvent(QQuickImageResponse* self, QEvent* event) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse) {
        vqquickimageresponse->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageResponse::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperCustomEvent(QQuickImageResponse* self, QEvent* event) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self)) {
        vqquickimageresponse->QQuickImageResponse::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageResponse::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnCustomEvent(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_customevent_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageResponse_ConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse) {
        vqquickimageresponse->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickImageResponse::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperConnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self)) {
        vqquickimageresponse->QQuickImageResponse::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickImageResponse::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnConnectNotify(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_connectnotify_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageResponse_DisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self);
    if (vqquickimageresponse) {
        vqquickimageresponse->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickImageResponse::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageResponse_SuperDisconnectNotify(QQuickImageResponse* self, const QMetaMethod* signal) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self)) {
        vqquickimageresponse->QQuickImageResponse::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickImageResponse::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageResponse_OnDisconnectNotify(QQuickImageResponse* self, intptr_t slot) {
    if (auto* vqquickimageresponse = dynamic_cast<VirtualQQuickImageResponse*>(self))
        vqquickimageresponse->qquickimageresponse_disconnectnotify_callback = reinterpret_cast<VirtualQQuickImageResponse::QQuickImageResponse_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickImageResponse_Sender(const QQuickImageResponse* self) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self))) {
        return vqquickimageresponse->VirtualQQuickImageResponse::sender();
    } else
        qFatal("Error: Protected method QQuickImageResponse::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickImageResponse_SenderSignalIndex(const QQuickImageResponse* self) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self))) {
        return vqquickimageresponse->VirtualQQuickImageResponse::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickImageResponse::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickImageResponse_Receivers(const QQuickImageResponse* self, const char* signal) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self))) {
        return vqquickimageresponse->VirtualQQuickImageResponse::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickImageResponse::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickImageResponse_IsSignalConnected(const QQuickImageResponse* self, const QMetaMethod* signal) {
    if (auto* vqquickimageresponse = const_cast<VirtualQQuickImageResponse*>(dynamic_cast<const VirtualQQuickImageResponse*>(self))) {
        return vqquickimageresponse->VirtualQQuickImageResponse::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickImageResponse::isSignalConnected called without a directly constructed type");
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
    return (QMetaObject*)self->QQuickImageProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetaObject(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self)))
        vqquickimageprovider->qquickimageprovider_metaobject_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickImageProvider_SuperMetacast(QQuickImageProvider* self, const char* param1) {
    return self->QQuickImageProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetacast(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_metacast_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickImageProvider_SuperMetacall(QQuickImageProvider* self, int param1, int param2, void** param3) {
    return self->QQuickImageProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnMetacall(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_metacall_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Metacall_Callback>(slot);
}

// Base class handler implementation
int QQuickImageProvider_SuperImageType(const QQuickImageProvider* self) {
    return static_cast<int>(self->QQuickImageProvider::imageType());
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnImageType(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self)))
        vqquickimageprovider->qquickimageprovider_imagetype_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ImageType_Callback>(slot);
}

// Base class handler implementation
int QQuickImageProvider_SuperFlags(const QQuickImageProvider* self) {
    return static_cast<int>(self->QQuickImageProvider::flags());
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnFlags(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self)))
        vqquickimageprovider->qquickimageprovider_flags_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Flags_Callback>(slot);
}

// Base class handler implementation
QImage* QQuickImageProvider_SuperRequestImage(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->QQuickImageProvider::requestImage(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestImage(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_requestimage_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestImage_Callback>(slot);
}

// Base class handler implementation
QPixmap* QQuickImageProvider_SuperRequestPixmap(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->QQuickImageProvider::requestPixmap(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestPixmap(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_requestpixmap_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestPixmap_Callback>(slot);
}

// Base class handler implementation
QQuickTextureFactory* QQuickImageProvider_SuperRequestTexture(QQuickImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->QQuickImageProvider::requestTexture(id_QString, size, *requestedSize);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnRequestTexture(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_requesttexture_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_RequestTexture_Callback>(slot);
}

// Derived class handler implementation
bool QQuickImageProvider_Event(QQuickImageProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickImageProvider_SuperEvent(QQuickImageProvider* self, QEvent* event) {
    return self->QQuickImageProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnEvent(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_event_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickImageProvider_EventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickImageProvider_SuperEventFilter(QQuickImageProvider* self, QObject* watched, QEvent* event) {
    return self->QQuickImageProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnEventFilter(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_eventfilter_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageProvider_TimerEvent(QQuickImageProvider* self, QTimerEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider) {
        vqquickimageprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperTimerEvent(QQuickImageProvider* self, QTimerEvent* event) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self)) {
        vqquickimageprovider->QQuickImageProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnTimerEvent(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_timerevent_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageProvider_ChildEvent(QQuickImageProvider* self, QChildEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider) {
        vqquickimageprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperChildEvent(QQuickImageProvider* self, QChildEvent* event) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self)) {
        vqquickimageprovider->QQuickImageProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnChildEvent(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_childevent_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageProvider_CustomEvent(QQuickImageProvider* self, QEvent* event) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider) {
        vqquickimageprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickImageProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperCustomEvent(QQuickImageProvider* self, QEvent* event) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self)) {
        vqquickimageprovider->QQuickImageProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickImageProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnCustomEvent(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_customevent_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageProvider_ConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider) {
        vqquickimageprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickImageProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperConnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self)) {
        vqquickimageprovider->QQuickImageProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickImageProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnConnectNotify(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_connectnotify_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickImageProvider_DisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self);
    if (vqquickimageprovider) {
        vqquickimageprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickImageProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickImageProvider_SuperDisconnectNotify(QQuickImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self)) {
        vqquickimageprovider->QQuickImageProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickImageProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickImageProvider_OnDisconnectNotify(QQuickImageProvider* self, intptr_t slot) {
    if (auto* vqquickimageprovider = dynamic_cast<VirtualQQuickImageProvider*>(self))
        vqquickimageprovider->qquickimageprovider_disconnectnotify_callback = reinterpret_cast<VirtualQQuickImageProvider::QQuickImageProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickImageProvider_Sender(const QQuickImageProvider* self) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self))) {
        return vqquickimageprovider->VirtualQQuickImageProvider::sender();
    } else
        qFatal("Error: Protected method QQuickImageProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickImageProvider_SenderSignalIndex(const QQuickImageProvider* self) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self))) {
        return vqquickimageprovider->VirtualQQuickImageProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickImageProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickImageProvider_Receivers(const QQuickImageProvider* self, const char* signal) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self))) {
        return vqquickimageprovider->VirtualQQuickImageProvider::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickImageProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickImageProvider_IsSignalConnected(const QQuickImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickimageprovider = const_cast<VirtualQQuickImageProvider*>(dynamic_cast<const VirtualQQuickImageProvider*>(self))) {
        return vqquickimageprovider->VirtualQQuickImageProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickImageProvider::isSignalConnected called without a directly constructed type");
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

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestImageResponse(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_requestimageresponse_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestImageResponse_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* QQuickAsyncImageProvider_MetaObject(const QQuickAsyncImageProvider* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* QQuickAsyncImageProvider_SuperMetaObject(const QQuickAsyncImageProvider* self) {
    return (QMetaObject*)self->QQuickAsyncImageProvider::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetaObject(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self)))
        vqquickasyncimageprovider->qquickasyncimageprovider_metaobject_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* QQuickAsyncImageProvider_Metacast(QQuickAsyncImageProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* QQuickAsyncImageProvider_SuperMetacast(QQuickAsyncImageProvider* self, const char* param1) {
    return self->QQuickAsyncImageProvider::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetacast(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_metacast_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Metacast_Callback>(slot);
}

// Derived class handler implementation
int QQuickAsyncImageProvider_Metacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperMetacall(QQuickAsyncImageProvider* self, int param1, int param2, void** param3) {
    return self->QQuickAsyncImageProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnMetacall(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_metacall_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Metacall_Callback>(slot);
}

// Derived class handler implementation
int QQuickAsyncImageProvider_ImageType(const QQuickAsyncImageProvider* self) {
    return static_cast<int>(self->imageType());
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperImageType(const QQuickAsyncImageProvider* self) {
    return static_cast<int>(self->QQuickAsyncImageProvider::imageType());
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnImageType(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self)))
        vqquickasyncimageprovider->qquickasyncimageprovider_imagetype_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ImageType_Callback>(slot);
}

// Derived class handler implementation
int QQuickAsyncImageProvider_Flags(const QQuickAsyncImageProvider* self) {
    return static_cast<int>(self->flags());
}

// Base class handler implementation
int QQuickAsyncImageProvider_SuperFlags(const QQuickAsyncImageProvider* self) {
    return static_cast<int>(self->QQuickAsyncImageProvider::flags());
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnFlags(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self)))
        vqquickasyncimageprovider->qquickasyncimageprovider_flags_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Flags_Callback>(slot);
}

// Derived class handler implementation
QImage* QQuickAsyncImageProvider_RequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->requestImage(id_QString, size, *requestedSize));
}

// Base class handler implementation
QImage* QQuickAsyncImageProvider_SuperRequestImage(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QImage(self->QQuickAsyncImageProvider::requestImage(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestImage(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_requestimage_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestImage_Callback>(slot);
}

// Derived class handler implementation
QPixmap* QQuickAsyncImageProvider_RequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->requestPixmap(id_QString, size, *requestedSize));
}

// Base class handler implementation
QPixmap* QQuickAsyncImageProvider_SuperRequestPixmap(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QPixmap(self->QQuickAsyncImageProvider::requestPixmap(id_QString, size, *requestedSize));
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestPixmap(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_requestpixmap_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestPixmap_Callback>(slot);
}

// Derived class handler implementation
QQuickTextureFactory* QQuickAsyncImageProvider_RequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->requestTexture(id_QString, size, *requestedSize);
}

// Base class handler implementation
QQuickTextureFactory* QQuickAsyncImageProvider_SuperRequestTexture(QQuickAsyncImageProvider* self, const libqt_string id, QSize* size, const QSize* requestedSize) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->QQuickAsyncImageProvider::requestTexture(id_QString, size, *requestedSize);
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnRequestTexture(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_requesttexture_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_RequestTexture_Callback>(slot);
}

// Derived class handler implementation
bool QQuickAsyncImageProvider_Event(QQuickAsyncImageProvider* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuickAsyncImageProvider_SuperEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    return self->QQuickAsyncImageProvider::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_event_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuickAsyncImageProvider_EventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickAsyncImageProvider_SuperEventFilter(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event) {
    return self->QQuickAsyncImageProvider::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnEventFilter(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_eventfilter_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickAsyncImageProvider_TimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider) {
        vqquickasyncimageprovider->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperTimerEvent(QQuickAsyncImageProvider* self, QTimerEvent* event) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self)) {
        vqquickasyncimageprovider->QQuickAsyncImageProvider::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnTimerEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_timerevent_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAsyncImageProvider_ChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider) {
        vqquickasyncimageprovider->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperChildEvent(QQuickAsyncImageProvider* self, QChildEvent* event) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self)) {
        vqquickasyncimageprovider->QQuickAsyncImageProvider::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnChildEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_childevent_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAsyncImageProvider_CustomEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider) {
        vqquickasyncimageprovider->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperCustomEvent(QQuickAsyncImageProvider* self, QEvent* event) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self)) {
        vqquickasyncimageprovider->QQuickAsyncImageProvider::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnCustomEvent(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_customevent_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickAsyncImageProvider_ConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider) {
        vqquickasyncimageprovider->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperConnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self)) {
        vqquickasyncimageprovider->QQuickAsyncImageProvider::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnConnectNotify(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_connectnotify_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickAsyncImageProvider_DisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self);
    if (vqquickasyncimageprovider) {
        vqquickasyncimageprovider->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickAsyncImageProvider_SuperDisconnectNotify(QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self)) {
        vqquickasyncimageprovider->QQuickAsyncImageProvider::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickAsyncImageProvider::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickAsyncImageProvider_OnDisconnectNotify(QQuickAsyncImageProvider* self, intptr_t slot) {
    if (auto* vqquickasyncimageprovider = dynamic_cast<VirtualQQuickAsyncImageProvider*>(self))
        vqquickasyncimageprovider->qquickasyncimageprovider_disconnectnotify_callback = reinterpret_cast<VirtualQQuickAsyncImageProvider::QQuickAsyncImageProvider_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QQuickAsyncImageProvider_Sender(const QQuickAsyncImageProvider* self) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self))) {
        return vqquickasyncimageprovider->VirtualQQuickAsyncImageProvider::sender();
    } else
        qFatal("Error: Protected method QQuickAsyncImageProvider::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickAsyncImageProvider_SenderSignalIndex(const QQuickAsyncImageProvider* self) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self))) {
        return vqquickasyncimageprovider->VirtualQQuickAsyncImageProvider::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickAsyncImageProvider::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickAsyncImageProvider_Receivers(const QQuickAsyncImageProvider* self, const char* signal) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self))) {
        return vqquickasyncimageprovider->VirtualQQuickAsyncImageProvider::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickAsyncImageProvider::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickAsyncImageProvider_IsSignalConnected(const QQuickAsyncImageProvider* self, const QMetaMethod* signal) {
    if (auto* vqquickasyncimageprovider = const_cast<VirtualQQuickAsyncImageProvider*>(dynamic_cast<const VirtualQQuickAsyncImageProvider*>(self))) {
        return vqquickasyncimageprovider->VirtualQQuickAsyncImageProvider::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickAsyncImageProvider::isSignalConnected called without a directly constructed type");
}

void QQuickAsyncImageProvider_Delete(QQuickAsyncImageProvider* self) {
    delete self;
}
