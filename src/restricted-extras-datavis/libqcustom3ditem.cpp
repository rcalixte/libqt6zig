#include <QChildEvent>
#include <QCustom3DItem>
#include <QEvent>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QTimerEvent>
#include <QVector3D>
#include <qcustom3ditem.h>
#include "libqcustom3ditem.h"
#include "libqcustom3ditem.hxx"

QCustom3DItem* QCustom3DItem_new() {
    return new VirtualQCustom3DItem();
}

QCustom3DItem* QCustom3DItem_new2(const libqt_string meshFile, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, const QImage* texture) {
    QString meshFile_QString = QString::fromUtf8(meshFile.data, meshFile.len);
    return new VirtualQCustom3DItem(meshFile_QString, *position, *scaling, *rotation, *texture);
}

QCustom3DItem* QCustom3DItem_new3(QObject* parent) {
    return new VirtualQCustom3DItem(parent);
}

QCustom3DItem* QCustom3DItem_new4(const libqt_string meshFile, const QVector3D* position, const QVector3D* scaling, const QQuaternion* rotation, const QImage* texture, QObject* parent) {
    QString meshFile_QString = QString::fromUtf8(meshFile.data, meshFile.len);
    return new VirtualQCustom3DItem(meshFile_QString, *position, *scaling, *rotation, *texture, parent);
}

