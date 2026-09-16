#include <QChildEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHoverEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPointF>
#include <QQmlParserStatus>
#include <QQuickItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData
#include <QQuickRhiItem>
#include <QQuickRhiItemRenderer>
#include <QRectF>
#include <QSGNode>
#include <QSGTextureProvider>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QVariant>
#include <QWheelEvent>
#include <qquickrhiitem.h>
#include "libqquickrhiitem.h"
#include "libqquickrhiitem.hxx"

void QQuickRhiItemRenderer_Delete(QQuickRhiItemRenderer* self) {
    delete self;
}

QQuickRhiItem* QQuickRhiItem_new() {
    return new VirtualQQuickRhiItem();
}

QQuickRhiItem* QQuickRhiItem_new2(QQuickItem* parent) {
    return new VirtualQQuickRhiItem(parent);
}

QMetaObject* QQuickRhiItem_MetaObject(const QQuickRhiItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickRhiItem_Metacast(QQuickRhiItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickRhiItem_Metacall(QQuickRhiItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickRhiItem_Tr(const char* s) {
    auto _ret = QQuickRhiItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QQuickRhiItem_SampleCount(const QQuickRhiItem* self) {
    return self->sampleCount();
}

void QQuickRhiItem_SetSampleCount(QQuickRhiItem* self, int samples) {
    self->setSampleCount(static_cast<int>(samples));
}

int QQuickRhiItem_ColorBufferFormat(const QQuickRhiItem* self) {
    return static_cast<int>(self->colorBufferFormat());
}

void QQuickRhiItem_SetColorBufferFormat(QQuickRhiItem* self, int format) {
    self->setColorBufferFormat(static_cast<QQuickRhiItem::TextureFormat>(format));
}

bool QQuickRhiItem_IsMirrorVerticallyEnabled(const QQuickRhiItem* self) {
    return self->isMirrorVerticallyEnabled();
}

void QQuickRhiItem_SetMirrorVertically(QQuickRhiItem* self, bool enable) {
    self->setMirrorVertically(enable);
}

bool QQuickRhiItem_AlphaBlending(const QQuickRhiItem* self) {
    return self->alphaBlending();
}

void QQuickRhiItem_SetAlphaBlending(QQuickRhiItem* self, bool enable) {
    self->setAlphaBlending(enable);
}

int QQuickRhiItem_FixedColorBufferWidth(const QQuickRhiItem* self) {
    return self->fixedColorBufferWidth();
}

void QQuickRhiItem_SetFixedColorBufferWidth(QQuickRhiItem* self, int width) {
    self->setFixedColorBufferWidth(static_cast<int>(width));
}

int QQuickRhiItem_FixedColorBufferHeight(const QQuickRhiItem* self) {
    return self->fixedColorBufferHeight();
}

void QQuickRhiItem_SetFixedColorBufferHeight(QQuickRhiItem* self, int height) {
    self->setFixedColorBufferHeight(static_cast<int>(height));
}

QSize* QQuickRhiItem_EffectiveColorBufferSize(const QQuickRhiItem* self) {
    return new QSize(self->effectiveColorBufferSize());
}

bool QQuickRhiItem_IsTextureProvider(const QQuickRhiItem* self) {
    return self->isTextureProvider();
}

QSGTextureProvider* QQuickRhiItem_TextureProvider(const QQuickRhiItem* self) {
    return self->textureProvider();
}

void QQuickRhiItem_SampleCountChanged(QQuickRhiItem* self) {
    self->sampleCountChanged();
}

void QQuickRhiItem_Connect_SampleCountChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::sampleCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_ColorBufferFormatChanged(QQuickRhiItem* self) {
    self->colorBufferFormatChanged();
}

void QQuickRhiItem_Connect_ColorBufferFormatChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::colorBufferFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_AutoRenderTargetChanged(QQuickRhiItem* self) {
    self->autoRenderTargetChanged();
}

void QQuickRhiItem_Connect_AutoRenderTargetChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::autoRenderTargetChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_MirrorVerticallyChanged(QQuickRhiItem* self) {
    self->mirrorVerticallyChanged();
}

void QQuickRhiItem_Connect_MirrorVerticallyChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::mirrorVerticallyChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_AlphaBlendingChanged(QQuickRhiItem* self) {
    self->alphaBlendingChanged();
}

void QQuickRhiItem_Connect_AlphaBlendingChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::alphaBlendingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_FixedColorBufferWidthChanged(QQuickRhiItem* self) {
    self->fixedColorBufferWidthChanged();
}

void QQuickRhiItem_Connect_FixedColorBufferWidthChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::fixedColorBufferWidthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_FixedColorBufferHeightChanged(QQuickRhiItem* self) {
    self->fixedColorBufferHeightChanged();
}

void QQuickRhiItem_Connect_FixedColorBufferHeightChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::fixedColorBufferHeightChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QQuickRhiItem_EffectiveColorBufferSizeChanged(QQuickRhiItem* self) {
    self->effectiveColorBufferSizeChanged();
}

void QQuickRhiItem_Connect_EffectiveColorBufferSizeChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self, &QQuickRhiItem::effectiveColorBufferSizeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

QQuickRhiItemRenderer* QQuickRhiItem_CreateRenderer(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->createRenderer();
    }
    return {};
}

QSGNode* QQuickRhiItem_UpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->updatePaintNode(param1, param2);
    }
    return {};
}

bool QQuickRhiItem_Event(QQuickRhiItem* self, QEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->event(param1);
    }
    return {};
}

