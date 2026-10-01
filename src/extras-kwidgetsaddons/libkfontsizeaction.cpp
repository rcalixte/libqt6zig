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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFontSizeAction_Tr(const char* s) {
    auto _ret = KFontSizeAction::tr(s);
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
    KFontSizeAction::connect(self,
                             static_cast<void (KFontSizeAction::*)(int)>(&KFontSizeAction::fontSizeChanged),
                             [self, slotFunc](int param1) {
                                 int sigval1 = param1;
                                 slotFunc(self, sigval1);
                             });
}

void KFontSizeAction_SlotActionTriggered(KFontSizeAction* self, QAction* action) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->slotActionTriggered(action);
    }
}

libqt_string KFontSizeAction_Tr2(const char* s, const char* c) {
    auto _ret = KFontSizeAction::tr(s, c);
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
    auto _ret = KFontSizeAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFontSizeAction_SuperMetaObject(const KFontSizeAction* self) {
    return (QMetaObject*)self->KFontSizeAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnMetaObject(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self)))
        vkfontsizeaction->kfontsizeaction_metaobject_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFontSizeAction_SuperMetacast(KFontSizeAction* self, const char* param1) {
    return self->KFontSizeAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnMetacast(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_metacast_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFontSizeAction_SuperMetacall(KFontSizeAction* self, int param1, int param2, void** param3) {
    return self->KFontSizeAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnMetacall(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_metacall_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Metacall_Callback>(slot);
}

// Base class handler implementation
void KFontSizeAction_SuperSlotActionTriggered(KFontSizeAction* self, QAction* action) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::slotActionTriggered(action);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::slotActionTriggered called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnSlotActionTriggered(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_slotactiontriggered_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_SlotActionTriggered_Callback>(slot);
}

// Derived class handler implementation
QAction* KFontSizeAction_RemoveAction(KFontSizeAction* self, QAction* action) {
    return self->removeAction(action);
}

// Base class handler implementation
QAction* KFontSizeAction_SuperRemoveAction(KFontSizeAction* self, QAction* action) {
    return self->KFontSizeAction::removeAction(action);
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnRemoveAction(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_removeaction_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_RemoveAction_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_InsertAction(KFontSizeAction* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

// Base class handler implementation
void KFontSizeAction_SuperInsertAction(KFontSizeAction* self, QAction* before, QAction* action) {
    self->KFontSizeAction::insertAction(before, action);
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnInsertAction(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_insertaction_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_InsertAction_Callback>(slot);
}

// Derived class handler implementation
QWidget* KFontSizeAction_CreateWidget(KFontSizeAction* self, QWidget* parent) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        return vkfontsizeaction->createWidget(parent);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::createWidget called without a directly constructed type");
    }
}

// Base class handler implementation
QWidget* KFontSizeAction_SuperCreateWidget(KFontSizeAction* self, QWidget* parent) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        return vkfontsizeaction->KFontSizeAction::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnCreateWidget(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_createwidget_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_DeleteWidget(KFontSizeAction* self, QWidget* widget) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperDeleteWidget(KFontSizeAction* self, QWidget* widget) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnDeleteWidget(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_deletewidget_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
bool KFontSizeAction_Event(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        return vkfontsizeaction->event(event);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontSizeAction_SuperEvent(KFontSizeAction* self, QEvent* event) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        return vkfontsizeaction->KFontSizeAction::event(event);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnEvent(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_event_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFontSizeAction_EventFilter(KFontSizeAction* self, QObject* watched, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        return vkfontsizeaction->eventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontSizeAction_SuperEventFilter(KFontSizeAction* self, QObject* watched, QEvent* event) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        return vkfontsizeaction->KFontSizeAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnEventFilter(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_eventfilter_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_TimerEvent(KFontSizeAction* self, QTimerEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperTimerEvent(KFontSizeAction* self, QTimerEvent* event) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnTimerEvent(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_timerevent_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_ChildEvent(KFontSizeAction* self, QChildEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperChildEvent(KFontSizeAction* self, QChildEvent* event) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnChildEvent(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_childevent_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_CustomEvent(KFontSizeAction* self, QEvent* event) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperCustomEvent(KFontSizeAction* self, QEvent* event) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnCustomEvent(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_customevent_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_ConnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperConnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnConnectNotify(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_connectnotify_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFontSizeAction_DisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self);
    if (vkfontsizeaction) {
        vkfontsizeaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontSizeAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontSizeAction_SuperDisconnectNotify(KFontSizeAction* self, const QMetaMethod* signal) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->KFontSizeAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontSizeAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontSizeAction_OnDisconnectNotify(KFontSizeAction* self, intptr_t slot) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self))
        vkfontsizeaction->kfontsizeaction_disconnectnotify_callback = reinterpret_cast<VirtualKFontSizeAction::KFontSizeAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFontSizeAction_SlotToggled(KFontSizeAction* self, bool param1) {
    if (auto* vkfontsizeaction = dynamic_cast<VirtualKFontSizeAction*>(self)) {
        vkfontsizeaction->VirtualKFontSizeAction::slotToggled(param1);
    } else
        qFatal("Error: Protected method KFontSizeAction::slotToggled called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KFontSizeAction_CreatedWidgets(const KFontSizeAction* self) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self))) {
        QList<QWidget*> _ret = vkfontsizeaction->VirtualKFontSizeAction::createdWidgets();
        // Convert QList<> from C++ memory to manually-managed C memory
        QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KFontSizeAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFontSizeAction_Sender(const KFontSizeAction* self) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self))) {
        return vkfontsizeaction->VirtualKFontSizeAction::sender();
    } else
        qFatal("Error: Protected method KFontSizeAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontSizeAction_SenderSignalIndex(const KFontSizeAction* self) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self))) {
        return vkfontsizeaction->VirtualKFontSizeAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFontSizeAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontSizeAction_Receivers(const KFontSizeAction* self, const char* signal) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self))) {
        return vkfontsizeaction->VirtualKFontSizeAction::receivers(signal);
    } else
        qFatal("Error: Protected method KFontSizeAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontSizeAction_IsSignalConnected(const KFontSizeAction* self, const QMetaMethod* signal) {
    if (auto* vkfontsizeaction = const_cast<VirtualKFontSizeAction*>(dynamic_cast<const VirtualKFontSizeAction*>(self))) {
        return vkfontsizeaction->VirtualKFontSizeAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFontSizeAction::isSignalConnected called without a directly constructed type");
}

void KFontSizeAction_Delete(KFontSizeAction* self) {
    delete self;
}