QMetaObject* QCustom3DItem_MetaObject(const QCustom3DItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCustom3DItem_Metacast(QCustom3DItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCustom3DItem_Metacall(QCustom3DItem* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCustom3DItem_Tr(const char* s) {
    auto _ret = QCustom3DItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DItem_SetMeshFile(QCustom3DItem* self, const libqt_string meshFile) {
    QString meshFile_QString = QString::fromUtf8(meshFile.data, meshFile.len);
    self->setMeshFile(meshFile_QString);
}

libqt_string QCustom3DItem_MeshFile(const QCustom3DItem* self) {
    auto _ret = self->meshFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DItem_SetTextureFile(QCustom3DItem* self, const libqt_string textureFile) {
    QString textureFile_QString = QString::fromUtf8(textureFile.data, textureFile.len);
    self->setTextureFile(textureFile_QString);
}

libqt_string QCustom3DItem_TextureFile(const QCustom3DItem* self) {
    auto _ret = self->textureFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCustom3DItem_SetPosition(QCustom3DItem* self, const QVector3D* position) {
    self->setPosition(*position);
}

QVector3D* QCustom3DItem_Position(const QCustom3DItem* self) {
    return new QVector3D(self->position());
}

void QCustom3DItem_SetPositionAbsolute(QCustom3DItem* self, bool positionAbsolute) {
    self->setPositionAbsolute(positionAbsolute);
}

bool QCustom3DItem_IsPositionAbsolute(const QCustom3DItem* self) {
    return self->isPositionAbsolute();
}

void QCustom3DItem_SetScaling(QCustom3DItem* self, const QVector3D* scaling) {
    self->setScaling(*scaling);
}

QVector3D* QCustom3DItem_Scaling(const QCustom3DItem* self) {
    return new QVector3D(self->scaling());
}

void QCustom3DItem_SetScalingAbsolute(QCustom3DItem* self, bool scalingAbsolute) {
    self->setScalingAbsolute(scalingAbsolute);
}

bool QCustom3DItem_IsScalingAbsolute(const QCustom3DItem* self) {
    return self->isScalingAbsolute();
}

void QCustom3DItem_SetRotation(QCustom3DItem* self, const QQuaternion* rotation) {
    self->setRotation(*rotation);
}

QQuaternion* QCustom3DItem_Rotation(QCustom3DItem* self) {
    return new QQuaternion(self->rotation());
}

void QCustom3DItem_SetVisible(QCustom3DItem* self, bool visible) {
    self->setVisible(visible);
}

bool QCustom3DItem_IsVisible(const QCustom3DItem* self) {
    return self->isVisible();
}

void QCustom3DItem_SetShadowCasting(QCustom3DItem* self, bool enabled) {
    self->setShadowCasting(enabled);
}

bool QCustom3DItem_IsShadowCasting(const QCustom3DItem* self) {
    return self->isShadowCasting();
}

void QCustom3DItem_SetRotationAxisAndAngle(QCustom3DItem* self, const QVector3D* axis, float angle) {
    self->setRotationAxisAndAngle(*axis, static_cast<float>(angle));
}

void QCustom3DItem_SetTextureImage(QCustom3DItem* self, const QImage* textureImage) {
    self->setTextureImage(*textureImage);
}

void QCustom3DItem_MeshFileChanged(QCustom3DItem* self, const libqt_string meshFile) {
    QString meshFile_QString = QString::fromUtf8(meshFile.data, meshFile.len);
    self->meshFileChanged(meshFile_QString);
}

void QCustom3DItem_Connect_MeshFileChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, const char*) = reinterpret_cast<void (*)(QCustom3DItem*, const char*)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(const QString&)>(&QCustom3DItem::meshFileChanged),
                           [self, slotFunc](const QString& meshFile) {
                               const auto meshFile_ret = meshFile;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray meshFile_b = meshFile_ret.toUtf8();
                               auto meshFile_str_len = meshFile_b.length();
                               const char* meshFile_str = static_cast<const char*>(malloc(meshFile_str_len + 1));
                               memcpy((void*)meshFile_str, meshFile_b.data(), meshFile_str_len);
                               ((char*)meshFile_str)[meshFile_str_len] = '\0';
                               const char* sigval1 = meshFile_str;
                               slotFunc(self, sigval1);
                               libqt_free(meshFile_str);
                           });
}

void QCustom3DItem_TextureFileChanged(QCustom3DItem* self, const libqt_string textureFile) {
    QString textureFile_QString = QString::fromUtf8(textureFile.data, textureFile.len);
    self->textureFileChanged(textureFile_QString);
}

void QCustom3DItem_Connect_TextureFileChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, const char*) = reinterpret_cast<void (*)(QCustom3DItem*, const char*)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(const QString&)>(&QCustom3DItem::textureFileChanged),
                           [self, slotFunc](const QString& textureFile) {
                               const auto textureFile_ret = textureFile;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray textureFile_b = textureFile_ret.toUtf8();
                               auto textureFile_str_len = textureFile_b.length();
                               const char* textureFile_str = static_cast<const char*>(malloc(textureFile_str_len + 1));
                               memcpy((void*)textureFile_str, textureFile_b.data(), textureFile_str_len);
                               ((char*)textureFile_str)[textureFile_str_len] = '\0';
                               const char* sigval1 = textureFile_str;
                               slotFunc(self, sigval1);
                               libqt_free(textureFile_str);
                           });
}

void QCustom3DItem_PositionChanged(QCustom3DItem* self, const QVector3D* position) {
    self->positionChanged(*position);
}

