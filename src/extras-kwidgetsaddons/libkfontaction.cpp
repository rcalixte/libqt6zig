#include <KFontAction>
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
#include <kfontaction.h>
#include "libkfontaction.h"
#include "libkfontaction.hxx"

KFontAction* KFontAction_new(unsigned int fontListCriteria, QObject* parent) {
    return new VirtualKFontAction(static_cast<uint>(fontListCriteria), parent);
}

KFontAction* KFontAction_new2(QObject* parent) {
    return new VirtualKFontAction(parent);
}

KFontAction* KFontAction_new3(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKFontAction(text_QString, parent);
}

KFontAction* KFontAction_new4(const QIcon* icon, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKFontAction(*icon, text_QString, parent);
}

QMetaObject* KFontAction_MetaObject(const KFontAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFontAction_Metacast(KFontAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFontAction_Metacall(KFontAction* self, int param1, int param2, void** param3) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KFontAction_OnMetacall(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Metacall_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KFontAction_QBaseMetacall(KFontAction* self, int param1, int param2, void** param3) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Metacall_IsBase(true);
        return vkfontaction->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFontAction*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFontAction_Tr(const char* s) {
    QString _ret = KFontAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontAction_Font(const KFontAction* self) {
    QString _ret = self->font();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFontAction_SetFont(KFontAction* self, const libqt_string family) {
    QString family_QString = QString::fromUtf8(family.data, family.len);
    self->setFont(family_QString);
}

QWidget* KFontAction_CreateWidget(KFontAction* self, QWidget* parent) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return self->createWidget(parent);
    } else {
        return ((VirtualKFontAction*)self)->createWidget(parent);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KFontAction_OnCreateWidget(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CreateWidget_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_CreateWidget_Callback>(slot));
    }
}

// Virtual base class handler implementation
QWidget* KFontAction_QBaseCreateWidget(KFontAction* self, QWidget* parent) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CreateWidget_IsBase(true);
        return vkfontaction->createWidget(parent);
    } else {
        return ((VirtualKFontAction*)self)->createWidget(parent);
    }
}

libqt_string KFontAction_Tr2(const char* s, const char* c) {
    QString _ret = KFontAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFontAction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFontAction::tr(s, c, static_cast<int>(n));
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
QAction* KFontAction_RemoveAction(KFontAction* self, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->removeAction(action);
    } else {
        return self->KFontAction::removeAction(action);
    }
}

// Base class handler implementation
QAction* KFontAction_QBaseRemoveAction(KFontAction* self, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_RemoveAction_IsBase(true);
        return vkfontaction->removeAction(action);
    } else {
        return self->KFontAction::removeAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnRemoveAction(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_RemoveAction_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_RemoveAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_InsertAction(KFontAction* self, QAction* before, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->insertAction(before, action);
    } else {
        self->KFontAction::insertAction(before, action);
    }
}

// Base class handler implementation
void KFontAction_QBaseInsertAction(KFontAction* self, QAction* before, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_InsertAction_IsBase(true);
        vkfontaction->insertAction(before, action);
    } else {
        self->KFontAction::insertAction(before, action);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnInsertAction(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_InsertAction_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_InsertAction_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_SlotActionTriggered(KFontAction* self, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->slotActionTriggered(action);
    } else {
        ((VirtualKFontAction*)self)->slotActionTriggered(action);
    }
}

// Base class handler implementation
void KFontAction_QBaseSlotActionTriggered(KFontAction* self, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SlotActionTriggered_IsBase(true);
        vkfontaction->slotActionTriggered(action);
    } else {
        ((VirtualKFontAction*)self)->slotActionTriggered(action);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnSlotActionTriggered(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SlotActionTriggered_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_SlotActionTriggered_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_DeleteWidget(KFontAction* self, QWidget* widget) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->deleteWidget(widget);
    } else {
        ((VirtualKFontAction*)self)->deleteWidget(widget);
    }
}

// Base class handler implementation
void KFontAction_QBaseDeleteWidget(KFontAction* self, QWidget* widget) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_DeleteWidget_IsBase(true);
        vkfontaction->deleteWidget(widget);
    } else {
        ((VirtualKFontAction*)self)->deleteWidget(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnDeleteWidget(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_DeleteWidget_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_DeleteWidget_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontAction_Event(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->event(event);
    } else {
        return ((VirtualKFontAction*)self)->event(event);
    }
}

// Base class handler implementation
bool KFontAction_QBaseEvent(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Event_IsBase(true);
        return vkfontaction->event(event);
    } else {
        return ((VirtualKFontAction*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnEvent(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Event_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontAction_EventFilter(KFontAction* self, QObject* watched, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->eventFilter(watched, event);
    } else {
        return ((VirtualKFontAction*)self)->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KFontAction_QBaseEventFilter(KFontAction* self, QObject* watched, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_EventFilter_IsBase(true);
        return vkfontaction->eventFilter(watched, event);
    } else {
        return ((VirtualKFontAction*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnEventFilter(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_EventFilter_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_TimerEvent(KFontAction* self, QTimerEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->timerEvent(event);
    } else {
        ((VirtualKFontAction*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFontAction_QBaseTimerEvent(KFontAction* self, QTimerEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_TimerEvent_IsBase(true);
        vkfontaction->timerEvent(event);
    } else {
        ((VirtualKFontAction*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnTimerEvent(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_TimerEvent_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_ChildEvent(KFontAction* self, QChildEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->childEvent(event);
    } else {
        ((VirtualKFontAction*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFontAction_QBaseChildEvent(KFontAction* self, QChildEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_ChildEvent_IsBase(true);
        vkfontaction->childEvent(event);
    } else {
        ((VirtualKFontAction*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnChildEvent(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_ChildEvent_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_CustomEvent(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->customEvent(event);
    } else {
        ((VirtualKFontAction*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFontAction_QBaseCustomEvent(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CustomEvent_IsBase(true);
        vkfontaction->customEvent(event);
    } else {
        ((VirtualKFontAction*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnCustomEvent(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CustomEvent_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_ConnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->connectNotify(*signal);
    } else {
        ((VirtualKFontAction*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFontAction_QBaseConnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_ConnectNotify_IsBase(true);
        vkfontaction->connectNotify(*signal);
    } else {
        ((VirtualKFontAction*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnConnectNotify(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_ConnectNotify_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_DisconnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->disconnectNotify(*signal);
    } else {
        ((VirtualKFontAction*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFontAction_QBaseDisconnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_DisconnectNotify_IsBase(true);
        vkfontaction->disconnectNotify(*signal);
    } else {
        ((VirtualKFontAction*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnDisconnectNotify(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_DisconnectNotify_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFontAction_SlotToggled(KFontAction* self, bool param1) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->slotToggled(param1);
    } else {
        ((VirtualKFontAction*)self)->slotToggled(param1);
    }
}

// Base class handler implementation
void KFontAction_QBaseSlotToggled(KFontAction* self, bool param1) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SlotToggled_IsBase(true);
        vkfontaction->slotToggled(param1);
    } else {
        ((VirtualKFontAction*)self)->slotToggled(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnSlotToggled(KFontAction* self, intptr_t slot) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SlotToggled_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_SlotToggled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QWidget* */ KFontAction_CreatedWidgets(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        QList<QWidget*> _ret = vkfontaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKFontAction*)self)->createdWidgets();
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
libqt_list /* of QWidget* */ KFontAction_QBaseCreatedWidgets(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CreatedWidgets_IsBase(true);
        QList<QWidget*> _ret = vkfontaction->createdWidgets();
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
        QList<QWidget*> _ret = ((VirtualKFontAction*)self)->createdWidgets();
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
void KFontAction_OnCreatedWidgets(const KFontAction* self, intptr_t slot) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_CreatedWidgets_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_CreatedWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFontAction_Sender(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->sender();
    } else {
        return ((VirtualKFontAction*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFontAction_QBaseSender(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Sender_IsBase(true);
        return vkfontaction->sender();
    } else {
        return ((VirtualKFontAction*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnSender(const KFontAction* self, intptr_t slot) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Sender_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontAction_SenderSignalIndex(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->senderSignalIndex();
    } else {
        return ((VirtualKFontAction*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFontAction_QBaseSenderSignalIndex(const KFontAction* self) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SenderSignalIndex_IsBase(true);
        return vkfontaction->senderSignalIndex();
    } else {
        return ((VirtualKFontAction*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnSenderSignalIndex(const KFontAction* self, intptr_t slot) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFontAction_Receivers(const KFontAction* self, const char* signal) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->receivers(signal);
    } else {
        return ((VirtualKFontAction*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFontAction_QBaseReceivers(const KFontAction* self, const char* signal) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Receivers_IsBase(true);
        return vkfontaction->receivers(signal);
    } else {
        return ((VirtualKFontAction*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnReceivers(const KFontAction* self, intptr_t slot) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_Receivers_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFontAction_IsSignalConnected(const KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        return vkfontaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontAction*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFontAction_QBaseIsSignalConnected(const KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_IsSignalConnected_IsBase(true);
        return vkfontaction->isSignalConnected(*signal);
    } else {
        return ((VirtualKFontAction*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnIsSignalConnected(const KFontAction* self, intptr_t slot) {
    auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self));
    if (vkfontaction && vkfontaction->isVirtualKFontAction) {
        vkfontaction->setKFontAction_IsSignalConnected_Callback(reinterpret_cast<VirtualKFontAction::KFontAction_IsSignalConnected_Callback>(slot));
    }
}

void KFontAction_Delete(KFontAction* self) {
    delete self;
}
