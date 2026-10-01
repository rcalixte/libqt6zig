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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFontAction_Tr(const char* s) {
    auto _ret = KFontAction::tr(s);
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
    auto _ret = self->font();
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
    return self->createWidget(parent);
}

libqt_string KFontAction_Tr2(const char* s, const char* c) {
    auto _ret = KFontAction::tr(s, c);
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
    auto _ret = KFontAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFontAction_SuperMetaObject(const KFontAction* self) {
    return (QMetaObject*)self->KFontAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnMetaObject(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self)))
        vkfontaction->kfontaction_metaobject_callback = reinterpret_cast<VirtualKFontAction::KFontAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFontAction_SuperMetacast(KFontAction* self, const char* param1) {
    return self->KFontAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnMetacast(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_metacast_callback = reinterpret_cast<VirtualKFontAction::KFontAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFontAction_SuperMetacall(KFontAction* self, int param1, int param2, void** param3) {
    return self->KFontAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnMetacall(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_metacall_callback = reinterpret_cast<VirtualKFontAction::KFontAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KFontAction_SuperCreateWidget(KFontAction* self, QWidget* parent) {
    return self->KFontAction::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnCreateWidget(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_createwidget_callback = reinterpret_cast<VirtualKFontAction::KFontAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
QAction* KFontAction_RemoveAction(KFontAction* self, QAction* action) {
    return self->removeAction(action);
}

// Base class handler implementation
QAction* KFontAction_SuperRemoveAction(KFontAction* self, QAction* action) {
    return self->KFontAction::removeAction(action);
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnRemoveAction(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_removeaction_callback = reinterpret_cast<VirtualKFontAction::KFontAction_RemoveAction_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_InsertAction(KFontAction* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

// Base class handler implementation
void KFontAction_SuperInsertAction(KFontAction* self, QAction* before, QAction* action) {
    self->KFontAction::insertAction(before, action);
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnInsertAction(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_insertaction_callback = reinterpret_cast<VirtualKFontAction::KFontAction_InsertAction_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_SlotActionTriggered(KFontAction* self, QAction* action) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->slotActionTriggered(action);
    } else {
        qFatal("Error: Protected virtual method KFontAction::slotActionTriggered called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperSlotActionTriggered(KFontAction* self, QAction* action) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::slotActionTriggered(action);
    } else
        qFatal("Error: Protected virtual method KFontAction::slotActionTriggered called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnSlotActionTriggered(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_slotactiontriggered_callback = reinterpret_cast<VirtualKFontAction::KFontAction_SlotActionTriggered_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_DeleteWidget(KFontAction* self, QWidget* widget) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KFontAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperDeleteWidget(KFontAction* self, QWidget* widget) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KFontAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnDeleteWidget(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_deletewidget_callback = reinterpret_cast<VirtualKFontAction::KFontAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
bool KFontAction_Event(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        return vkfontaction->event(event);
    } else {
        qFatal("Error: Protected virtual method KFontAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontAction_SuperEvent(KFontAction* self, QEvent* event) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        return vkfontaction->KFontAction::event(event);
    } else
        qFatal("Error: Protected virtual method KFontAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnEvent(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_event_callback = reinterpret_cast<VirtualKFontAction::KFontAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KFontAction_EventFilter(KFontAction* self, QObject* watched, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        return vkfontaction->eventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method KFontAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFontAction_SuperEventFilter(KFontAction* self, QObject* watched, QEvent* event) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        return vkfontaction->KFontAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KFontAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnEventFilter(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_eventfilter_callback = reinterpret_cast<VirtualKFontAction::KFontAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_TimerEvent(KFontAction* self, QTimerEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperTimerEvent(KFontAction* self, QTimerEvent* event) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnTimerEvent(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_timerevent_callback = reinterpret_cast<VirtualKFontAction::KFontAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_ChildEvent(KFontAction* self, QChildEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperChildEvent(KFontAction* self, QChildEvent* event) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnChildEvent(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_childevent_callback = reinterpret_cast<VirtualKFontAction::KFontAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_CustomEvent(KFontAction* self, QEvent* event) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFontAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperCustomEvent(KFontAction* self, QEvent* event) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFontAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnCustomEvent(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_customevent_callback = reinterpret_cast<VirtualKFontAction::KFontAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_ConnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperConnectNotify(KFontAction* self, const QMetaMethod* signal) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnConnectNotify(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_connectnotify_callback = reinterpret_cast<VirtualKFontAction::KFontAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFontAction_DisconnectNotify(KFontAction* self, const QMetaMethod* signal) {
    auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self);
    if (vkfontaction) {
        vkfontaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFontAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFontAction_SuperDisconnectNotify(KFontAction* self, const QMetaMethod* signal) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->KFontAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFontAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFontAction_OnDisconnectNotify(KFontAction* self, intptr_t slot) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self))
        vkfontaction->kfontaction_disconnectnotify_callback = reinterpret_cast<VirtualKFontAction::KFontAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFontAction_SlotToggled(KFontAction* self, bool param1) {
    if (auto* vkfontaction = dynamic_cast<VirtualKFontAction*>(self)) {
        vkfontaction->VirtualKFontAction::slotToggled(param1);
    } else
        qFatal("Error: Protected method KFontAction::slotToggled called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KFontAction_CreatedWidgets(const KFontAction* self) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self))) {
        QList<QWidget*> _ret = vkfontaction->VirtualKFontAction::createdWidgets();
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
        qFatal("Error: Protected method KFontAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFontAction_Sender(const KFontAction* self) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self))) {
        return vkfontaction->VirtualKFontAction::sender();
    } else
        qFatal("Error: Protected method KFontAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontAction_SenderSignalIndex(const KFontAction* self) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self))) {
        return vkfontaction->VirtualKFontAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFontAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFontAction_Receivers(const KFontAction* self, const char* signal) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self))) {
        return vkfontaction->VirtualKFontAction::receivers(signal);
    } else
        qFatal("Error: Protected method KFontAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFontAction_IsSignalConnected(const KFontAction* self, const QMetaMethod* signal) {
    if (auto* vkfontaction = const_cast<VirtualKFontAction*>(dynamic_cast<const VirtualKFontAction*>(self))) {
        return vkfontaction->VirtualKFontAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFontAction::isSignalConnected called without a directly constructed type");
}

void KFontAction_Delete(KFontAction* self) {
    delete self;
}
