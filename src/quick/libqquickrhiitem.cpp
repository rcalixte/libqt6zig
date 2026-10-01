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
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::sampleCountChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_ColorBufferFormatChanged(QQuickRhiItem* self) {
    self->colorBufferFormatChanged();
}

void QQuickRhiItem_Connect_ColorBufferFormatChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::colorBufferFormatChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_AutoRenderTargetChanged(QQuickRhiItem* self) {
    self->autoRenderTargetChanged();
}

void QQuickRhiItem_Connect_AutoRenderTargetChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::autoRenderTargetChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_MirrorVerticallyChanged(QQuickRhiItem* self) {
    self->mirrorVerticallyChanged();
}

void QQuickRhiItem_Connect_MirrorVerticallyChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::mirrorVerticallyChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_AlphaBlendingChanged(QQuickRhiItem* self) {
    self->alphaBlendingChanged();
}

void QQuickRhiItem_Connect_AlphaBlendingChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::alphaBlendingChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_FixedColorBufferWidthChanged(QQuickRhiItem* self) {
    self->fixedColorBufferWidthChanged();
}

void QQuickRhiItem_Connect_FixedColorBufferWidthChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::fixedColorBufferWidthChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_FixedColorBufferHeightChanged(QQuickRhiItem* self) {
    self->fixedColorBufferHeightChanged();
}

void QQuickRhiItem_Connect_FixedColorBufferHeightChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::fixedColorBufferHeightChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QQuickRhiItem_EffectiveColorBufferSizeChanged(QQuickRhiItem* self) {
    self->effectiveColorBufferSizeChanged();
}

void QQuickRhiItem_Connect_EffectiveColorBufferSizeChanged(QQuickRhiItem* self, intptr_t slot) {
    void (*slotFunc)(QQuickRhiItem*) = reinterpret_cast<void (*)(QQuickRhiItem*)>(slot);
    QQuickRhiItem::connect(self,
                           static_cast<void (QQuickRhiItem::*)()>(&QQuickRhiItem::effectiveColorBufferSizeChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

QQuickRhiItemRenderer* QQuickRhiItem_CreateRenderer(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        return vqquickrhiitem->createRenderer();
    }
    qFatal("Error: Protected method QQuickRhiItem::createRenderer called without a directly constructed type");
}

QSGNode* QQuickRhiItem_UpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        return vqquickrhiitem->updatePaintNode(param1, param2);
    }
    qFatal("Error: Protected method QQuickRhiItem::updatePaintNode called without a directly constructed type");
}

bool QQuickRhiItem_Event(QQuickRhiItem* self, QEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        return vqquickrhiitem->event(param1);
    }
    qFatal("Error: Protected method QQuickRhiItem::event called without a directly constructed type");
}

void QQuickRhiItem_GeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->geometryChange(*newGeometry, *oldGeometry);
    }
}

