#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter__HotSpot
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterChain
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__FilterObject
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__RegExpFilter__HotSpot
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__TerminalImageFilterChain
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__UrlFilter__HotSpot
#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRegularExpression>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <Filter.h>
#include "libFilter.h"
#include "libFilter.hxx"

Konsole__Filter* Konsole__Filter_new() {
    return new VirtualKonsoleFilter();
}

void Konsole__Filter_Process(Konsole__Filter* self) {
    self->process();
}

void Konsole__Filter_Reset(Konsole__Filter* self) {
    self->reset();
}

Konsole__Filter__HotSpot* Konsole__Filter_HotSpotAt(const Konsole__Filter* self, int line, int column) {
    return self->hotSpotAt(static_cast<int>(line), static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnProcess(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_process_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Process_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* Konsole__Filter_MetaObject(const Konsole__Filter* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* Konsole__Filter_SuperMetaObject(const Konsole__Filter* self) {
    return (QMetaObject*)self->Konsole::Filter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnMetaObject(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self)))
        vkonsolefilter->konsole__filter_metaobject_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* Konsole__Filter_Metacast(Konsole__Filter* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* Konsole__Filter_SuperMetacast(Konsole__Filter* self, const char* param1) {
    return self->Konsole::Filter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnMetacast(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_metacast_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Metacast_Callback>(slot);
}

// Derived class handler implementation
int Konsole__Filter_Metacall(Konsole__Filter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int Konsole__Filter_SuperMetacall(Konsole__Filter* self, int param1, int param2, void** param3) {
    return self->Konsole::Filter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnMetacall(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_metacall_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__Filter_Event(Konsole__Filter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Konsole__Filter_SuperEvent(Konsole__Filter* self, QEvent* event) {
    return self->Konsole::Filter::event(event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnEvent(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_event_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Event_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__Filter_EventFilter(Konsole__Filter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Konsole__Filter_SuperEventFilter(Konsole__Filter* self, QObject* watched, QEvent* event) {
    return self->Konsole::Filter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnEventFilter(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_eventfilter_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Konsole__Filter_TimerEvent(Konsole__Filter* self, QTimerEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter) {
        vkonsolefilter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::Filter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__Filter_SuperTimerEvent(Konsole__Filter* self, QTimerEvent* event) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->Konsole::Filter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::Filter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnTimerEvent(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_timerevent_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__Filter_ChildEvent(Konsole__Filter* self, QChildEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter) {
        vkonsolefilter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::Filter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__Filter_SuperChildEvent(Konsole__Filter* self, QChildEvent* event) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->Konsole::Filter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::Filter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnChildEvent(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_childevent_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__Filter_CustomEvent(Konsole__Filter* self, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter) {
        vkonsolefilter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::Filter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__Filter_SuperCustomEvent(Konsole__Filter* self, QEvent* event) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->Konsole::Filter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::Filter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnCustomEvent(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_customevent_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__Filter_ConnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter) {
        vkonsolefilter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::Filter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__Filter_SuperConnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->Konsole::Filter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::Filter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnConnectNotify(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_connectnotify_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Konsole__Filter_DisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter) {
        vkonsolefilter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::Filter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__Filter_SuperDisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->Konsole::Filter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::Filter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnDisconnectNotify(Konsole__Filter* self, intptr_t slot) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self))
        vkonsolefilter->konsole__filter_disconnectnotify_callback = reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__Filter_AddHotSpot(Konsole__Filter* self, Konsole__Filter__HotSpot* param1) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->VirtualKonsoleFilter::addHotSpot(param1);
    } else
        qFatal("Error: Protected method Konsole::Filter::addHotSpot called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string Konsole__Filter_Buffer(Konsole__Filter* self) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        const auto _ret = vkonsolefilter->VirtualKonsoleFilter::buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method Konsole::Filter::buffer called without a directly constructed type");
}

// Derived class protected handler implementation
void Konsole__Filter_GetLineColumn(Konsole__Filter* self, int position, int* startLine, int* startColumn) {
    if (auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self)) {
        vkonsolefilter->VirtualKonsoleFilter::getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else
        qFatal("Error: Protected method Konsole::Filter::getLineColumn called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Konsole__Filter_Sender(const Konsole__Filter* self) {
    if (auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self))) {
        return vkonsolefilter->VirtualKonsoleFilter::sender();
    } else
        qFatal("Error: Protected method Konsole::Filter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__Filter_SenderSignalIndex(const Konsole__Filter* self) {
    if (auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self))) {
        return vkonsolefilter->VirtualKonsoleFilter::senderSignalIndex();
    } else
        qFatal("Error: Protected method Konsole::Filter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__Filter_Receivers(const Konsole__Filter* self, const char* signal) {
    if (auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self))) {
        return vkonsolefilter->VirtualKonsoleFilter::receivers(signal);
    } else
        qFatal("Error: Protected method Konsole::Filter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Konsole__Filter_IsSignalConnected(const Konsole__Filter* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self))) {
        return vkonsolefilter->VirtualKonsoleFilter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Konsole::Filter::isSignalConnected called without a directly constructed type");
}

void Konsole__Filter_Delete(Konsole__Filter* self) {
    delete self;
}

Konsole__RegExpFilter* Konsole__RegExpFilter_new() {
    return new VirtualKonsoleRegExpFilter();
}

void Konsole__RegExpFilter_SetRegExp(Konsole__RegExpFilter* self, const QRegularExpression* text) {
    self->setRegExp(*text);
}

QRegularExpression* Konsole__RegExpFilter_RegExp(const Konsole__RegExpFilter* self) {
    return new QRegularExpression(self->regExp());
}

void Konsole__RegExpFilter_Process(Konsole__RegExpFilter* self) {
    self->process();
}

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_NewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter) {
        return vkonsole__regexpfilter->newHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
    }
    qFatal("Error: Protected method Konsole::RegExpFilter::newHotSpot called without a directly constructed type");
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperProcess(Konsole__RegExpFilter* self) {
    self->Konsole::RegExpFilter::process();
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnProcess(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_process_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Process_Callback>(slot);
}

// Base class handler implementation
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_SuperNewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        return vkonsoleregexpfilter->Konsole::RegExpFilter::newHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::newHotSpot called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnNewHotSpot(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_newhotspot_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_NewHotSpot_Callback>(slot);
}

// Derived class handler implementation
QMetaObject* Konsole__RegExpFilter_MetaObject(const Konsole__RegExpFilter* self) {
    return (QMetaObject*)self->metaObject();
}

// Base class handler implementation
QMetaObject* Konsole__RegExpFilter_SuperMetaObject(const Konsole__RegExpFilter* self) {
    return (QMetaObject*)self->Konsole::RegExpFilter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnMetaObject(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self)))
        vkonsoleregexpfilter->konsole__regexpfilter_metaobject_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_MetaObject_Callback>(slot);
}

// Derived class handler implementation
void* Konsole__RegExpFilter_Metacast(Konsole__RegExpFilter* self, const char* param1) {
    return self->qt_metacast(param1);
}

// Base class handler implementation
void* Konsole__RegExpFilter_SuperMetacast(Konsole__RegExpFilter* self, const char* param1) {
    return self->Konsole::RegExpFilter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnMetacast(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_metacast_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Metacast_Callback>(slot);
}

// Derived class handler implementation
int Konsole__RegExpFilter_Metacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Base class handler implementation
int Konsole__RegExpFilter_SuperMetacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3) {
    return self->Konsole::RegExpFilter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnMetacall(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_metacall_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__RegExpFilter_Event(Konsole__RegExpFilter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Konsole__RegExpFilter_SuperEvent(Konsole__RegExpFilter* self, QEvent* event) {
    return self->Konsole::RegExpFilter::event(event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_event_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Event_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__RegExpFilter_EventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Konsole__RegExpFilter_SuperEventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event) {
    return self->Konsole::RegExpFilter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnEventFilter(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_eventfilter_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Konsole__RegExpFilter_TimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter) {
        vkonsoleregexpfilter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperTimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->Konsole::RegExpFilter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnTimerEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_timerevent_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__RegExpFilter_ChildEvent(Konsole__RegExpFilter* self, QChildEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter) {
        vkonsoleregexpfilter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperChildEvent(Konsole__RegExpFilter* self, QChildEvent* event) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->Konsole::RegExpFilter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnChildEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_childevent_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__RegExpFilter_CustomEvent(Konsole__RegExpFilter* self, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter) {
        vkonsoleregexpfilter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperCustomEvent(Konsole__RegExpFilter* self, QEvent* event) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->Konsole::RegExpFilter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnCustomEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_customevent_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__RegExpFilter_ConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter) {
        vkonsoleregexpfilter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->Konsole::RegExpFilter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnConnectNotify(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_connectnotify_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Konsole__RegExpFilter_DisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter) {
        vkonsoleregexpfilter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_SuperDisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->Konsole::RegExpFilter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::RegExpFilter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnDisconnectNotify(Konsole__RegExpFilter* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self))
        vkonsoleregexpfilter->konsole__regexpfilter_disconnectnotify_callback = reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__RegExpFilter_AddHotSpot(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::addHotSpot(param1);
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::addHotSpot called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string Konsole__RegExpFilter_Buffer(Konsole__RegExpFilter* self) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        const auto _ret = vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::buffer called without a directly constructed type");
}

// Derived class protected handler implementation
void Konsole__RegExpFilter_GetLineColumn(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn) {
    if (auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self)) {
        vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::getLineColumn called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Konsole__RegExpFilter_Sender(const Konsole__RegExpFilter* self) {
    if (auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self))) {
        return vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::sender();
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__RegExpFilter_SenderSignalIndex(const Konsole__RegExpFilter* self) {
    if (auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self))) {
        return vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::senderSignalIndex();
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__RegExpFilter_Receivers(const Konsole__RegExpFilter* self, const char* signal) {
    if (auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self))) {
        return vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::receivers(signal);
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Konsole__RegExpFilter_IsSignalConnected(const Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self))) {
        return vkonsoleregexpfilter->VirtualKonsoleRegExpFilter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::isSignalConnected called without a directly constructed type");
}

void Konsole__RegExpFilter_Delete(Konsole__RegExpFilter* self) {
    delete self;
}

Konsole__UrlFilter* Konsole__UrlFilter_new() {
    return new VirtualKonsoleUrlFilter();
}

QMetaObject* Konsole__UrlFilter_MetaObject(const Konsole__UrlFilter* self) {
    return (QMetaObject*)self->metaObject();
}

void* Konsole__UrlFilter_Metacast(Konsole__UrlFilter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Konsole__UrlFilter_Metacall(Konsole__UrlFilter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Konsole__UrlFilter_Tr(const char* s) {
    auto _ret = Konsole::UrlFilter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_NewHotSpot(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4) {
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter) {
        return vkonsole__urlfilter->newHotSpot(static_cast<int>(param1), static_cast<int>(param2), static_cast<int>(param3), static_cast<int>(param4));
    }
    qFatal("Error: Protected method Konsole::UrlFilter::newHotSpot called without a directly constructed type");
}

void Konsole__UrlFilter_Activated(Konsole__UrlFilter* self, const QUrl* url, bool fromContextMenu) {
    self->activated(*url, fromContextMenu);
}

void Konsole__UrlFilter_Connect_Activated(Konsole__UrlFilter* self, intptr_t slot) {
    void (*slotFunc)(Konsole__UrlFilter*, QUrl*, bool) = reinterpret_cast<void (*)(Konsole__UrlFilter*, QUrl*, bool)>(slot);
    Konsole::UrlFilter::connect(self,
                                static_cast<void (Konsole::UrlFilter::*)(const QUrl&, bool)>(&Konsole::UrlFilter::activated),
                                [self, slotFunc](const QUrl& url, bool fromContextMenu) {
                                    const QUrl& url_ret = url;
                                    // Cast returned reference into pointer
                                    QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                    bool sigval2 = fromContextMenu;
                                    slotFunc(self, sigval1, sigval2);
                                });
}

libqt_string Konsole__UrlFilter_Tr2(const char* s, const char* c) {
    auto _ret = Konsole::UrlFilter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__UrlFilter_Tr3(const char* s, const char* c, int n) {
    auto _ret = Konsole::UrlFilter::tr(s, c, static_cast<int>(n));
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
QMetaObject* Konsole__UrlFilter_SuperMetaObject(const Konsole__UrlFilter* self) {
    return (QMetaObject*)self->Konsole::UrlFilter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnMetaObject(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self)))
        vkonsoleurlfilter->konsole__urlfilter_metaobject_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Konsole__UrlFilter_SuperMetacast(Konsole__UrlFilter* self, const char* param1) {
    return self->Konsole::UrlFilter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnMetacast(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_metacast_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Metacast_Callback>(slot);
}

// Base class handler implementation
int Konsole__UrlFilter_SuperMetacall(Konsole__UrlFilter* self, int param1, int param2, void** param3) {
    return self->Konsole::UrlFilter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnMetacall(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_metacall_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Metacall_Callback>(slot);
}

// Base class handler implementation
Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_SuperNewHotSpot(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        return vkonsoleurlfilter->Konsole::UrlFilter::newHotSpot(static_cast<int>(param1), static_cast<int>(param2), static_cast<int>(param3), static_cast<int>(param4));
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::newHotSpot called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnNewHotSpot(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_newhotspot_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_NewHotSpot_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_Process(Konsole__UrlFilter* self) {
    self->process();
}

// Base class handler implementation
void Konsole__UrlFilter_SuperProcess(Konsole__UrlFilter* self) {
    self->Konsole::UrlFilter::process();
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnProcess(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_process_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Process_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__UrlFilter_Event(Konsole__UrlFilter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Konsole__UrlFilter_SuperEvent(Konsole__UrlFilter* self, QEvent* event) {
    return self->Konsole::UrlFilter::event(event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnEvent(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_event_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Event_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__UrlFilter_EventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Konsole__UrlFilter_SuperEventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event) {
    return self->Konsole::UrlFilter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnEventFilter(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_eventfilter_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_TimerEvent(Konsole__UrlFilter* self, QTimerEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter) {
        vkonsoleurlfilter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::UrlFilter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__UrlFilter_SuperTimerEvent(Konsole__UrlFilter* self, QTimerEvent* event) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->Konsole::UrlFilter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnTimerEvent(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_timerevent_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_ChildEvent(Konsole__UrlFilter* self, QChildEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter) {
        vkonsoleurlfilter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::UrlFilter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__UrlFilter_SuperChildEvent(Konsole__UrlFilter* self, QChildEvent* event) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->Konsole::UrlFilter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnChildEvent(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_childevent_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_CustomEvent(Konsole__UrlFilter* self, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter) {
        vkonsoleurlfilter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::UrlFilter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__UrlFilter_SuperCustomEvent(Konsole__UrlFilter* self, QEvent* event) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->Konsole::UrlFilter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnCustomEvent(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_customevent_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_ConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter) {
        vkonsoleurlfilter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::UrlFilter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__UrlFilter_SuperConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->Konsole::UrlFilter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnConnectNotify(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_connectnotify_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Konsole__UrlFilter_DisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter) {
        vkonsoleurlfilter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::UrlFilter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__UrlFilter_SuperDisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->Konsole::UrlFilter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::UrlFilter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnDisconnectNotify(Konsole__UrlFilter* self, intptr_t slot) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self))
        vkonsoleurlfilter->konsole__urlfilter_disconnectnotify_callback = reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__UrlFilter_AddHotSpot(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->VirtualKonsoleUrlFilter::addHotSpot(param1);
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::addHotSpot called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string Konsole__UrlFilter_Buffer(Konsole__UrlFilter* self) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        const auto _ret = vkonsoleurlfilter->VirtualKonsoleUrlFilter::buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::buffer called without a directly constructed type");
}

// Derived class protected handler implementation
void Konsole__UrlFilter_GetLineColumn(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn) {
    if (auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self)) {
        vkonsoleurlfilter->VirtualKonsoleUrlFilter::getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::getLineColumn called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Konsole__UrlFilter_Sender(const Konsole__UrlFilter* self) {
    if (auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self))) {
        return vkonsoleurlfilter->VirtualKonsoleUrlFilter::sender();
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__UrlFilter_SenderSignalIndex(const Konsole__UrlFilter* self) {
    if (auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self))) {
        return vkonsoleurlfilter->VirtualKonsoleUrlFilter::senderSignalIndex();
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__UrlFilter_Receivers(const Konsole__UrlFilter* self, const char* signal) {
    if (auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self))) {
        return vkonsoleurlfilter->VirtualKonsoleUrlFilter::receivers(signal);
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Konsole__UrlFilter_IsSignalConnected(const Konsole__UrlFilter* self, const QMetaMethod* signal) {
    if (auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self))) {
        return vkonsoleurlfilter->VirtualKonsoleUrlFilter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::isSignalConnected called without a directly constructed type");
}

void Konsole__UrlFilter_Delete(Konsole__UrlFilter* self) {
    delete self;
}

Konsole__FilterObject* Konsole__FilterObject_new(Konsole__Filter__HotSpot* filter) {
    return new VirtualKonsoleFilterObject(filter);
}

QMetaObject* Konsole__FilterObject_MetaObject(const Konsole__FilterObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* Konsole__FilterObject_Metacast(Konsole__FilterObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Konsole__FilterObject_Metacall(Konsole__FilterObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Konsole__FilterObject_Tr(const char* s) {
    auto _ret = Konsole::FilterObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Konsole__FilterObject_EmitActivated(Konsole__FilterObject* self, const QUrl* url, bool fromContextMenu) {
    self->emitActivated(*url, fromContextMenu);
}

void Konsole__FilterObject_Activate(Konsole__FilterObject* self) {
    self->activate();
}

void Konsole__FilterObject_Activated(Konsole__FilterObject* self, const QUrl* url, bool fromContextMenu) {
    self->activated(*url, fromContextMenu);
}

void Konsole__FilterObject_Connect_Activated(Konsole__FilterObject* self, intptr_t slot) {
    void (*slotFunc)(Konsole__FilterObject*, QUrl*, bool) = reinterpret_cast<void (*)(Konsole__FilterObject*, QUrl*, bool)>(slot);
    Konsole::FilterObject::connect(self,
                                   static_cast<void (Konsole::FilterObject::*)(const QUrl&, bool)>(&Konsole::FilterObject::activated),
                                   [self, slotFunc](const QUrl& url, bool fromContextMenu) {
                                       const QUrl& url_ret = url;
                                       // Cast returned reference into pointer
                                       QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                       bool sigval2 = fromContextMenu;
                                       slotFunc(self, sigval1, sigval2);
                                   });
}

libqt_string Konsole__FilterObject_Tr2(const char* s, const char* c) {
    auto _ret = Konsole::FilterObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__FilterObject_Tr3(const char* s, const char* c, int n) {
    auto _ret = Konsole::FilterObject::tr(s, c, static_cast<int>(n));
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
QMetaObject* Konsole__FilterObject_SuperMetaObject(const Konsole__FilterObject* self) {
    return (QMetaObject*)self->Konsole::FilterObject::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnMetaObject(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self)))
        vkonsolefilterobject->konsole__filterobject_metaobject_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Konsole__FilterObject_SuperMetacast(Konsole__FilterObject* self, const char* param1) {
    return self->Konsole::FilterObject::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnMetacast(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_metacast_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Metacast_Callback>(slot);
}

// Base class handler implementation
int Konsole__FilterObject_SuperMetacall(Konsole__FilterObject* self, int param1, int param2, void** param3) {
    return self->Konsole::FilterObject::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnMetacall(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_metacall_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__FilterObject_Event(Konsole__FilterObject* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Konsole__FilterObject_SuperEvent(Konsole__FilterObject* self, QEvent* event) {
    return self->Konsole::FilterObject::event(event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnEvent(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_event_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Event_Callback>(slot);
}

// Derived class handler implementation
bool Konsole__FilterObject_EventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Konsole__FilterObject_SuperEventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event) {
    return self->Konsole::FilterObject::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnEventFilter(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_eventfilter_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Konsole__FilterObject_TimerEvent(Konsole__FilterObject* self, QTimerEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject) {
        vkonsolefilterobject->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::FilterObject::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__FilterObject_SuperTimerEvent(Konsole__FilterObject* self, QTimerEvent* event) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self)) {
        vkonsolefilterobject->Konsole::FilterObject::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::FilterObject::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnTimerEvent(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_timerevent_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__FilterObject_ChildEvent(Konsole__FilterObject* self, QChildEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject) {
        vkonsolefilterobject->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::FilterObject::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__FilterObject_SuperChildEvent(Konsole__FilterObject* self, QChildEvent* event) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self)) {
        vkonsolefilterobject->Konsole::FilterObject::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::FilterObject::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnChildEvent(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_childevent_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__FilterObject_CustomEvent(Konsole__FilterObject* self, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject) {
        vkonsolefilterobject->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Konsole::FilterObject::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__FilterObject_SuperCustomEvent(Konsole__FilterObject* self, QEvent* event) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self)) {
        vkonsolefilterobject->Konsole::FilterObject::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Konsole::FilterObject::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnCustomEvent(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_customevent_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Konsole__FilterObject_ConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject) {
        vkonsolefilterobject->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::FilterObject::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__FilterObject_SuperConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self)) {
        vkonsolefilterobject->Konsole::FilterObject::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::FilterObject::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnConnectNotify(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_connectnotify_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Konsole__FilterObject_DisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject) {
        vkonsolefilterobject->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Konsole::FilterObject::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Konsole__FilterObject_SuperDisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self)) {
        vkonsolefilterobject->Konsole::FilterObject::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Konsole::FilterObject::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnDisconnectNotify(Konsole__FilterObject* self, intptr_t slot) {
    if (auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self))
        vkonsolefilterobject->konsole__filterobject_disconnectnotify_callback = reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Konsole__FilterObject_Sender(const Konsole__FilterObject* self) {
    if (auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self))) {
        return vkonsolefilterobject->VirtualKonsoleFilterObject::sender();
    } else
        qFatal("Error: Protected method Konsole::FilterObject::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__FilterObject_SenderSignalIndex(const Konsole__FilterObject* self) {
    if (auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self))) {
        return vkonsolefilterobject->VirtualKonsoleFilterObject::senderSignalIndex();
    } else
        qFatal("Error: Protected method Konsole::FilterObject::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Konsole__FilterObject_Receivers(const Konsole__FilterObject* self, const char* signal) {
    if (auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self))) {
        return vkonsolefilterobject->VirtualKonsoleFilterObject::receivers(signal);
    } else
        qFatal("Error: Protected method Konsole::FilterObject::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Konsole__FilterObject_IsSignalConnected(const Konsole__FilterObject* self, const QMetaMethod* signal) {
    if (auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self))) {
        return vkonsolefilterobject->VirtualKonsoleFilterObject::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Konsole::FilterObject::isSignalConnected called without a directly constructed type");
}

void Konsole__FilterObject_Delete(Konsole__FilterObject* self) {
    delete self;
}

Konsole__FilterChain* Konsole__FilterChain_new() {
    return new Konsole::FilterChain();
}

Konsole__FilterChain* Konsole__FilterChain_new2(const Konsole__FilterChain* param1) {
    return new Konsole::FilterChain(*param1);
}

void Konsole__FilterChain_AddFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
    self->addFilter(filter);
}

void Konsole__FilterChain_RemoveFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
    self->removeFilter(filter);
}

bool Konsole__FilterChain_ContainsFilter(Konsole__FilterChain* self, Konsole__Filter* filter) {
    return self->containsFilter(filter);
}

void Konsole__FilterChain_Clear(Konsole__FilterChain* self) {
    self->clear();
}

void Konsole__FilterChain_Reset(Konsole__FilterChain* self) {
    self->reset();
}

void Konsole__FilterChain_Process(Konsole__FilterChain* self) {
    self->process();
}

Konsole__Filter__HotSpot* Konsole__FilterChain_HotSpotAt(const Konsole__FilterChain* self, int line, int column) {
    return self->hotSpotAt(static_cast<int>(line), static_cast<int>(column));
}

libqt_list /* of Konsole__Filter__HotSpot* */ Konsole__FilterChain_HotSpots(const Konsole__FilterChain* self) {
    QList<Konsole::Filter::HotSpot*> _ret = self->hotSpots();
    // Convert QList<> from C++ memory to manually-managed C memory
    Konsole__Filter__HotSpot** _arr = static_cast<Konsole__Filter__HotSpot**>(malloc(sizeof(Konsole__Filter__HotSpot*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Konsole__FilterChain_OperatorAssign(Konsole__FilterChain* self, const Konsole__FilterChain* param1) {
    self->operator=(*param1);
}

void Konsole__FilterChain_Delete(Konsole__FilterChain* self) {
    delete self;
}

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new() {
    return new Konsole::TerminalImageFilterChain();
}

Konsole__TerminalImageFilterChain* Konsole__TerminalImageFilterChain_new2(const Konsole__TerminalImageFilterChain* param1) {
    return new Konsole::TerminalImageFilterChain(*param1);
}

void Konsole__TerminalImageFilterChain_OperatorAssign(Konsole__TerminalImageFilterChain* self, const Konsole__TerminalImageFilterChain* param1) {
    self->operator=(*param1);
}

void Konsole__TerminalImageFilterChain_Delete(Konsole__TerminalImageFilterChain* self) {
    delete self;
}

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return new VirtualKonsoleFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

Konsole__Filter__HotSpot* Konsole__Filter__HotSpot_new2(const Konsole__Filter__HotSpot* param1) {
    return new VirtualKonsoleFilterHotSpot(*param1);
}

int Konsole__Filter__HotSpot_StartLine(const Konsole__Filter__HotSpot* self) {
    return self->startLine();
}

int Konsole__Filter__HotSpot_EndLine(const Konsole__Filter__HotSpot* self) {
    return self->endLine();
}

int Konsole__Filter__HotSpot_StartColumn(const Konsole__Filter__HotSpot* self) {
    return self->startColumn();
}

int Konsole__Filter__HotSpot_EndColumn(const Konsole__Filter__HotSpot* self) {
    return self->endColumn();
}

int Konsole__Filter__HotSpot_Type(const Konsole__Filter__HotSpot* self) {
    return static_cast<int>(self->type());
}

void Konsole__Filter__HotSpot_Activate(Konsole__Filter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->activate(action_QString);
}

libqt_list /* of QAction* */ Konsole__Filter__HotSpot_Actions(Konsole__Filter__HotSpot* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Konsole__Filter__HotSpot_OperatorAssign(Konsole__Filter__HotSpot* self, const Konsole__Filter__HotSpot* param1) {
    self->operator=(*param1);
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter__HotSpot_OnActivate(Konsole__Filter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self))
        vkonsolefilterhotspot->konsole__filter__hotspot_activate_callback = reinterpret_cast<VirtualKonsoleFilterHotSpot::Konsole__Filter__HotSpot_Activate_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QAction* */ Konsole__Filter__HotSpot_SuperActions(Konsole__Filter__HotSpot* self) {
    QList<QAction*> _ret = self->Konsole::Filter::HotSpot::actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter__HotSpot_OnActions(Konsole__Filter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self))
        vkonsolefilterhotspot->konsole__filter__hotspot_actions_callback = reinterpret_cast<VirtualKonsoleFilterHotSpot::Konsole__Filter__HotSpot_Actions_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__Filter__HotSpot_SetType(Konsole__Filter__HotSpot* self, int typeVal) {
    if (auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self)) {
        vkonsolefilterhotspot->VirtualKonsoleFilterHotSpot::setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else
        qFatal("Error: Protected method Konsole::Filter::HotSpot::setType called without a directly constructed type");
}

void Konsole__Filter__HotSpot_Delete(Konsole__Filter__HotSpot* self) {
    delete self;
}

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return new VirtualKonsoleRegExpFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter__HotSpot_new2(const Konsole__RegExpFilter__HotSpot* param1) {
    return new VirtualKonsoleRegExpFilterHotSpot(*param1);
}

void Konsole__RegExpFilter__HotSpot_Activate(Konsole__RegExpFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->activate(action_QString);
}

void Konsole__RegExpFilter__HotSpot_SetCapturedTexts(Konsole__RegExpFilter__HotSpot* self, const libqt_list /* of libqt_string */ texts) {
    QList<QString> texts_QList;
    texts_QList.reserve(texts.len);
    libqt_string* texts_arr = static_cast<libqt_string*>(texts.data);
    for (size_t i = 0; i < texts.len; ++i) {
        QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
        texts_QList.push_back(texts_arr_i_QString);
    }
    self->setCapturedTexts(texts_QList);
}

libqt_list /* of libqt_string */ Konsole__RegExpFilter__HotSpot_CapturedTexts(const Konsole__RegExpFilter__HotSpot* self) {
    QList<QString> _ret = self->capturedTexts();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void Konsole__RegExpFilter__HotSpot_OperatorAssign(Konsole__RegExpFilter__HotSpot* self, const Konsole__RegExpFilter__HotSpot* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
void Konsole__RegExpFilter__HotSpot_SuperActivate(Konsole__RegExpFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->Konsole::RegExpFilter::HotSpot::activate(action_QString);
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter__HotSpot_OnActivate(Konsole__RegExpFilter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self))
        vkonsoleregexpfilterhotspot->konsole__regexpfilter__hotspot_activate_callback = reinterpret_cast<VirtualKonsoleRegExpFilterHotSpot::Konsole__RegExpFilter__HotSpot_Activate_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_Actions(Konsole__RegExpFilter__HotSpot* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Base class handler implementation
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_SuperActions(Konsole__RegExpFilter__HotSpot* self) {
    QList<QAction*> _ret = self->Konsole::RegExpFilter::HotSpot::actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter__HotSpot_OnActions(Konsole__RegExpFilter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self))
        vkonsoleregexpfilterhotspot->konsole__regexpfilter__hotspot_actions_callback = reinterpret_cast<VirtualKonsoleRegExpFilterHotSpot::Konsole__RegExpFilter__HotSpot_Actions_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__RegExpFilter__HotSpot_SetType(Konsole__RegExpFilter__HotSpot* self, int typeVal) {
    if (auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self)) {
        vkonsoleregexpfilterhotspot->VirtualKonsoleRegExpFilterHotSpot::setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else
        qFatal("Error: Protected method Konsole::RegExpFilter::HotSpot::setType called without a directly constructed type");
}

void Konsole__RegExpFilter__HotSpot_Delete(Konsole__RegExpFilter__HotSpot* self) {
    delete self;
}

Konsole__UrlFilter__HotSpot* Konsole__UrlFilter__HotSpot_new(int startLine, int startColumn, int endLine, int endColumn) {
    return new VirtualKonsoleUrlFilterHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
}

Konsole__FilterObject* Konsole__UrlFilter__HotSpot_GetUrlObject(const Konsole__UrlFilter__HotSpot* self) {
    return self->getUrlObject();
}

libqt_list /* of QAction* */ Konsole__UrlFilter__HotSpot_Actions(Konsole__UrlFilter__HotSpot* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Konsole__UrlFilter__HotSpot_Activate(Konsole__UrlFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->activate(action_QString);
}

// Base class handler implementation
libqt_list /* of QAction* */ Konsole__UrlFilter__HotSpot_SuperActions(Konsole__UrlFilter__HotSpot* self) {
    QList<QAction*> _ret = self->Konsole::UrlFilter::HotSpot::actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter__HotSpot_OnActions(Konsole__UrlFilter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self))
        vkonsoleurlfilterhotspot->konsole__urlfilter__hotspot_actions_callback = reinterpret_cast<VirtualKonsoleUrlFilterHotSpot::Konsole__UrlFilter__HotSpot_Actions_Callback>(slot);
}

// Base class handler implementation
void Konsole__UrlFilter__HotSpot_SuperActivate(Konsole__UrlFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->Konsole::UrlFilter::HotSpot::activate(action_QString);
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter__HotSpot_OnActivate(Konsole__UrlFilter__HotSpot* self, intptr_t slot) {
    if (auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self))
        vkonsoleurlfilterhotspot->konsole__urlfilter__hotspot_activate_callback = reinterpret_cast<VirtualKonsoleUrlFilterHotSpot::Konsole__UrlFilter__HotSpot_Activate_Callback>(slot);
}

// Derived class protected handler implementation
void Konsole__UrlFilter__HotSpot_SetType(Konsole__UrlFilter__HotSpot* self, int typeVal) {
    if (auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self)) {
        vkonsoleurlfilterhotspot->VirtualKonsoleUrlFilterHotSpot::setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else
        qFatal("Error: Protected method Konsole::UrlFilter::HotSpot::setType called without a directly constructed type");
}

void Konsole__UrlFilter__HotSpot_Delete(Konsole__UrlFilter__HotSpot* self) {
    delete self;
}
