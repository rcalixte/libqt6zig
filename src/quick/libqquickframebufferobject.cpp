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
#include <QOpenGLFramebufferObject>
#include <QPointF>
#include <QQmlParserStatus>
#include <QQuickFramebufferObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickFramebufferObject__Renderer
#include <QQuickItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__ItemChangeData
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuickItem__UpdatePaintNodeData
#include <QRectF>
#include <QSGNode>
#include <QSGTextureProvider>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QVariant>
#include <QWheelEvent>
#include <qquickframebufferobject.h>
#include "libqquickframebufferobject.h"
#include "libqquickframebufferobject.hxx"

QQuickFramebufferObject* QQuickFramebufferObject_new() {
    return new VirtualQQuickFramebufferObject();
}

QQuickFramebufferObject* QQuickFramebufferObject_new2(QQuickItem* parent) {
    return new VirtualQQuickFramebufferObject(parent);
}

QMetaObject* QQuickFramebufferObject_MetaObject(const QQuickFramebufferObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuickFramebufferObject_Metacast(QQuickFramebufferObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuickFramebufferObject_Metacall(QQuickFramebufferObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuickFramebufferObject_Tr(const char* s) {
    auto _ret = QQuickFramebufferObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QQuickFramebufferObject_TextureFollowsItemSize(const QQuickFramebufferObject* self) {
    return self->textureFollowsItemSize();
}

void QQuickFramebufferObject_SetTextureFollowsItemSize(QQuickFramebufferObject* self, bool follows) {
    self->setTextureFollowsItemSize(follows);
}

bool QQuickFramebufferObject_MirrorVertically(const QQuickFramebufferObject* self) {
    return self->mirrorVertically();
}

void QQuickFramebufferObject_SetMirrorVertically(QQuickFramebufferObject* self, bool enable) {
    self->setMirrorVertically(enable);
}

QQuickFramebufferObject__Renderer* QQuickFramebufferObject_CreateRenderer(const QQuickFramebufferObject* self) {
    return self->createRenderer();
}

bool QQuickFramebufferObject_IsTextureProvider(const QQuickFramebufferObject* self) {
    return self->isTextureProvider();
}

QSGTextureProvider* QQuickFramebufferObject_TextureProvider(const QQuickFramebufferObject* self) {
    return self->textureProvider();
}

void QQuickFramebufferObject_ReleaseResources(QQuickFramebufferObject* self) {
    self->releaseResources();
}

void QQuickFramebufferObject_GeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->geometryChange(*newGeometry, *oldGeometry);
    }
}

QSGNode* QQuickFramebufferObject_UpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        return vqquickframebufferobject->updatePaintNode(param1, param2);
    }
    qFatal("Error: Protected method QQuickFramebufferObject::updatePaintNode called without a directly constructed type");
}

void QQuickFramebufferObject_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, bool param1) {
    self->textureFollowsItemSizeChanged(param1);
}

void QQuickFramebufferObject_Connect_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, intptr_t slot) {
    void (*slotFunc)(QQuickFramebufferObject*, bool) = reinterpret_cast<void (*)(QQuickFramebufferObject*, bool)>(slot);
    QQuickFramebufferObject::connect(self,
                                     static_cast<void (QQuickFramebufferObject::*)(bool)>(&QQuickFramebufferObject::textureFollowsItemSizeChanged),
                                     [self, slotFunc](bool param1) {
                                         bool sigval1 = param1;
                                         slotFunc(self, sigval1);
                                     });
}

void QQuickFramebufferObject_MirrorVerticallyChanged(QQuickFramebufferObject* self, bool param1) {
    self->mirrorVerticallyChanged(param1);
}

void QQuickFramebufferObject_Connect_MirrorVerticallyChanged(QQuickFramebufferObject* self, intptr_t slot) {
    void (*slotFunc)(QQuickFramebufferObject*, bool) = reinterpret_cast<void (*)(QQuickFramebufferObject*, bool)>(slot);
    QQuickFramebufferObject::connect(self,
                                     static_cast<void (QQuickFramebufferObject::*)(bool)>(&QQuickFramebufferObject::mirrorVerticallyChanged),
                                     [self, slotFunc](bool param1) {
                                         bool sigval1 = param1;
                                         slotFunc(self, sigval1);
                                     });
}

