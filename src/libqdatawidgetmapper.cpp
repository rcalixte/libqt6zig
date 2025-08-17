#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataWidgetMapper>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qdatawidgetmapper.h>
#include "libqdatawidgetmapper.h"
#include "libqdatawidgetmapper.hxx"

QDataWidgetMapper* QDataWidgetMapper_new() {
    return new VirtualQDataWidgetMapper();
}

QDataWidgetMapper* QDataWidgetMapper_new2(QObject* parent) {
    return new VirtualQDataWidgetMapper(parent);
}

QMetaObject* QDataWidgetMapper_MetaObject(const QDataWidgetMapper* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDataWidgetMapper_Metacast(QDataWidgetMapper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDataWidgetMapper_Metacall(QDataWidgetMapper* self, int param1, int param2, void** param3) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDataWidgetMapper_OnMetacall(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Metacall_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDataWidgetMapper_QBaseMetacall(QDataWidgetMapper* self, int param1, int param2, void** param3) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Metacall_IsBase(true);
        return vqdatawidgetmapper->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDataWidgetMapper_Tr(const char* s) {
    QString _ret = QDataWidgetMapper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDataWidgetMapper_SetModel(QDataWidgetMapper* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QAbstractItemModel* QDataWidgetMapper_Model(const QDataWidgetMapper* self) {
    return self->model();
}

void QDataWidgetMapper_SetItemDelegate(QDataWidgetMapper* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QDataWidgetMapper_ItemDelegate(const QDataWidgetMapper* self) {
    return self->itemDelegate();
}

void QDataWidgetMapper_SetRootIndex(QDataWidgetMapper* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

QModelIndex* QDataWidgetMapper_RootIndex(const QDataWidgetMapper* self) {
    return new QModelIndex(self->rootIndex());
}

void QDataWidgetMapper_SetOrientation(QDataWidgetMapper* self, int aOrientation) {
    self->setOrientation(static_cast<Qt::Orientation>(aOrientation));
}

int QDataWidgetMapper_Orientation(const QDataWidgetMapper* self) {
    return static_cast<int>(self->orientation());
}

void QDataWidgetMapper_SetSubmitPolicy(QDataWidgetMapper* self, int policy) {
    self->setSubmitPolicy(static_cast<QDataWidgetMapper::SubmitPolicy>(policy));
}

int QDataWidgetMapper_SubmitPolicy(const QDataWidgetMapper* self) {
    return static_cast<int>(self->submitPolicy());
}

void QDataWidgetMapper_AddMapping(QDataWidgetMapper* self, QWidget* widget, int section) {
    self->addMapping(widget, static_cast<int>(section));
}

void QDataWidgetMapper_AddMapping2(QDataWidgetMapper* self, QWidget* widget, int section, const libqt_string propertyName) {
    QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
    self->addMapping(widget, static_cast<int>(section), propertyName_QByteArray);
}

void QDataWidgetMapper_RemoveMapping(QDataWidgetMapper* self, QWidget* widget) {
    self->removeMapping(widget);
}

int QDataWidgetMapper_MappedSection(const QDataWidgetMapper* self, QWidget* widget) {
    return self->mappedSection(widget);
}

libqt_string QDataWidgetMapper_MappedPropertyName(const QDataWidgetMapper* self, QWidget* widget) {
    QByteArray _qb = self->mappedPropertyName(widget);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* QDataWidgetMapper_MappedWidgetAt(const QDataWidgetMapper* self, int section) {
    return self->mappedWidgetAt(static_cast<int>(section));
}

void QDataWidgetMapper_ClearMapping(QDataWidgetMapper* self) {
    self->clearMapping();
}

int QDataWidgetMapper_CurrentIndex(const QDataWidgetMapper* self) {
    return self->currentIndex();
}

void QDataWidgetMapper_Revert(QDataWidgetMapper* self) {
    self->revert();
}

bool QDataWidgetMapper_Submit(QDataWidgetMapper* self) {
    return self->submit();
}

void QDataWidgetMapper_ToFirst(QDataWidgetMapper* self) {
    self->toFirst();
}

void QDataWidgetMapper_ToLast(QDataWidgetMapper* self) {
    self->toLast();
}

void QDataWidgetMapper_ToNext(QDataWidgetMapper* self) {
    self->toNext();
}

void QDataWidgetMapper_ToPrevious(QDataWidgetMapper* self) {
    self->toPrevious();
}

void QDataWidgetMapper_SetCurrentModelIndex(QDataWidgetMapper* self, const QModelIndex* index) {
    self->setCurrentModelIndex(*index);
}

void QDataWidgetMapper_CurrentIndexChanged(QDataWidgetMapper* self, int index) {
    self->currentIndexChanged(static_cast<int>(index));
}

void QDataWidgetMapper_Connect_CurrentIndexChanged(QDataWidgetMapper* self, intptr_t slot) {
    void (*slotFunc)(QDataWidgetMapper*, int) = reinterpret_cast<void (*)(QDataWidgetMapper*, int)>(slot);
    QDataWidgetMapper::connect(self, &QDataWidgetMapper::currentIndexChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

libqt_string QDataWidgetMapper_Tr2(const char* s, const char* c) {
    QString _ret = QDataWidgetMapper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDataWidgetMapper_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDataWidgetMapper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QDataWidgetMapper_SetCurrentIndex(QDataWidgetMapper* self, int index) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setCurrentIndex(static_cast<int>(index));
    } else {
        self->QDataWidgetMapper::setCurrentIndex(static_cast<int>(index));
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseSetCurrentIndex(QDataWidgetMapper* self, int index) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_SetCurrentIndex_IsBase(true);
        vqdatawidgetmapper->setCurrentIndex(static_cast<int>(index));
    } else {
        self->QDataWidgetMapper::setCurrentIndex(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnSetCurrentIndex(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_SetCurrentIndex_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_SetCurrentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDataWidgetMapper_Event(QDataWidgetMapper* self, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->event(event);
    } else {
        return self->QDataWidgetMapper::event(event);
    }
}

// Base class handler implementation
bool QDataWidgetMapper_QBaseEvent(QDataWidgetMapper* self, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Event_IsBase(true);
        return vqdatawidgetmapper->event(event);
    } else {
        return self->QDataWidgetMapper::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnEvent(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Event_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDataWidgetMapper_EventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->eventFilter(watched, event);
    } else {
        return self->QDataWidgetMapper::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDataWidgetMapper_QBaseEventFilter(QDataWidgetMapper* self, QObject* watched, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_EventFilter_IsBase(true);
        return vqdatawidgetmapper->eventFilter(watched, event);
    } else {
        return self->QDataWidgetMapper::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnEventFilter(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_EventFilter_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDataWidgetMapper_TimerEvent(QDataWidgetMapper* self, QTimerEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->timerEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseTimerEvent(QDataWidgetMapper* self, QTimerEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_TimerEvent_IsBase(true);
        vqdatawidgetmapper->timerEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnTimerEvent(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_TimerEvent_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDataWidgetMapper_ChildEvent(QDataWidgetMapper* self, QChildEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->childEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseChildEvent(QDataWidgetMapper* self, QChildEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_ChildEvent_IsBase(true);
        vqdatawidgetmapper->childEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnChildEvent(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_ChildEvent_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDataWidgetMapper_CustomEvent(QDataWidgetMapper* self, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->customEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseCustomEvent(QDataWidgetMapper* self, QEvent* event) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_CustomEvent_IsBase(true);
        vqdatawidgetmapper->customEvent(event);
    } else {
        ((VirtualQDataWidgetMapper*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnCustomEvent(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_CustomEvent_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDataWidgetMapper_ConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->connectNotify(*signal);
    } else {
        ((VirtualQDataWidgetMapper*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseConnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_ConnectNotify_IsBase(true);
        vqdatawidgetmapper->connectNotify(*signal);
    } else {
        ((VirtualQDataWidgetMapper*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnConnectNotify(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_ConnectNotify_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDataWidgetMapper_DisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQDataWidgetMapper*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDataWidgetMapper_QBaseDisconnectNotify(QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_DisconnectNotify_IsBase(true);
        vqdatawidgetmapper->disconnectNotify(*signal);
    } else {
        ((VirtualQDataWidgetMapper*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnDisconnectNotify(QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = dynamic_cast<VirtualQDataWidgetMapper*>(self);
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_DisconnectNotify_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDataWidgetMapper_Sender(const QDataWidgetMapper* self) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->sender();
    } else {
        return ((VirtualQDataWidgetMapper*)self)->sender();
    }
}

// Base class handler implementation
QObject* QDataWidgetMapper_QBaseSender(const QDataWidgetMapper* self) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Sender_IsBase(true);
        return vqdatawidgetmapper->sender();
    } else {
        return ((VirtualQDataWidgetMapper*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnSender(const QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Sender_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDataWidgetMapper_SenderSignalIndex(const QDataWidgetMapper* self) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->senderSignalIndex();
    } else {
        return ((VirtualQDataWidgetMapper*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QDataWidgetMapper_QBaseSenderSignalIndex(const QDataWidgetMapper* self) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_SenderSignalIndex_IsBase(true);
        return vqdatawidgetmapper->senderSignalIndex();
    } else {
        return ((VirtualQDataWidgetMapper*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnSenderSignalIndex(const QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDataWidgetMapper_Receivers(const QDataWidgetMapper* self, const char* signal) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->receivers(signal);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QDataWidgetMapper_QBaseReceivers(const QDataWidgetMapper* self, const char* signal) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Receivers_IsBase(true);
        return vqdatawidgetmapper->receivers(signal);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnReceivers(const QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_Receivers_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDataWidgetMapper_IsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        return vqdatawidgetmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDataWidgetMapper_QBaseIsSignalConnected(const QDataWidgetMapper* self, const QMetaMethod* signal) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_IsSignalConnected_IsBase(true);
        return vqdatawidgetmapper->isSignalConnected(*signal);
    } else {
        return ((VirtualQDataWidgetMapper*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDataWidgetMapper_OnIsSignalConnected(const QDataWidgetMapper* self, intptr_t slot) {
    auto* vqdatawidgetmapper = const_cast<VirtualQDataWidgetMapper*>(dynamic_cast<const VirtualQDataWidgetMapper*>(self));
    if (vqdatawidgetmapper && vqdatawidgetmapper->isVirtualQDataWidgetMapper) {
        vqdatawidgetmapper->setQDataWidgetMapper_IsSignalConnected_Callback(reinterpret_cast<VirtualQDataWidgetMapper::QDataWidgetMapper_IsSignalConnected_Callback>(slot));
    }
}

void QDataWidgetMapper_Delete(QDataWidgetMapper* self) {
    delete self;
}