void QQuickRhiItem_ReleaseResources(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
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
    return (QMetaObject*)self->QQuickRhiItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetaObject(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_metaobject_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickRhiItem_SuperMetacast(QQuickRhiItem* self, const char* param1) {
    return self->QQuickRhiItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetacast(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_metacast_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickRhiItem_SuperMetacall(QQuickRhiItem* self, int param1, int param2, void** param3) {
    return self->QQuickRhiItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMetacall(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_metacall_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QQuickRhiItem_SuperIsTextureProvider(const QQuickRhiItem* self) {
    return self->QQuickRhiItem::isTextureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnIsTextureProvider(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_istextureprovider_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_IsTextureProvider_Callback>(slot);
}

// Base class handler implementation
QSGTextureProvider* QQuickRhiItem_SuperTextureProvider(const QQuickRhiItem* self) {
    return self->QQuickRhiItem::textureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTextureProvider(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_textureprovider_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TextureProvider_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnCreateRenderer(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_createrenderer_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_CreateRenderer_Callback>(slot);
}

// Base class handler implementation
QSGNode* QQuickRhiItem_SuperUpdatePaintNode(QQuickRhiItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        return vqquickrhiitem->QQuickRhiItem::updatePaintNode(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::updatePaintNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnUpdatePaintNode(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_updatepaintnode_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_UpdatePaintNode_Callback>(slot);
}

// Base class handler implementation
bool QQuickRhiItem_SuperEvent(QQuickRhiItem* self, QEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        return vqquickrhiitem->QQuickRhiItem::event(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_event_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Event_Callback>(slot);
}

// Base class handler implementation
void QQuickRhiItem_SuperGeometryChange(QQuickRhiItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::geometryChange(*newGeometry, *oldGeometry);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::geometryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnGeometryChange(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_geometrychange_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_GeometryChange_Callback>(slot);
}

// Base class handler implementation
void QQuickRhiItem_SuperReleaseResources(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::releaseResources();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::releaseResources called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnReleaseResources(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_releaseresources_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ReleaseResources_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickRhiItem_BoundingRect(const QQuickRhiItem* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QQuickRhiItem_SuperBoundingRect(const QQuickRhiItem* self) {
    return new QRectF(self->QQuickRhiItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnBoundingRect(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_boundingrect_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickRhiItem_ClipRect(const QQuickRhiItem* self) {
    return new QRectF(self->clipRect());
}

// Base class handler implementation
QRectF* QQuickRhiItem_SuperClipRect(const QQuickRhiItem* self) {
    return new QRectF(self->QQuickRhiItem::clipRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnClipRect(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_cliprect_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ClipRect_Callback>(slot);
}

// Derived class handler implementation
bool QQuickRhiItem_Contains(const QQuickRhiItem* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QQuickRhiItem_SuperContains(const QQuickRhiItem* self, const QPointF* point) {
    return self->QQuickRhiItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnContains(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_contains_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_Contains_Callback>(slot);
}

// Derived class handler implementation
QVariant* QQuickRhiItem_InputMethodQuery(const QQuickRhiItem* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QQuickRhiItem_SuperInputMethodQuery(const QQuickRhiItem* self, int query) {
    return new QVariant(self->QQuickRhiItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnInputMethodQuery(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self)))
        vqquickrhiitem->qquickrhiitem_inputmethodquery_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_ItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::itemChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperItemChange(QQuickRhiItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnItemChange(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_itemchange_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ItemChange_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_ClassBegin(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperClassBegin(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnClassBegin(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_classbegin_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_ComponentComplete(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperComponentComplete(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnComponentComplete(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_componentcomplete_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_KeyPressEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperKeyPressEvent(QQuickRhiItem* self, QKeyEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnKeyPressEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_keypressevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_KeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperKeyReleaseEvent(QQuickRhiItem* self, QKeyEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnKeyReleaseEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_keyreleaseevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_InputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperInputMethodEvent(QQuickRhiItem* self, QInputMethodEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnInputMethodEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_inputmethodevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_FocusInEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperFocusInEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnFocusInEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_focusinevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_FocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperFocusOutEvent(QQuickRhiItem* self, QFocusEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnFocusOutEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_focusoutevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_MousePressEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMousePressEvent(QQuickRhiItem* self, QMouseEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMousePressEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_mousepressevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_MouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseMoveEvent(QQuickRhiItem* self, QMouseEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_mousemoveevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_MouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseReleaseEvent(QQuickRhiItem* self, QMouseEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseReleaseEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_mousereleaseevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_MouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseDoubleClickEvent(QQuickRhiItem* self, QMouseEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseDoubleClickEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_MouseUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->mouseUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperMouseUngrabEvent(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::mouseUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::mouseUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnMouseUngrabEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_mouseungrabevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_MouseUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_TouchUngrabEvent(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->touchUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::touchUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTouchUngrabEvent(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::touchUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::touchUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTouchUngrabEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_touchungrabevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TouchUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_WheelEvent(QQuickRhiItem* self, QWheelEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperWheelEvent(QQuickRhiItem* self, QWheelEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnWheelEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_wheelevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_TouchEvent(QQuickRhiItem* self, QTouchEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTouchEvent(QQuickRhiItem* self, QTouchEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTouchEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_touchevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_HoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverEnterEvent(QQuickRhiItem* self, QHoverEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverEnterEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_hoverenterevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_HoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverMoveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_hovermoveevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_HoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperHoverLeaveEvent(QQuickRhiItem* self, QHoverEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnHoverLeaveEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_hoverleaveevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_DragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragEnterEvent(QQuickRhiItem* self, QDragEnterEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragEnterEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_dragenterevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_DragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragMoveEvent(QQuickRhiItem* self, QDragMoveEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragMoveEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_dragmoveevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_DragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDragLeaveEvent(QQuickRhiItem* self, QDragLeaveEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDragLeaveEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_dragleaveevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_DropEvent(QQuickRhiItem* self, QDropEvent* param1) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDropEvent(QQuickRhiItem* self, QDropEvent* param1) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDropEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_dropevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickRhiItem_ChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        return vqquickrhiitem->childMouseEventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::childMouseEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickRhiItem_SuperChildMouseEventFilter(QQuickRhiItem* self, QQuickItem* param1, QEvent* param2) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        return vqquickrhiitem->QQuickRhiItem::childMouseEventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::childMouseEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnChildMouseEventFilter(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_childmouseeventfilter_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ChildMouseEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_UpdatePolish(QQuickRhiItem* self) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->updatePolish();
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::updatePolish called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperUpdatePolish(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::updatePolish();
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::updatePolish called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnUpdatePolish(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_updatepolish_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_UpdatePolish_Callback>(slot);
}

// Derived class handler implementation
bool QQuickRhiItem_EventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickRhiItem_SuperEventFilter(QQuickRhiItem* self, QObject* watched, QEvent* event) {
    return self->QQuickRhiItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnEventFilter(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_eventfilter_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_TimerEvent(QQuickRhiItem* self, QTimerEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperTimerEvent(QQuickRhiItem* self, QTimerEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnTimerEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_timerevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_ChildEvent(QQuickRhiItem* self, QChildEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperChildEvent(QQuickRhiItem* self, QChildEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnChildEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_childevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_CustomEvent(QQuickRhiItem* self, QEvent* event) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperCustomEvent(QQuickRhiItem* self, QEvent* event) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnCustomEvent(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_customevent_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_ConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperConnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnConnectNotify(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_connectnotify_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickRhiItem_DisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self);
    if (vqquickrhiitem) {
        vqquickrhiitem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickRhiItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickRhiItem_SuperDisconnectNotify(QQuickRhiItem* self, const QMetaMethod* signal) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->QQuickRhiItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickRhiItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickRhiItem_OnDisconnectNotify(QQuickRhiItem* self, intptr_t slot) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self))
        vqquickrhiitem->qquickrhiitem_disconnectnotify_callback = reinterpret_cast<VirtualQQuickRhiItem::QQuickRhiItem_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuickRhiItem_IsAutoRenderTargetEnabled(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::isAutoRenderTargetEnabled();
    } else
        qFatal("Error: Protected method QQuickRhiItem::isAutoRenderTargetEnabled called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickRhiItem_SetAutoRenderTarget(QQuickRhiItem* self, bool enabled) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->VirtualQQuickRhiItem::setAutoRenderTarget(enabled);
    } else
        qFatal("Error: Protected method QQuickRhiItem::setAutoRenderTarget called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickRhiItem_IsComponentComplete(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuickRhiItem::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickRhiItem_UpdateInputMethod(QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->VirtualQQuickRhiItem::updateInputMethod();
    } else
        qFatal("Error: Protected method QQuickRhiItem::updateInputMethod called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickRhiItem_WidthValid(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::widthValid();
    } else
        qFatal("Error: Protected method QQuickRhiItem::widthValid called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickRhiItem_HeightValid(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::heightValid();
    } else
        qFatal("Error: Protected method QQuickRhiItem::heightValid called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickRhiItem_SetImplicitSize(QQuickRhiItem* self, double param1, double param2) {
    if (auto* vqquickrhiitem = dynamic_cast<VirtualQQuickRhiItem*>(self)) {
        vqquickrhiitem->VirtualQQuickRhiItem::setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else
        qFatal("Error: Protected method QQuickRhiItem::setImplicitSize called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickRhiItem_Sender(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::sender();
    } else
        qFatal("Error: Protected method QQuickRhiItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickRhiItem_SenderSignalIndex(const QQuickRhiItem* self) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickRhiItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickRhiItem_Receivers(const QQuickRhiItem* self, const char* signal) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickRhiItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickRhiItem_IsSignalConnected(const QQuickRhiItem* self, const QMetaMethod* signal) {
    if (auto* vqquickrhiitem = const_cast<VirtualQQuickRhiItem*>(dynamic_cast<const VirtualQQuickRhiItem*>(self))) {
        return vqquickrhiitem->VirtualQQuickRhiItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickRhiItem::isSignalConnected called without a directly constructed type");
}

void QQuickRhiItem_Delete(QQuickRhiItem* self) {
    delete self;
}
