#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlParserStatus>
#include <QQuick3DGeometry>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DGeometry__Attribute
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DGeometry__TargetAttribute
#include <QQuick3DObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <qquick3dgeometry.h>
#include "libqquick3dgeometry.h"
#include "libqquick3dgeometry.hxx"

QQuick3DGeometry* QQuick3DGeometry_new() {
    return new VirtualQQuick3DGeometry();
}

QQuick3DGeometry* QQuick3DGeometry_new2(QQuick3DObject* parent) {
    return new VirtualQQuick3DGeometry(parent);
}

QMetaObject* QQuick3DGeometry_MetaObject(const QQuick3DGeometry* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuick3DGeometry_Metacast(QQuick3DGeometry* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuick3DGeometry_Metacall(QQuick3DGeometry* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuick3DGeometry_Tr(const char* s) {
    auto _ret = QQuick3DGeometry::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DGeometry_VertexData(const QQuick3DGeometry* self) {
    QByteArray _qb = self->vertexData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

libqt_string QQuick3DGeometry_IndexData(const QQuick3DGeometry* self) {
    QByteArray _qb = self->indexData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

int QQuick3DGeometry_AttributeCount(const QQuick3DGeometry* self) {
    return self->attributeCount();
}

QQuick3DGeometry__Attribute* QQuick3DGeometry_Attribute(const QQuick3DGeometry* self, int index) {
    return new QQuick3DGeometry::Attribute(self->attribute(static_cast<int>(index)));
}

int QQuick3DGeometry_PrimitiveType(const QQuick3DGeometry* self) {
    return static_cast<int>(self->primitiveType());
}

QVector3D* QQuick3DGeometry_BoundsMin(const QQuick3DGeometry* self) {
    return new QVector3D(self->boundsMin());
}

QVector3D* QQuick3DGeometry_BoundsMax(const QQuick3DGeometry* self) {
    return new QVector3D(self->boundsMax());
}

int QQuick3DGeometry_Stride(const QQuick3DGeometry* self) {
    return self->stride();
}

void QQuick3DGeometry_SetVertexData(QQuick3DGeometry* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setVertexData(data_QByteArray);
}

void QQuick3DGeometry_SetVertexData2(QQuick3DGeometry* self, int offset, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setVertexData(static_cast<int>(offset), data_QByteArray);
}

void QQuick3DGeometry_SetIndexData(QQuick3DGeometry* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setIndexData(data_QByteArray);
}

void QQuick3DGeometry_SetIndexData2(QQuick3DGeometry* self, int offset, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setIndexData(static_cast<int>(offset), data_QByteArray);
}

void QQuick3DGeometry_SetStride(QQuick3DGeometry* self, int stride) {
    self->setStride(static_cast<int>(stride));
}

void QQuick3DGeometry_SetBounds(QQuick3DGeometry* self, const QVector3D* min, const QVector3D* max) {
    self->setBounds(*min, *max);
}

void QQuick3DGeometry_SetPrimitiveType(QQuick3DGeometry* self, int typeVal) {
    self->setPrimitiveType(static_cast<QQuick3DGeometry::PrimitiveType>(typeVal));
}

void QQuick3DGeometry_AddAttribute(QQuick3DGeometry* self, int semantic, int offset, int componentType) {
    self->addAttribute(static_cast<QQuick3DGeometry::Attribute::Semantic>(semantic), static_cast<int>(offset), static_cast<QQuick3DGeometry::Attribute::ComponentType>(componentType));
}

void QQuick3DGeometry_AddAttribute2(QQuick3DGeometry* self, const QQuick3DGeometry__Attribute* att) {
    self->addAttribute(*att);
}

int QQuick3DGeometry_SubsetCount(const QQuick3DGeometry* self) {
    return self->subsetCount();
}

QVector3D* QQuick3DGeometry_SubsetBoundsMin(const QQuick3DGeometry* self, int subset) {
    return new QVector3D(self->subsetBoundsMin(static_cast<int>(subset)));
}

QVector3D* QQuick3DGeometry_SubsetBoundsMax(const QQuick3DGeometry* self, int subset) {
    return new QVector3D(self->subsetBoundsMax(static_cast<int>(subset)));
}

int QQuick3DGeometry_SubsetOffset(const QQuick3DGeometry* self, int subset) {
    return self->subsetOffset(static_cast<int>(subset));
}

int QQuick3DGeometry_SubsetCount2(const QQuick3DGeometry* self, int subset) {
    return self->subsetCount(static_cast<int>(subset));
}

libqt_string QQuick3DGeometry_SubsetName(const QQuick3DGeometry* self, int subset) {
    auto _ret = self->subsetName(static_cast<int>(subset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuick3DGeometry_AddSubset(QQuick3DGeometry* self, int offset, int count, const QVector3D* boundsMin, const QVector3D* boundsMax) {
    self->addSubset(static_cast<int>(offset), static_cast<int>(count), *boundsMin, *boundsMax);
}

libqt_string QQuick3DGeometry_TargetData(const QQuick3DGeometry* self) {
    QByteArray _qb = self->targetData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QQuick3DGeometry_SetTargetData(QQuick3DGeometry* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setTargetData(data_QByteArray);
}

void QQuick3DGeometry_SetTargetData2(QQuick3DGeometry* self, int offset, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setTargetData(static_cast<int>(offset), data_QByteArray);
}

QQuick3DGeometry__TargetAttribute* QQuick3DGeometry_TargetAttribute(const QQuick3DGeometry* self, int index) {
    return new QQuick3DGeometry::TargetAttribute(self->targetAttribute(static_cast<int>(index)));
}

int QQuick3DGeometry_TargetAttributeCount(const QQuick3DGeometry* self) {
    return self->targetAttributeCount();
}

void QQuick3DGeometry_AddTargetAttribute(QQuick3DGeometry* self, unsigned int targetId, int semantic, int offset) {
    self->addTargetAttribute(static_cast<quint32>(targetId), static_cast<QQuick3DGeometry::Attribute::Semantic>(semantic), static_cast<int>(offset));
}

void QQuick3DGeometry_AddTargetAttribute2(QQuick3DGeometry* self, const QQuick3DGeometry__TargetAttribute* att) {
    self->addTargetAttribute(*att);
}

void QQuick3DGeometry_Clear(QQuick3DGeometry* self) {
    self->clear();
}

void QQuick3DGeometry_GeometryNodeDirty(QQuick3DGeometry* self) {
    self->geometryNodeDirty();
}

void QQuick3DGeometry_Connect_GeometryNodeDirty(QQuick3DGeometry* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DGeometry*) = reinterpret_cast<void (*)(QQuick3DGeometry*)>(slot);
    QQuick3DGeometry::connect(self,
                              static_cast<void (QQuick3DGeometry::*)()>(&QQuick3DGeometry::geometryNodeDirty),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QQuick3DGeometry_GeometryChanged(QQuick3DGeometry* self) {
    self->geometryChanged();
}

void QQuick3DGeometry_Connect_GeometryChanged(QQuick3DGeometry* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DGeometry*) = reinterpret_cast<void (*)(QQuick3DGeometry*)>(slot);
    QQuick3DGeometry::connect(self,
                              static_cast<void (QQuick3DGeometry::*)()>(&QQuick3DGeometry::geometryChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QQuick3DGeometry_MarkAllDirty(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->markAllDirty();
    }
}

libqt_string QQuick3DGeometry_Tr2(const char* s, const char* c) {
    auto _ret = QQuick3DGeometry::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DGeometry_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuick3DGeometry::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QQuick3DGeometry_AddSubset5(QQuick3DGeometry* self, int offset, int count, const QVector3D* boundsMin, const QVector3D* boundsMax, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->addSubset(static_cast<int>(offset), static_cast<int>(count), *boundsMin, *boundsMax, name_QString);
}

void QQuick3DGeometry_AddTargetAttribute4(QQuick3DGeometry* self, unsigned int targetId, int semantic, int offset, int stride) {
    self->addTargetAttribute(static_cast<quint32>(targetId), static_cast<QQuick3DGeometry::Attribute::Semantic>(semantic), static_cast<int>(offset), static_cast<int>(stride));
}

// Base class handler implementation
QMetaObject* QQuick3DGeometry_SuperMetaObject(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_MetaObject_IsBase(true);
        return (QMetaObject*)vqquick3dgeometry->metaObject();
    } else {
        return (QMetaObject*)self->QQuick3DGeometry::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnMetaObject(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_MetaObject_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuick3DGeometry_SuperMetacast(QQuick3DGeometry* self, const char* param1) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_Metacast_IsBase(true);
        return vqquick3dgeometry->qt_metacast(param1);
    } else {
        return self->QQuick3DGeometry::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnMetacast(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_Metacast_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuick3DGeometry_SuperMetacall(QQuick3DGeometry* self, int param1, int param2, void** param3) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_Metacall_IsBase(true);
        return vqquick3dgeometry->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuick3DGeometry::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnMetacall(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_Metacall_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuick3DGeometry_SuperMarkAllDirty(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_MarkAllDirty_IsBase(true);
        vqquick3dgeometry->markAllDirty();
    } else {
        ((VirtualQQuick3DGeometry*)self)->markAllDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnMarkAllDirty(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_MarkAllDirty_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_MarkAllDirty_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_ItemChange(QQuick3DGeometry* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DGeometry*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperItemChange(QQuick3DGeometry* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_ItemChange_IsBase(true);
        vqquick3dgeometry->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DGeometry*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnItemChange(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_ItemChange_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_ClassBegin(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->classBegin();
    } else {
        ((VirtualQQuick3DGeometry*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperClassBegin(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_ClassBegin_IsBase(true);
        vqquick3dgeometry->classBegin();
    } else {
        ((VirtualQQuick3DGeometry*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnClassBegin(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_ClassBegin_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_ComponentComplete(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->componentComplete();
    } else {
        ((VirtualQQuick3DGeometry*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperComponentComplete(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_ComponentComplete_IsBase(true);
        vqquick3dgeometry->componentComplete();
    } else {
        ((VirtualQQuick3DGeometry*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnComponentComplete(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_ComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_PreSync(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->preSync();
    } else {
        ((VirtualQQuick3DGeometry*)self)->preSync();
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperPreSync(QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_PreSync_IsBase(true);
        vqquick3dgeometry->preSync();
    } else {
        ((VirtualQQuick3DGeometry*)self)->preSync();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnPreSync(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_PreSync_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_PreSync_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DGeometry_Event(QQuick3DGeometry* self, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->event(event);
    } else {
        return self->QQuick3DGeometry::event(event);
    }
}

// Base class handler implementation
bool QQuick3DGeometry_SuperEvent(QQuick3DGeometry* self, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_Event_IsBase(true);
        return vqquick3dgeometry->event(event);
    } else {
        return self->QQuick3DGeometry::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnEvent(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_Event_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DGeometry_EventFilter(QQuick3DGeometry* self, QObject* watched, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->eventFilter(watched, event);
    } else {
        return self->QQuick3DGeometry::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuick3DGeometry_SuperEventFilter(QQuick3DGeometry* self, QObject* watched, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_EventFilter_IsBase(true);
        return vqquick3dgeometry->eventFilter(watched, event);
    } else {
        return self->QQuick3DGeometry::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnEventFilter(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_EventFilter_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_TimerEvent(QQuick3DGeometry* self, QTimerEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->timerEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperTimerEvent(QQuick3DGeometry* self, QTimerEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_TimerEvent_IsBase(true);
        vqquick3dgeometry->timerEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnTimerEvent(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_TimerEvent_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_ChildEvent(QQuick3DGeometry* self, QChildEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->childEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperChildEvent(QQuick3DGeometry* self, QChildEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_ChildEvent_IsBase(true);
        vqquick3dgeometry->childEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnChildEvent(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_ChildEvent_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_CustomEvent(QQuick3DGeometry* self, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->customEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperCustomEvent(QQuick3DGeometry* self, QEvent* event) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_CustomEvent_IsBase(true);
        vqquick3dgeometry->customEvent(event);
    } else {
        ((VirtualQQuick3DGeometry*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnCustomEvent(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_CustomEvent_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_ConnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DGeometry*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperConnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_ConnectNotify_IsBase(true);
        vqquick3dgeometry->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DGeometry*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnConnectNotify(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_ConnectNotify_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DGeometry_DisconnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DGeometry*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DGeometry_SuperDisconnectNotify(QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_DisconnectNotify_IsBase(true);
        vqquick3dgeometry->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DGeometry*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnDisconnectNotify(QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = dynamic_cast<VirtualQQuick3DGeometry*>(self);
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DGeometry_IsComponentComplete(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->isComponentComplete();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuick3DGeometry_SuperIsComponentComplete(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_IsComponentComplete_IsBase(true);
        return vqquick3dgeometry->isComponentComplete();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnIsComponentComplete(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuick3DGeometry_Sender(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->sender();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuick3DGeometry_SuperSender(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_Sender_IsBase(true);
        return vqquick3dgeometry->sender();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnSender(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_Sender_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DGeometry_SenderSignalIndex(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuick3DGeometry_SuperSenderSignalIndex(const QQuick3DGeometry* self) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_SenderSignalIndex_IsBase(true);
        return vqquick3dgeometry->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DGeometry*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnSenderSignalIndex(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DGeometry_Receivers(const QQuick3DGeometry* self, const char* signal) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->receivers(signal);
    } else {
        return ((VirtualQQuick3DGeometry*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuick3DGeometry_SuperReceivers(const QQuick3DGeometry* self, const char* signal) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_Receivers_IsBase(true);
        return vqquick3dgeometry->receivers(signal);
    } else {
        return ((VirtualQQuick3DGeometry*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnReceivers(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_Receivers_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DGeometry_IsSignalConnected(const QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        return vqquick3dgeometry->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DGeometry*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuick3DGeometry_SuperIsSignalConnected(const QQuick3DGeometry* self, const QMetaMethod* signal) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry) {
        vqquick3dgeometry->setQQuick3DGeometry_IsSignalConnected_IsBase(true);
        return vqquick3dgeometry->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DGeometry*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DGeometry_OnIsSignalConnected(const QQuick3DGeometry* self, intptr_t slot) {
    auto* vqquick3dgeometry = const_cast<VirtualQQuick3DGeometry*>(dynamic_cast<const VirtualQQuick3DGeometry*>(self));
    if (vqquick3dgeometry && vqquick3dgeometry->isVirtualQQuick3DGeometry)
        vqquick3dgeometry->setQQuick3DGeometry_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuick3DGeometry::QQuick3DGeometry_IsSignalConnected_Callback>(slot));
}

void QQuick3DGeometry_Delete(QQuick3DGeometry* self) {
    delete self;
}

QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new() {
    return new QQuick3DGeometry::Attribute();
}

QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new2(const QQuick3DGeometry__Attribute* other) {
    return new QQuick3DGeometry::Attribute(*other);
}

QQuick3DGeometry__Attribute* QQuick3DGeometry__Attribute_new3(QQuick3DGeometry__Attribute* other) {
    return new QQuick3DGeometry::Attribute(std::move(*other));
}

void QQuick3DGeometry__Attribute_CopyAssign(QQuick3DGeometry__Attribute* self, QQuick3DGeometry__Attribute* other) {
    *self = *other;
}

void QQuick3DGeometry__Attribute_MoveAssign(QQuick3DGeometry__Attribute* self, QQuick3DGeometry__Attribute* other) {
    *self = std::move(*other);
}

int QQuick3DGeometry__Attribute_Semantic(const QQuick3DGeometry__Attribute* self) {
    return static_cast<int>(self->semantic);
}

void QQuick3DGeometry__Attribute_SetSemantic(QQuick3DGeometry__Attribute* self, int semantic) {
    self->semantic = static_cast<QQuick3DGeometry::Attribute::Semantic>(semantic);
}

int QQuick3DGeometry__Attribute_Offset(const QQuick3DGeometry__Attribute* self) {
    return self->offset;
}

void QQuick3DGeometry__Attribute_SetOffset(QQuick3DGeometry__Attribute* self, int offset) {
    self->offset = static_cast<int>(offset);
}

int QQuick3DGeometry__Attribute_ComponentType(const QQuick3DGeometry__Attribute* self) {
    return static_cast<int>(self->componentType);
}

void QQuick3DGeometry__Attribute_SetComponentType(QQuick3DGeometry__Attribute* self, int componentType) {
    self->componentType = static_cast<QQuick3DGeometry::Attribute::ComponentType>(componentType);
}

void QQuick3DGeometry__Attribute_Delete(QQuick3DGeometry__Attribute* self) {
    delete self;
}

QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new() {
    return new QQuick3DGeometry::TargetAttribute();
}

QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new2(const QQuick3DGeometry__TargetAttribute* other) {
    return new QQuick3DGeometry::TargetAttribute(*other);
}

QQuick3DGeometry__TargetAttribute* QQuick3DGeometry__TargetAttribute_new3(QQuick3DGeometry__TargetAttribute* other) {
    return new QQuick3DGeometry::TargetAttribute(std::move(*other));
}

void QQuick3DGeometry__TargetAttribute_CopyAssign(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__TargetAttribute* other) {
    *self = *other;
}

void QQuick3DGeometry__TargetAttribute_MoveAssign(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__TargetAttribute* other) {
    *self = std::move(*other);
}

unsigned int QQuick3DGeometry__TargetAttribute_TargetId(const QQuick3DGeometry__TargetAttribute* self) {
    return static_cast<unsigned int>(self->targetId);
}

void QQuick3DGeometry__TargetAttribute_SetTargetId(QQuick3DGeometry__TargetAttribute* self, unsigned int targetId) {
    self->targetId = static_cast<quint32>(targetId);
}

QQuick3DGeometry__Attribute* QQuick3DGeometry__TargetAttribute_Attr(const QQuick3DGeometry__TargetAttribute* self) {
    return new QQuick3DGeometry::Attribute(self->attr);
}

void QQuick3DGeometry__TargetAttribute_SetAttr(QQuick3DGeometry__TargetAttribute* self, QQuick3DGeometry__Attribute* attr) {
    self->attr = *attr;
}

int QQuick3DGeometry__TargetAttribute_Stride(const QQuick3DGeometry__TargetAttribute* self) {
    return self->stride;
}

void QQuick3DGeometry__TargetAttribute_SetStride(QQuick3DGeometry__TargetAttribute* self, int stride) {
    self->stride = static_cast<int>(stride);
}

void QQuick3DGeometry__TargetAttribute_Delete(QQuick3DGeometry__TargetAttribute* self) {
    delete self;
}
