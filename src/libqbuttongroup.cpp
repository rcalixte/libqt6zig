#include <QAbstractButton>
#include <QButtonGroup>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbuttongroup.h>
#include "libqbuttongroup.h"
#include "libqbuttongroup.hxx"

QButtonGroup* QButtonGroup_new() {
    return new VirtualQButtonGroup();
}

QButtonGroup* QButtonGroup_new2(QObject* parent) {
    return new VirtualQButtonGroup(parent);
}

QMetaObject* QButtonGroup_MetaObject(const QButtonGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QButtonGroup_Metacast(QButtonGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QButtonGroup_Metacall(QButtonGroup* self, int param1, int param2, void** param3) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQButtonGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QButtonGroup_OnMetacall(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Metacall_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QButtonGroup_QBaseMetacall(QButtonGroup* self, int param1, int param2, void** param3) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Metacall_IsBase(true);
        return vqbuttongroup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQButtonGroup*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QButtonGroup_Tr(const char* s) {
    QString _ret = QButtonGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QButtonGroup_SetExclusive(QButtonGroup* self, bool exclusive) {
    self->setExclusive(exclusive);
}

bool QButtonGroup_Exclusive(const QButtonGroup* self) {
    return self->exclusive();
}

void QButtonGroup_AddButton(QButtonGroup* self, QAbstractButton* param1) {
    self->addButton(param1);
}

void QButtonGroup_RemoveButton(QButtonGroup* self, QAbstractButton* param1) {
    self->removeButton(param1);
}

libqt_list /* of QAbstractButton* */ QButtonGroup_Buttons(const QButtonGroup* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAbstractButton* QButtonGroup_CheckedButton(const QButtonGroup* self) {
    return self->checkedButton();
}

QAbstractButton* QButtonGroup_Button(const QButtonGroup* self, int id) {
    return self->button(static_cast<int>(id));
}

void QButtonGroup_SetId(QButtonGroup* self, QAbstractButton* button, int id) {
    self->setId(button, static_cast<int>(id));
}

int QButtonGroup_Id(const QButtonGroup* self, QAbstractButton* button) {
    return self->id(button);
}

int QButtonGroup_CheckedId(const QButtonGroup* self) {
    return self->checkedId();
}

void QButtonGroup_ButtonClicked(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonClicked(param1);
}

void QButtonGroup_Connect_ButtonClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonClicked, [self, slotFunc](QAbstractButton* param1) {
        QAbstractButton* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_ButtonPressed(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonPressed(param1);
}

void QButtonGroup_Connect_ButtonPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonPressed, [self, slotFunc](QAbstractButton* param1) {
        QAbstractButton* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_ButtonReleased(QButtonGroup* self, QAbstractButton* param1) {
    self->buttonReleased(param1);
}

void QButtonGroup_Connect_ButtonReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonReleased, [self, slotFunc](QAbstractButton* param1) {
        QAbstractButton* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_ButtonToggled(QButtonGroup* self, QAbstractButton* param1, bool param2) {
    self->buttonToggled(param1, param2);
}

void QButtonGroup_Connect_ButtonToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, QAbstractButton*, bool) = reinterpret_cast<void (*)(QButtonGroup*, QAbstractButton*, bool)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::buttonToggled, [self, slotFunc](QAbstractButton* param1, bool param2) {
        QAbstractButton* sigval1 = param1;
        bool sigval2 = param2;
        slotFunc(self, sigval1, sigval2);
    });
}

void QButtonGroup_IdClicked(QButtonGroup* self, int param1) {
    self->idClicked(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdClicked(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idClicked, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_IdPressed(QButtonGroup* self, int param1) {
    self->idPressed(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdPressed(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idPressed, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_IdReleased(QButtonGroup* self, int param1) {
    self->idReleased(static_cast<int>(param1));
}

void QButtonGroup_Connect_IdReleased(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int) = reinterpret_cast<void (*)(QButtonGroup*, int)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idReleased, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QButtonGroup_IdToggled(QButtonGroup* self, int param1, bool param2) {
    self->idToggled(static_cast<int>(param1), param2);
}

void QButtonGroup_Connect_IdToggled(QButtonGroup* self, intptr_t slot) {
    void (*slotFunc)(QButtonGroup*, int, bool) = reinterpret_cast<void (*)(QButtonGroup*, int, bool)>(slot);
    QButtonGroup::connect(self, &QButtonGroup::idToggled, [self, slotFunc](int param1, bool param2) {
        int sigval1 = param1;
        bool sigval2 = param2;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QButtonGroup_Tr2(const char* s, const char* c) {
    QString _ret = QButtonGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QButtonGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QButtonGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QButtonGroup_AddButton2(QButtonGroup* self, QAbstractButton* param1, int id) {
    self->addButton(param1, static_cast<int>(id));
}

// Derived class handler implementation
bool QButtonGroup_Event(QButtonGroup* self, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->event(event);
    } else {
        return self->QButtonGroup::event(event);
    }
}

// Base class handler implementation
bool QButtonGroup_QBaseEvent(QButtonGroup* self, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Event_IsBase(true);
        return vqbuttongroup->event(event);
    } else {
        return self->QButtonGroup::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnEvent(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Event_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QButtonGroup_EventFilter(QButtonGroup* self, QObject* watched, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->eventFilter(watched, event);
    } else {
        return self->QButtonGroup::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QButtonGroup_QBaseEventFilter(QButtonGroup* self, QObject* watched, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_EventFilter_IsBase(true);
        return vqbuttongroup->eventFilter(watched, event);
    } else {
        return self->QButtonGroup::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnEventFilter(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_EventFilter_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QButtonGroup_TimerEvent(QButtonGroup* self, QTimerEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->timerEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QButtonGroup_QBaseTimerEvent(QButtonGroup* self, QTimerEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_TimerEvent_IsBase(true);
        vqbuttongroup->timerEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnTimerEvent(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_TimerEvent_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QButtonGroup_ChildEvent(QButtonGroup* self, QChildEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->childEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QButtonGroup_QBaseChildEvent(QButtonGroup* self, QChildEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_ChildEvent_IsBase(true);
        vqbuttongroup->childEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnChildEvent(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_ChildEvent_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QButtonGroup_CustomEvent(QButtonGroup* self, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->customEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QButtonGroup_QBaseCustomEvent(QButtonGroup* self, QEvent* event) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_CustomEvent_IsBase(true);
        vqbuttongroup->customEvent(event);
    } else {
        ((VirtualQButtonGroup*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnCustomEvent(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_CustomEvent_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QButtonGroup_ConnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->connectNotify(*signal);
    } else {
        ((VirtualQButtonGroup*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QButtonGroup_QBaseConnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_ConnectNotify_IsBase(true);
        vqbuttongroup->connectNotify(*signal);
    } else {
        ((VirtualQButtonGroup*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnConnectNotify(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_ConnectNotify_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QButtonGroup_DisconnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->disconnectNotify(*signal);
    } else {
        ((VirtualQButtonGroup*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QButtonGroup_QBaseDisconnectNotify(QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_DisconnectNotify_IsBase(true);
        vqbuttongroup->disconnectNotify(*signal);
    } else {
        ((VirtualQButtonGroup*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnDisconnectNotify(QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = dynamic_cast<VirtualQButtonGroup*>(self);
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_DisconnectNotify_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QButtonGroup_Sender(const QButtonGroup* self) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->sender();
    } else {
        return ((VirtualQButtonGroup*)self)->sender();
    }
}

// Base class handler implementation
QObject* QButtonGroup_QBaseSender(const QButtonGroup* self) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Sender_IsBase(true);
        return vqbuttongroup->sender();
    } else {
        return ((VirtualQButtonGroup*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnSender(const QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Sender_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QButtonGroup_SenderSignalIndex(const QButtonGroup* self) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->senderSignalIndex();
    } else {
        return ((VirtualQButtonGroup*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QButtonGroup_QBaseSenderSignalIndex(const QButtonGroup* self) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_SenderSignalIndex_IsBase(true);
        return vqbuttongroup->senderSignalIndex();
    } else {
        return ((VirtualQButtonGroup*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnSenderSignalIndex(const QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QButtonGroup_Receivers(const QButtonGroup* self, const char* signal) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->receivers(signal);
    } else {
        return ((VirtualQButtonGroup*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QButtonGroup_QBaseReceivers(const QButtonGroup* self, const char* signal) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Receivers_IsBase(true);
        return vqbuttongroup->receivers(signal);
    } else {
        return ((VirtualQButtonGroup*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnReceivers(const QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_Receivers_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QButtonGroup_IsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        return vqbuttongroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQButtonGroup*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QButtonGroup_QBaseIsSignalConnected(const QButtonGroup* self, const QMetaMethod* signal) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_IsSignalConnected_IsBase(true);
        return vqbuttongroup->isSignalConnected(*signal);
    } else {
        return ((VirtualQButtonGroup*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QButtonGroup_OnIsSignalConnected(const QButtonGroup* self, intptr_t slot) {
    auto* vqbuttongroup = const_cast<VirtualQButtonGroup*>(dynamic_cast<const VirtualQButtonGroup*>(self));
    if (vqbuttongroup && vqbuttongroup->isVirtualQButtonGroup) {
        vqbuttongroup->setQButtonGroup_IsSignalConnected_Callback(reinterpret_cast<VirtualQButtonGroup::QButtonGroup_IsSignalConnected_Callback>(slot));
    }
}

void QButtonGroup_Delete(QButtonGroup* self) {
    delete self;
}