void QCustom3DItem_Connect_PositionChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, QVector3D*) = reinterpret_cast<void (*)(QCustom3DItem*, QVector3D*)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(const QVector3D&)>(&QCustom3DItem::positionChanged),
                           [self, slotFunc](const QVector3D& position) {
                               const QVector3D& position_ret = position;
                               // Cast returned reference into pointer
                               QVector3D* sigval1 = const_cast<QVector3D*>(&position_ret);
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_PositionAbsoluteChanged(QCustom3DItem* self, bool positionAbsolute) {
    self->positionAbsoluteChanged(positionAbsolute);
}

void QCustom3DItem_Connect_PositionAbsoluteChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, bool) = reinterpret_cast<void (*)(QCustom3DItem*, bool)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(bool)>(&QCustom3DItem::positionAbsoluteChanged),
                           [self, slotFunc](bool positionAbsolute) {
                               bool sigval1 = positionAbsolute;
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_ScalingChanged(QCustom3DItem* self, const QVector3D* scaling) {
    self->scalingChanged(*scaling);
}

void QCustom3DItem_Connect_ScalingChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, QVector3D*) = reinterpret_cast<void (*)(QCustom3DItem*, QVector3D*)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(const QVector3D&)>(&QCustom3DItem::scalingChanged),
                           [self, slotFunc](const QVector3D& scaling) {
                               const QVector3D& scaling_ret = scaling;
                               // Cast returned reference into pointer
                               QVector3D* sigval1 = const_cast<QVector3D*>(&scaling_ret);
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_RotationChanged(QCustom3DItem* self, const QQuaternion* rotation) {
    self->rotationChanged(*rotation);
}

void QCustom3DItem_Connect_RotationChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, QQuaternion*) = reinterpret_cast<void (*)(QCustom3DItem*, QQuaternion*)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(const QQuaternion&)>(&QCustom3DItem::rotationChanged),
                           [self, slotFunc](const QQuaternion& rotation) {
                               const QQuaternion& rotation_ret = rotation;
                               // Cast returned reference into pointer
                               QQuaternion* sigval1 = const_cast<QQuaternion*>(&rotation_ret);
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_VisibleChanged(QCustom3DItem* self, bool visible) {
    self->visibleChanged(visible);
}

void QCustom3DItem_Connect_VisibleChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, bool) = reinterpret_cast<void (*)(QCustom3DItem*, bool)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(bool)>(&QCustom3DItem::visibleChanged),
                           [self, slotFunc](bool visible) {
                               bool sigval1 = visible;
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_ShadowCastingChanged(QCustom3DItem* self, bool shadowCasting) {
    self->shadowCastingChanged(shadowCasting);
}

void QCustom3DItem_Connect_ShadowCastingChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, bool) = reinterpret_cast<void (*)(QCustom3DItem*, bool)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(bool)>(&QCustom3DItem::shadowCastingChanged),
                           [self, slotFunc](bool shadowCasting) {
                               bool sigval1 = shadowCasting;
                               slotFunc(self, sigval1);
                           });
}

void QCustom3DItem_ScalingAbsoluteChanged(QCustom3DItem* self, bool scalingAbsolute) {
    self->scalingAbsoluteChanged(scalingAbsolute);
}

void QCustom3DItem_Connect_ScalingAbsoluteChanged(QCustom3DItem* self, intptr_t slot) {
    void (*slotFunc)(QCustom3DItem*, bool) = reinterpret_cast<void (*)(QCustom3DItem*, bool)>(slot);
    QCustom3DItem::connect(self,
                           static_cast<void (QCustom3DItem::*)(bool)>(&QCustom3DItem::scalingAbsoluteChanged),
                           [self, slotFunc](bool scalingAbsolute) {
                               bool sigval1 = scalingAbsolute;
                               slotFunc(self, sigval1);
                           });
}

