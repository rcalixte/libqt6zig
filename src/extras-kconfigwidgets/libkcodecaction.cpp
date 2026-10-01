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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCodecAction_Tr(const char* s) {
    auto _ret = KCodecAction::tr(s);
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
    auto _ret = self->currentCodecName();
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
    void (*slotFunc)(KCodecAction*, libqt_string) = reinterpret_cast<void (*)(KCodecAction*, libqt_string)>(slot);
    KCodecAction::connect(self,
                          static_cast<void (KCodecAction::*)(const QByteArray&)>(&KCodecAction::codecNameTriggered),
                          [self, slotFunc](const QByteArray& name) {
                              const QByteArray name_qb = name;
                              libqt_string name_str;
                              name_str.len = name_qb.length();
                              name_str.data = static_cast<char*>(malloc(name_str.len));
                              memcpy((void*)name_str.data, name_qb.data(), name_str.len);
                              libqt_string sigval1 = name_str;
                              slotFunc(self, sigval1);
                              libqt_free(name_str.data);
                          });
}

void KCodecAction_DefaultItemTriggered(KCodecAction* self) {
    self->defaultItemTriggered();
}

void KCodecAction_Connect_DefaultItemTriggered(KCodecAction* self, intptr_t slot) {
    void (*slotFunc)(KCodecAction*) = reinterpret_cast<void (*)(KCodecAction*)>(slot);
    KCodecAction::connect(self,
                          static_cast<void (KCodecAction::*)()>(&KCodecAction::defaultItemTriggered),
                          [self, slotFunc]() {
                              slotFunc(self);
                          });
}

void KCodecAction_SlotActionTriggered(KCodecAction* self, QAction* param1) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->slotActionTriggered(param1);
    }
}

libqt_string KCodecAction_Tr2(const char* s, const char* c) {
    auto _ret = KCodecAction::tr(s, c);
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
    auto _ret = KCodecAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCodecAction_SuperMetaObject(const KCodecAction* self) {
    return (QMetaObject*)self->KCodecAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnMetaObject(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self)))
        vkcodecaction->kcodecaction_metaobject_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCodecAction_SuperMetacast(KCodecAction* self, const char* param1) {
    return self->KCodecAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnMetacast(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_metacast_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCodecAction_SuperMetacall(KCodecAction* self, int param1, int param2, void** param3) {
    return self->KCodecAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnMetacall(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_metacall_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_Metacall_Callback>(slot);
}

// Base class handler implementation
void KCodecAction_SuperSlotActionTriggered(KCodecAction* self, QAction* param1) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::slotActionTriggered(param1);
    } else
        qFatal("Error: Protected virtual method KCodecAction::slotActionTriggered called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnSlotActionTriggered(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_slotactiontriggered_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_SlotActionTriggered_Callback>(slot);
}

// Derived class handler implementation
QAction* KCodecAction_RemoveAction(KCodecAction* self, QAction* action) {
    return self->removeAction(action);
}

// Base class handler implementation
QAction* KCodecAction_SuperRemoveAction(KCodecAction* self, QAction* action) {
    return self->KCodecAction::removeAction(action);
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnRemoveAction(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_removeaction_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_RemoveAction_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_InsertAction(KCodecAction* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

// Base class handler implementation
void KCodecAction_SuperInsertAction(KCodecAction* self, QAction* before, QAction* action) {
    self->KCodecAction::insertAction(before, action);
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnInsertAction(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_insertaction_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_InsertAction_Callback>(slot);
}

// Derived class handler implementation
QWidget* KCodecAction_CreateWidget(KCodecAction* self, QWidget* parent) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        return vkcodecaction->createWidget(parent);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::createWidget called without a directly constructed type");
    }
}

// Base class handler implementation
QWidget* KCodecAction_SuperCreateWidget(KCodecAction* self, QWidget* parent) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        return vkcodecaction->KCodecAction::createWidget(parent);
    } else
        qFatal("Error: Protected virtual method KCodecAction::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnCreateWidget(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_createwidget_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_CreateWidget_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_DeleteWidget(KCodecAction* self, QWidget* widget) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperDeleteWidget(KCodecAction* self, QWidget* widget) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KCodecAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnDeleteWidget(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_deletewidget_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
bool KCodecAction_Event(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        return vkcodecaction->event(event);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCodecAction_SuperEvent(KCodecAction* self, QEvent* event) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        return vkcodecaction->KCodecAction::event(event);
    } else
        qFatal("Error: Protected virtual method KCodecAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnEvent(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_event_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCodecAction_EventFilter(KCodecAction* self, QObject* watched, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        return vkcodecaction->eventFilter(watched, event);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KCodecAction_SuperEventFilter(KCodecAction* self, QObject* watched, QEvent* event) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        return vkcodecaction->KCodecAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KCodecAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnEventFilter(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_eventfilter_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_TimerEvent(KCodecAction* self, QTimerEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperTimerEvent(KCodecAction* self, QTimerEvent* event) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCodecAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnTimerEvent(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_timerevent_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_ChildEvent(KCodecAction* self, QChildEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperChildEvent(KCodecAction* self, QChildEvent* event) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCodecAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnChildEvent(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_childevent_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_CustomEvent(KCodecAction* self, QEvent* event) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperCustomEvent(KCodecAction* self, QEvent* event) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCodecAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnCustomEvent(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_customevent_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_ConnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperConnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCodecAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnConnectNotify(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_connectnotify_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCodecAction_DisconnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self);
    if (vkcodecaction) {
        vkcodecaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCodecAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCodecAction_SuperDisconnectNotify(KCodecAction* self, const QMetaMethod* signal) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->KCodecAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCodecAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCodecAction_OnDisconnectNotify(KCodecAction* self, intptr_t slot) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self))
        vkcodecaction->kcodecaction_disconnectnotify_callback = reinterpret_cast<VirtualKCodecAction::KCodecAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KCodecAction_SlotToggled(KCodecAction* self, bool param1) {
    if (auto* vkcodecaction = dynamic_cast<VirtualKCodecAction*>(self)) {
        vkcodecaction->VirtualKCodecAction::slotToggled(param1);
    } else
        qFatal("Error: Protected method KCodecAction::slotToggled called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KCodecAction_CreatedWidgets(const KCodecAction* self) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self))) {
        QList<QWidget*> _ret = vkcodecaction->VirtualKCodecAction::createdWidgets();
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
        qFatal("Error: Protected method KCodecAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KCodecAction_Sender(const KCodecAction* self) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self))) {
        return vkcodecaction->VirtualKCodecAction::sender();
    } else
        qFatal("Error: Protected method KCodecAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCodecAction_SenderSignalIndex(const KCodecAction* self) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self))) {
        return vkcodecaction->VirtualKCodecAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCodecAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCodecAction_Receivers(const KCodecAction* self, const char* signal) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self))) {
        return vkcodecaction->VirtualKCodecAction::receivers(signal);
    } else
        qFatal("Error: Protected method KCodecAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCodecAction_IsSignalConnected(const KCodecAction* self, const QMetaMethod* signal) {
    if (auto* vkcodecaction = const_cast<VirtualKCodecAction*>(dynamic_cast<const VirtualKCodecAction*>(self))) {
        return vkcodecaction->VirtualKCodecAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCodecAction::isSignalConnected called without a directly constructed type");
}

void KCodecAction_Delete(KCodecAction* self) {
    delete self;
}
