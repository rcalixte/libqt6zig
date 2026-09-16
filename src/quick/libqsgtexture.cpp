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
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_MetaObject_IsBase(true);
        return (QMetaObject*)vqsgtexture->metaObject();
    } else {
        return (QMetaObject*)self->QSGTexture::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetaObject(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_MetaObject_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QSGTexture_SuperMetacast(QSGTexture* self, const char* param1) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_Metacast_IsBase(true);
        return vqsgtexture->qt_metacast(param1);
    } else {
        return self->QSGTexture::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetacast(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_Metacast_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_Metacast_Callback>(slot));
}

// Base class handler implementation
int QSGTexture_SuperMetacall(QSGTexture* self, int param1, int param2, void** param3) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_Metacall_IsBase(true);
        return vqsgtexture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSGTexture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnMetacall(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_Metacall_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_Metacall_Callback>(slot));
}

// Base class handler implementation
long long QSGTexture_SuperComparisonKey(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_ComparisonKey_IsBase(true);
        return static_cast<long long>(vqsgtexture->comparisonKey());
    } else {
        return static_cast<long long>(((VirtualQSGTexture*)self)->comparisonKey());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnComparisonKey(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_ComparisonKey_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_ComparisonKey_Callback>(slot));
}

// Base class handler implementation
QSize* QSGTexture_SuperTextureSize(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_TextureSize_IsBase(true);
        return new QSize(vqsgtexture->textureSize());
    } else {
        return new QSize(((VirtualQSGTexture*)self)->textureSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnTextureSize(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_TextureSize_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_TextureSize_Callback>(slot));
}

// Base class handler implementation
bool QSGTexture_SuperHasAlphaChannel(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_HasAlphaChannel_IsBase(true);
        return vqsgtexture->hasAlphaChannel();
    } else {
        return ((VirtualQSGTexture*)self)->hasAlphaChannel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnHasAlphaChannel(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_HasAlphaChannel_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_HasAlphaChannel_Callback>(slot));
}

// Base class handler implementation
bool QSGTexture_SuperHasMipmaps(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_HasMipmaps_IsBase(true);
        return vqsgtexture->hasMipmaps();
    } else {
        return ((VirtualQSGTexture*)self)->hasMipmaps();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnHasMipmaps(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_HasMipmaps_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_HasMipmaps_Callback>(slot));
}

// Base class handler implementation
QRectF* QSGTexture_SuperNormalizedTextureSubRect(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_NormalizedTextureSubRect_IsBase(true);
        return new QRectF(vqsgtexture->normalizedTextureSubRect());
    } else {
        return new QRectF(((VirtualQSGTexture*)self)->normalizedTextureSubRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnNormalizedTextureSubRect(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_NormalizedTextureSubRect_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_NormalizedTextureSubRect_Callback>(slot));
}

// Base class handler implementation
bool QSGTexture_SuperIsAtlasTexture(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_IsAtlasTexture_IsBase(true);
        return vqsgtexture->isAtlasTexture();
    } else {
        return self->QSGTexture::isAtlasTexture();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnIsAtlasTexture(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_IsAtlasTexture_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_IsAtlasTexture_Callback>(slot));
}

// Derived class handler implementation
bool QSGTexture_Event(QSGTexture* self, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->event(event);
    } else {
        return self->QSGTexture::event(event);
    }
}

// Base class handler implementation
bool QSGTexture_SuperEvent(QSGTexture* self, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_Event_IsBase(true);
        return vqsgtexture->event(event);
    } else {
        return self->QSGTexture::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnEvent(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_Event_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_Event_Callback>(slot));
}

// Derived class handler implementation
bool QSGTexture_EventFilter(QSGTexture* self, QObject* watched, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->eventFilter(watched, event);
    } else {
        return self->QSGTexture::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSGTexture_SuperEventFilter(QSGTexture* self, QObject* watched, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_EventFilter_IsBase(true);
        return vqsgtexture->eventFilter(watched, event);
    } else {
        return self->QSGTexture::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnEventFilter(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_EventFilter_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QSGTexture_TimerEvent(QSGTexture* self, QTimerEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->timerEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSGTexture_SuperTimerEvent(QSGTexture* self, QTimerEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_TimerEvent_IsBase(true);
        vqsgtexture->timerEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnTimerEvent(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_TimerEvent_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGTexture_ChildEvent(QSGTexture* self, QChildEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->childEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSGTexture_SuperChildEvent(QSGTexture* self, QChildEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_ChildEvent_IsBase(true);
        vqsgtexture->childEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnChildEvent(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_ChildEvent_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGTexture_CustomEvent(QSGTexture* self, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->customEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSGTexture_SuperCustomEvent(QSGTexture* self, QEvent* event) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_CustomEvent_IsBase(true);
        vqsgtexture->customEvent(event);
    } else {
        ((VirtualQSGTexture*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnCustomEvent(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_CustomEvent_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGTexture_ConnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->connectNotify(*signal);
    } else {
        ((VirtualQSGTexture*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSGTexture_SuperConnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_ConnectNotify_IsBase(true);
        vqsgtexture->connectNotify(*signal);
    } else {
        ((VirtualQSGTexture*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnConnectNotify(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_ConnectNotify_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QSGTexture_DisconnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->disconnectNotify(*signal);
    } else {
        ((VirtualQSGTexture*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSGTexture_SuperDisconnectNotify(QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_DisconnectNotify_IsBase(true);
        vqsgtexture->disconnectNotify(*signal);
    } else {
        ((VirtualQSGTexture*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnDisconnectNotify(QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = dynamic_cast<VirtualQSGTexture*>(self);
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_DisconnectNotify_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void* QSGTexture_ResolveInterface(const QSGTexture* self, const char* name, int revision) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQSGTexture*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QSGTexture_SuperResolveInterface(const QSGTexture* self, const char* name, int revision) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_ResolveInterface_IsBase(true);
        return vqsgtexture->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQSGTexture*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnResolveInterface(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_ResolveInterface_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_ResolveInterface_Callback>(slot));
}

// Derived class handler implementation
QObject* QSGTexture_Sender(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->sender();
    } else {
        return ((VirtualQSGTexture*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSGTexture_SuperSender(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_Sender_IsBase(true);
        return vqsgtexture->sender();
    } else {
        return ((VirtualQSGTexture*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnSender(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_Sender_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_Sender_Callback>(slot));
}

// Derived class handler implementation
int QSGTexture_SenderSignalIndex(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->senderSignalIndex();
    } else {
        return ((VirtualQSGTexture*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSGTexture_SuperSenderSignalIndex(const QSGTexture* self) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_SenderSignalIndex_IsBase(true);
        return vqsgtexture->senderSignalIndex();
    } else {
        return ((VirtualQSGTexture*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnSenderSignalIndex(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QSGTexture_Receivers(const QSGTexture* self, const char* signal) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->receivers(signal);
    } else {
        return ((VirtualQSGTexture*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSGTexture_SuperReceivers(const QSGTexture* self, const char* signal) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_Receivers_IsBase(true);
        return vqsgtexture->receivers(signal);
    } else {
        return ((VirtualQSGTexture*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnReceivers(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_Receivers_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QSGTexture_IsSignalConnected(const QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        return vqsgtexture->isSignalConnected(*signal);
    } else {
        return ((VirtualQSGTexture*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSGTexture_SuperIsSignalConnected(const QSGTexture* self, const QMetaMethod* signal) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture) {
        vqsgtexture->setQSGTexture_IsSignalConnected_IsBase(true);
        return vqsgtexture->isSignalConnected(*signal);
    } else {
        return ((VirtualQSGTexture*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGTexture_OnIsSignalConnected(const QSGTexture* self, intptr_t slot) {
    auto* vqsgtexture = const_cast<VirtualQSGTexture*>(dynamic_cast<const VirtualQSGTexture*>(self));
    if (vqsgtexture && vqsgtexture->isVirtualQSGTexture)
        vqsgtexture->setQSGTexture_IsSignalConnected_Callback(reinterpret_cast<VirtualQSGTexture::QSGTexture_IsSignalConnected_Callback>(slot));
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
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_MetaObject_IsBase(true);
        return (QMetaObject*)vqsgdynamictexture->metaObject();
    } else {
        return (QMetaObject*)self->QSGDynamicTexture::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetaObject(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_MetaObject_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QSGDynamicTexture_SuperMetacast(QSGDynamicTexture* self, const char* param1) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_Metacast_IsBase(true);
        return vqsgdynamictexture->qt_metacast(param1);
    } else {
        return self->QSGDynamicTexture::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetacast(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_Metacast_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Metacast_Callback>(slot));
}

// Base class handler implementation
int QSGDynamicTexture_SuperMetacall(QSGDynamicTexture* self, int param1, int param2, void** param3) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_Metacall_IsBase(true);
        return vqsgdynamictexture->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QSGDynamicTexture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnMetacall(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_Metacall_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Metacall_Callback>(slot));
}

// Base class handler implementation
bool QSGDynamicTexture_SuperUpdateTexture(QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_UpdateTexture_IsBase(true);
        return vqsgdynamictexture->updateTexture();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->updateTexture();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnUpdateTexture(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_UpdateTexture_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_UpdateTexture_Callback>(slot));
}

// Derived class handler implementation
long long QSGDynamicTexture_ComparisonKey(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return static_cast<long long>(vqsgdynamictexture->comparisonKey());
    } else {
        return static_cast<long long>(((VirtualQSGDynamicTexture*)self)->comparisonKey());
    }
}

// Base class handler implementation
long long QSGDynamicTexture_SuperComparisonKey(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_ComparisonKey_IsBase(true);
        return static_cast<long long>(vqsgdynamictexture->comparisonKey());
    } else {
        return static_cast<long long>(((VirtualQSGDynamicTexture*)self)->comparisonKey());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnComparisonKey(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_ComparisonKey_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ComparisonKey_Callback>(slot));
}

// Derived class handler implementation
QSize* QSGDynamicTexture_TextureSize(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return new QSize(vqsgdynamictexture->textureSize());
    } else {
        return new QSize(((VirtualQSGDynamicTexture*)self)->textureSize());
    }
}

// Base class handler implementation
QSize* QSGDynamicTexture_SuperTextureSize(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_TextureSize_IsBase(true);
        return new QSize(vqsgdynamictexture->textureSize());
    } else {
        return new QSize(((VirtualQSGDynamicTexture*)self)->textureSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnTextureSize(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_TextureSize_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_TextureSize_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_HasAlphaChannel(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->hasAlphaChannel();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->hasAlphaChannel();
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperHasAlphaChannel(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_HasAlphaChannel_IsBase(true);
        return vqsgdynamictexture->hasAlphaChannel();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->hasAlphaChannel();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnHasAlphaChannel(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_HasAlphaChannel_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_HasAlphaChannel_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_HasMipmaps(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->hasMipmaps();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->hasMipmaps();
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperHasMipmaps(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_HasMipmaps_IsBase(true);
        return vqsgdynamictexture->hasMipmaps();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->hasMipmaps();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnHasMipmaps(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_HasMipmaps_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_HasMipmaps_Callback>(slot));
}

// Derived class handler implementation
QRectF* QSGDynamicTexture_NormalizedTextureSubRect(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return new QRectF(vqsgdynamictexture->normalizedTextureSubRect());
    } else {
        return new QRectF(((VirtualQSGDynamicTexture*)self)->normalizedTextureSubRect());
    }
}

// Base class handler implementation
QRectF* QSGDynamicTexture_SuperNormalizedTextureSubRect(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_NormalizedTextureSubRect_IsBase(true);
        return new QRectF(vqsgdynamictexture->normalizedTextureSubRect());
    } else {
        return new QRectF(((VirtualQSGDynamicTexture*)self)->normalizedTextureSubRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnNormalizedTextureSubRect(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_NormalizedTextureSubRect_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_NormalizedTextureSubRect_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_IsAtlasTexture(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->isAtlasTexture();
    } else {
        return self->QSGDynamicTexture::isAtlasTexture();
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperIsAtlasTexture(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_IsAtlasTexture_IsBase(true);
        return vqsgdynamictexture->isAtlasTexture();
    } else {
        return self->QSGDynamicTexture::isAtlasTexture();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnIsAtlasTexture(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_IsAtlasTexture_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_IsAtlasTexture_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_Event(QSGDynamicTexture* self, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->event(event);
    } else {
        return self->QSGDynamicTexture::event(event);
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperEvent(QSGDynamicTexture* self, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_Event_IsBase(true);
        return vqsgdynamictexture->event(event);
    } else {
        return self->QSGDynamicTexture::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnEvent(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_Event_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Event_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_EventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->eventFilter(watched, event);
    } else {
        return self->QSGDynamicTexture::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperEventFilter(QSGDynamicTexture* self, QObject* watched, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_EventFilter_IsBase(true);
        return vqsgdynamictexture->eventFilter(watched, event);
    } else {
        return self->QSGDynamicTexture::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnEventFilter(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_EventFilter_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QSGDynamicTexture_TimerEvent(QSGDynamicTexture* self, QTimerEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->timerEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperTimerEvent(QSGDynamicTexture* self, QTimerEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_TimerEvent_IsBase(true);
        vqsgdynamictexture->timerEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnTimerEvent(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_TimerEvent_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGDynamicTexture_ChildEvent(QSGDynamicTexture* self, QChildEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->childEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperChildEvent(QSGDynamicTexture* self, QChildEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_ChildEvent_IsBase(true);
        vqsgdynamictexture->childEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnChildEvent(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_ChildEvent_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGDynamicTexture_CustomEvent(QSGDynamicTexture* self, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->customEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperCustomEvent(QSGDynamicTexture* self, QEvent* event) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_CustomEvent_IsBase(true);
        vqsgdynamictexture->customEvent(event);
    } else {
        ((VirtualQSGDynamicTexture*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnCustomEvent(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_CustomEvent_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QSGDynamicTexture_ConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->connectNotify(*signal);
    } else {
        ((VirtualQSGDynamicTexture*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperConnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_ConnectNotify_IsBase(true);
        vqsgdynamictexture->connectNotify(*signal);
    } else {
        ((VirtualQSGDynamicTexture*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnConnectNotify(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_ConnectNotify_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QSGDynamicTexture_DisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->disconnectNotify(*signal);
    } else {
        ((VirtualQSGDynamicTexture*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSGDynamicTexture_SuperDisconnectNotify(QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_DisconnectNotify_IsBase(true);
        vqsgdynamictexture->disconnectNotify(*signal);
    } else {
        ((VirtualQSGDynamicTexture*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnDisconnectNotify(QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = dynamic_cast<VirtualQSGDynamicTexture*>(self);
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_DisconnectNotify_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
void* QSGDynamicTexture_ResolveInterface(const QSGDynamicTexture* self, const char* name, int revision) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQSGDynamicTexture*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QSGDynamicTexture_SuperResolveInterface(const QSGDynamicTexture* self, const char* name, int revision) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_ResolveInterface_IsBase(true);
        return vqsgdynamictexture->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQSGDynamicTexture*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnResolveInterface(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_ResolveInterface_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_ResolveInterface_Callback>(slot));
}

// Derived class handler implementation
QObject* QSGDynamicTexture_Sender(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->sender();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSGDynamicTexture_SuperSender(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_Sender_IsBase(true);
        return vqsgdynamictexture->sender();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnSender(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_Sender_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Sender_Callback>(slot));
}

// Derived class handler implementation
int QSGDynamicTexture_SenderSignalIndex(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->senderSignalIndex();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSGDynamicTexture_SuperSenderSignalIndex(const QSGDynamicTexture* self) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_SenderSignalIndex_IsBase(true);
        return vqsgdynamictexture->senderSignalIndex();
    } else {
        return ((VirtualQSGDynamicTexture*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnSenderSignalIndex(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QSGDynamicTexture_Receivers(const QSGDynamicTexture* self, const char* signal) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->receivers(signal);
    } else {
        return ((VirtualQSGDynamicTexture*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSGDynamicTexture_SuperReceivers(const QSGDynamicTexture* self, const char* signal) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_Receivers_IsBase(true);
        return vqsgdynamictexture->receivers(signal);
    } else {
        return ((VirtualQSGDynamicTexture*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnReceivers(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_Receivers_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QSGDynamicTexture_IsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        return vqsgdynamictexture->isSignalConnected(*signal);
    } else {
        return ((VirtualQSGDynamicTexture*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSGDynamicTexture_SuperIsSignalConnected(const QSGDynamicTexture* self, const QMetaMethod* signal) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture) {
        vqsgdynamictexture->setQSGDynamicTexture_IsSignalConnected_IsBase(true);
        return vqsgdynamictexture->isSignalConnected(*signal);
    } else {
        return ((VirtualQSGDynamicTexture*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSGDynamicTexture_OnIsSignalConnected(const QSGDynamicTexture* self, intptr_t slot) {
    auto* vqsgdynamictexture = const_cast<VirtualQSGDynamicTexture*>(dynamic_cast<const VirtualQSGDynamicTexture*>(self));
    if (vqsgdynamictexture && vqsgdynamictexture->isVirtualQSGDynamicTexture)
        vqsgdynamictexture->setQSGDynamicTexture_IsSignalConnected_Callback(reinterpret_cast<VirtualQSGDynamicTexture::QSGDynamicTexture_IsSignalConnected_Callback>(slot));
}

void QSGDynamicTexture_Delete(QSGDynamicTexture* self) {
    delete self;
}
