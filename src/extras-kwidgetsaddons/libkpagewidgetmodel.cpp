#include <KPageModel>
#include <KPageWidgetItem>
#include <KPageWidgetModel>
#include <QAbstractItemModel>
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QIcon>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QModelRoleDataSpan>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <kpagewidgetmodel.h>
#include "libkpagewidgetmodel.h"
#include "libkpagewidgetmodel.hxx"

KPageWidgetItem* KPageWidgetItem_new(QWidget* widget) {
    return new VirtualKPageWidgetItem(widget);
}

KPageWidgetItem* KPageWidgetItem_new2(QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualKPageWidgetItem(widget, name_QString);
}

QMetaObject* KPageWidgetItem_MetaObject(const KPageWidgetItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageWidgetItem_Metacast(KPageWidgetItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageWidgetItem_Metacall(KPageWidgetItem* self, int param1, int param2, void** param3) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageWidgetItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KPageWidgetItem_OnMetacall(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Metacall_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KPageWidgetItem_QBaseMetacall(KPageWidgetItem* self, int param1, int param2, void** param3) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Metacall_IsBase(true);
        return vkpagewidgetitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageWidgetItem*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageWidgetItem_Tr(const char* s) {
    QString _ret = KPageWidgetItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWidget* KPageWidgetItem_Widget(const KPageWidgetItem* self) {
    return self->widget();
}

void KPageWidgetItem_SetName(KPageWidgetItem* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string KPageWidgetItem_Name(const KPageWidgetItem* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageWidgetItem_SetHeader(KPageWidgetItem* self, const libqt_string header) {
    QString header_QString = QString::fromUtf8(header.data, header.len);
    self->setHeader(header_QString);
}

libqt_string KPageWidgetItem_Header(const KPageWidgetItem* self) {
    QString _ret = self->header();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KPageWidgetItem_SetIcon(KPageWidgetItem* self, const QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* KPageWidgetItem_Icon(const KPageWidgetItem* self) {
    return new QIcon(self->icon());
}

void KPageWidgetItem_SetCheckable(KPageWidgetItem* self, bool checkable) {
    self->setCheckable(checkable);
}

bool KPageWidgetItem_IsCheckable(const KPageWidgetItem* self) {
    return self->isCheckable();
}

bool KPageWidgetItem_IsChecked(const KPageWidgetItem* self) {
    return self->isChecked();
}

bool KPageWidgetItem_IsEnabled(const KPageWidgetItem* self) {
    return self->isEnabled();
}

bool KPageWidgetItem_IsHeaderVisible(const KPageWidgetItem* self) {
    return self->isHeaderVisible();
}

void KPageWidgetItem_SetHeaderVisible(KPageWidgetItem* self, bool visible) {
    self->setHeaderVisible(visible);
}

libqt_list /* of QAction* */ KPageWidgetItem_Actions(const KPageWidgetItem* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPageWidgetItem_SetActions(KPageWidgetItem* self, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->setActions(actions_QList);
}

void KPageWidgetItem_SetEnabled(KPageWidgetItem* self, bool enabled) {
    self->setEnabled(enabled);
}

void KPageWidgetItem_SetChecked(KPageWidgetItem* self, bool checked) {
    self->setChecked(checked);
}

void KPageWidgetItem_Changed(KPageWidgetItem* self) {
    self->changed();
}

void KPageWidgetItem_Connect_Changed(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidgetItem*)>(slot);
    KPageWidgetItem::connect(self, &KPageWidgetItem::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KPageWidgetItem_Toggled(KPageWidgetItem* self, bool checked) {
    self->toggled(checked);
}

void KPageWidgetItem_Connect_Toggled(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*, bool) = reinterpret_cast<void (*)(KPageWidgetItem*, bool)>(slot);
    KPageWidgetItem::connect(self, &KPageWidgetItem::toggled, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

void KPageWidgetItem_ActionsChanged(KPageWidgetItem* self) {
    self->actionsChanged();
}

void KPageWidgetItem_Connect_ActionsChanged(KPageWidgetItem* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetItem*) = reinterpret_cast<void (*)(KPageWidgetItem*)>(slot);
    KPageWidgetItem::connect(self, &KPageWidgetItem::actionsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KPageWidgetItem_Tr2(const char* s, const char* c) {
    QString _ret = KPageWidgetItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageWidgetItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPageWidgetItem::tr(s, c, static_cast<int>(n));
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
bool KPageWidgetItem_Event(KPageWidgetItem* self, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->event(event);
    } else {
        return self->KPageWidgetItem::event(event);
    }
}

// Base class handler implementation
bool KPageWidgetItem_QBaseEvent(KPageWidgetItem* self, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Event_IsBase(true);
        return vkpagewidgetitem->event(event);
    } else {
        return self->KPageWidgetItem::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnEvent(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Event_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetItem_EventFilter(KPageWidgetItem* self, QObject* watched, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->eventFilter(watched, event);
    } else {
        return self->KPageWidgetItem::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPageWidgetItem_QBaseEventFilter(KPageWidgetItem* self, QObject* watched, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_EventFilter_IsBase(true);
        return vkpagewidgetitem->eventFilter(watched, event);
    } else {
        return self->KPageWidgetItem::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnEventFilter(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_EventFilter_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetItem_TimerEvent(KPageWidgetItem* self, QTimerEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->timerEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetItem_QBaseTimerEvent(KPageWidgetItem* self, QTimerEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_TimerEvent_IsBase(true);
        vkpagewidgetitem->timerEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnTimerEvent(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_TimerEvent_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetItem_ChildEvent(KPageWidgetItem* self, QChildEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->childEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetItem_QBaseChildEvent(KPageWidgetItem* self, QChildEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_ChildEvent_IsBase(true);
        vkpagewidgetitem->childEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnChildEvent(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_ChildEvent_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetItem_CustomEvent(KPageWidgetItem* self, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->customEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetItem_QBaseCustomEvent(KPageWidgetItem* self, QEvent* event) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_CustomEvent_IsBase(true);
        vkpagewidgetitem->customEvent(event);
    } else {
        ((VirtualKPageWidgetItem*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnCustomEvent(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_CustomEvent_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetItem_ConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->connectNotify(*signal);
    } else {
        ((VirtualKPageWidgetItem*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidgetItem_QBaseConnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_ConnectNotify_IsBase(true);
        vkpagewidgetitem->connectNotify(*signal);
    } else {
        ((VirtualKPageWidgetItem*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnConnectNotify(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_ConnectNotify_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetItem_DisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidgetItem*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidgetItem_QBaseDisconnectNotify(KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_DisconnectNotify_IsBase(true);
        vkpagewidgetitem->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidgetItem*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnDisconnectNotify(KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = dynamic_cast<VirtualKPageWidgetItem*>(self);
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageWidgetItem_Sender(const KPageWidgetItem* self) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->sender();
    } else {
        return ((VirtualKPageWidgetItem*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageWidgetItem_QBaseSender(const KPageWidgetItem* self) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Sender_IsBase(true);
        return vkpagewidgetitem->sender();
    } else {
        return ((VirtualKPageWidgetItem*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnSender(const KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Sender_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetItem_SenderSignalIndex(const KPageWidgetItem* self) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->senderSignalIndex();
    } else {
        return ((VirtualKPageWidgetItem*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageWidgetItem_QBaseSenderSignalIndex(const KPageWidgetItem* self) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_SenderSignalIndex_IsBase(true);
        return vkpagewidgetitem->senderSignalIndex();
    } else {
        return ((VirtualKPageWidgetItem*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnSenderSignalIndex(const KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetItem_Receivers(const KPageWidgetItem* self, const char* signal) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->receivers(signal);
    } else {
        return ((VirtualKPageWidgetItem*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageWidgetItem_QBaseReceivers(const KPageWidgetItem* self, const char* signal) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Receivers_IsBase(true);
        return vkpagewidgetitem->receivers(signal);
    } else {
        return ((VirtualKPageWidgetItem*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnReceivers(const KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_Receivers_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetItem_IsSignalConnected(const KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        return vkpagewidgetitem->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidgetItem*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageWidgetItem_QBaseIsSignalConnected(const KPageWidgetItem* self, const QMetaMethod* signal) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_IsSignalConnected_IsBase(true);
        return vkpagewidgetitem->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidgetItem*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetItem_OnIsSignalConnected(const KPageWidgetItem* self, intptr_t slot) {
    auto* vkpagewidgetitem = const_cast<VirtualKPageWidgetItem*>(dynamic_cast<const VirtualKPageWidgetItem*>(self));
    if (vkpagewidgetitem && vkpagewidgetitem->isVirtualKPageWidgetItem) {
        vkpagewidgetitem->setKPageWidgetItem_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageWidgetItem::KPageWidgetItem_IsSignalConnected_Callback>(slot));
    }
}

void KPageWidgetItem_Delete(KPageWidgetItem* self) {
    delete self;
}

KPageWidgetModel* KPageWidgetModel_new() {
    return new VirtualKPageWidgetModel();
}

KPageWidgetModel* KPageWidgetModel_new2(QObject* parent) {
    return new VirtualKPageWidgetModel(parent);
}

QMetaObject* KPageWidgetModel_MetaObject(const KPageWidgetModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPageWidgetModel_Metacast(KPageWidgetModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPageWidgetModel_Metacall(KPageWidgetModel* self, int param1, int param2, void** param3) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageWidgetModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KPageWidgetModel_OnMetacall(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Metacall_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KPageWidgetModel_QBaseMetacall(KPageWidgetModel* self, int param1, int param2, void** param3) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Metacall_IsBase(true);
        return vkpagewidgetmodel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPageWidgetModel*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPageWidgetModel_Tr(const char* s) {
    QString _ret = KPageWidgetModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPageWidgetItem* KPageWidgetModel_AddPage(KPageWidgetModel* self, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addPage(widget, name_QString);
}

void KPageWidgetModel_AddPage2(KPageWidgetModel* self, KPageWidgetItem* item) {
    self->addPage(item);
}

KPageWidgetItem* KPageWidgetModel_InsertPage(KPageWidgetModel* self, KPageWidgetItem* before, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->insertPage(before, widget, name_QString);
}

void KPageWidgetModel_InsertPage2(KPageWidgetModel* self, KPageWidgetItem* before, KPageWidgetItem* item) {
    self->insertPage(before, item);
}

KPageWidgetItem* KPageWidgetModel_AddSubPage(KPageWidgetModel* self, KPageWidgetItem* parent, QWidget* widget, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->addSubPage(parent, widget, name_QString);
}

void KPageWidgetModel_AddSubPage2(KPageWidgetModel* self, KPageWidgetItem* parent, KPageWidgetItem* item) {
    self->addSubPage(parent, item);
}

void KPageWidgetModel_RemovePage(KPageWidgetModel* self, KPageWidgetItem* item) {
    self->removePage(item);
}

KPageWidgetItem* KPageWidgetModel_Item(const KPageWidgetModel* self, const QModelIndex* index) {
    return self->item(*index);
}

QModelIndex* KPageWidgetModel_Index2(const KPageWidgetModel* self, const KPageWidgetItem* item) {
    return new QModelIndex(self->index(item));
}

void KPageWidgetModel_Toggled(KPageWidgetModel* self, KPageWidgetItem* page, bool checked) {
    self->toggled(page, checked);
}

void KPageWidgetModel_Connect_Toggled(KPageWidgetModel* self, intptr_t slot) {
    void (*slotFunc)(KPageWidgetModel*, KPageWidgetItem*, bool) = reinterpret_cast<void (*)(KPageWidgetModel*, KPageWidgetItem*, bool)>(slot);
    KPageWidgetModel::connect(self, &KPageWidgetModel::toggled, [self, slotFunc](KPageWidgetItem* page, bool checked) {
        KPageWidgetItem* sigval1 = page;
        bool sigval2 = checked;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string KPageWidgetModel_Tr2(const char* s, const char* c) {
    QString _ret = KPageWidgetModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPageWidgetModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPageWidgetModel::tr(s, c, static_cast<int>(n));
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
int KPageWidgetModel_ColumnCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->columnCount(*parent);
    } else {
        return self->KPageWidgetModel::columnCount(*parent);
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseColumnCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ColumnCount_IsBase(true);
        return vkpagewidgetmodel->columnCount(*parent);
    } else {
        return self->KPageWidgetModel::columnCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnColumnCount(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ColumnCount_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ColumnCount_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageWidgetModel_Data(const KPageWidgetModel* self, const QModelIndex* index, int role) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QVariant(vkpagewidgetmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageWidgetModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KPageWidgetModel_QBaseData(const KPageWidgetModel* self, const QModelIndex* index, int role) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Data_IsBase(true);
        return new QVariant(vkpagewidgetmodel->data(*index, static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageWidgetModel*)self)->data(*index, static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Data_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Data_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_SetData(KPageWidgetModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KPageWidgetModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseSetData(KPageWidgetModel* self, const QModelIndex* index, const QVariant* value, int role) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetData_IsBase(true);
        return vkpagewidgetmodel->setData(*index, *value, static_cast<int>(role));
    } else {
        return self->KPageWidgetModel::setData(*index, *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_Flags(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return static_cast<int>(vkpagewidgetmodel->flags(*index));
    } else {
        return static_cast<int>(self->KPageWidgetModel::flags(*index));
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseFlags(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Flags_IsBase(true);
        return static_cast<int>(vkpagewidgetmodel->flags(*index));
    } else {
        return static_cast<int>(self->KPageWidgetModel::flags(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnFlags(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Flags_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Flags_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Index(const KPageWidgetModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QModelIndex(vkpagewidgetmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_QBaseIndex(const KPageWidgetModel* self, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Index_IsBase(true);
        return new QModelIndex(vkpagewidgetmodel->index(static_cast<int>(row), static_cast<int>(column), *parent));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->index(static_cast<int>(row), static_cast<int>(column), *parent));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnIndex(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Index_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Index_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Parent(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QModelIndex(vkpagewidgetmodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->parent(*index));
    }
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_QBaseParent(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Parent_IsBase(true);
        return new QModelIndex(vkpagewidgetmodel->parent(*index));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->parent(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnParent(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Parent_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Parent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_RowCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->rowCount(*parent);
    } else {
        return self->KPageWidgetModel::rowCount(*parent);
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseRowCount(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RowCount_IsBase(true);
        return vkpagewidgetmodel->rowCount(*parent);
    } else {
        return self->KPageWidgetModel::rowCount(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRowCount(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RowCount_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RowCount_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Sibling(const KPageWidgetModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QModelIndex(vkpagewidgetmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_QBaseSibling(const KPageWidgetModel* self, int row, int column, const QModelIndex* idx) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sibling_IsBase(true);
        return new QModelIndex(vkpagewidgetmodel->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSibling(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sibling_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Sibling_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_HasChildren(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->hasChildren(*parent);
    } else {
        return self->KPageWidgetModel::hasChildren(*parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseHasChildren(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_HasChildren_IsBase(true);
        return vkpagewidgetmodel->hasChildren(*parent);
    } else {
        return self->KPageWidgetModel::hasChildren(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnHasChildren(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_HasChildren_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_HasChildren_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPageWidgetModel_HeaderData(const KPageWidgetModel* self, int section, int orientation, int role) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QVariant(vkpagewidgetmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageWidgetModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* KPageWidgetModel_QBaseHeaderData(const KPageWidgetModel* self, int section, int orientation, int role) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_HeaderData_IsBase(true);
        return new QVariant(vkpagewidgetmodel->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualKPageWidgetModel*)self)->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnHeaderData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_HeaderData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_HeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_SetHeaderData(KPageWidgetModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KPageWidgetModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseSetHeaderData(KPageWidgetModel* self, int section, int orientation, const QVariant* value, int role) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetHeaderData_IsBase(true);
        return vkpagewidgetmodel->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    } else {
        return self->KPageWidgetModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetHeaderData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetHeaderData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetHeaderData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to QVariant* */ KPageWidgetModel_ItemData(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        QMap<int, QVariant> _ret = vkpagewidgetmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->KPageWidgetModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to QVariant* */ KPageWidgetModel_QBaseItemData(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ItemData_IsBase(true);
        QMap<int, QVariant> _ret = vkpagewidgetmodel->itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<int, QVariant> _ret = self->KPageWidgetModel::itemData(*index);
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            _varr[_ctr] = new QVariant(_itr->second);
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnItemData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ItemData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_SetItemData(KPageWidgetModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KPageWidgetModel::setItemData(*index, roles_QMap);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseSetItemData(KPageWidgetModel* self, const QModelIndex* index, const libqt_map /* of int to QVariant* */ roles) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    QMap<int, QVariant> roles_QMap;
    int* roles_karr = static_cast<int*>(roles.keys);
    QVariant** roles_varr = static_cast<QVariant**>(roles.values);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetItemData_IsBase(true);
        return vkpagewidgetmodel->setItemData(*index, roles_QMap);
    } else {
        return self->KPageWidgetModel::setItemData(*index, roles_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSetItemData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SetItemData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SetItemData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_ClearItemData(KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->clearItemData(*index);
    } else {
        return self->KPageWidgetModel::clearItemData(*index);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseClearItemData(KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ClearItemData_IsBase(true);
        return vkpagewidgetmodel->clearItemData(*index);
    } else {
        return self->KPageWidgetModel::clearItemData(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnClearItemData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ClearItemData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ClearItemData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KPageWidgetModel_MimeTypes(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        QList<QString> _ret = vkpagewidgetmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->KPageWidgetModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KPageWidgetModel_QBaseMimeTypes(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MimeTypes_IsBase(true);
        QList<QString> _ret = vkpagewidgetmodel->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->KPageWidgetModel::mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMimeTypes(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MimeTypes_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KPageWidgetModel_MimeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->mimeData(indexes_QList);
    } else {
        return self->KPageWidgetModel::mimeData(indexes_QList);
    }
}

// Base class handler implementation
QMimeData* KPageWidgetModel_QBaseMimeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MimeData_IsBase(true);
        return vkpagewidgetmodel->mimeData(indexes_QList);
    } else {
        return self->KPageWidgetModel::mimeData(indexes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMimeData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MimeData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_CanDropMimeData(const KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageWidgetModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseCanDropMimeData(const KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CanDropMimeData_IsBase(true);
        return vkpagewidgetmodel->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageWidgetModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCanDropMimeData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CanDropMimeData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CanDropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_DropMimeData(KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageWidgetModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseDropMimeData(KPageWidgetModel* self, const QMimeData* data, int action, int row, int column, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DropMimeData_IsBase(true);
        return vkpagewidgetmodel->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    } else {
        return self->KPageWidgetModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnDropMimeData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DropMimeData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_SupportedDropActions(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return static_cast<int>(vkpagewidgetmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KPageWidgetModel::supportedDropActions());
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseSupportedDropActions(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SupportedDropActions_IsBase(true);
        return static_cast<int>(vkpagewidgetmodel->supportedDropActions());
    } else {
        return static_cast<int>(self->KPageWidgetModel::supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSupportedDropActions(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SupportedDropActions_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_SupportedDragActions(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return static_cast<int>(vkpagewidgetmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KPageWidgetModel::supportedDragActions());
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseSupportedDragActions(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SupportedDragActions_IsBase(true);
        return static_cast<int>(vkpagewidgetmodel->supportedDragActions());
    } else {
        return static_cast<int>(self->KPageWidgetModel::supportedDragActions());
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSupportedDragActions(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SupportedDragActions_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SupportedDragActions_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_InsertRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseInsertRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_InsertRows_IsBase(true);
        return vkpagewidgetmodel->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnInsertRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_InsertRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_InsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_InsertColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseInsertColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_InsertColumns_IsBase(true);
        return vkpagewidgetmodel->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnInsertColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_InsertColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_InsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_RemoveRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseRemoveRows(KPageWidgetModel* self, int row, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RemoveRows_IsBase(true);
        return vkpagewidgetmodel->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRemoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RemoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_RemoveColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseRemoveColumns(KPageWidgetModel* self, int column, int count, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RemoveColumns_IsBase(true);
        return vkpagewidgetmodel->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    } else {
        return self->KPageWidgetModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRemoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RemoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_MoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageWidgetModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceRow, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MoveRows_IsBase(true);
        return vkpagewidgetmodel->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageWidgetModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_MoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageWidgetModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceColumn, int count, const QModelIndex* destinationParent, int destinationChild) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MoveColumns_IsBase(true);
        return vkpagewidgetmodel->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    } else {
        return self->KPageWidgetModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_FetchMore(KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->fetchMore(*parent);
    } else {
        self->KPageWidgetModel::fetchMore(*parent);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseFetchMore(KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_FetchMore_IsBase(true);
        vkpagewidgetmodel->fetchMore(*parent);
    } else {
        self->KPageWidgetModel::fetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnFetchMore(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_FetchMore_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_FetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_CanFetchMore(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->canFetchMore(*parent);
    } else {
        return self->KPageWidgetModel::canFetchMore(*parent);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseCanFetchMore(const KPageWidgetModel* self, const QModelIndex* parent) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CanFetchMore_IsBase(true);
        return vkpagewidgetmodel->canFetchMore(*parent);
    } else {
        return self->KPageWidgetModel::canFetchMore(*parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCanFetchMore(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CanFetchMore_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CanFetchMore_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_Sort(KPageWidgetModel* self, int column, int order) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KPageWidgetModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseSort(KPageWidgetModel* self, int column, int order) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sort_IsBase(true);
        vkpagewidgetmodel->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    } else {
        self->KPageWidgetModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSort(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sort_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Sort_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_Buddy(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QModelIndex(vkpagewidgetmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->buddy(*index));
    }
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_QBaseBuddy(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Buddy_IsBase(true);
        return new QModelIndex(vkpagewidgetmodel->buddy(*index));
    } else {
        return new QModelIndex(((VirtualKPageWidgetModel*)self)->buddy(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBuddy(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Buddy_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Buddy_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_Match(const KPageWidgetModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        QList<QModelIndex> _ret = vkpagewidgetmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KPageWidgetModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_QBaseMatch(const KPageWidgetModel* self, const QModelIndex* start, int role, const QVariant* value, int hits, int flags) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Match_IsBase(true);
        QList<QModelIndex> _ret = vkpagewidgetmodel->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = self->KPageWidgetModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMatch(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Match_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Match_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPageWidgetModel_Span(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QSize(vkpagewidgetmodel->span(*index));
    } else {
        return new QSize(((VirtualKPageWidgetModel*)self)->span(*index));
    }
}

// Base class handler implementation
QSize* KPageWidgetModel_QBaseSpan(const KPageWidgetModel* self, const QModelIndex* index) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Span_IsBase(true);
        return new QSize(vkpagewidgetmodel->span(*index));
    } else {
        return new QSize(((VirtualKPageWidgetModel*)self)->span(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSpan(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Span_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Span_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_string */ KPageWidgetModel_RoleNames(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        QHash<int, QByteArray> _ret = vkpagewidgetmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->KPageWidgetModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_string */ KPageWidgetModel_QBaseRoleNames(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RoleNames_IsBase(true);
        QHash<int, QByteArray> _ret = vkpagewidgetmodel->roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QHash<int, QByteArray> _ret = self->KPageWidgetModel::roleNames();
        // Convert QHash<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = _itr->first;
            QByteArray _hashval_qb = _itr->second;
            libqt_string _hashval_str;
            _hashval_str.len = _hashval_qb.length();
            _hashval_str.data = static_cast<const char*>(malloc(_hashval_str.len + 1));
            memcpy((void*)_hashval_str.data, _hashval_qb.data(), _hashval_str.len);
            ((char*)_hashval_str.data)[_hashval_str.len] = '\0';
            _varr[_ctr] = _hashval_str;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRoleNames(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_RoleNames_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_RoleNames_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_MultiData(const KPageWidgetModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KPageWidgetModel::multiData(*index, *roleDataSpan);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseMultiData(const KPageWidgetModel* self, const QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MultiData_IsBase(true);
        vkpagewidgetmodel->multiData(*index, *roleDataSpan);
    } else {
        self->KPageWidgetModel::multiData(*index, *roleDataSpan);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnMultiData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_MultiData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_MultiData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_Submit(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->submit();
    } else {
        return self->KPageWidgetModel::submit();
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseSubmit(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Submit_IsBase(true);
        return vkpagewidgetmodel->submit();
    } else {
        return self->KPageWidgetModel::submit();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSubmit(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Submit_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Submit_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_Revert(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->revert();
    } else {
        self->KPageWidgetModel::revert();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseRevert(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Revert_IsBase(true);
        vkpagewidgetmodel->revert();
    } else {
        self->KPageWidgetModel::revert();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnRevert(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Revert_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Revert_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_ResetInternalData(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->resetInternalData();
    } else {
        ((VirtualKPageWidgetModel*)self)->resetInternalData();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseResetInternalData(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ResetInternalData_IsBase(true);
        vkpagewidgetmodel->resetInternalData();
    } else {
        ((VirtualKPageWidgetModel*)self)->resetInternalData();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnResetInternalData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ResetInternalData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ResetInternalData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_Event(KPageWidgetModel* self, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->event(event);
    } else {
        return self->KPageWidgetModel::event(event);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseEvent(KPageWidgetModel* self, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Event_IsBase(true);
        return vkpagewidgetmodel->event(event);
    } else {
        return self->KPageWidgetModel::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEvent(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Event_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_EventFilter(KPageWidgetModel* self, QObject* watched, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->eventFilter(watched, event);
    } else {
        return self->KPageWidgetModel::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseEventFilter(KPageWidgetModel* self, QObject* watched, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EventFilter_IsBase(true);
        return vkpagewidgetmodel->eventFilter(watched, event);
    } else {
        return self->KPageWidgetModel::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEventFilter(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EventFilter_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_TimerEvent(KPageWidgetModel* self, QTimerEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->timerEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseTimerEvent(KPageWidgetModel* self, QTimerEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_TimerEvent_IsBase(true);
        vkpagewidgetmodel->timerEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnTimerEvent(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_TimerEvent_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_ChildEvent(KPageWidgetModel* self, QChildEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->childEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseChildEvent(KPageWidgetModel* self, QChildEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChildEvent_IsBase(true);
        vkpagewidgetmodel->childEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnChildEvent(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChildEvent_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_CustomEvent(KPageWidgetModel* self, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->customEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseCustomEvent(KPageWidgetModel* self, QEvent* event) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CustomEvent_IsBase(true);
        vkpagewidgetmodel->customEvent(event);
    } else {
        ((VirtualKPageWidgetModel*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCustomEvent(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CustomEvent_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_ConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->connectNotify(*signal);
    } else {
        ((VirtualKPageWidgetModel*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseConnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ConnectNotify_IsBase(true);
        vkpagewidgetmodel->connectNotify(*signal);
    } else {
        ((VirtualKPageWidgetModel*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnConnectNotify(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ConnectNotify_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_DisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidgetModel*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseDisconnectNotify(KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DisconnectNotify_IsBase(true);
        vkpagewidgetmodel->disconnectNotify(*signal);
    } else {
        ((VirtualKPageWidgetModel*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnDisconnectNotify(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DisconnectNotify_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* KPageWidgetModel_CreateIndex(const KPageWidgetModel* self, int row, int column) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return new QModelIndex(vkpagewidgetmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* KPageWidgetModel_QBaseCreateIndex(const KPageWidgetModel* self, int row, int column) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CreateIndex_IsBase(true);
        return new QModelIndex(vkpagewidgetmodel->createIndex(static_cast<int>(row), static_cast<int>(column)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnCreateIndex(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_CreateIndex_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_CreateIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EncodeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKPageWidgetModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEncodeData(const KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ indexes, QDataStream* stream) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    QList<QModelIndex> indexes_QList;
    indexes_QList.reserve(indexes.len);
    QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
    for (size_t i = 0; i < indexes.len; ++i) {
        indexes_QList.push_back(*(indexes_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EncodeData_IsBase(true);
        vkpagewidgetmodel->encodeData(indexes_QList, *stream);
    } else {
        ((VirtualKPageWidgetModel*)self)->encodeData(indexes_QList, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEncodeData(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EncodeData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EncodeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_DecodeData(KPageWidgetModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKPageWidgetModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseDecodeData(KPageWidgetModel* self, int row, int column, const QModelIndex* parent, QDataStream* stream) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DecodeData_IsBase(true);
        return vkpagewidgetmodel->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    } else {
        return ((VirtualKPageWidgetModel*)self)->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnDecodeData(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_DecodeData_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_DecodeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_BeginInsertRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseBeginInsertRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginInsertRows_IsBase(true);
        vkpagewidgetmodel->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginInsertRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginInsertRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndInsertRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endInsertRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endInsertRows();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndInsertRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndInsertRows_IsBase(true);
        vkpagewidgetmodel->endInsertRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endInsertRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndInsertRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndInsertRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndInsertRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_BeginRemoveRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseBeginRemoveRows(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginRemoveRows_IsBase(true);
        vkpagewidgetmodel->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginRemoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginRemoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndRemoveRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endRemoveRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endRemoveRows();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndRemoveRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndRemoveRows_IsBase(true);
        vkpagewidgetmodel->endRemoveRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endRemoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndRemoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndRemoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndRemoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_BeginMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKPageWidgetModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseBeginMoveRows(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationRow) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginMoveRows_IsBase(true);
        return vkpagewidgetmodel->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    } else {
        return ((VirtualKPageWidgetModel*)self)->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginMoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginMoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndMoveRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endMoveRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endMoveRows();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndMoveRows(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndMoveRows_IsBase(true);
        vkpagewidgetmodel->endMoveRows();
    } else {
        ((VirtualKPageWidgetModel*)self)->endMoveRows();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndMoveRows(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndMoveRows_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndMoveRows_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_BeginInsertColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseBeginInsertColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginInsertColumns_IsBase(true);
        vkpagewidgetmodel->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginInsertColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginInsertColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndInsertColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endInsertColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endInsertColumns();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndInsertColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndInsertColumns_IsBase(true);
        vkpagewidgetmodel->endInsertColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endInsertColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndInsertColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndInsertColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndInsertColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_BeginRemoveColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseBeginRemoveColumns(KPageWidgetModel* self, const QModelIndex* parent, int first, int last) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginRemoveColumns_IsBase(true);
        vkpagewidgetmodel->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualKPageWidgetModel*)self)->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginRemoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginRemoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndRemoveColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endRemoveColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endRemoveColumns();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndRemoveColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndRemoveColumns_IsBase(true);
        vkpagewidgetmodel->endRemoveColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endRemoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndRemoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndRemoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndRemoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_BeginMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKPageWidgetModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseBeginMoveColumns(KPageWidgetModel* self, const QModelIndex* sourceParent, int sourceFirst, int sourceLast, const QModelIndex* destinationParent, int destinationColumn) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginMoveColumns_IsBase(true);
        return vkpagewidgetmodel->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    } else {
        return ((VirtualKPageWidgetModel*)self)->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginMoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginMoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndMoveColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endMoveColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endMoveColumns();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndMoveColumns(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndMoveColumns_IsBase(true);
        vkpagewidgetmodel->endMoveColumns();
    } else {
        ((VirtualKPageWidgetModel*)self)->endMoveColumns();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndMoveColumns(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndMoveColumns_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndMoveColumns_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_BeginResetModel(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->beginResetModel();
    } else {
        ((VirtualKPageWidgetModel*)self)->beginResetModel();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseBeginResetModel(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginResetModel_IsBase(true);
        vkpagewidgetmodel->beginResetModel();
    } else {
        ((VirtualKPageWidgetModel*)self)->beginResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnBeginResetModel(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_BeginResetModel_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_BeginResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_EndResetModel(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->endResetModel();
    } else {
        ((VirtualKPageWidgetModel*)self)->endResetModel();
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseEndResetModel(KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndResetModel_IsBase(true);
        vkpagewidgetmodel->endResetModel();
    } else {
        ((VirtualKPageWidgetModel*)self)->endResetModel();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnEndResetModel(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_EndResetModel_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_EndResetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_ChangePersistentIndex(KPageWidgetModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKPageWidgetModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseChangePersistentIndex(KPageWidgetModel* self, const QModelIndex* from, const QModelIndex* to) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChangePersistentIndex_IsBase(true);
        vkpagewidgetmodel->changePersistentIndex(*from, *to);
    } else {
        ((VirtualKPageWidgetModel*)self)->changePersistentIndex(*from, *to);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnChangePersistentIndex(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChangePersistentIndex_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ChangePersistentIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void KPageWidgetModel_ChangePersistentIndexList(KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKPageWidgetModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Base class handler implementation
void KPageWidgetModel_QBaseChangePersistentIndexList(KPageWidgetModel* self, const libqt_list /* of QModelIndex* */ from, const libqt_list /* of QModelIndex* */ to) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    QList<QModelIndex> from_QList;
    from_QList.reserve(from.len);
    QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
    for (size_t i = 0; i < from.len; ++i) {
        from_QList.push_back(*(from_arr[i]));
    }
    QList<QModelIndex> to_QList;
    to_QList.reserve(to.len);
    QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
    for (size_t i = 0; i < to.len; ++i) {
        to_QList.push_back(*(to_arr[i]));
    }
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChangePersistentIndexList_IsBase(true);
        vkpagewidgetmodel->changePersistentIndexList(from_QList, to_QList);
    } else {
        ((VirtualKPageWidgetModel*)self)->changePersistentIndexList(from_QList, to_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnChangePersistentIndexList(KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = dynamic_cast<VirtualKPageWidgetModel*>(self);
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_ChangePersistentIndexList_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_ChangePersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_PersistentIndexList(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        QList<QModelIndex> _ret = vkpagewidgetmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKPageWidgetModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ KPageWidgetModel_QBasePersistentIndexList(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_PersistentIndexList_IsBase(true);
        QList<QModelIndex> _ret = vkpagewidgetmodel->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualKPageWidgetModel*)self)->persistentIndexList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnPersistentIndexList(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_PersistentIndexList_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_PersistentIndexList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPageWidgetModel_Sender(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->sender();
    } else {
        return ((VirtualKPageWidgetModel*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPageWidgetModel_QBaseSender(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sender_IsBase(true);
        return vkpagewidgetmodel->sender();
    } else {
        return ((VirtualKPageWidgetModel*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSender(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Sender_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_SenderSignalIndex(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->senderSignalIndex();
    } else {
        return ((VirtualKPageWidgetModel*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseSenderSignalIndex(const KPageWidgetModel* self) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SenderSignalIndex_IsBase(true);
        return vkpagewidgetmodel->senderSignalIndex();
    } else {
        return ((VirtualKPageWidgetModel*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnSenderSignalIndex(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPageWidgetModel_Receivers(const KPageWidgetModel* self, const char* signal) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->receivers(signal);
    } else {
        return ((VirtualKPageWidgetModel*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPageWidgetModel_QBaseReceivers(const KPageWidgetModel* self, const char* signal) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Receivers_IsBase(true);
        return vkpagewidgetmodel->receivers(signal);
    } else {
        return ((VirtualKPageWidgetModel*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnReceivers(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_Receivers_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPageWidgetModel_IsSignalConnected(const KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        return vkpagewidgetmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidgetModel*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPageWidgetModel_QBaseIsSignalConnected(const KPageWidgetModel* self, const QMetaMethod* signal) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_IsSignalConnected_IsBase(true);
        return vkpagewidgetmodel->isSignalConnected(*signal);
    } else {
        return ((VirtualKPageWidgetModel*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPageWidgetModel_OnIsSignalConnected(const KPageWidgetModel* self, intptr_t slot) {
    auto* vkpagewidgetmodel = const_cast<VirtualKPageWidgetModel*>(dynamic_cast<const VirtualKPageWidgetModel*>(self));
    if (vkpagewidgetmodel && vkpagewidgetmodel->isVirtualKPageWidgetModel) {
        vkpagewidgetmodel->setKPageWidgetModel_IsSignalConnected_Callback(reinterpret_cast<VirtualKPageWidgetModel::KPageWidgetModel_IsSignalConnected_Callback>(slot));
    }
}

void KPageWidgetModel_Delete(KPageWidgetModel* self) {
    delete self;
}
