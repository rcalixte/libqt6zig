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
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->geometryChange(*newGeometry, *oldGeometry);
    }
}

QSGNode* QQuickFramebufferObject_UpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->updatePaintNode(param1, param2);
    }
    return {};
}

void QQuickFramebufferObject_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, bool param1) {
    self->textureFollowsItemSizeChanged(param1);
}

void QQuickFramebufferObject_Connect_TextureFollowsItemSizeChanged(QQuickFramebufferObject* self, intptr_t slot) {
    void (*slotFunc)(QQuickFramebufferObject*, bool) = reinterpret_cast<void (*)(QQuickFramebufferObject*, bool)>(slot);
    QQuickFramebufferObject::connect(self, &QQuickFramebufferObject::textureFollowsItemSizeChanged, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QQuickFramebufferObject_MirrorVerticallyChanged(QQuickFramebufferObject* self, bool param1) {
    self->mirrorVerticallyChanged(param1);
}

void QQuickFramebufferObject_Connect_MirrorVerticallyChanged(QQuickFramebufferObject* self, intptr_t slot) {
    void (*slotFunc)(QQuickFramebufferObject*, bool) = reinterpret_cast<void (*)(QQuickFramebufferObject*, bool)>(slot);
    QQuickFramebufferObject::connect(self, &QQuickFramebufferObject::mirrorVerticallyChanged, [self, slotFunc](bool param1) {
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
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MetaObject_IsBase(true);
        return (QMetaObject*)vqquickframebufferobject->metaObject();
    } else {
        return (QMetaObject*)self->QQuickFramebufferObject::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetaObject(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MetaObject_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuickFramebufferObject_SuperMetacast(QQuickFramebufferObject* self, const char* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Metacast_IsBase(true);
        return vqquickframebufferobject->qt_metacast(param1);
    } else {
        return self->QQuickFramebufferObject::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetacast(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Metacast_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuickFramebufferObject_SuperMetacall(QQuickFramebufferObject* self, int param1, int param2, void** param3) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Metacall_IsBase(true);
        return vqquickframebufferobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuickFramebufferObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMetacall(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Metacall_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Metacall_Callback>(slot));
}

// Base class handler implementation
QQuickFramebufferObject__Renderer* QQuickFramebufferObject_SuperCreateRenderer(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_CreateRenderer_IsBase(true);
        return vqquickframebufferobject->createRenderer();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->createRenderer();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnCreateRenderer(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_CreateRenderer_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_CreateRenderer_Callback>(slot));
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperIsTextureProvider(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_IsTextureProvider_IsBase(true);
        return vqquickframebufferobject->isTextureProvider();
    } else {
        return self->QQuickFramebufferObject::isTextureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnIsTextureProvider(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_IsTextureProvider_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_IsTextureProvider_Callback>(slot));
}

// Base class handler implementation
QSGTextureProvider* QQuickFramebufferObject_SuperTextureProvider(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_TextureProvider_IsBase(true);
        return vqquickframebufferobject->textureProvider();
    } else {
        return self->QQuickFramebufferObject::textureProvider();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTextureProvider(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_TextureProvider_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TextureProvider_Callback>(slot));
}

// Base class handler implementation
void QQuickFramebufferObject_SuperReleaseResources(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ReleaseResources_IsBase(true);
        vqquickframebufferobject->releaseResources();
    } else {
        self->QQuickFramebufferObject::releaseResources();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnReleaseResources(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ReleaseResources_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ReleaseResources_Callback>(slot));
}

// Base class handler implementation
void QQuickFramebufferObject_SuperGeometryChange(QQuickFramebufferObject* self, const QRectF* newGeometry, const QRectF* oldGeometry) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_GeometryChange_IsBase(true);
        vqquickframebufferobject->geometryChange(*newGeometry, *oldGeometry);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->geometryChange(*newGeometry, *oldGeometry);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnGeometryChange(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_GeometryChange_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_GeometryChange_Callback>(slot));
}

// Base class handler implementation
QSGNode* QQuickFramebufferObject_SuperUpdatePaintNode(QQuickFramebufferObject* self, QSGNode* param1, QQuickItem__UpdatePaintNodeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_UpdatePaintNode_IsBase(true);
        return vqquickframebufferobject->updatePaintNode(param1, param2);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->updatePaintNode(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnUpdatePaintNode(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_UpdatePaintNode_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_UpdatePaintNode_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickFramebufferObject_BoundingRect(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return new QRectF(vqquickframebufferobject->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickFramebufferObject*)self)->boundingRect());
    }
}

// Base class handler implementation
QRectF* QQuickFramebufferObject_SuperBoundingRect(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_BoundingRect_IsBase(true);
        return new QRectF(vqquickframebufferobject->boundingRect());
    } else {
        return new QRectF(((VirtualQQuickFramebufferObject*)self)->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnBoundingRect(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_BoundingRect_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_BoundingRect_Callback>(slot));
}

// Derived class handler implementation
QRectF* QQuickFramebufferObject_ClipRect(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return new QRectF(vqquickframebufferobject->clipRect());
    } else {
        return new QRectF(((VirtualQQuickFramebufferObject*)self)->clipRect());
    }
}

// Base class handler implementation
QRectF* QQuickFramebufferObject_SuperClipRect(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ClipRect_IsBase(true);
        return new QRectF(vqquickframebufferobject->clipRect());
    } else {
        return new QRectF(((VirtualQQuickFramebufferObject*)self)->clipRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnClipRect(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ClipRect_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ClipRect_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_Contains(const QQuickFramebufferObject* self, const QPointF* point) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->contains(*point);
    } else {
        return self->QQuickFramebufferObject::contains(*point);
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperContains(const QQuickFramebufferObject* self, const QPointF* point) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Contains_IsBase(true);
        return vqquickframebufferobject->contains(*point);
    } else {
        return self->QQuickFramebufferObject::contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnContains(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Contains_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Contains_Callback>(slot));
}

// Derived class handler implementation
QVariant* QQuickFramebufferObject_InputMethodQuery(const QQuickFramebufferObject* self, int query) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return new QVariant(vqquickframebufferobject->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickFramebufferObject*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QQuickFramebufferObject_SuperInputMethodQuery(const QQuickFramebufferObject* self, int query) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_InputMethodQuery_IsBase(true);
        return new QVariant(vqquickframebufferobject->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQQuickFramebufferObject*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnInputMethodQuery(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_InputMethodQuery_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_InputMethodQuery_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_Event(QQuickFramebufferObject* self, QEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->event(param1);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->event(param1);
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperEvent(QQuickFramebufferObject* self, QEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Event_IsBase(true);
        return vqquickframebufferobject->event(param1);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Event_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Event_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_ItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperItemChange(QQuickFramebufferObject* self, int param1, const QQuickItem__ItemChangeData* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ItemChange_IsBase(true);
        vqquickframebufferobject->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->itemChange(static_cast<QQuickItem::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnItemChange(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ItemChange_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_ClassBegin(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->classBegin();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperClassBegin(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ClassBegin_IsBase(true);
        vqquickframebufferobject->classBegin();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnClassBegin(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ClassBegin_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_ComponentComplete(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->componentComplete();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperComponentComplete(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ComponentComplete_IsBase(true);
        vqquickframebufferobject->componentComplete();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnComponentComplete(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ComponentComplete_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_KeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->keyPressEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperKeyPressEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_KeyPressEvent_IsBase(true);
        vqquickframebufferobject->keyPressEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnKeyPressEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_KeyPressEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_KeyPressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_KeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperKeyReleaseEvent(QQuickFramebufferObject* self, QKeyEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_KeyReleaseEvent_IsBase(true);
        vqquickframebufferobject->keyReleaseEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnKeyReleaseEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_KeyReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_InputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperInputMethodEvent(QQuickFramebufferObject* self, QInputMethodEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_InputMethodEvent_IsBase(true);
        vqquickframebufferobject->inputMethodEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnInputMethodEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_InputMethodEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_InputMethodEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_FocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->focusInEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperFocusInEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_FocusInEvent_IsBase(true);
        vqquickframebufferobject->focusInEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnFocusInEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_FocusInEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_FocusInEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_FocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->focusOutEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperFocusOutEvent(QQuickFramebufferObject* self, QFocusEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_FocusOutEvent_IsBase(true);
        vqquickframebufferobject->focusOutEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnFocusOutEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_FocusOutEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_FocusOutEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_MousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->mousePressEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMousePressEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MousePressEvent_IsBase(true);
        vqquickframebufferobject->mousePressEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMousePressEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MousePressEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MousePressEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseMoveEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MouseMoveEvent_IsBase(true);
        vqquickframebufferobject->mouseMoveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MouseMoveEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseReleaseEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MouseReleaseEvent_IsBase(true);
        vqquickframebufferobject->mouseReleaseEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseReleaseEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseReleaseEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseDoubleClickEvent(QQuickFramebufferObject* self, QMouseEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MouseDoubleClickEvent_IsBase(true);
        vqquickframebufferobject->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseDoubleClickEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseDoubleClickEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_MouseUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->mouseUngrabEvent();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseUngrabEvent();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperMouseUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_MouseUngrabEvent_IsBase(true);
        vqquickframebufferobject->mouseUngrabEvent();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->mouseUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnMouseUngrabEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_MouseUngrabEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_MouseUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_TouchUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->touchUngrabEvent();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->touchUngrabEvent();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTouchUngrabEvent(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_TouchUngrabEvent_IsBase(true);
        vqquickframebufferobject->touchUngrabEvent();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->touchUngrabEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTouchUngrabEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_TouchUngrabEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TouchUngrabEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_WheelEvent(QQuickFramebufferObject* self, QWheelEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->wheelEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperWheelEvent(QQuickFramebufferObject* self, QWheelEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_WheelEvent_IsBase(true);
        vqquickframebufferobject->wheelEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnWheelEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_WheelEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_WheelEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_TouchEvent(QQuickFramebufferObject* self, QTouchEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->touchEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->touchEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTouchEvent(QQuickFramebufferObject* self, QTouchEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_TouchEvent_IsBase(true);
        vqquickframebufferobject->touchEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->touchEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTouchEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_TouchEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TouchEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverEnterEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_HoverEnterEvent_IsBase(true);
        vqquickframebufferobject->hoverEnterEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverEnterEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_HoverEnterEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverMoveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_HoverMoveEvent_IsBase(true);
        vqquickframebufferobject->hoverMoveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_HoverMoveEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_HoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperHoverLeaveEvent(QQuickFramebufferObject* self, QHoverEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_HoverLeaveEvent_IsBase(true);
        vqquickframebufferobject->hoverLeaveEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHoverLeaveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HoverLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_DragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragEnterEvent(QQuickFramebufferObject* self, QDragEnterEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_DragEnterEvent_IsBase(true);
        vqquickframebufferobject->dragEnterEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragEnterEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_DragEnterEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragEnterEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_DragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragMoveEvent(QQuickFramebufferObject* self, QDragMoveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_DragMoveEvent_IsBase(true);
        vqquickframebufferobject->dragMoveEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragMoveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_DragMoveEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragMoveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_DragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDragLeaveEvent(QQuickFramebufferObject* self, QDragLeaveEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_DragLeaveEvent_IsBase(true);
        vqquickframebufferobject->dragLeaveEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDragLeaveEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_DragLeaveEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DragLeaveEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_DropEvent(QQuickFramebufferObject* self, QDropEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->dropEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dropEvent(param1);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDropEvent(QQuickFramebufferObject* self, QDropEvent* param1) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_DropEvent_IsBase(true);
        vqquickframebufferobject->dropEvent(param1);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDropEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_DropEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DropEvent_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_ChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->childMouseEventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperChildMouseEventFilter(QQuickFramebufferObject* self, QQuickItem* param1, QEvent* param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ChildMouseEventFilter_IsBase(true);
        return vqquickframebufferobject->childMouseEventFilter(param1, param2);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->childMouseEventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnChildMouseEventFilter(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ChildMouseEventFilter_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ChildMouseEventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_UpdatePolish(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->updatePolish();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->updatePolish();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperUpdatePolish(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_UpdatePolish_IsBase(true);
        vqquickframebufferobject->updatePolish();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->updatePolish();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnUpdatePolish(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_UpdatePolish_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_UpdatePolish_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_EventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->eventFilter(watched, event);
    } else {
        return self->QQuickFramebufferObject::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperEventFilter(QQuickFramebufferObject* self, QObject* watched, QEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_EventFilter_IsBase(true);
        return vqquickframebufferobject->eventFilter(watched, event);
    } else {
        return self->QQuickFramebufferObject::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnEventFilter(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_EventFilter_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_TimerEvent(QQuickFramebufferObject* self, QTimerEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->timerEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperTimerEvent(QQuickFramebufferObject* self, QTimerEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_TimerEvent_IsBase(true);
        vqquickframebufferobject->timerEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnTimerEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_TimerEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_ChildEvent(QQuickFramebufferObject* self, QChildEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->childEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperChildEvent(QQuickFramebufferObject* self, QChildEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ChildEvent_IsBase(true);
        vqquickframebufferobject->childEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnChildEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ChildEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_CustomEvent(QQuickFramebufferObject* self, QEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->customEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperCustomEvent(QQuickFramebufferObject* self, QEvent* event) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_CustomEvent_IsBase(true);
        vqquickframebufferobject->customEvent(event);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnCustomEvent(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_CustomEvent_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_ConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->connectNotify(*signal);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperConnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_ConnectNotify_IsBase(true);
        vqquickframebufferobject->connectNotify(*signal);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnConnectNotify(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_ConnectNotify_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_DisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperDisconnectNotify(QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_DisconnectNotify_IsBase(true);
        vqquickframebufferobject->disconnectNotify(*signal);
    } else {
        ((VirtualQQuickFramebufferObject*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnDisconnectNotify(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_IsComponentComplete(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->isComponentComplete();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperIsComponentComplete(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_IsComponentComplete_IsBase(true);
        return vqquickframebufferobject->isComponentComplete();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnIsComponentComplete(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_UpdateInputMethod(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->updateInputMethod();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->updateInputMethod();
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperUpdateInputMethod(QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_UpdateInputMethod_IsBase(true);
        vqquickframebufferobject->updateInputMethod();
    } else {
        ((VirtualQQuickFramebufferObject*)self)->updateInputMethod();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnUpdateInputMethod(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_UpdateInputMethod_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_UpdateInputMethod_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_WidthValid(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->widthValid();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->widthValid();
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperWidthValid(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_WidthValid_IsBase(true);
        return vqquickframebufferobject->widthValid();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->widthValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnWidthValid(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_WidthValid_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_WidthValid_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_HeightValid(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->heightValid();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->heightValid();
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperHeightValid(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_HeightValid_IsBase(true);
        return vqquickframebufferobject->heightValid();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->heightValid();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnHeightValid(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_HeightValid_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_HeightValid_Callback>(slot));
}

// Derived class handler implementation
void QQuickFramebufferObject_SetImplicitSize(QQuickFramebufferObject* self, double param1, double param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickFramebufferObject*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Base class handler implementation
void QQuickFramebufferObject_SuperSetImplicitSize(QQuickFramebufferObject* self, double param1, double param2) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_SetImplicitSize_IsBase(true);
        vqquickframebufferobject->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    } else {
        ((VirtualQQuickFramebufferObject*)self)->setImplicitSize(static_cast<qreal>(param1), static_cast<qreal>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnSetImplicitSize(QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = dynamic_cast<VirtualQQuickFramebufferObject*>(self);
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_SetImplicitSize_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_SetImplicitSize_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuickFramebufferObject_Sender(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->sender();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuickFramebufferObject_SuperSender(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Sender_IsBase(true);
        return vqquickframebufferobject->sender();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnSender(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Sender_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuickFramebufferObject_SenderSignalIndex(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->senderSignalIndex();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuickFramebufferObject_SuperSenderSignalIndex(const QQuickFramebufferObject* self) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_SenderSignalIndex_IsBase(true);
        return vqquickframebufferobject->senderSignalIndex();
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnSenderSignalIndex(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuickFramebufferObject_Receivers(const QQuickFramebufferObject* self, const char* signal) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->receivers(signal);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuickFramebufferObject_SuperReceivers(const QQuickFramebufferObject* self, const char* signal) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_Receivers_IsBase(true);
        return vqquickframebufferobject->receivers(signal);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnReceivers(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_Receivers_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuickFramebufferObject_IsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        return vqquickframebufferobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuickFramebufferObject_SuperIsSignalConnected(const QQuickFramebufferObject* self, const QMetaMethod* signal) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject) {
        vqquickframebufferobject->setQQuickFramebufferObject_IsSignalConnected_IsBase(true);
        return vqquickframebufferobject->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuickFramebufferObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuickFramebufferObject_OnIsSignalConnected(const QQuickFramebufferObject* self, intptr_t slot) {
    auto* vqquickframebufferobject = const_cast<VirtualQQuickFramebufferObject*>(dynamic_cast<const VirtualQQuickFramebufferObject*>(self));
    if (vqquickframebufferobject && vqquickframebufferobject->isVirtualQQuickFramebufferObject)
        vqquickframebufferobject->setQQuickFramebufferObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuickFramebufferObject::QQuickFramebufferObject_IsSignalConnected_Callback>(slot));
}

void QQuickFramebufferObject_Delete(QQuickFramebufferObject* self) {
    delete self;
}
