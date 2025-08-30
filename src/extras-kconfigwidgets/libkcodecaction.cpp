#include <KCodecAction>
#include <KSelectAction>
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <kcodecaction.h>
#include "libkcodecaction.h"
#include "libkcodecaction.hxx"

KCodecAction* KCodecAction_new(QObject* parent) {
    return new VirtualKCodecAction(parent);
}

KCodecAction* KCodecAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKCodecAction(text_QString, parent);
}

KCodecAction* KCodecAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKCodecAction(*icon, text_QString, parent);
}

KCodecAction* KCodecAction_new4(QObject* parent, bool showAutoOptions) {
    return new VirtualKCodecAction(parent, showAutoOptions);
}

KCodecAction* KCodecAction_new5(const libqt_string text, QObject* parent, bool showAutoOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKCodecAction(text_QString, parent, showAutoOptions);
}

KCodecAction* KCodecAction_new6(const QIcon* icon, const libqt_string text, QObject* parent, bool showAutoOptions) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKCodecAction(*icon, text_QString, parent, showAutoOptions);
}

QMetaObject* KCodecAction_MetaObject(const KCodecAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCodecAction_Metacast(KCodecAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCodecAction_Metacall(KCodecAction* self, int param1, int param2, void** param3) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCodecAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCodecAction_Tr(const char* s) {
    QString _ret = KCodecAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCodecAction_CurrentCodecName(const KCodecAction* self) {
    QString _ret = self->currentCodecName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KCodecAction_SetCurrentCodec(KCodecAction* self, const libqt_string codecName) {
    QString codecName_QString = QString::fromUtf8(codecName.data, codecName.len);
    return self->setCurrentCodec(codecName_QString);
}

void KCodecAction_CodecNameTriggered(KCodecAction* self, const libqt_string name) {
    QByteArray name_QByteArray(name.data, name.len);
    self->codecNameTriggered(name_QByteArray);
}

void KCodecAction_Connect_CodecNameTriggered(KCodecAction* self, intptr_t slot) {
    void (*slotFunc)(KCodecAction*, const char*) = reinterpret_cast<void (*)(KCodecAction*, const char*)>(slot);
    KCodecAction::connect(self, &KCodecAction::codecNameTriggered, [self, slotFunc](const QByteArray& name) {
        const QByteArray name_qb = name;
        libqt_string name_str;
        name_str.len = name_qb.length();
        name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
        memcpy((void*)name_str.data, name_qb.data(), name_str.len);
        ((char*)name_str.data)[name_str.len] = '\0';
        const char* sigval1 = name_str.data;
        slotFunc(self, sigval1);
    });
}

void KCodecAction_DefaultItemTriggered(KCodecAction* self) {
    self->defaultItemTriggered();
}

void KCodecAction_Connect_DefaultItemTriggered(KCodecAction* self, intptr_t slot) {
    void (*slotFunc)(KCodecAction*) = reinterpret_cast<void (*)(KCodecAction*)>(slot);
    KCodecAction::connect(self, &KCodecAction::defaultItemTriggered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KCodecAction_SlotActionTriggered(KCodecAction* self, QAction* param1) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->slotActionTriggered(param1);
    }
}

libqt_string KCodecAction_Tr2(const char* s, const char* c) {
    QString _ret = KCodecAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCodecAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KCodecAction::tr(s, c, static_cast<int>(n));
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
int KCodecAction_QBaseMetacall(KCodecAction* self, int param1, int param2, void** param3) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Metacall_IsBase(true);
        return vkcodecaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KCodecAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnMetacall(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Metacall_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KCodecAction_QBaseSlotActionTriggered(KCodecAction* self, QAction* param1) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SlotActionTriggered_IsBase(true);
        vkcodecaction->slotActionTriggered(param1);
    } else {
        ((VirtualKCodecAction*)self)->slotActionTriggered(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnSlotActionTriggered(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SlotActionTriggered_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_SlotActionTriggered_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* KCodecAction_RemoveAction(KCodecAction* self, QAction* action) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->removeAction(action);
    } else {
        return self->KCodecAction::removeAction(action);
    }
}

// Base class handler implementation
QAction* KCodecAction_QBaseRemoveAction(KCodecAction* self, QAction* action) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_RemoveAction_IsBase(true);
        return vkcodecaction->removeAction(action);
    } else {
        return self->KCodecAction::removeAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnRemoveAction(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_RemoveAction_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_RemoveAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_InsertAction(KCodecAction* self, QAction* before, QAction* action) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->insertAction(before, action);
    } else {
        self->KCodecAction::insertAction(before, action);
    }
}

// Base class handler implementation
void KCodecAction_QBaseInsertAction(KCodecAction* self, QAction* before, QAction* action) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_InsertAction_IsBase(true);
        vkcodecaction->insertAction(before, action);
    } else {
        self->KCodecAction::insertAction(before, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnInsertAction(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_InsertAction_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_InsertAction_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KCodecAction_CreateWidget(KCodecAction* self, QWidget* parent) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->createWidget(parent);
    } else {
        return ((VirtualKCodecAction*)self)->createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KCodecAction_QBaseCreateWidget(KCodecAction* self, QWidget* parent) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CreateWidget_IsBase(true);
        return vkcodecaction->createWidget(parent);
    } else {
        return ((VirtualKCodecAction*)self)->createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnCreateWidget(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CreateWidget_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_DeleteWidget(KCodecAction* self, QWidget* widget) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->deleteWidget(widget);
    } else {
        ((VirtualKCodecAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KCodecAction_QBaseDeleteWidget(KCodecAction* self, QWidget* widget) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_DeleteWidget_IsBase(true);
        vkcodecaction->deleteWidget(widget);
    } else {
        ((VirtualKCodecAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnDeleteWidget(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_DeleteWidget_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCodecAction_Event(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->event(event);
    } else {
        return ((VirtualKCodecAction*)self)->event(event);
    }
}

// Base class handler implementation
bool KCodecAction_QBaseEvent(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Event_IsBase(true);
        return vkcodecaction->event(event);
    } else {
        return ((VirtualKCodecAction*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnEvent(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Event_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCodecAction_EventFilter(KCodecAction* self, QObject* watched, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->eventFilter(watched, event);
    } else {
        return ((VirtualKCodecAction*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCodecAction_QBaseEventFilter(KCodecAction* self, QObject* watched, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_EventFilter_IsBase(true);
        return vkcodecaction->eventFilter(watched, event);
    } else {
        return ((VirtualKCodecAction*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnEventFilter(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_EventFilter_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_TimerEvent(KCodecAction* self, QTimerEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->timerEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCodecAction_QBaseTimerEvent(KCodecAction* self, QTimerEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_TimerEvent_IsBase(true);
        vkcodecaction->timerEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnTimerEvent(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_TimerEvent_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_ChildEvent(KCodecAction* self, QChildEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->childEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCodecAction_QBaseChildEvent(KCodecAction* self, QChildEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_ChildEvent_IsBase(true);
        vkcodecaction->childEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnChildEvent(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_ChildEvent_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_CustomEvent(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->customEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCodecAction_QBaseCustomEvent(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CustomEvent_IsBase(true);
        vkcodecaction->customEvent(event);
    } else {
        ((VirtualKCodecAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnCustomEvent(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CustomEvent_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_ConnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->connectNotify(*signal);
    } else {
        ((VirtualKCodecAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCodecAction_QBaseConnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_ConnectNotify_IsBase(true);
        vkcodecaction->connectNotify(*signal);
    } else {
        ((VirtualKCodecAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnConnectNotify(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_ConnectNotify_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_DisconnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->disconnectNotify(*signal);
    } else {
        ((VirtualKCodecAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCodecAction_QBaseDisconnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_DisconnectNotify_IsBase(true);
        vkcodecaction->disconnectNotify(*signal);
    } else {
        ((VirtualKCodecAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnDisconnectNotify(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCodecAction_SlotToggled(KCodecAction* self, bool param1) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->slotToggled(param1);
    } else {
        ((VirtualKCodecAction*)self)->slotToggled(param1);
    }
}

// Base class handler implementation
void KCodecAction_QBaseSlotToggled(KCodecAction* self, bool param1) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SlotToggled_IsBase(true);
        vkcodecaction->slotToggled(param1);
    } else {
        ((VirtualKCodecAction*)self)->slotToggled(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnSlotToggled(KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SlotToggled_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KCodecAction_CreatedWidgets(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        QList<QWidget*> _ret = vkcodecaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKCodecAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QWidget* */ KCodecAction_QBaseCreatedWidgets(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkcodecaction->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QWidget*> _ret = ((VirtualKCodecAction*)self)->createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnCreatedWidgets(const KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCodecAction_Sender(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->sender();
    } else {
        return ((VirtualKCodecAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCodecAction_QBaseSender(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Sender_IsBase(true);
        return vkcodecaction->sender();
    } else {
        return ((VirtualKCodecAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnSender(const KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Sender_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCodecAction_SenderSignalIndex(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->senderSignalIndex();
    } else {
        return ((VirtualKCodecAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCodecAction_QBaseSenderSignalIndex(const KCodecAction* self) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SenderSignalIndex_IsBase(true);
        return vkcodecaction->senderSignalIndex();
    } else {
        return ((VirtualKCodecAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnSenderSignalIndex(const KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCodecAction_Receivers(const KCodecAction* self, const char* signal) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->receivers(signal);
    } else {
        return ((VirtualKCodecAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCodecAction_QBaseReceivers(const KCodecAction* self, const char* signal) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Receivers_IsBase(true);
        return vkcodecaction->receivers(signal);
    } else {
        return ((VirtualKCodecAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnReceivers(const KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_Receivers_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCodecAction_IsSignalConnected(const KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        return vkcodecaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKCodecAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCodecAction_QBaseIsSignalConnected(const KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_IsSignalConnected_IsBase(true);
        return vkcodecaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKCodecAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnIsSignalConnected(const KCodecAction* self, intptr_t slot) {
    auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self));
    if (vkcodecaction && vkcodecaction->isVirtualKCodecAction) {
        vkcodecaction->setKCodecAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKCodecAction::KCodecAction_IsSignalConnected_Callback>(slot));
    }
}

void KCodecAction_Delete(KCodecAction* self) {
    delete self;
}
