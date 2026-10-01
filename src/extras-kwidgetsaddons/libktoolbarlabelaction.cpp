#include <KToolBarLabelAction>
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <ktoolbarlabelaction.h>
#include "libktoolbarlabelaction.h"
#include "libktoolbarlabelaction.hxx"

KToolBarLabelAction* KToolBarLabelAction_new(const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarLabelAction(text_QString, parent);
}

KToolBarLabelAction* KToolBarLabelAction_new2(QAction* buddy, const libqt_string text, QObject* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKToolBarLabelAction(buddy, text_QString, parent);
}

QMetaObject* KToolBarLabelAction_MetaObject(const KToolBarLabelAction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolBarLabelAction_Metacast(KToolBarLabelAction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolBarLabelAction_Metacall(KToolBarLabelAction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolBarLabelAction_Tr(const char* s) {
    auto _ret = KToolBarLabelAction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KToolBarLabelAction_SetBuddy(KToolBarLabelAction* self, QAction* buddy) {
    self->setBuddy(buddy);
}

QAction* KToolBarLabelAction_Buddy(const KToolBarLabelAction* self) {
    return self->buddy();
}

QWidget* KToolBarLabelAction_CreateWidget(KToolBarLabelAction* self, QWidget* parent) {
    return self->createWidget(parent);
}

void KToolBarLabelAction_TextChanged(KToolBarLabelAction* self, const libqt_string newText) {
    QString newText_QString = QString::fromUtf8(newText.data, newText.len);
    self->textChanged(newText_QString);
}

void KToolBarLabelAction_Connect_TextChanged(KToolBarLabelAction* self, intptr_t slot) {
    void (*slotFunc)(KToolBarLabelAction*, const char*) = reinterpret_cast<void (*)(KToolBarLabelAction*, const char*)>(slot);
    KToolBarLabelAction::connect(self,
                                 static_cast<void (KToolBarLabelAction::*)(const QString&)>(&KToolBarLabelAction::textChanged),
                                 [self, slotFunc](const QString& newText) {
                                     const auto newText_ret = newText;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray newText_b = newText_ret.toUtf8();
                                     auto newText_str_len = newText_b.length();
                                     const char* newText_str = static_cast<const char*>(malloc(newText_str_len + 1));
                                     memcpy((void*)newText_str, newText_b.data(), newText_str_len);
                                     ((char*)newText_str)[newText_str_len] = '\0';
                                     const char* sigval1 = newText_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(newText_str);
                                 });
}

bool KToolBarLabelAction_Event(KToolBarLabelAction* self, QEvent* param1) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        return vktoolbarlabelaction->event(param1);
    }
    qFatal("Error: Protected method KToolBarLabelAction::event called without a directly constructed type");
}

bool KToolBarLabelAction_EventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        return vktoolbarlabelaction->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KToolBarLabelAction::eventFilter called without a directly constructed type");
}

libqt_string KToolBarLabelAction_Tr2(const char* s, const char* c) {
    auto _ret = KToolBarLabelAction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolBarLabelAction_Tr3(const char* s, const char* c, int n) {
    auto _ret = KToolBarLabelAction::tr(s, c, static_cast<int>(n));
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
QMetaObject* KToolBarLabelAction_SuperMetaObject(const KToolBarLabelAction* self) {
    return (QMetaObject*)self->KToolBarLabelAction::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnMetaObject(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self)))
        vktoolbarlabelaction->ktoolbarlabelaction_metaobject_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KToolBarLabelAction_SuperMetacast(KToolBarLabelAction* self, const char* param1) {
    return self->KToolBarLabelAction::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnMetacast(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_metacast_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Metacast_Callback>(slot);
}

// Base class handler implementation
int KToolBarLabelAction_SuperMetacall(KToolBarLabelAction* self, int param1, int param2, void** param3) {
    return self->KToolBarLabelAction::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnMetacall(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_metacall_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Metacall_Callback>(slot);
}

// Base class handler implementation
QWidget* KToolBarLabelAction_SuperCreateWidget(KToolBarLabelAction* self, QWidget* parent) {
    return self->KToolBarLabelAction::createWidget(parent);
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnCreateWidget(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_createwidget_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_CreateWidget_Callback>(slot);
}

// Base class handler implementation
bool KToolBarLabelAction_SuperEvent(KToolBarLabelAction* self, QEvent* param1) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        return vktoolbarlabelaction->KToolBarLabelAction::event(param1);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnEvent(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_event_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_Event_Callback>(slot);
}

// Base class handler implementation
bool KToolBarLabelAction_SuperEventFilter(KToolBarLabelAction* self, QObject* watched, QEvent* event) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        return vktoolbarlabelaction->KToolBarLabelAction::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnEventFilter(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_eventfilter_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_DeleteWidget(KToolBarLabelAction* self, QWidget* widget) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->deleteWidget(widget);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::deleteWidget called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperDeleteWidget(KToolBarLabelAction* self, QWidget* widget) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::deleteWidget(widget);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::deleteWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnDeleteWidget(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_deletewidget_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_DeleteWidget_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_TimerEvent(KToolBarLabelAction* self, QTimerEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperTimerEvent(KToolBarLabelAction* self, QTimerEvent* event) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnTimerEvent(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_timerevent_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_ChildEvent(KToolBarLabelAction* self, QChildEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperChildEvent(KToolBarLabelAction* self, QChildEvent* event) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnChildEvent(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_childevent_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_CustomEvent(KToolBarLabelAction* self, QEvent* event) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperCustomEvent(KToolBarLabelAction* self, QEvent* event) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnCustomEvent(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_customevent_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_ConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperConnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnConnectNotify(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_connectnotify_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KToolBarLabelAction_DisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self);
    if (vktoolbarlabelaction) {
        vktoolbarlabelaction->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KToolBarLabelAction::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KToolBarLabelAction_SuperDisconnectNotify(KToolBarLabelAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self)) {
        vktoolbarlabelaction->KToolBarLabelAction::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KToolBarLabelAction::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KToolBarLabelAction_OnDisconnectNotify(KToolBarLabelAction* self, intptr_t slot) {
    if (auto* vktoolbarlabelaction = dynamic_cast<VirtualKToolBarLabelAction*>(self))
        vktoolbarlabelaction->ktoolbarlabelaction_disconnectnotify_callback = reinterpret_cast<VirtualKToolBarLabelAction::KToolBarLabelAction_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QWidget* */ KToolBarLabelAction_CreatedWidgets(const KToolBarLabelAction* self) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self))) {
        QList<QWidget*> _ret = vktoolbarlabelaction->VirtualKToolBarLabelAction::createdWidgets();
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
        qFatal("Error: Protected method KToolBarLabelAction::createdWidgets called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KToolBarLabelAction_Sender(const KToolBarLabelAction* self) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self))) {
        return vktoolbarlabelaction->VirtualKToolBarLabelAction::sender();
    } else
        qFatal("Error: Protected method KToolBarLabelAction::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarLabelAction_SenderSignalIndex(const KToolBarLabelAction* self) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self))) {
        return vktoolbarlabelaction->VirtualKToolBarLabelAction::senderSignalIndex();
    } else
        qFatal("Error: Protected method KToolBarLabelAction::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KToolBarLabelAction_Receivers(const KToolBarLabelAction* self, const char* signal) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self))) {
        return vktoolbarlabelaction->VirtualKToolBarLabelAction::receivers(signal);
    } else
        qFatal("Error: Protected method KToolBarLabelAction::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KToolBarLabelAction_IsSignalConnected(const KToolBarLabelAction* self, const QMetaMethod* signal) {
    if (auto* vktoolbarlabelaction = const_cast<VirtualKToolBarLabelAction*>(dynamic_cast<const VirtualKToolBarLabelAction*>(self))) {
        return vktoolbarlabelaction->VirtualKToolBarLabelAction::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KToolBarLabelAction::isSignalConnected called without a directly constructed type");
}

void KToolBarLabelAction_Delete(KToolBarLabelAction* self) {
    delete self;
}
