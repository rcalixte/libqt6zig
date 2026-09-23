#include <QChildEvent>
#include <QColor>
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
#include <QPainter>
#include <QPointF>
#include <QQmlParserStatus>
#include <QQuickItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData
#include <QQuickPaintedItem>
#include <QRect>
#include <QRectF>
#include <QSGNode>
#include <QSGTextureProvider>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QVariant>
#include <QWheelEvent>
#include <qquickpainteditem.h>
#include "libqquickpainteditem.h"
#include "libqquickpainteditem.hxx"

QQuickPaintedItem* QQuickPaintedItem_new() {
    return new VirtualQQuickPaintedItem();
}

QQuickPaintedItem* QQuickPaintedItem_new2(QQuickItem* parent) {
    return new VirtualQQuickPaintedItem(parent);
}

QMetaObject* QQuickPaintedItem_MetaObject(const QQuickPaintedItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickPaintedItem_Metacast(QQuickPaintedItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickPaintedItem_Metacall(QQuickPaintedItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickPaintedItem_Tr(const char* s) {
    auto _ret = QQuickPaintedItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickPaintedItem_Update(QQuickPaintedItem* self) {
    self->update();
}

bool QQuickPaintedItem_OpaquePainting(const QQuickPaintedItem* self) {
    return self->opaquePainting();
}

void QQuickPaintedItem_SetOpaquePainting(QQuickPaintedItem* self, bool opaqueVal) {
    self->setOpaquePainting(opaqueVal);
}

bool QQuickPaintedItem_Antialiasing(const QQuickPaintedItem* self) {
    return self->antialiasing();
}

void QQuickPaintedItem_SetAntialiasing(QQuickPaintedItem* self, bool enable) {
    self->setAntialiasing(enable);
}

bool QQuickPaintedItem_Mipmap(const QQuickPaintedItem* self) {
    return self->mipmap();
}

void QQuickPaintedItem_SetMipmap(QQuickPaintedItem* self, bool enable) {
    self->setMipmap(enable);
}

int QQuickPaintedItem_PerformanceHints(const QQuickPaintedItem* self) {
    return static_cast<int>(self->performanceHints());
}

void QQuickPaintedItem_SetPerformanceHint(QQuickPaintedItem* self, int hint) {
    self->setPerformanceHint(static_cast<QQuickPaintedItem::PerformanceHint>(hint));
}

void QQuickPaintedItem_SetPerformanceHints(QQuickPaintedItem* self, int hints) {
    self->setPerformanceHints(static_cast<QQuickPaintedItem::PerformanceHints>(hints));
}

QRectF* QQuickPaintedItem_ContentsBoundingRect(const QQuickPaintedItem* self) {
    return new QRectF(self->contentsBoundingRect());
}

QSize* QQuickPaintedItem_ContentsSize(const QQuickPaintedItem* self) {
    return new QSize(self->contentsSize());
}

void QQuickPaintedItem_SetContentsSize(QQuickPaintedItem* self, const QSize* contentsSize) {
    self->setContentsSize(*contentsSize);
}

void QQuickPaintedItem_ResetContentsSize(QQuickPaintedItem* self) {
    self->resetContentsSize();
}

double QQuickPaintedItem_ContentsScale(const QQuickPaintedItem* self) {
    return static_cast<double>(self->contentsScale());
}

void QQuickPaintedItem_SetContentsScale(QQuickPaintedItem* self, double contentsScale) {
    self->setContentsScale(static_cast<qreal>(contentsScale));
}

QSize* QQuickPaintedItem_TextureSize(const QQuickPaintedItem* self) {
    return new QSize(self->textureSize());
}

void QQuickPaintedItem_SetTextureSize(QQuickPaintedItem* self, const QSize* size) {
    self->setTextureSize(*size);
}

QColor* QQuickPaintedItem_FillColor(const QQuickPaintedItem* self) {
    return new QColor(self->fillColor());
}

void QQuickPaintedItem_SetFillColor(QQuickPaintedItem* self, const QColor* fillColor) {
    self->setFillColor(*fillColor);
}

int QQuickPaintedItem_RenderTarget(const QQuickPaintedItem* self) {
    return static_cast<int>(self->renderTarget());
}

void QQuickPaintedItem_SetRenderTarget(QQuickPaintedItem* self, int target) {
    self->setRenderTarget(static_cast<QQuickPaintedItem::RenderTarget>(target));
}

void QQuickPaintedItem_Paint(QQuickPaintedItem* self, QPainter* painter) {
    self->paint(painter);
}

bool QQuickPaintedItem_IsTextureProvider(const QQuickPaintedItem* self) {
    return self->isTextureProvider();
}

QSGTextureProvider* QQuickPaintedItem_TextureProvider(const QQuickPaintedItem* self) {
    return self->textureProvider();
}

void QQuickPaintedItem_FillColorChanged(QQuickPaintedItem* self) {
    self->fillColorChanged();
}

void QQuickPaintedItem_Connect_FillColorChanged(QQuickPaintedItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickPaintedItem*) = reinterpret_cast<void (*)(QQuickPaintedItem*)>(slot);
    QQuickPaintedItem::connect(self,
                               static_cast<void (QQuickPaintedItem::*)()>(&QQuickPaintedItem::fillColorChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QQuickPaintedItem_ContentsSizeChanged(QQuickPaintedItem* self) {
    self->contentsSizeChanged();
}

void QQuickPaintedItem_Connect_ContentsSizeChanged(QQuickPaintedItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickPaintedItem*) = reinterpret_cast<void (*)(QQuickPaintedItem*)>(slot);
    QQuickPaintedItem::connect(self,
                               static_cast<void (QQuickPaintedItem::*)()>(&QQuickPaintedItem::contentsSizeChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QQuickPaintedItem_ContentsScaleChanged(QQuickPaintedItem* self) {
    self->contentsScaleChanged();
}

void QQuickPaintedItem_Connect_ContentsScaleChanged(QQuickPaintedItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickPaintedItem*) = reinterpret_cast<void (*)(QQuickPaintedItem*)>(slot);
    QQuickPaintedItem::connect(self,
                               static_cast<void (QQuickPaintedItem::*)()>(&QQuickPaintedItem::contentsScaleChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QQuickPaintedItem_RenderTargetChanged(QQuickPaintedItem* self) {
    self->renderTargetChanged();
}

void QQuickPaintedItem_Connect_RenderTargetChanged(QQuickPaintedItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickPaintedItem*) = reinterpret_cast<void (*)(QQuickPaintedItem*)>(slot);
    QQuickPaintedItem::connect(self,
                               static_cast<void (QQuickPaintedItem::*)()>(&QQuickPaintedItem::renderTargetChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QQuickPaintedItem_TextureSizeChanged(QQuickPaintedItem* self) {
    self->textureSizeChanged();
}

void QQuickPaintedItem_Connect_TextureSizeChanged(QQuickPaintedItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickPaintedItem*) = reinterpret_cast<void (*)(QQuickPaintedItem*)>(slot);
    QQuickPaintedItem::connect(self,
                               static_cast<void (QQuickPaintedItem::*)()>(&QQuickPaintedItem::textureSizeChanged),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

QSGNode* QQuickPaintedItem_UpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->updatePaintNode(param1, param2);
    }
    return {};
}

void QQuickPaintedItem_ReleaseResources(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->releaseResources();
    }
}

void QQuickPaintedItem_ItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

libqt_string QQuickPaintedItem_Tr2(const char* s, const char* c) {
    auto _ret = QQuickPaintedItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickPaintedItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickPaintedItem::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuickPaintedItem_Update1(QQuickPaintedItem* self, const QRect* rect) {
    self->update(*rect);
}

void QQuickPaintedItem_SetPerformanceHint2(QQuickPaintedItem* self, int hint, bool enabled) {
    self->setPerformanceHint(static_cast<QQuickPaintedItem::PerformanceHint>(hint), enabled);
}

// Base class handler implementation
QMetaObject* QQuickPaintedItem_SuperMetaObject(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickpainteditem->metaObject();
    } else {
        return (QMetaObject*)self->QQuickPaintedItem::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetaObject(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MetaObject_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickPaintedItem_SuperMetacast(QQuickPaintedItem* self, const char* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Metacast_IsBase(true);
        return vqquickpainteditem->qt_metacast(param1);
    } else {
        return self->QQuickPaintedItem::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetacast(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Metacast_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickPaintedItem_SuperMetacall(QQuickPaintedItem* self, int param1, int param2, void** param3) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Metacall_IsBase(true);
        return vqquickpainteditem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickPaintedItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetacall(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Metacall_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuickPaintedItem_SuperPaint(QQuickPaintedItem* self, QPainter* painter) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Paint_IsBase(true);
        vqquickpainteditem->paint(painter);
    } else {
        ((VirtualQQuickPaintedItem*)self)->paint(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnPaint(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Paint_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Paint_Callback>(slot));
}

// Base class handler implementation
bool QQuickPaintedItem_SuperIsTextureProvider(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_IsTextureProvider_IsBase(true);
        return vqquickpainteditem->isTextureProvider();
    } else {
        return self->QQuickPaintedItem::isTextureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnIsTextureProvider(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_IsTextureProvider_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_IsTextureProvider_Callback>(slot));
}

// Base class handler implementation
QSGTextureProvider* QQuickPaintedItem_SuperTextureProvider(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_TextureProvider_IsBase(true);
        return vqquickpainteditem->textureProvider();
    } else {
        return self->QQuickPaintedItem::textureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTextureProvider(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_TextureProvider_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TextureProvider_Callback>(slot));
}

// Base class handler implementation
QSGNode* QQuickPaintedItem_SuperUpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_UpdatePaintNode_IsBase(true);
        return vqquickpainteditem->updatePaintNode(param1, param2);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->updatePaintNode(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnUpdatePaintNode(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_UpdatePaintNode_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_UpdatePaintNode_Callback>(slot));
}

// Base class handler implementation
void QQuickPaintedItem_SuperReleaseResources(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ReleaseResources_IsBase(true);
        vqquickpainteditem->releaseResources();
    } else {
        ((VirtualQQuickPaintedItem*)self)->releaseResources();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnReleaseResources(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ReleaseResources_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ReleaseResources_Callback>(slot));
}

// Base class handler implementation
void QQuickPaintedItem_SuperItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ItemChange_IsBase(true);
        vqquickpainteditem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickPaintedItem*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnItemChange(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ItemChange_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ItemChange_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickPaintedItem_BoundingRect(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return new QRectF(vqquickpainteditem->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickPaintedItem*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QQuickPaintedItem_SuperBoundingRect(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_BoundingRect_IsBase(true);
        return new QRectF(vqquickpainteditem->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickPaintedItem*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnBoundingRect(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_BoundingRect_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_BoundingRect_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickPaintedItem_ClipRect(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return new QRectF(vqquickpainteditem->clipRect());
    } else {
        return new QRectF(((VirtualQQuickPaintedItem*)self)->clipRect());
    }
}

// Base class handler implementation
QRectF* QQuickPaintedItem_SuperClipRect(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ClipRect_IsBase(true);
        return new QRectF(vqquickpainteditem->clipRect());
    } else {
        return new QRectF(((VirtualQQuickPaintedItem*)self)->clipRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnClipRect(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ClipRect_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ClipRect_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_Contains(const QQuickPaintedItem* self, const QPointF* point) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->contains(*point);
    } else {
        return self->QQuickPaintedItem::contains(*point);
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperContains(const QQuickPaintedItem* self, const QPointF* point) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Contains_IsBase(true);
        return vqquickpainteditem->contains(*point);
    } else {
        return self->QQuickPaintedItem::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnContains(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Contains_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Contains_Callback>(slot));
}

// Derived class handler implementation
QVariant* QQuickPaintedItem_InputMethodQuery(const QQuickPaintedItem* self, int query) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return new QVariant(vqquickpainteditem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickPaintedItem*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QQuickPaintedItem_SuperInputMethodQuery(const QQuickPaintedItem* self, int query) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqquickpainteditem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickPaintedItem*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnInputMethodQuery(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_InputMethodQuery_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_Event(QQuickPaintedItem* self, QEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->event(param1);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->event(param1);
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperEvent(QQuickPaintedItem* self, QEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Event_IsBase(true);
        return vqquickpainteditem->event(param1);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Event_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Event_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_GeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->geometryChange(*newGeometry, *oldGeometry);
    } else {
        ((VirtualQQuickPaintedItem*)self)->geometryChange(*newGeometry, *oldGeometry);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperGeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_GeometryChange_IsBase(true);
        vqquickpainteditem->geometryChange(*newGeometry, *oldGeometry);
    } else {
        ((VirtualQQuickPaintedItem*)self)->geometryChange(*newGeometry, *oldGeometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnGeometryChange(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_GeometryChange_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_GeometryChange_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_ClassBegin(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->classBegin();
    } else {
        ((VirtualQQuickPaintedItem*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperClassBegin(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ClassBegin_IsBase(true);
        vqquickpainteditem->classBegin();
    } else {
        ((VirtualQQuickPaintedItem*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnClassBegin(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ClassBegin_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_ComponentComplete(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->componentComplete();
    } else {
        ((VirtualQQuickPaintedItem*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperComponentComplete(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ComponentComplete_IsBase(true);
        vqquickpainteditem->componentComplete();
    } else {
        ((VirtualQQuickPaintedItem*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnComponentComplete(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ComponentComplete_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_KeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->keyPressEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperKeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_KeyPressEvent_IsBase(true);
        vqquickpainteditem->keyPressEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnKeyPressEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_KeyPressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_KeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperKeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_KeyReleaseEvent_IsBase(true);
        vqquickpainteditem->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnKeyReleaseEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_KeyReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_InputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperInputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_InputMethodEvent_IsBase(true);
        vqquickpainteditem->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnInputMethodEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_InputMethodEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_FocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->focusInEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperFocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_FocusInEvent_IsBase(true);
        vqquickpainteditem->focusInEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnFocusInEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_FocusInEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_FocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->focusOutEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperFocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_FocusOutEvent_IsBase(true);
        vqquickpainteditem->focusOutEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnFocusOutEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_FocusOutEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_MousePressEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->mousePressEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMousePressEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MousePressEvent_IsBase(true);
        vqquickpainteditem->mousePressEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMousePressEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MousePressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_MouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MouseMoveEvent_IsBase(true);
        vqquickpainteditem->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_MouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MouseReleaseEvent_IsBase(true);
        vqquickpainteditem->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseReleaseEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_MouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MouseDoubleClickEvent_IsBase(true);
        vqquickpainteditem->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseDoubleClickEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseDoubleClickEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_MouseUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->mouseUngrabEvent();
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseUngrabEvent();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_MouseUngrabEvent_IsBase(true);
        vqquickpainteditem->mouseUngrabEvent();
    } else {
        ((VirtualQQuickPaintedItem*)self)->mouseUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseUngrabEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_MouseUngrabEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_TouchUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->touchUngrabEvent();
    } else {
        ((VirtualQQuickPaintedItem*)self)->touchUngrabEvent();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTouchUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_TouchUngrabEvent_IsBase(true);
        vqquickpainteditem->touchUngrabEvent();
    } else {
        ((VirtualQQuickPaintedItem*)self)->touchUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTouchUngrabEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_TouchUngrabEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TouchUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_WheelEvent(QQuickPaintedItem* self, QWheelEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->wheelEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperWheelEvent(QQuickPaintedItem* self, QWheelEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_WheelEvent_IsBase(true);
        vqquickpainteditem->wheelEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnWheelEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_WheelEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_WheelEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_TouchEvent(QQuickPaintedItem* self, QTouchEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->touchEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->touchEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTouchEvent(QQuickPaintedItem* self, QTouchEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_TouchEvent_IsBase(true);
        vqquickpainteditem->touchEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->touchEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTouchEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_TouchEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TouchEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_HoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_HoverEnterEvent_IsBase(true);
        vqquickpainteditem->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverEnterEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_HoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_HoverMoveEvent_IsBase(true);
        vqquickpainteditem->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_HoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_HoverLeaveEvent_IsBase(true);
        vqquickpainteditem->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverLeaveEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_DragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_DragEnterEvent_IsBase(true);
        vqquickpainteditem->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragEnterEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_DragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_DragMoveEvent_IsBase(true);
        vqquickpainteditem->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_DragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_DragLeaveEvent_IsBase(true);
        vqquickpainteditem->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragLeaveEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_DropEvent(QQuickPaintedItem* self, QDropEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->dropEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDropEvent(QQuickPaintedItem* self, QDropEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_DropEvent_IsBase(true);
        vqquickpainteditem->dropEvent(param1);
    } else {
        ((VirtualQQuickPaintedItem*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDropEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_DropEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DropEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_ChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->childMouseEventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ChildMouseEventFilter_IsBase(true);
        return vqquickpainteditem->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->childMouseEventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnChildMouseEventFilter(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ChildMouseEventFilter_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ChildMouseEventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_UpdatePolish(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->updatePolish();
    } else {
        ((VirtualQQuickPaintedItem*)self)->updatePolish();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperUpdatePolish(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_UpdatePolish_IsBase(true);
        vqquickpainteditem->updatePolish();
    } else {
        ((VirtualQQuickPaintedItem*)self)->updatePolish();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnUpdatePolish(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_UpdatePolish_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_UpdatePolish_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_EventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->eventFilter(watched, event);
    } else {
        return self->QQuickPaintedItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperEventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_EventFilter_IsBase(true);
        return vqquickpainteditem->eventFilter(watched, event);
    } else {
        return self->QQuickPaintedItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnEventFilter(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_EventFilter_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_TimerEvent(QQuickPaintedItem* self, QTimerEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->timerEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTimerEvent(QQuickPaintedItem* self, QTimerEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_TimerEvent_IsBase(true);
        vqquickpainteditem->timerEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTimerEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_TimerEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_ChildEvent(QQuickPaintedItem* self, QChildEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->childEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperChildEvent(QQuickPaintedItem* self, QChildEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ChildEvent_IsBase(true);
        vqquickpainteditem->childEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnChildEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ChildEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_CustomEvent(QQuickPaintedItem* self, QEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->customEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperCustomEvent(QQuickPaintedItem* self, QEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_CustomEvent_IsBase(true);
        vqquickpainteditem->customEvent(event);
    } else {
        ((VirtualQQuickPaintedItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnCustomEvent(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_CustomEvent_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_ConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->connectNotify(*signal);
    } else {
        ((VirtualQQuickPaintedItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_ConnectNotify_IsBase(true);
        vqquickpainteditem->connectNotify(*signal);
    } else {
        ((VirtualQQuickPaintedItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnConnectNotify(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_DisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickPaintedItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_DisconnectNotify_IsBase(true);
        vqquickpainteditem->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickPaintedItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDisconnectNotify(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_IsComponentComplete(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->isComponentComplete();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperIsComponentComplete(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_IsComponentComplete_IsBase(true);
        return vqquickpainteditem->isComponentComplete();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnIsComponentComplete(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_UpdateInputMethod(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->updateInputMethod();
    } else {
        ((VirtualQQuickPaintedItem*)self)->updateInputMethod();
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperUpdateInputMethod(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_UpdateInputMethod_IsBase(true);
        vqquickpainteditem->updateInputMethod();
    } else {
        ((VirtualQQuickPaintedItem*)self)->updateInputMethod();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnUpdateInputMethod(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_UpdateInputMethod_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_UpdateInputMethod_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_WidthValid(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->widthValid();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->widthValid();
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperWidthValid(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_WidthValid_IsBase(true);
        return vqquickpainteditem->widthValid();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->widthValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnWidthValid(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_WidthValid_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_WidthValid_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_HeightValid(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->heightValid();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->heightValid();
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperHeightValid(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_HeightValid_IsBase(true);
        return vqquickpainteditem->heightValid();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->heightValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHeightValid(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_HeightValid_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HeightValid_Callback>(slot));
}

// Derived class handler implementation
void QQuickPaintedItem_SetImplicitSize(QQuickPaintedItem* self, double param1, double param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickPaintedItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperSetImplicitSize(QQuickPaintedItem* self, double param1, double param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_SetImplicitSize_IsBase(true);
        vqquickpainteditem->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickPaintedItem*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnSetImplicitSize(QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_SetImplicitSize_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_SetImplicitSize_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickPaintedItem_Sender(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->sender();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickPaintedItem_SuperSender(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Sender_IsBase(true);
        return vqquickpainteditem->sender();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnSender(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Sender_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickPaintedItem_SenderSignalIndex(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->senderSignalIndex();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickPaintedItem_SuperSenderSignalIndex(const QQuickPaintedItem* self) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_SenderSignalIndex_IsBase(true);
        return vqquickpainteditem->senderSignalIndex();
    } else {
        return ((VirtualQQuickPaintedItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnSenderSignalIndex(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickPaintedItem_Receivers(const QQuickPaintedItem* self, const char* signal) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->receivers(signal);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickPaintedItem_SuperReceivers(const QQuickPaintedItem* self, const char* signal) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_Receivers_IsBase(true);
        return vqquickpainteditem->receivers(signal);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnReceivers(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_Receivers_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickPaintedItem_IsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        return vqquickpainteditem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperIsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem) {
        vqquickpainteditem->setQQuickPaintedItem_IsSignalConnected_IsBase(true);
        return vqquickpainteditem->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickPaintedItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnIsSignalConnected(const QQuickPaintedItem* self, intptr_t slot) {
    auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self));
    if (vqquickpainteditem && vqquickpainteditem->isVirtualQQuickPaintedItem)
        vqquickpainteditem->setQQuickPaintedItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_IsSignalConnected_Callback>(slot));
}

void QQuickPaintedItem_Delete(QQuickPaintedItem* self) {
    delete self;
}