void QQuickRhiItem_GeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->geometryChange(*newGeometry, *oldGeometry);
    }
}

void QQuickRhiItem_ReleaseResources(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->releaseResources();
    }
}

libqt_string QQuickRhiItem_Tr2(const char* s, const char* c) {
    auto _ret = QQuickRhiItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickRhiItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickRhiItem::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickRhiItem_SuperMetaObject(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickrhiitem->metaObject();
    } else {
        return (QMetaObject*)self->QQuickRhiItem::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetaObject(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MetaObject_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickRhiItem_SuperMetacast(QQuickRhiItem* self, const char* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Metacast_IsBase(true);
        return vqquickrhiitem->qt_metacast(param1);
    } else {
        return self->QQuickRhiItem::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetacast(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Metacast_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickRhiItem_SuperMetacall(QQuickRhiItem* self, int param1, int param2, void** param3) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Metacall_IsBase(true);
        return vqquickrhiitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickRhiItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetacall(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Metacall_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Metacall_Callback>(slot));
}

// Base class handler implementation
bool QQuickRhiItem_SuperIsTextureProvider(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_IsTextureProvider_IsBase(true);
        return vqquickrhiitem->isTextureProvider();
    } else {
        return self->QQuickRhiItem::isTextureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnIsTextureProvider(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_IsTextureProvider_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_IsTextureProvider_Callback>(slot));
}

// Base class handler implementation
QSGTextureProvider* QQuickRhiItem_SuperTextureProvider(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_TextureProvider_IsBase(true);
        return vqquickrhiitem->textureProvider();
    } else {
        return self->QQuickRhiItem::textureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTextureProvider(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_TextureProvider_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TextureProvider_Callback>(slot));
}

// Base class handler implementation
QQuickRhiItemRenderer* QQuickRhiItem_SuperCreateRenderer(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_CreateRenderer_IsBase(true);
        return vqquickrhiitem->createRenderer();
    } else {
        return ((VirtualQQuickRhiItem*)self)->createRenderer();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnCreateRenderer(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_CreateRenderer_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_CreateRenderer_Callback>(slot));
}

// Base class handler implementation
QSGNode* QQuickRhiItem_SuperUpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_UpdatePaintNode_IsBase(true);
        return vqquickrhiitem->updatePaintNode(param1, param2);
    } else {
        return ((VirtualQQuickRhiItem*)self)->updatePaintNode(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnUpdatePaintNode(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_UpdatePaintNode_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_UpdatePaintNode_Callback>(slot));
}

// Base class handler implementation
bool QQuickRhiItem_SuperEvent(QQuickRhiItem* self, QEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Event_IsBase(true);
        return vqquickrhiitem->event(param1);
    } else {
        return ((VirtualQQuickRhiItem*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Event_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Event_Callback>(slot));
}

// Base class handler implementation
void QQuickRhiItem_SuperGeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_GeometryChange_IsBase(true);
        vqquickrhiitem->geometryChange(*newGeometry, *oldGeometry);
    } else {
        ((VirtualQQuickRhiItem*)self)->geometryChange(*newGeometry, *oldGeometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnGeometryChange(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_GeometryChange_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_GeometryChange_Callback>(slot));
}

// Base class handler implementation
void QQuickRhiItem_SuperReleaseResources(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ReleaseResources_IsBase(true);
        vqquickrhiitem->releaseResources();
    } else {
        ((VirtualQQuickRhiItem*)self)->releaseResources();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnReleaseResources(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ReleaseResources_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ReleaseResources_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickRhiItem_BoundingRect(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return new QRectF(vqquickrhiitem->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickRhiItem*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QQuickRhiItem_SuperBoundingRect(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_BoundingRect_IsBase(true);
        return new QRectF(vqquickrhiitem->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickRhiItem*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnBoundingRect(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_BoundingRect_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_BoundingRect_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickRhiItem_ClipRect(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return new QRectF(vqquickrhiitem->clipRect());
    } else {
        return new QRectF(((VirtualQQuickRhiItem*)self)->clipRect());
    }
}

// Base class handler implementation
QRectF* QQuickRhiItem_SuperClipRect(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ClipRect_IsBase(true);
        return new QRectF(vqquickrhiitem->clipRect());
    } else {
        return new QRectF(((VirtualQQuickRhiItem*)self)->clipRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnClipRect(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ClipRect_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ClipRect_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_Contains(const QQuickRhiItem* self, const QPointF* point) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->contains(*point);
    } else {
        return self->QQuickRhiItem::contains(*point);
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperContains(const QQuickRhiItem* self, const QPointF* point) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Contains_IsBase(true);
        return vqquickrhiitem->contains(*point);
    } else {
        return self->QQuickRhiItem::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnContains(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Contains_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Contains_Callback>(slot));
}

// Derived class handler implementation
QVariant* QQuickRhiItem_InputMethodQuery(const QQuickRhiItem* self, int query) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return new QVariant(vqquickrhiitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickRhiItem*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QQuickRhiItem_SuperInputMethodQuery(const QQuickRhiItem* self, int query) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqquickrhiitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickRhiItem*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnInputMethodQuery(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_InputMethodQuery_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_ItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickRhiItem*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ItemChange_IsBase(true);
        vqquickrhiitem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickRhiItem*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnItemChange(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ItemChange_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_ClassBegin(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->classBegin();
    } else {
        ((VirtualQQuickRhiItem*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperClassBegin(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ClassBegin_IsBase(true);
        vqquickrhiitem->classBegin();
    } else {
        ((VirtualQQuickRhiItem*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnClassBegin(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ClassBegin_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_ComponentComplete(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->componentComplete();
    } else {
        ((VirtualQQuickRhiItem*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperComponentComplete(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ComponentComplete_IsBase(true);
        vqquickrhiitem->componentComplete();
    } else {
        ((VirtualQQuickRhiItem*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnComponentComplete(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ComponentComplete_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_KeyPressEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->keyPressEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperKeyPressEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_KeyPressEvent_IsBase(true);
        vqquickrhiitem->keyPressEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnKeyPressEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_KeyPressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_KeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperKeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_KeyReleaseEvent_IsBase(true);
        vqquickrhiitem->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnKeyReleaseEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_KeyReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_InputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperInputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_InputMethodEvent_IsBase(true);
        vqquickrhiitem->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnInputMethodEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_InputMethodEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_FocusInEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->focusInEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperFocusInEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_FocusInEvent_IsBase(true);
        vqquickrhiitem->focusInEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnFocusInEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_FocusInEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_FocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->focusOutEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperFocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_FocusOutEvent_IsBase(true);
        vqquickrhiitem->focusOutEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnFocusOutEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_FocusOutEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_MousePressEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->mousePressEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMousePressEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MousePressEvent_IsBase(true);
        vqquickrhiitem->mousePressEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMousePressEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MousePressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_MouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MouseMoveEvent_IsBase(true);
        vqquickrhiitem->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_MouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MouseReleaseEvent_IsBase(true);
        vqquickrhiitem->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseReleaseEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_MouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MouseDoubleClickEvent_IsBase(true);
        vqquickrhiitem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseDoubleClickEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseDoubleClickEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_MouseUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->mouseUngrabEvent();
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseUngrabEvent();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_MouseUngrabEvent_IsBase(true);
        vqquickrhiitem->mouseUngrabEvent();
    } else {
        ((VirtualQQuickRhiItem*)self)->mouseUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseUngrabEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_MouseUngrabEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_TouchUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->touchUngrabEvent();
    } else {
        ((VirtualQQuickRhiItem*)self)->touchUngrabEvent();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTouchUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_TouchUngrabEvent_IsBase(true);
        vqquickrhiitem->touchUngrabEvent();
    } else {
        ((VirtualQQuickRhiItem*)self)->touchUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTouchUngrabEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_TouchUngrabEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TouchUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_WheelEvent(QQuickRhiItem* self, QWheelEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->wheelEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperWheelEvent(QQuickRhiItem* self, QWheelEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_WheelEvent_IsBase(true);
        vqquickrhiitem->wheelEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnWheelEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_WheelEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_WheelEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_TouchEvent(QQuickRhiItem* self, QTouchEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->touchEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->touchEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTouchEvent(QQuickRhiItem* self, QTouchEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_TouchEvent_IsBase(true);
        vqquickrhiitem->touchEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->touchEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTouchEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_TouchEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TouchEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_HoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_HoverEnterEvent_IsBase(true);
        vqquickrhiitem->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverEnterEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_HoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_HoverMoveEvent_IsBase(true);
        vqquickrhiitem->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_HoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_HoverLeaveEvent_IsBase(true);
        vqquickrhiitem->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverLeaveEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_DragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_DragEnterEvent_IsBase(true);
        vqquickrhiitem->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragEnterEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_DragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_DragMoveEvent_IsBase(true);
        vqquickrhiitem->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_DragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_DragLeaveEvent_IsBase(true);
        vqquickrhiitem->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragLeaveEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_DropEvent(QQuickRhiItem* self, QDropEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->dropEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDropEvent(QQuickRhiItem* self, QDropEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_DropEvent_IsBase(true);
        vqquickrhiitem->dropEvent(param1);
    } else {
        ((VirtualQQuickRhiItem*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDropEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_DropEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DropEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_ChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickRhiItem*)self)->childMouseEventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ChildMouseEventFilter_IsBase(true);
        return vqquickrhiitem->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickRhiItem*)self)->childMouseEventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnChildMouseEventFilter(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ChildMouseEventFilter_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ChildMouseEventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_UpdatePolish(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->updatePolish();
    } else {
        ((VirtualQQuickRhiItem*)self)->updatePolish();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperUpdatePolish(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_UpdatePolish_IsBase(true);
        vqquickrhiitem->updatePolish();
    } else {
        ((VirtualQQuickRhiItem*)self)->updatePolish();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnUpdatePolish(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_UpdatePolish_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_UpdatePolish_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_EventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->eventFilter(watched, event);
    } else {
        return self->QQuickRhiItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperEventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_EventFilter_IsBase(true);
        return vqquickrhiitem->eventFilter(watched, event);
    } else {
        return self->QQuickRhiItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnEventFilter(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_EventFilter_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_TimerEvent(QQuickRhiItem* self, QTimerEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->timerEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTimerEvent(QQuickRhiItem* self, QTimerEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_TimerEvent_IsBase(true);
        vqquickrhiitem->timerEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTimerEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_TimerEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_ChildEvent(QQuickRhiItem* self, QChildEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->childEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperChildEvent(QQuickRhiItem* self, QChildEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ChildEvent_IsBase(true);
        vqquickrhiitem->childEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnChildEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ChildEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_CustomEvent(QQuickRhiItem* self, QEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->customEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperCustomEvent(QQuickRhiItem* self, QEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_CustomEvent_IsBase(true);
        vqquickrhiitem->customEvent(event);
    } else {
        ((VirtualQQuickRhiItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnCustomEvent(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_CustomEvent_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_ConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->connectNotify(*signal);
    } else {
        ((VirtualQQuickRhiItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_ConnectNotify_IsBase(true);
        vqquickrhiitem->connectNotify(*signal);
    } else {
        ((VirtualQQuickRhiItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnConnectNotify(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_DisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickRhiItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_DisconnectNotify_IsBase(true);
        vqquickrhiitem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickRhiItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDisconnectNotify(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_IsAutoRenderTargetEnabled(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->isAutoRenderTargetEnabled();
    } else {
        return ((VirtualQQuickRhiItem*)self)->isAutoRenderTargetEnabled();
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperIsAutoRenderTargetEnabled(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_IsAutoRenderTargetEnabled_IsBase(true);
        return vqquickrhiitem->isAutoRenderTargetEnabled();
    } else {
        return ((VirtualQQuickRhiItem*)self)->isAutoRenderTargetEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnIsAutoRenderTargetEnabled(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_IsAutoRenderTargetEnabled_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_IsAutoRenderTargetEnabled_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_SetAutoRenderTarget(QQuickRhiItem* self, bool enabled) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setAutoRenderTarget(enabled);
    } else {
        ((VirtualQQuickRhiItem*)self)->setAutoRenderTarget(enabled);
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperSetAutoRenderTarget(QQuickRhiItem* self, bool enabled) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_SetAutoRenderTarget_IsBase(true);
        vqquickrhiitem->setAutoRenderTarget(enabled);
    } else {
        ((VirtualQQuickRhiItem*)self)->setAutoRenderTarget(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnSetAutoRenderTarget(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_SetAutoRenderTarget_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_SetAutoRenderTarget_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_IsComponentComplete(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->isComponentComplete();
    } else {
        return ((VirtualQQuickRhiItem*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperIsComponentComplete(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_IsComponentComplete_IsBase(true);
        return vqquickrhiitem->isComponentComplete();
    } else {
        return ((VirtualQQuickRhiItem*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnIsComponentComplete(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_UpdateInputMethod(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->updateInputMethod();
    } else {
        ((VirtualQQuickRhiItem*)self)->updateInputMethod();
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperUpdateInputMethod(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_UpdateInputMethod_IsBase(true);
        vqquickrhiitem->updateInputMethod();
    } else {
        ((VirtualQQuickRhiItem*)self)->updateInputMethod();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnUpdateInputMethod(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_UpdateInputMethod_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_UpdateInputMethod_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_WidthValid(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->widthValid();
    } else {
        return ((VirtualQQuickRhiItem*)self)->widthValid();
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperWidthValid(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_WidthValid_IsBase(true);
        return vqquickrhiitem->widthValid();
    } else {
        return ((VirtualQQuickRhiItem*)self)->widthValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnWidthValid(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_WidthValid_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_WidthValid_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_HeightValid(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->heightValid();
    } else {
        return ((VirtualQQuickRhiItem*)self)->heightValid();
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperHeightValid(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_HeightValid_IsBase(true);
        return vqquickrhiitem->heightValid();
    } else {
        return ((VirtualQQuickRhiItem*)self)->heightValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHeightValid(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_HeightValid_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HeightValid_Callback>(slot));
}

// Derived class handler implementation
void QQuickRhiItem_SetImplicitSize(QQuickRhiItem* self, double param1, double param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickRhiItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperSetImplicitSize(QQuickRhiItem* self, double param1, double param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_SetImplicitSize_IsBase(true);
        vqquickrhiitem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickRhiItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnSetImplicitSize(QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_SetImplicitSize_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_SetImplicitSize_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickRhiItem_Sender(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->sender();
    } else {
        return ((VirtualQQuickRhiItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickRhiItem_SuperSender(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Sender_IsBase(true);
        return vqquickrhiitem->sender();
    } else {
        return ((VirtualQQuickRhiItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnSender(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Sender_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickRhiItem_SenderSignalIndex(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->senderSignalIndex();
    } else {
        return ((VirtualQQuickRhiItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickRhiItem_SuperSenderSignalIndex(const QQuickRhiItem* self) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_SenderSignalIndex_IsBase(true);
        return vqquickrhiitem->senderSignalIndex();
    } else {
        return ((VirtualQQuickRhiItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnSenderSignalIndex(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickRhiItem_Receivers(const QQuickRhiItem* self, const char* signal) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->receivers(signal);
    } else {
        return ((VirtualQQuickRhiItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickRhiItem_SuperReceivers(const QQuickRhiItem* self, const char* signal) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_Receivers_IsBase(true);
        return vqquickrhiitem->receivers(signal);
    } else {
        return ((VirtualQQuickRhiItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnReceivers(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_Receivers_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickRhiItem_IsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        return vqquickrhiitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickRhiItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperIsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem) {
        vqquickrhiitem->setQQuickRhiItem_IsSignalConnected_IsBase(true);
        return vqquickrhiitem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickRhiItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnIsSignalConnected(const QQuickRhiItem* self, intptr_t slot) {
    auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self));
    if (vqquickrhiitem && vqquickrhiitem->isVirtualQQuickRhiItem)
        vqquickrhiitem->setQQuickRhiItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_IsSignalConnected_Callback>(slot));
}

void QQuickRhiItem_Delete(QQuickRhiItem* self) {
    delete self;
}
