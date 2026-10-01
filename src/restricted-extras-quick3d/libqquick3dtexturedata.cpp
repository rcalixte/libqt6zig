#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlParserStatus>
#include <QQuick3DObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QQuick3DObject__ItemChangeData
#include <QQuick3DTextureData>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <qquick3dtexturedata.h>
#include "libqquick3dtexturedata.h"
#include "libqquick3dtexturedata.hxx"

QQuick3DTextureData* QQuick3DTextureData_new() {
    return new VirtualQQuick3DTextureData();
}

QQuick3DTextureData* QQuick3DTextureData_new2(QQuick3DObject* parent) {
    return new VirtualQQuick3DTextureData(parent);
}

QMetaObject* QQuick3DTextureData_MetaObject(const QQuick3DTextureData* self) {
    return (QMetaObject*)self->metaObject();
}

void* QQuick3DTextureData_Metacast(QQuick3DTextureData* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QQuick3DTextureData_Metacall(QQuick3DTextureData* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QQuick3DTextureData_Tr(const char* s) {
    auto _ret = QQuick3DTextureData::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DTextureData_TextureData(const QQuick3DTextureData* self) {
    const QByteArray _qb = self->textureData();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

void QQuick3DTextureData_SetTextureData(QQuick3DTextureData* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setTextureData(data_QByteArray);
}

QSize* QQuick3DTextureData_Size(const QQuick3DTextureData* self) {
    return new QSize(self->size());
}

void QQuick3DTextureData_SetSize(QQuick3DTextureData* self, const QSize* size) {
    self->setSize(*size);
}

int QQuick3DTextureData_Depth(const QQuick3DTextureData* self) {
    return self->depth();
}

void QQuick3DTextureData_SetDepth(QQuick3DTextureData* self, int depth) {
    self->setDepth(static_cast<int>(depth));
}

int QQuick3DTextureData_Format(const QQuick3DTextureData* self) {
    return static_cast<int>(self->format());
}

void QQuick3DTextureData_SetFormat(QQuick3DTextureData* self, int format) {
    self->setFormat(static_cast<QQuick3DTextureData::Format>(format));
}

bool QQuick3DTextureData_HasTransparency(const QQuick3DTextureData* self) {
    return self->hasTransparency();
}

void QQuick3DTextureData_SetHasTransparency(QQuick3DTextureData* self, bool hasTransparency) {
    self->setHasTransparency(hasTransparency);
}

void QQuick3DTextureData_TextureDataNodeDirty(QQuick3DTextureData* self) {
    self->textureDataNodeDirty();
}

void QQuick3DTextureData_Connect_TextureDataNodeDirty(QQuick3DTextureData* self, intptr_t slot) {
    void (*slotFunc)(QQuick3DTextureData*) = reinterpret_cast<void (*)(QQuick3DTextureData*)>(slot);
    QQuick3DTextureData::connect(self,
                                 static_cast<void (QQuick3DTextureData::*)()>(&QQuick3DTextureData::textureDataNodeDirty),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

void QQuick3DTextureData_MarkAllDirty(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->markAllDirty();
    }
}

libqt_string QQuick3DTextureData_Tr2(const char* s, const char* c) {
    auto _ret = QQuick3DTextureData::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QQuick3DTextureData_Tr3(const char* s, const char* c, int n) {
    auto _ret = QQuick3DTextureData::tr(s, c, static_cast<int>(n));
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
QMetaObject* QQuick3DTextureData_SuperMetaObject(const QQuick3DTextureData* self) {
    return (QMetaObject*)self->QQuick3DTextureData::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetaObject(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self)))
        vqquick3dtexturedata->qquick3dtexturedata_metaobject_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QQuick3DTextureData_SuperMetacast(QQuick3DTextureData* self, const char* param1) {
    return self->QQuick3DTextureData::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetacast(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_metacast_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Metacast_Callback>(slot);
}

// Base class handler implementation
int QQuick3DTextureData_SuperMetacall(QQuick3DTextureData* self, int param1, int param2, void** param3) {
    return self->QQuick3DTextureData::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetacall(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_metacall_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Metacall_Callback>(slot);
}

// Base class handler implementation
void QQuick3DTextureData_SuperMarkAllDirty(QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::markAllDirty();
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::markAllDirty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMarkAllDirty(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_markalldirty_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_MarkAllDirty_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_ItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::itemChange called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::itemChange called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnItemChange(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_itemchange_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ItemChange_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_ClassBegin(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->classBegin();
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::classBegin called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperClassBegin(QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::classBegin();
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::classBegin called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnClassBegin(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_classbegin_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ClassBegin_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_ComponentComplete(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->componentComplete();
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::componentComplete called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperComponentComplete(QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::componentComplete();
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::componentComplete called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnComponentComplete(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_componentcomplete_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ComponentComplete_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_PreSync(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->preSync();
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::preSync called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperPreSync(QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::preSync();
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::preSync called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnPreSync(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_presync_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_PreSync_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DTextureData_Event(QQuick3DTextureData* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QQuick3DTextureData_SuperEvent(QQuick3DTextureData* self, QEvent* event) {
    return self->QQuick3DTextureData::event(event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnEvent(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_event_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Event_Callback>(slot);
}

// Derived class handler implementation
bool QQuick3DTextureData_EventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QQuick3DTextureData_SuperEventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event) {
    return self->QQuick3DTextureData::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnEventFilter(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_eventfilter_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_TimerEvent(QQuick3DTextureData* self, QTimerEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperTimerEvent(QQuick3DTextureData* self, QTimerEvent* event) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnTimerEvent(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_timerevent_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_ChildEvent(QQuick3DTextureData* self, QChildEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperChildEvent(QQuick3DTextureData* self, QChildEvent* event) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnChildEvent(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_childevent_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_CustomEvent(QQuick3DTextureData* self, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperCustomEvent(QQuick3DTextureData* self, QEvent* event) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnCustomEvent(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_customevent_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_ConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnConnectNotify(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_connectnotify_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QQuick3DTextureData_DisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata) {
        vqquick3dtexturedata->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QQuick3DTextureData::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperDisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self)) {
        vqquick3dtexturedata->QQuick3DTextureData::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QQuick3DTextureData::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnDisconnectNotify(QQuick3DTextureData* self, intptr_t slot) {
    if (auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self))
        vqquick3dtexturedata->qquick3dtexturedata_disconnectnotify_callback = reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool QQuick3DTextureData_IsComponentComplete(const QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self))) {
        return vqquick3dtexturedata->VirtualQQuick3DTextureData::isComponentComplete();
    } else
        qFatal("Error: Protected method QQuick3DTextureData::isComponentComplete called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QQuick3DTextureData_Sender(const QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self))) {
        return vqquick3dtexturedata->VirtualQQuick3DTextureData::sender();
    } else
        qFatal("Error: Protected method QQuick3DTextureData::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DTextureData_SenderSignalIndex(const QQuick3DTextureData* self) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self))) {
        return vqquick3dtexturedata->VirtualQQuick3DTextureData::senderSignalIndex();
    } else
        qFatal("Error: Protected method QQuick3DTextureData::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QQuick3DTextureData_Receivers(const QQuick3DTextureData* self, const char* signal) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self))) {
        return vqquick3dtexturedata->VirtualQQuick3DTextureData::receivers(signal);
    } else
        qFatal("Error: Protected method QQuick3DTextureData::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QQuick3DTextureData_IsSignalConnected(const QQuick3DTextureData* self, const QMetaMethod* signal) {
    if (auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self))) {
        return vqquick3dtexturedata->VirtualQQuick3DTextureData::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QQuick3DTextureData::isSignalConnected called without a directly constructed type");
}

void QQuick3DTextureData_Delete(QQuick3DTextureData* self) {
    delete self;
}
