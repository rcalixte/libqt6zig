#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRectF>
#include <QSGDynamicTexture>
#include <QSGTexture>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <qsgtexture.h>
#include "libqsgtexture.h"
#include "libqsgtexture.hxx"

QSGTexture* QSGTexture_new() {
    return new VirtualQSGTexture();
}

QMetaObject* QSGTexture_MetaObject(const QSGTexture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSGTexture_Metacast(QSGTexture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSGTexture_Metacall(QSGTexture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSGTexture_Tr(const char* s) {
    auto _ret = QSGTexture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long long QSGTexture_ComparisonKey(const QSGTexture* self) {
    return static_cast<long long>(self->comparisonKey());
}

QSize* QSGTexture_TextureSize(const QSGTexture* self) {
    return new QSize(self->textureSize());
}

bool QSGTexture_HasAlphaChannel(const QSGTexture* self) {
    return self->hasAlphaChannel();
}

bool QSGTexture_HasMipmaps(const QSGTexture* self) {
    return self->hasMipmaps();
}

QRectF* QSGTexture_NormalizedTextureSubRect(const QSGTexture* self) {
    return new QRectF(self->normalizedTextureSubRect());
}

bool QSGTexture_IsAtlasTexture(const QSGTexture* self) {
    return self->isAtlasTexture();
}

void QSGTexture_SetMipmapFiltering(QSGTexture* self, int filter) {
    self->setMipmapFiltering(static_cast<QSGTexture::Filtering>(filter));
}

int QSGTexture_MipmapFiltering(const QSGTexture* self) {
    return static_cast<int>(self->mipmapFiltering());
}

void QSGTexture_SetFiltering(QSGTexture* self, int filter) {
    self->setFiltering(static_cast<QSGTexture::Filtering>(filter));
}

int QSGTexture_Filtering(const QSGTexture* self) {
    return static_cast<int>(self->filtering());
}

void QSGTexture_SetAnisotropyLevel(QSGTexture* self, int level) {
    self->setAnisotropyLevel(static_cast<QSGTexture::AnisotropyLevel>(level));
}

int QSGTexture_AnisotropyLevel(const QSGTexture* self) {
    return static_cast<int>(self->anisotropyLevel());
}

void QSGTexture_SetHorizontalWrapMode(QSGTexture* self, int hwrap) {
    self->setHorizontalWrapMode(static_cast<QSGTexture::WrapMode>(hwrap));
}

int QSGTexture_HorizontalWrapMode(const QSGTexture* self) {
    return static_cast<int>(self->horizontalWrapMode());
}

void QSGTexture_SetVerticalWrapMode(QSGTexture* self, int vwrap) {
    self->setVerticalWrapMode(static_cast<QSGTexture::WrapMode>(vwrap));
}

int QSGTexture_VerticalWrapMode(const QSGTexture* self) {
    return static_cast<int>(self->verticalWrapMode());
}

QRectF* QSGTexture_ConvertToNormalizedSourceRect(const QSGTexture* self, const QRectF* rect) {
    return new QRectF(self->convertToNormalizedSourceRect(*rect));
}

libqt_string QSGTexture_Tr2(const char* s, const char* c) {
    auto _ret = QSGTexture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSGTexture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSGTexture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSGTexture_SuperMetaObject(const QSGTexture* self) {
    return (QMetaObject*)self->QSGTexture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetaObject(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_metaobject_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSGTexture_SuperMetacast(QSGTexture* self, const char* param1) {
    return self->QSGTexture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetacast(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_metacast_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSGTexture_SuperMetacall(QSGTexture* self, int param1, int param2, void** param3) {
    return self->QSGTexture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetacall(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_metacall_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnComparisonKey(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_comparisonkey_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_ComparisonKey_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnTextureSize(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_texturesize_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_TextureSize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnHasAlphaChannel(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_hasalphachannel_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_HasAlphaChannel_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnHasMipmaps(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_hasmipmaps_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_HasMipmaps_Callback>(slot);
}

// Base class handler implementation
QRectF* QSGTexture_SuperNormalizedTextureSubRect(const QSGTexture* self) {
    return new QRectF(self->QSGTexture::normalizedTextureSubRect());
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnNormalizedTextureSubRect(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_normalizedtexturesubrect_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_NormalizedTextureSubRect_Callback>(slot);
}

// Base class handler implementation
bool QSGTexture_SuperIsAtlasTexture(const QSGTexture* self) {
    return self->QSGTexture::isAtlasTexture();
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnIsAtlasTexture(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self)))
        vqsgtexture->qsgtexture_isatlastexture_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_IsAtlasTexture_Callback>(slot);
}

// Derived class handler implementation
bool QSGTexture_Event(QSGTexture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSGTexture_SuperEvent(QSGTexture* self, QEvent* event) {
    return self->QSGTexture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnEvent(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_event_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSGTexture_EventFilter(QSGTexture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSGTexture_SuperEventFilter(QSGTexture* self, QObject* watched, QEvent* event) {
    return self->QSGTexture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnEventFilter(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_eventfilter_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSGTexture_TimerEvent(QSGTexture* self, QTimerEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture) {
        vqsgtexture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGTexture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGTexture_SuperTimerEvent(QSGTexture* self, QTimerEvent* event) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self)) {
        vqsgtexture->QSGTexture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGTexture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnTimerEvent(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_timerevent_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGTexture_ChildEvent(QSGTexture* self, QChildEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture) {
        vqsgtexture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGTexture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGTexture_SuperChildEvent(QSGTexture* self, QChildEvent* event) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self)) {
        vqsgtexture->QSGTexture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGTexture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnChildEvent(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_childevent_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGTexture_CustomEvent(QSGTexture* self, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture) {
        vqsgtexture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGTexture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGTexture_SuperCustomEvent(QSGTexture* self, QEvent* event) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self)) {
        vqsgtexture->QSGTexture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGTexture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnCustomEvent(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_customevent_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGTexture_ConnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture) {
        vqsgtexture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSGTexture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGTexture_SuperConnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self)) {
        vqsgtexture->QSGTexture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSGTexture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnConnectNotify(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_connectnotify_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSGTexture_DisconnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture) {
        vqsgtexture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSGTexture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGTexture_SuperDisconnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self)) {
        vqsgtexture->QSGTexture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSGTexture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnDisconnectNotify(QSGTexture* self, intptr_t slot) {
    if (auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self))
        vqsgtexture->qsgtexture_disconnectnotify_callback = reinterpret_cast<VirtualQSGTexture::QSGTexture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QSGTexture_ResolveInterface(const QSGTexture* self, const char* name, int revision) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self))) {
        return vqsgtexture->VirtualQSGTexture::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QSGTexture::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSGTexture_Sender(const QSGTexture* self) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self))) {
        return vqsgtexture->VirtualQSGTexture::sender();
    } else
        qFatal("Error: Protected method QSGTexture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSGTexture_SenderSignalIndex(const QSGTexture* self) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self))) {
        return vqsgtexture->VirtualQSGTexture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSGTexture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSGTexture_Receivers(const QSGTexture* self, const char* signal) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self))) {
        return vqsgtexture->VirtualQSGTexture::receivers(signal);
    } else
        qFatal("Error: Protected method QSGTexture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSGTexture_IsSignalConnected(const QSGTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self))) {
        return vqsgtexture->VirtualQSGTexture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSGTexture::isSignalConnected called without a directly constructed type");
}

void QSGTexture_Delete(QSGTexture* self) {
    delete self;
}

QSGDynamicTexture* QSGDynamicTexture_new() {
    return new VirtualQSGDynamicTexture();
}

QMetaObject* QSGDynamicTexture_MetaObject(const QSGDynamicTexture* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSGDynamicTexture_Metacast(QSGDynamicTexture* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSGDynamicTexture_Metacall(QSGDynamicTexture* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSGDynamicTexture_Tr(const char* s) {
    auto _ret = QSGDynamicTexture::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSGDynamicTexture_UpdateTexture(QSGDynamicTexture* self) {
    return self->updateTexture();
}

libqt_string QSGDynamicTexture_Tr2(const char* s, const char* c) {
    auto _ret = QSGDynamicTexture::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSGDynamicTexture_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSGDynamicTexture::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSGDynamicTexture_SuperMetaObject(const QSGDynamicTexture* self) {
    return (QMetaObject*)self->QSGDynamicTexture::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetaObject(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_metaobject_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSGDynamicTexture_SuperMetacast(QSGDynamicTexture* self, const char* param1) {
    return self->QSGDynamicTexture::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetacast(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_metacast_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSGDynamicTexture_SuperMetacall(QSGDynamicTexture* self, int param1, int param2, void** param3) {
    return self->QSGDynamicTexture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetacall(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_metacall_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnUpdateTexture(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_updatetexture_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_UpdateTexture_Callback>(slot);
}

// Derived class handler implementation
long long QSGDynamicTexture_ComparisonKey(const QSGDynamicTexture* self) {
    return static_cast<long long>(self->comparisonKey());
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnComparisonKey(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_comparisonkey_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ComparisonKey_Callback>(slot);
}

// Derived class handler implementation
QSize* QSGDynamicTexture_TextureSize(const QSGDynamicTexture* self) {
    return new QSize(self->textureSize());
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnTextureSize(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_texturesize_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_TextureSize_Callback>(slot);
}

// Derived class handler implementation
bool QSGDynamicTexture_HasAlphaChannel(const QSGDynamicTexture* self) {
    return self->hasAlphaChannel();
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnHasAlphaChannel(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_hasalphachannel_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_HasAlphaChannel_Callback>(slot);
}

// Derived class handler implementation
bool QSGDynamicTexture_HasMipmaps(const QSGDynamicTexture* self) {
    return self->hasMipmaps();
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnHasMipmaps(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_hasmipmaps_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_HasMipmaps_Callback>(slot);
}

// Derived class handler implementation
QRectF* QSGDynamicTexture_NormalizedTextureSubRect(const QSGDynamicTexture* self) {
    return new QRectF(self->normalizedTextureSubRect());
}

// Base class handler implementation
QRectF* QSGDynamicTexture_SuperNormalizedTextureSubRect(const QSGDynamicTexture* self) {
    return new QRectF(self->QSGDynamicTexture::normalizedTextureSubRect());
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnNormalizedTextureSubRect(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_normalizedtexturesubrect_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_NormalizedTextureSubRect_Callback>(slot);
}

// Derived class handler implementation
bool QSGDynamicTexture_IsAtlasTexture(const QSGDynamicTexture* self) {
    return self->isAtlasTexture();
}

// Base class handler implementation
bool QSGDynamicTexture_SuperIsAtlasTexture(const QSGDynamicTexture* self) {
    return self->QSGDynamicTexture::isAtlasTexture();
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnIsAtlasTexture(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self)))
        vqsgdynamictexture->qsgdynamictexture_isatlastexture_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_IsAtlasTexture_Callback>(slot);
}

// Derived class handler implementation
bool QSGDynamicTexture_Event(QSGDynamicTexture* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QSGDynamicTexture_SuperEvent(QSGDynamicTexture* self, QEvent* event) {
    return self->QSGDynamicTexture::event(event);
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnEvent(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_event_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Event_Callback>(slot);
}

// Derived class handler implementation
bool QSGDynamicTexture_EventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSGDynamicTexture_SuperEventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event) {
    return self->QSGDynamicTexture::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnEventFilter(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_eventfilter_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSGDynamicTexture_TimerEvent(QSGDynamicTexture* self, QTimerEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture) {
        vqsgdynamictexture->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGDynamicTexture::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperTimerEvent(QSGDynamicTexture* self, QTimerEvent* event) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self)) {
        vqsgdynamictexture->QSGDynamicTexture::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGDynamicTexture::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnTimerEvent(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_timerevent_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGDynamicTexture_ChildEvent(QSGDynamicTexture* self, QChildEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture) {
        vqsgdynamictexture->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGDynamicTexture::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperChildEvent(QSGDynamicTexture* self, QChildEvent* event) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self)) {
        vqsgdynamictexture->QSGDynamicTexture::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGDynamicTexture::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnChildEvent(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_childevent_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGDynamicTexture_CustomEvent(QSGDynamicTexture* self, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture) {
        vqsgdynamictexture->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSGDynamicTexture::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperCustomEvent(QSGDynamicTexture* self, QEvent* event) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self)) {
        vqsgdynamictexture->QSGDynamicTexture::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSGDynamicTexture::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnCustomEvent(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_customevent_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSGDynamicTexture_ConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture) {
        vqsgdynamictexture->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSGDynamicTexture::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self)) {
        vqsgdynamictexture->QSGDynamicTexture::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSGDynamicTexture::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnConnectNotify(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_connectnotify_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSGDynamicTexture_DisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture) {
        vqsgdynamictexture->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSGDynamicTexture::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperDisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self)) {
        vqsgdynamictexture->QSGDynamicTexture::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSGDynamicTexture::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnDisconnectNotify(QSGDynamicTexture* self, intptr_t slot) {
    if (auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self))
        vqsgdynamictexture->qsgdynamictexture_disconnectnotify_callback = reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void* QSGDynamicTexture_ResolveInterface(const QSGDynamicTexture* self, const char* name, int revision) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self))) {
        return vqsgdynamictexture->VirtualQSGDynamicTexture::resolveInterface(name, static_cast<int>(revision));
    } else
        qFatal("Error: Protected method QSGDynamicTexture::resolveInterface called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSGDynamicTexture_Sender(const QSGDynamicTexture* self) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self))) {
        return vqsgdynamictexture->VirtualQSGDynamicTexture::sender();
    } else
        qFatal("Error: Protected method QSGDynamicTexture::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSGDynamicTexture_SenderSignalIndex(const QSGDynamicTexture* self) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self))) {
        return vqsgdynamictexture->VirtualQSGDynamicTexture::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSGDynamicTexture::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSGDynamicTexture_Receivers(const QSGDynamicTexture* self, const char* signal) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self))) {
        return vqsgdynamictexture->VirtualQSGDynamicTexture::receivers(signal);
    } else
        qFatal("Error: Protected method QSGDynamicTexture::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSGDynamicTexture_IsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal) {
    if (auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self))) {
        return vqsgdynamictexture->VirtualQSGDynamicTexture::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSGDynamicTexture::isSignalConnected called without a directly constructed type");
}

void QSGDynamicTexture_Delete(QSGDynamicTexture* self) {
    delete self;
}
