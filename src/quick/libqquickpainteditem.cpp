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
    if (vqquickpainteditem) {
        return vqquickpainteditem->updatePaintNode(param1, param2);
    }
    qFatal("Error: Protected method QQuickPaintedItem::updatePaintNode called without a directly constructed type");
}

void QQuickPaintedItem_ReleaseResources(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->releaseResources();
    }
}

void QQuickPaintedItem_ItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
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
    return (QMetaObject*)self->QQuickPaintedItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetaObject(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_metaobject_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickPaintedItem_SuperMetacast(QQuickPaintedItem* self, const char* param1) {
    return self->QQuickPaintedItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetacast(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_metacast_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickPaintedItem_SuperMetacall(QQuickPaintedItem* self, int param1, int param2, void** param3) {
    return self->QQuickPaintedItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMetacall(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_metacall_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnPaint(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_paint_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Paint_Callback>(slot);
}

// Base class handler implementation
bool QQuickPaintedItem_SuperIsTextureProvider(const QQuickPaintedItem* self) {
    return self->QQuickPaintedItem::isTextureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnIsTextureProvider(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_istextureprovider_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_IsTextureProvider_Callback>(slot);
}

// Base class handler implementation
QSGTextureProvider* QQuickPaintedItem_SuperTextureProvider(const QQuickPaintedItem* self) {
    return self->QQuickPaintedItem::textureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTextureProvider(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_textureprovider_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TextureProvider_Callback>(slot);
}

// Base class handler implementation
QSGNode* QQuickPaintedItem_SuperUpdatePaintNode(QQuickPaintedItem* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        return vqquickpainteditem->QQuickPaintedItem::updatePaintNode(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::updatePaintNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnUpdatePaintNode(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_updatepaintnode_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_UpdatePaintNode_Callback>(slot);
}

// Base class handler implementation
void QQuickPaintedItem_SuperReleaseResources(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::releaseResources();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::releaseResources called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnReleaseResources(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_releaseresources_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ReleaseResources_Callback>(slot);
}

// Base class handler implementation
void QQuickPaintedItem_SuperItemChange(QQuickPaintedItem* self, int param1, const QQuickItem__ItemChangeData* param2) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnItemChange(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_itemchange_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ItemChange_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickPaintedItem_BoundingRect(const QQuickPaintedItem* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QQuickPaintedItem_SuperBoundingRect(const QQuickPaintedItem* self) {
    return new QRectF(self->QQuickPaintedItem::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnBoundingRect(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_boundingrect_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickPaintedItem_ClipRect(const QQuickPaintedItem* self) {
    return new QRectF(self->clipRect());
}

// Base class handler implementation
QRectF* QQuickPaintedItem_SuperClipRect(const QQuickPaintedItem* self) {
    return new QRectF(self->QQuickPaintedItem::clipRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnClipRect(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_cliprect_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ClipRect_Callback>(slot);
}

// Derived class handler implementation
bool QQuickPaintedItem_Contains(const QQuickPaintedItem* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QQuickPaintedItem_SuperContains(const QQuickPaintedItem* self, const QPointF* point) {
    return self->QQuickPaintedItem::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnContains(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_contains_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Contains_Callback>(slot);
}

// Derived class handler implementation
QVariant* QQuickPaintedItem_InputMethodQuery(const QQuickPaintedItem* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QQuickPaintedItem_SuperInputMethodQuery(const QQuickPaintedItem* self, int query) {
    return new QVariant(self->QQuickPaintedItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnInputMethodQuery(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self)))
        vqquickpainteditem->qquickpainteditem_inputmethodquery_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QQuickPaintedItem_Event(QQuickPaintedItem* self, QEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        return vqquickpainteditem->event(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperEvent(QQuickPaintedItem* self, QEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        return vqquickpainteditem->QQuickPaintedItem::event(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_event_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_Event_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_GeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->geometryChange(*newGeometry, *oldGeometry);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::geometryChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperGeometryChange(QQuickPaintedItem* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::geometryChange(*newGeometry, *oldGeometry);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::geometryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnGeometryChange(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_geometrychange_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_GeometryChange_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_ClassBegin(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperClassBegin(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnClassBegin(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_classbegin_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_ComponentComplete(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperComponentComplete(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnComponentComplete(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_componentcomplete_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_KeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperKeyPressEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnKeyPressEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_keypressevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_KeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperKeyReleaseEvent(QQuickPaintedItem* self, QKeyEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnKeyReleaseEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_keyreleaseevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_InputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperInputMethodEvent(QQuickPaintedItem* self, QInputMethodEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnInputMethodEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_inputmethodevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_FocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperFocusInEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnFocusInEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_focusinevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_FocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperFocusOutEvent(QQuickPaintedItem* self, QFocusEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnFocusOutEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_focusoutevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_MousePressEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMousePressEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMousePressEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_mousepressevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_MouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseMoveEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_mousemoveevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_MouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseReleaseEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseReleaseEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_mousereleaseevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_MouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseDoubleClickEvent(QQuickPaintedItem* self, QMouseEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseDoubleClickEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_mousedoubleclickevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_MouseUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->mouseUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperMouseUngrabEvent(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::mouseUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::mouseUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnMouseUngrabEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_mouseungrabevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_MouseUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_TouchUngrabEvent(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->touchUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::touchUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTouchUngrabEvent(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::touchUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::touchUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTouchUngrabEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_touchungrabevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TouchUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_WheelEvent(QQuickPaintedItem* self, QWheelEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperWheelEvent(QQuickPaintedItem* self, QWheelEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnWheelEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_wheelevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_TouchEvent(QQuickPaintedItem* self, QTouchEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTouchEvent(QQuickPaintedItem* self, QTouchEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTouchEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_touchevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_HoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverEnterEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverEnterEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_hoverenterevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_HoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverMoveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_hovermoveevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_HoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperHoverLeaveEvent(QQuickPaintedItem* self, QHoverEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnHoverLeaveEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_hoverleaveevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_DragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragEnterEvent(QQuickPaintedItem* self, QDragEnterEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragEnterEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_dragenterevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_DragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragMoveEvent(QQuickPaintedItem* self, QDragMoveEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragMoveEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_dragmoveevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_DragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDragLeaveEvent(QQuickPaintedItem* self, QDragLeaveEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDragLeaveEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_dragleaveevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_DropEvent(QQuickPaintedItem* self, QDropEvent* param1) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDropEvent(QQuickPaintedItem* self, QDropEvent* param1) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDropEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_dropevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickPaintedItem_ChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        return vqquickpainteditem->childMouseEventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::childMouseEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickPaintedItem_SuperChildMouseEventFilter(QQuickPaintedItem* self, QQuickItem* param1, QEvent* param2) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        return vqquickpainteditem->QQuickPaintedItem::childMouseEventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::childMouseEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnChildMouseEventFilter(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_childmouseeventfilter_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ChildMouseEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_UpdatePolish(QQuickPaintedItem* self) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->updatePolish();
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::updatePolish called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperUpdatePolish(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::updatePolish();
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::updatePolish called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnUpdatePolish(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_updatepolish_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_UpdatePolish_Callback>(slot);
}

// Derived class handler implementation
bool QQuickPaintedItem_EventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickPaintedItem_SuperEventFilter(QQuickPaintedItem* self, QObject* watched, QEvent* event) {
    return self->QQuickPaintedItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnEventFilter(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_eventfilter_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_TimerEvent(QQuickPaintedItem* self, QTimerEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperTimerEvent(QQuickPaintedItem* self, QTimerEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnTimerEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_timerevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_ChildEvent(QQuickPaintedItem* self, QChildEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperChildEvent(QQuickPaintedItem* self, QChildEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnChildEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_childevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_CustomEvent(QQuickPaintedItem* self, QEvent* event) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperCustomEvent(QQuickPaintedItem* self, QEvent* event) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnCustomEvent(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_customevent_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_ConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperConnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnConnectNotify(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_connectnotify_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickPaintedItem_DisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self);
    if (vqquickpainteditem) {
        vqquickpainteditem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickPaintedItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickPaintedItem_SuperDisconnectNotify(QQuickPaintedItem* self, const QMetaMethod* signal) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->QQuickPaintedItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickPaintedItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickPaintedItem_OnDisconnectNotify(QQuickPaintedItem* self, intptr_t slot) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self))
        vqquickpainteditem->qquickpainteditem_disconnectnotify_callback = reinterpret_cast<VirtualQQuickPaintedItem::QQuickPaintedItem_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuickPaintedItem_IsComponentComplete(const QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickPaintedItem_UpdateInputMethod(QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->VirtualQQuickPaintedItem::updateInputMethod();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::updateInputMethod called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickPaintedItem_WidthValid(const QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::widthValid();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::widthValid called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickPaintedItem_HeightValid(const QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::heightValid();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::heightValid called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickPaintedItem_SetImplicitSize(QQuickPaintedItem* self, double param1, double param2) {
    if (auto* vqquickpainteditem = dynamic_cast<VirtualQQuickPaintedItem*>(self)) {
        vqquickpainteditem->VirtualQQuickPaintedItem::setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else
        qFatal("Error: Protected method QQuickPaintedItem::setImplicitSize called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickPaintedItem_Sender(const QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::sender();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickPaintedItem_SenderSignalIndex(const QQuickPaintedItem* self) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickPaintedItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickPaintedItem_Receivers(const QQuickPaintedItem* self, const char* signal) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickPaintedItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickPaintedItem_IsSignalConnected(const QQuickPaintedItem* self, const QMetaMethod* signal) {
    if (auto* vqquickpainteditem = const_cast<VirtualQQuickPaintedItem*>(dynamic_cast<const VirtualQQuickPaintedItem*>(self))) {
        return vqquickpainteditem->VirtualQQuickPaintedItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickPaintedItem::isSignalConnected called without a directly constructed type");
}

void QQuickPaintedItem_Delete(QQuickPaintedItem* self) {
    delete self;
}