libqt_string QCustom3DItem_Tr2(const char* s, const char* c) {
    auto _ret = QCustom3DItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCustom3DItem_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCustom3DItem::tr(s, c, static_cast<int>(n));
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
QMetaObject* QCustom3DItem_SuperMetaObject(const QCustom3DItem* self) {
    return (QMetaObject*)self->QCustom3DItem::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnMetaObject(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = const_cast<VirtualQCustom3DItem*>(dynamic_cast<const VirtualQCustom3DItem*>(self)))
        vqcustom3ditem->qcustom3ditem_metaobject_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCustom3DItem_SuperMetacast(QCustom3DItem* self, const char* param1) {
    return self->QCustom3DItem::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnMetacast(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_metacast_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCustom3DItem_SuperMetacall(QCustom3DItem* self, int param1, int param2, void** param3) {
    return self->QCustom3DItem::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnMetacall(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_metacall_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DItem_Event(QCustom3DItem* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QCustom3DItem_SuperEvent(QCustom3DItem* self, QEvent* event) {
    return self->QCustom3DItem::event(event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnEvent(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_event_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_Event_Callback>(slot);
}

// Derived class handler implementation
bool QCustom3DItem_EventFilter(QCustom3DItem* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QCustom3DItem_SuperEventFilter(QCustom3DItem* self, QObject* watched, QEvent* event) {
    return self->QCustom3DItem::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnEventFilter(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_eventfilter_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DItem_TimerEvent(QCustom3DItem* self, QTimerEvent* event) {
    auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self);
    if (vqcustom3ditem) {
        vqcustom3ditem->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DItem::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DItem_SuperTimerEvent(QCustom3DItem* self, QTimerEvent* event) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self)) {
        vqcustom3ditem->QCustom3DItem::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DItem::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnTimerEvent(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_timerevent_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DItem_ChildEvent(QCustom3DItem* self, QChildEvent* event) {
    auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self);
    if (vqcustom3ditem) {
        vqcustom3ditem->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DItem::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DItem_SuperChildEvent(QCustom3DItem* self, QChildEvent* event) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self)) {
        vqcustom3ditem->QCustom3DItem::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DItem::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnChildEvent(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_childevent_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DItem_CustomEvent(QCustom3DItem* self, QEvent* event) {
    auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self);
    if (vqcustom3ditem) {
        vqcustom3ditem->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCustom3DItem::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DItem_SuperCustomEvent(QCustom3DItem* self, QEvent* event) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self)) {
        vqcustom3ditem->QCustom3DItem::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCustom3DItem::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnCustomEvent(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_customevent_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DItem_ConnectNotify(QCustom3DItem* self, const QMetaMethod* signal) {
    auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self);
    if (vqcustom3ditem) {
        vqcustom3ditem->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DItem::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DItem_SuperConnectNotify(QCustom3DItem* self, const QMetaMethod* signal) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self)) {
        vqcustom3ditem->QCustom3DItem::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DItem::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnConnectNotify(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_connectnotify_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCustom3DItem_DisconnectNotify(QCustom3DItem* self, const QMetaMethod* signal) {
    auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self);
    if (vqcustom3ditem) {
        vqcustom3ditem->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCustom3DItem::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCustom3DItem_SuperDisconnectNotify(QCustom3DItem* self, const QMetaMethod* signal) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self)) {
        vqcustom3ditem->QCustom3DItem::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCustom3DItem::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCustom3DItem_OnDisconnectNotify(QCustom3DItem* self, intptr_t slot) {
    if (auto* vqcustom3ditem = dynamic_cast<VirtualQCustom3DItem*>(self))
        vqcustom3ditem->qcustom3ditem_disconnectnotify_callback = reinterpret_cast<VirtualQCustom3DItem::QCustom3DItem_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCustom3DItem_Sender(const QCustom3DItem* self) {
    if (auto* vqcustom3ditem = const_cast<VirtualQCustom3DItem*>(dynamic_cast<const VirtualQCustom3DItem*>(self))) {
        return vqcustom3ditem->VirtualQCustom3DItem::sender();
    } else
        qFatal("Error: Protected method QCustom3DItem::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DItem_SenderSignalIndex(const QCustom3DItem* self) {
    if (auto* vqcustom3ditem = const_cast<VirtualQCustom3DItem*>(dynamic_cast<const VirtualQCustom3DItem*>(self))) {
        return vqcustom3ditem->VirtualQCustom3DItem::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCustom3DItem::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCustom3DItem_Receivers(const QCustom3DItem* self, const char* signal) {
    if (auto* vqcustom3ditem = const_cast<VirtualQCustom3DItem*>(dynamic_cast<const VirtualQCustom3DItem*>(self))) {
        return vqcustom3ditem->VirtualQCustom3DItem::receivers(signal);
    } else
        qFatal("Error: Protected method QCustom3DItem::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCustom3DItem_IsSignalConnected(const QCustom3DItem* self, const QMetaMethod* signal) {
    if (auto* vqcustom3ditem = const_cast<VirtualQCustom3DItem*>(dynamic_cast<const VirtualQCustom3DItem*>(self))) {
        return vqcustom3ditem->VirtualQCustom3DItem::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCustom3DItem::isSignalConnected called without a directly constructed type");
}

void QCustom3DItem_Delete(QCustom3DItem* self) {
    delete self;
}
