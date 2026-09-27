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
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
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
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_MetaObject_IsBase(true);
        return (QMetaObject*)vqquick3dtexturedata->metaObject();
    } else {
        return (QMetaObject*)self->QQuick3DTextureData::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetaObject(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_MetaObject_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QQuick3DTextureData_SuperMetacast(QQuick3DTextureData* self, const char* param1) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_Metacast_IsBase(true);
        return vqquick3dtexturedata->qt_metacast(param1);
    } else {
        return self->QQuick3DTextureData::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetacast(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_Metacast_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Metacast_Callback>(slot));
}

// Base class handler implementation
int QQuick3DTextureData_SuperMetacall(QQuick3DTextureData* self, int param1, int param2, void** param3) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_Metacall_IsBase(true);
        return vqquick3dtexturedata->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QQuick3DTextureData::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMetacall(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_Metacall_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Metacall_Callback>(slot));
}

// Base class handler implementation
void QQuick3DTextureData_SuperMarkAllDirty(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_MarkAllDirty_IsBase(true);
        vqquick3dtexturedata->markAllDirty();
    } else {
        ((VirtualQQuick3DTextureData*)self)->markAllDirty();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnMarkAllDirty(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_MarkAllDirty_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_MarkAllDirty_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_ItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DTextureData*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperItemChange(QQuick3DTextureData* self, int param1, const QQuick3DObject__ItemChangeData* param2) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_ItemChange_IsBase(true);
        vqquick3dtexturedata->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    } else {
        ((VirtualQQuick3DTextureData*)self)->itemChange(static_cast<QQuick3DObject::ItemChange>(param1), *param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnItemChange(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_ItemChange_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ItemChange_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_ClassBegin(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->classBegin();
    } else {
        ((VirtualQQuick3DTextureData*)self)->classBegin();
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperClassBegin(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_ClassBegin_IsBase(true);
        vqquick3dtexturedata->classBegin();
    } else {
        ((VirtualQQuick3DTextureData*)self)->classBegin();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnClassBegin(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_ClassBegin_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ClassBegin_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_ComponentComplete(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->componentComplete();
    } else {
        ((VirtualQQuick3DTextureData*)self)->componentComplete();
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperComponentComplete(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_ComponentComplete_IsBase(true);
        vqquick3dtexturedata->componentComplete();
    } else {
        ((VirtualQQuick3DTextureData*)self)->componentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnComponentComplete(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_ComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ComponentComplete_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_PreSync(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->preSync();
    } else {
        ((VirtualQQuick3DTextureData*)self)->preSync();
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperPreSync(QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_PreSync_IsBase(true);
        vqquick3dtexturedata->preSync();
    } else {
        ((VirtualQQuick3DTextureData*)self)->preSync();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnPreSync(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_PreSync_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_PreSync_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DTextureData_Event(QQuick3DTextureData* self, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->event(event);
    } else {
        return self->QQuick3DTextureData::event(event);
    }
}

// Base class handler implementation
bool QQuick3DTextureData_SuperEvent(QQuick3DTextureData* self, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_Event_IsBase(true);
        return vqquick3dtexturedata->event(event);
    } else {
        return self->QQuick3DTextureData::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnEvent(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_Event_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Event_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DTextureData_EventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->eventFilter(watched, event);
    } else {
        return self->QQuick3DTextureData::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QQuick3DTextureData_SuperEventFilter(QQuick3DTextureData* self, QObject* watched, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_EventFilter_IsBase(true);
        return vqquick3dtexturedata->eventFilter(watched, event);
    } else {
        return self->QQuick3DTextureData::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnEventFilter(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_EventFilter_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_TimerEvent(QQuick3DTextureData* self, QTimerEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->timerEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperTimerEvent(QQuick3DTextureData* self, QTimerEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_TimerEvent_IsBase(true);
        vqquick3dtexturedata->timerEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnTimerEvent(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_TimerEvent_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_ChildEvent(QQuick3DTextureData* self, QChildEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->childEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperChildEvent(QQuick3DTextureData* self, QChildEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_ChildEvent_IsBase(true);
        vqquick3dtexturedata->childEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnChildEvent(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_ChildEvent_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_CustomEvent(QQuick3DTextureData* self, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->customEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperCustomEvent(QQuick3DTextureData* self, QEvent* event) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_CustomEvent_IsBase(true);
        vqquick3dtexturedata->customEvent(event);
    } else {
        ((VirtualQQuick3DTextureData*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnCustomEvent(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_CustomEvent_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_ConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DTextureData*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperConnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_ConnectNotify_IsBase(true);
        vqquick3dtexturedata->connectNotify(*signal);
    } else {
        ((VirtualQQuick3DTextureData*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnConnectNotify(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_ConnectNotify_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QQuick3DTextureData_DisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DTextureData*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QQuick3DTextureData_SuperDisconnectNotify(QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_DisconnectNotify_IsBase(true);
        vqquick3dtexturedata->disconnectNotify(*signal);
    } else {
        ((VirtualQQuick3DTextureData*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnDisconnectNotify(QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = dynamic_cast<VirtualQQuick3DTextureData*>(self);
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_DisconnectNotify_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DTextureData_IsComponentComplete(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->isComponentComplete();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->isComponentComplete();
    }
}

// Base class handler implementation
bool QQuick3DTextureData_SuperIsComponentComplete(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_IsComponentComplete_IsBase(true);
        return vqquick3dtexturedata->isComponentComplete();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->isComponentComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnIsComponentComplete(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_IsComponentComplete_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_IsComponentComplete_Callback>(slot));
}

// Derived class handler implementation
QObject* QQuick3DTextureData_Sender(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->sender();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->sender();
    }
}

// Base class handler implementation
QObject* QQuick3DTextureData_SuperSender(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_Sender_IsBase(true);
        return vqquick3dtexturedata->sender();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnSender(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_Sender_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Sender_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DTextureData_SenderSignalIndex(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QQuick3DTextureData_SuperSenderSignalIndex(const QQuick3DTextureData* self) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_SenderSignalIndex_IsBase(true);
        return vqquick3dtexturedata->senderSignalIndex();
    } else {
        return ((VirtualQQuick3DTextureData*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnSenderSignalIndex(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_SenderSignalIndex_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QQuick3DTextureData_Receivers(const QQuick3DTextureData* self, const char* signal) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->receivers(signal);
    } else {
        return ((VirtualQQuick3DTextureData*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QQuick3DTextureData_SuperReceivers(const QQuick3DTextureData* self, const char* signal) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_Receivers_IsBase(true);
        return vqquick3dtexturedata->receivers(signal);
    } else {
        return ((VirtualQQuick3DTextureData*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnReceivers(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_Receivers_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QQuick3DTextureData_IsSignalConnected(const QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        return vqquick3dtexturedata->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DTextureData*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QQuick3DTextureData_SuperIsSignalConnected(const QQuick3DTextureData* self, const QMetaMethod* signal) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData) {
        vqquick3dtexturedata->setQQuick3DTextureData_IsSignalConnected_IsBase(true);
        return vqquick3dtexturedata->isSignalConnected(*signal);
    } else {
        return ((VirtualQQuick3DTextureData*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QQuick3DTextureData_OnIsSignalConnected(const QQuick3DTextureData* self, intptr_t slot) {
    auto* vqquick3dtexturedata = const_cast<VirtualQQuick3DTextureData*>(dynamic_cast<const VirtualQQuick3DTextureData*>(self));
    if (vqquick3dtexturedata && vqquick3dtexturedata->isVirtualQQuick3DTextureData)
        vqquick3dtexturedata->setQQuick3DTextureData_IsSignalConnected_Callback(reinterpret_cast<VirtualQQuick3DTextureData::QQuick3DTextureData_IsSignalConnected_Callback>(slot));
}

void QQuick3DTextureData_Delete(QQuick3DTextureData* self) {
    delete self;
}
