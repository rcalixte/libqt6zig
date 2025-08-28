#include <KFontSizeAction>
#include <KSelectAction>
#include <QAction>
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
#include <kfontsizeaction.h>
#include "libkfontsizeaction.h"
#include "libkfontsizeaction.hxx"

KFontSizeAction* KFontSizeAction_new(QObject* parent) {
    return new VirtualKFontSizeAction(parent);
}

KFontSizeAction* KFontSizeAction_new2(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKFontSizeAction(text_QString, parent);
}

KFontSizeAction* KFontSizeAction_new3(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKFontSizeAction(*icon, text_QString, parent);
}

QMetaObject* KFontSizeAction_MetaObject(const KFontSizeAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontSizeAction_Metacast(KFontSizeAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontSizeAction_Metacall(KFontSizeAction* self, int param1, int param2, void** param3) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontSizeAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KFontSizeAction_OnMetacall(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Metacall_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KFontSizeAction_QBaseMetacall(KFontSizeAction* self, int param1, int param2, void** param3) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Metacall_IsBase(true);
        return vkfontsizeaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontSizeAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFontSizeAction_Tr(const char* s) {
    QString _ret = KFontSizeAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KFontSizeAction_FontSize(const KFontSizeAction* self) {
    return self->fontSize();
}

void KFontSizeAction_SetFontSize(KFontSizeAction* self, int size) {
    self->setFontSize(static_cast<int>(size));
}

void KFontSizeAction_FontSizeChanged(KFontSizeAction* self, int param1) {
    self->fontSizeChanged(static_cast<int>(param1));
}

void KFontSizeAction_Connect_FontSizeChanged(KFontSizeAction* self, intptr_t slot) {
    void (*slotFunc)(KFontSizeAction*, int) = reinterpret_cast<void (*)(KFontSizeAction*, int)>(slot);
    KFontSizeAction::connect(self, &KFontSizeAction::fontSizeChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KFontSizeAction_SlotActionTriggered(KFontSizeAction* self, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->slotActionTriggered(action);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KFontSizeAction_OnSlotActionTriggered(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SlotActionTriggered_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_SlotActionTriggered_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KFontSizeAction_QBaseSlotActionTriggered(KFontSizeAction* self, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SlotActionTriggered_IsBase(true);
        vkfontsizeaction->slotActionTriggered(action);
    }
}

libqt_string KFontSizeAction_Tr2(const char* s, const char* c) {
    QString _ret = KFontSizeAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontSizeAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFontSizeAction::tr(s, c, static_cast<int>(n));
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
QAction* KFontSizeAction_RemoveAction(KFontSizeAction* self, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->removeAction(action);
    } else {
        return self->KFontSizeAction::removeAction(action);
    }
}

// Base class handler implementation
QAction* KFontSizeAction_QBaseRemoveAction(KFontSizeAction* self, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_RemoveAction_IsBase(true);
        return vkfontsizeaction->removeAction(action);
    } else {
        return self->KFontSizeAction::removeAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnRemoveAction(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_RemoveAction_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_RemoveAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_InsertAction(KFontSizeAction* self, QAction* before, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->insertAction(before, action);
    } else {
        self->KFontSizeAction::insertAction(before, action);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseInsertAction(KFontSizeAction* self, QAction* before, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_InsertAction_IsBase(true);
        vkfontsizeaction->insertAction(before, action);
    } else {
        self->KFontSizeAction::insertAction(before, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnInsertAction(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_InsertAction_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_InsertAction_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* KFontSizeAction_CreateWidget(KFontSizeAction* self, QWidget* parent) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->createWidget(parent);
    } else {
        return ((VirtualKFontSizeAction*)self)->createWidget(parent);
    }
}

// Base class handler implementation
QWidget* KFontSizeAction_QBaseCreateWidget(KFontSizeAction* self, QWidget* parent) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CreateWidget_IsBase(true);
        return vkfontsizeaction->createWidget(parent);
    } else {
        return ((VirtualKFontSizeAction*)self)->createWidget(parent);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnCreateWidget(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CreateWidget_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_DeleteWidget(KFontSizeAction* self, QWidget* widget) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->deleteWidget(widget);
    } else {
        ((VirtualKFontSizeAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseDeleteWidget(KFontSizeAction* self, QWidget* widget) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_DeleteWidget_IsBase(true);
        vkfontsizeaction->deleteWidget(widget);
    } else {
        ((VirtualKFontSizeAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnDeleteWidget(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_DeleteWidget_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontSizeAction_Event(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->event(event);
    } else {
        return ((VirtualKFontSizeAction*)self)->event(event);
    }
}

// Base class handler implementation
bool KFontSizeAction_QBaseEvent(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Event_IsBase(true);
        return vkfontsizeaction->event(event);
    } else {
        return ((VirtualKFontSizeAction*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnEvent(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Event_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontSizeAction_EventFilter(KFontSizeAction* self, QObject* watched, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->eventFilter(watched, event);
    } else {
        return ((VirtualKFontSizeAction*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFontSizeAction_QBaseEventFilter(KFontSizeAction* self, QObject* watched, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_EventFilter_IsBase(true);
        return vkfontsizeaction->eventFilter(watched, event);
    } else {
        return ((VirtualKFontSizeAction*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnEventFilter(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_EventFilter_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_TimerEvent(KFontSizeAction* self, QTimerEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->timerEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseTimerEvent(KFontSizeAction* self, QTimerEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_TimerEvent_IsBase(true);
        vkfontsizeaction->timerEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnTimerEvent(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_TimerEvent_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_ChildEvent(KFontSizeAction* self, QChildEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->childEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseChildEvent(KFontSizeAction* self, QChildEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_ChildEvent_IsBase(true);
        vkfontsizeaction->childEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnChildEvent(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_ChildEvent_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_CustomEvent(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->customEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseCustomEvent(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CustomEvent_IsBase(true);
        vkfontsizeaction->customEvent(event);
    } else {
        ((VirtualKFontSizeAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnCustomEvent(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CustomEvent_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_ConnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->connectNotify(*signal);
    } else {
        ((VirtualKFontSizeAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseConnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_ConnectNotify_IsBase(true);
        vkfontsizeaction->connectNotify(*signal);
    } else {
        ((VirtualKFontSizeAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnConnectNotify(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_ConnectNotify_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_DisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->disconnectNotify(*signal);
    } else {
        ((VirtualKFontSizeAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseDisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_DisconnectNotify_IsBase(true);
        vkfontsizeaction->disconnectNotify(*signal);
    } else {
        ((VirtualKFontSizeAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnDisconnectNotify(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontSizeAction_SlotToggled(KFontSizeAction* self, bool param1) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->slotToggled(param1);
    } else {
        ((VirtualKFontSizeAction*)self)->slotToggled(param1);
    }
}

// Base class handler implementation
void KFontSizeAction_QBaseSlotToggled(KFontSizeAction* self, bool param1) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SlotToggled_IsBase(true);
        vkfontsizeaction->slotToggled(param1);
    } else {
        ((VirtualKFontSizeAction*)self)->slotToggled(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnSlotToggled(KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SlotToggled_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KFontSizeAction_CreatedWidgets(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        QList<QWidget*> _ret = vkfontsizeaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKFontSizeAction*)self)->createdWidgets();
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
libqt_list /* of QWidget* */ KFontSizeAction_QBaseCreatedWidgets(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkfontsizeaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKFontSizeAction*)self)->createdWidgets();
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
void KFontSizeAction_OnCreatedWidgets(const KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFontSizeAction_Sender(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->sender();
    } else {
        return ((VirtualKFontSizeAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFontSizeAction_QBaseSender(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Sender_IsBase(true);
        return vkfontsizeaction->sender();
    } else {
        return ((VirtualKFontSizeAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnSender(const KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Sender_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontSizeAction_SenderSignalIndex(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->senderSignalIndex();
    } else {
        return ((VirtualKFontSizeAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFontSizeAction_QBaseSenderSignalIndex(const KFontSizeAction* self) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SenderSignalIndex_IsBase(true);
        return vkfontsizeaction->senderSignalIndex();
    } else {
        return ((VirtualKFontSizeAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnSenderSignalIndex(const KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontSizeAction_Receivers(const KFontSizeAction* self, const char* signal) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->receivers(signal);
    } else {
        return ((VirtualKFontSizeAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFontSizeAction_QBaseReceivers(const KFontSizeAction* self, const char* signal) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Receivers_IsBase(true);
        return vkfontsizeaction->receivers(signal);
    } else {
        return ((VirtualKFontSizeAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnReceivers(const KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_Receivers_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontSizeAction_IsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        return vkfontsizeaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontSizeAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFontSizeAction_QBaseIsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_IsSignalConnected_IsBase(true);
        return vkfontsizeaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontSizeAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnIsSignalConnected(const KFontSizeAction* self, intptr_t slot) {
    auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self));
    if (vkfontsizeaction && vkfontsizeaction->isVirtualKFontSizeAction) {
        vkfontsizeaction->setKFontSizeAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_IsSignalConnected_Callback>(slot));
    }
}

void KFontSizeAction_Delete(KFontSizeAction* self) {
    delete self;
}