libqt_string QQuickFramebufferObject_Tr2(const char* s, const char* c) {
    auto _ret = QQuickFramebufferObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuickFramebufferObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuickFramebufferObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuickFramebufferObject_SuperMetaObject(const QQuickFramebufferObject* self) {
    return (QMetaObject*)self->QQuickFramebufferObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetaObject(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_metaobject_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuickFramebufferObject_SuperMetacast(QQuickFramebufferObject* self, const char* param1) {
    return self->QQuickFramebufferObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetacast(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_metacast_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuickFramebufferObject_SuperMetacall(QQuickFramebufferObject* self, int param1, int param2, void** param3) {
    return self->QQuickFramebufferObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetacall(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_metacall_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnCreateRenderer(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_createrenderer_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_CreateRenderer_Callback>(slot);
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperIsTextureProvider(const QQuickFramebufferObject* self) {
    return self->QQuickFramebufferObject::isTextureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnIsTextureProvider(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_istextureprovider_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_IsTextureProvider_Callback>(slot);
}

// Base class handler implementation
QSGTextureProvider* QQuickFramebufferObject_SuperTextureProvider(const QQuickFramebufferObject* self) {
    return self->QQuickFramebufferObject::textureProvider();
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTextureProvider(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_textureprovider_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TextureProvider_Callback>(slot);
}

// Base class handler implementation
void QQuickFramebufferObject_SuperReleaseResources(QQuickFramebufferObject* self) {
    self->QQuickFramebufferObject::releaseResources();
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnReleaseResources(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_releaseresources_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ReleaseResources_Callback>(slot);
}

// Base class handler implementation
void QQuickFramebufferObject_SuperGeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::geometryChange(*newGeometry, *oldGeometry);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::geometryChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnGeometryChange(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_geometrychange_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_GeometryChange_Callback>(slot);
}

// Base class handler implementation
QSGNode* QQuickFramebufferObject_SuperUpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        return vqquickframebufferobject->QQuickFramebufferObject::updatePaintNode(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::updatePaintNode called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnUpdatePaintNode(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_updatepaintnode_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_UpdatePaintNode_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickFramebufferObject_BoundingRect(const QQuickFramebufferObject* self) {
    return new QRectF(self->boundingRect());
}

// Base class handler implementation
QRectF* QQuickFramebufferObject_SuperBoundingRect(const QQuickFramebufferObject* self) {
    return new QRectF(self->QQuickFramebufferObject::boundingRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnBoundingRect(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_boundingrect_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_BoundingRect_Callback>(slot);
}

// Derived class handler implementation
QRectF* QQuickFramebufferObject_ClipRect(const QQuickFramebufferObject* self) {
    return new QRectF(self->clipRect());
}

// Base class handler implementation
QRectF* QQuickFramebufferObject_SuperClipRect(const QQuickFramebufferObject* self) {
    return new QRectF(self->QQuickFramebufferObject::clipRect());
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnClipRect(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_cliprect_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ClipRect_Callback>(slot);
}

// Derived class handler implementation
bool QQuickFramebufferObject_Contains(const QQuickFramebufferObject* self, const QPointF* point) {
    return self->contains(*point);
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperContains(const QQuickFramebufferObject* self, const QPointF* point) {
    return self->QQuickFramebufferObject::contains(*point);
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnContains(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_contains_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Contains_Callback>(slot);
}

// Derived class handler implementation
QVariant* QQuickFramebufferObject_InputMethodQuery(const QQuickFramebufferObject* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QQuickFramebufferObject_SuperInputMethodQuery(const QQuickFramebufferObject* self, int query) {
    return new QVariant(self->QQuickFramebufferObject::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnInputMethodQuery(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self)))
        vqquickframebufferobject->qquickframebufferobject_inputmethodquery_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QQuickFramebufferObject_Event(QQuickFramebufferObject* self, QEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        return vqquickframebufferobject->event(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperEvent(QQuickFramebufferObject* self, QEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        return vqquickframebufferobject->QQuickFramebufferObject::event(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_event_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Event_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_ItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::itemChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnItemChange(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_itemchange_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ItemChange_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_ClassBegin(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperClassBegin(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnClassBegin(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_classbegin_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_ComponentComplete(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperComponentComplete(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnComponentComplete(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_componentcomplete_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_KeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperKeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnKeyPressEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_keypressevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_KeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperKeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnKeyReleaseEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_keyreleaseevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_InputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperInputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnInputMethodEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_inputmethodevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_FocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperFocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnFocusInEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_focusinevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_FocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->focusOutEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperFocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnFocusOutEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_focusoutevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_MousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMousePressEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_mousepressevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_mousemoveevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseReleaseEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_mousereleaseevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseDoubleClickEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_mousedoubleclickevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->mouseUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseUngrabEvent(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::mouseUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::mouseUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseUngrabEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_mouseungrabevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_TouchUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->touchUngrabEvent();
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::touchUngrabEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTouchUngrabEvent(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::touchUngrabEvent();
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::touchUngrabEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTouchUngrabEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_touchungrabevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TouchUngrabEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_WheelEvent(QQuickFramebufferObject* self, QWheelEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperWheelEvent(QQuickFramebufferObject* self, QWheelEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnWheelEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_wheelevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_TouchEvent(QQuickFramebufferObject* self, QTouchEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->touchEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::touchEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTouchEvent(QQuickFramebufferObject* self, QTouchEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::touchEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::touchEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTouchEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_touchevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TouchEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->hoverEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::hoverEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverEnterEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_hoverenterevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->hoverMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::hoverMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_hovermoveevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->hoverLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::hoverLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::hoverLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverLeaveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_hoverleaveevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_DragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->dragEnterEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::dragEnterEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragEnterEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_dragenterevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_DragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->dragMoveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::dragMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_dragmoveevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_DragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->dragLeaveEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::dragLeaveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragLeaveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_dragleaveevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_DropEvent(QQuickFramebufferObject* self, QDropEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->dropEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDropEvent(QQuickFramebufferObject* self, QDropEvent* param1) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::dropEvent(param1);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDropEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_dropevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QQuickFramebufferObject_ChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        return vqquickframebufferobject->childMouseEventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::childMouseEventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        return vqquickframebufferobject->QQuickFramebufferObject::childMouseEventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::childMouseEventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnChildMouseEventFilter(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_childmouseeventfilter_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ChildMouseEventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_UpdatePolish(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->updatePolish();
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::updatePolish called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperUpdatePolish(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::updatePolish();
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::updatePolish called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnUpdatePolish(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_updatepolish_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_UpdatePolish_Callback>(slot);
}

// Derived class handler implementation
bool QQuickFramebufferObject_EventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperEventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event) {
    return self->QQuickFramebufferObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnEventFilter(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_eventfilter_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_TimerEvent(QQuickFramebufferObject* self, QTimerEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTimerEvent(QQuickFramebufferObject* self, QTimerEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTimerEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_timerevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_ChildEvent(QQuickFramebufferObject* self, QChildEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperChildEvent(QQuickFramebufferObject* self, QChildEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnChildEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_childevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_CustomEvent(QQuickFramebufferObject* self, QEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperCustomEvent(QQuickFramebufferObject* self, QEvent* event) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnCustomEvent(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_customevent_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_ConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnConnectNotify(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_connectnotify_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuickFramebufferObject_DisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject) {
        vqquickframebufferobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuickFramebufferObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->QQuickFramebufferObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuickFramebufferObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDisconnectNotify(QQuickFramebufferObject* self, intptr_t slot) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self))
        vqquickframebufferobject->qquickframebufferobject_disconnectnotify_callback = reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuickFramebufferObject_IsComponentComplete(const QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickFramebufferObject_UpdateInputMethod(QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->VirtualQQuickFramebufferObject::updateInputMethod();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::updateInputMethod called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickFramebufferObject_WidthValid(const QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::widthValid();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::widthValid called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickFramebufferObject_HeightValid(const QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::heightValid();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::heightValid called without a directly constructed type");
}

// Derived class protected handler implementation
void QQuickFramebufferObject_SetImplicitSize(QQuickFramebufferObject* self, double param1, double param2) {
    if (auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self)) {
        vqquickframebufferobject->VirtualQQuickFramebufferObject::setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::setImplicitSize called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuickFramebufferObject_Sender(const QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::sender();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickFramebufferObject_SenderSignalIndex(const QQuickFramebufferObject* self) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuickFramebufferObject_Receivers(const QQuickFramebufferObject* self, const char* signal) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::receivers(signal);
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuickFramebufferObject_IsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal) {
    if (auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self))) {
        return vqquickframebufferobject->VirtualQQuickFramebufferObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuickFramebufferObject::isSignalConnected called without a directly constructed type");
}

void QQuickFramebufferObject_Delete(QQuickFramebufferObject* self) {
    delete self;
}

void QQuickFramebufferObject__Renderer_OperatorAssign(QQuickFramebufferObject__Renderer* self, const QQuickFramebufferObject__Renderer* param1) {
    self->operator=(*param1);
}
