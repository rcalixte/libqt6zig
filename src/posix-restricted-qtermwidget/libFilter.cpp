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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <Filter.h>
#include "libFilter.h"
#include "libFilter.hxx"

Konsole__Filter* Konsole__Filter_new() {
    return new VirtualKonsoleFilter();
}

void Konsole__Filter_Process(Konsole__Filter* self) {
    auto* vkonsole__filter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsole__filter && vkonsole__filter->isVirtualKonsoleFilter) {
        vkonsole__filter->process();
    } else {
        ((VirtualKonsoleFilter*)self)->process();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__Filter_OnProcess(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsole__filter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsole__filter && vkonsole__filter->isVirtualKonsoleFilter) {
        vkonsole__filter->setKonsole__Filter_Process_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Process_Callback>(slot));
    }
}

// Virtual base class handler implementation
void Konsole__Filter_QBaseProcess(Konsole__Filter* self) {
    auto* vkonsole__filter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsole__filter && vkonsole__filter->isVirtualKonsoleFilter) {
        vkonsole__filter->setKonsole__Filter_Process_IsBase(true);
        vkonsole__filter->process();
    } else {
        ((VirtualKonsoleFilter*)self)->process();
    }
}

void Konsole__Filter_Reset(Konsole__Filter* self) {
    self->reset();
}

Konsole__Filter__HotSpot* Konsole__Filter_HotSpotAt(const Konsole__Filter* self, int line, int column) {
    return self->hotSpotAt(static_cast<int>(line), static_cast<int>(column));
}

// Derived class handler implementation
int Konsole__Filter_Metacall(Konsole__Filter* self, int param1, int param2, void** param3) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Konsole::Filter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int Konsole__Filter_QBaseMetacall(Konsole__Filter* self, int param1, int param2, void** param3) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Metacall_IsBase(true);
        return vkonsolefilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Konsole::Filter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnMetacall(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Metacall_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Filter_Event(Konsole__Filter* self, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->event(event);
    } else {
        return self->Konsole::Filter::event(event);
    }
}

// Base class handler implementation
bool Konsole__Filter_QBaseEvent(Konsole__Filter* self, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Event_IsBase(true);
        return vkonsolefilter->event(event);
    } else {
        return self->Konsole::Filter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnEvent(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Event_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Filter_EventFilter(Konsole__Filter* self, QObject* watched, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->eventFilter(watched, event);
    } else {
        return self->Konsole::Filter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Konsole__Filter_QBaseEventFilter(Konsole__Filter* self, QObject* watched, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_EventFilter_IsBase(true);
        return vkonsolefilter->eventFilter(watched, event);
    } else {
        return self->Konsole::Filter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnEventFilter(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_EventFilter_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_TimerEvent(Konsole__Filter* self, QTimerEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->timerEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseTimerEvent(Konsole__Filter* self, QTimerEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_TimerEvent_IsBase(true);
        vkonsolefilter->timerEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnTimerEvent(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_TimerEvent_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_ChildEvent(Konsole__Filter* self, QChildEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->childEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseChildEvent(Konsole__Filter* self, QChildEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_ChildEvent_IsBase(true);
        vkonsolefilter->childEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnChildEvent(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_ChildEvent_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_CustomEvent(Konsole__Filter* self, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->customEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseCustomEvent(Konsole__Filter* self, QEvent* event) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_CustomEvent_IsBase(true);
        vkonsolefilter->customEvent(event);
    } else {
        ((VirtualKonsoleFilter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnCustomEvent(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_CustomEvent_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_ConnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleFilter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseConnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_ConnectNotify_IsBase(true);
        vkonsolefilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleFilter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnConnectNotify(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_ConnectNotify_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_DisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleFilter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseDisconnectNotify(Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_DisconnectNotify_IsBase(true);
        vkonsolefilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleFilter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnDisconnectNotify(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_DisconnectNotify_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_AddHotSpot(Konsole__Filter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleFilter*)self)->addHotSpot(param1);
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseAddHotSpot(Konsole__Filter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_AddHotSpot_IsBase(true);
        vkonsolefilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleFilter*)self)->addHotSpot(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnAddHotSpot(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_AddHotSpot_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_AddHotSpot_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string Konsole__Filter_Buffer(Konsole__Filter* self) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        const QString* _ret = vkonsolefilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string Konsole__Filter_QBaseBuffer(Konsole__Filter* self) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Buffer_IsBase(true);
        const QString* _ret = vkonsolefilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnBuffer(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Buffer_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Buffer_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Filter_GetLineColumn(Konsole__Filter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Base class handler implementation
void Konsole__Filter_QBaseGetLineColumn(Konsole__Filter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_GetLineColumn_IsBase(true);
        vkonsolefilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnGetLineColumn(Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = dynamic_cast<VirtualKonsoleFilter*>(self);
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_GetLineColumn_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_GetLineColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Konsole__Filter_Sender(const Konsole__Filter* self) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->sender();
    } else {
        return ((VirtualKonsoleFilter*)self)->sender();
    }
}

// Base class handler implementation
QObject* Konsole__Filter_QBaseSender(const Konsole__Filter* self) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Sender_IsBase(true);
        return vkonsolefilter->sender();
    } else {
        return ((VirtualKonsoleFilter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnSender(const Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Sender_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__Filter_SenderSignalIndex(const Konsole__Filter* self) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleFilter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Konsole__Filter_QBaseSenderSignalIndex(const Konsole__Filter* self) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_SenderSignalIndex_IsBase(true);
        return vkonsolefilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleFilter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnSenderSignalIndex(const Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__Filter_Receivers(const Konsole__Filter* self, const char* signal) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->receivers(signal);
    } else {
        return ((VirtualKonsoleFilter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Konsole__Filter_QBaseReceivers(const Konsole__Filter* self, const char* signal) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Receivers_IsBase(true);
        return vkonsolefilter->receivers(signal);
    } else {
        return ((VirtualKonsoleFilter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnReceivers(const Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_Receivers_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Filter_IsSignalConnected(const Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        return vkonsolefilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleFilter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Konsole__Filter_QBaseIsSignalConnected(const Konsole__Filter* self, const QMetaMethod* signal) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_IsSignalConnected_IsBase(true);
        return vkonsolefilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleFilter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter_OnIsSignalConnected(const Konsole__Filter* self, intptr_t slot) {
    auto* vkonsolefilter = const_cast<VirtualKonsoleFilter*>(dynamic_cast<const VirtualKonsoleFilter*>(self));
    if (vkonsolefilter && vkonsolefilter->isVirtualKonsoleFilter) {
        vkonsolefilter->setKonsole__Filter_IsSignalConnected_Callback(reinterpret_cast<VirtualKonsoleFilter::Konsole__Filter_IsSignalConnected_Callback>(slot));
    }
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
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        self->process();
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->process();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__RegExpFilter_OnProcess(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsole__regexpfilter->setKonsole__RegExpFilter_Process_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Process_Callback>(slot));
    }
}

// Virtual base class handler implementation
void Konsole__RegExpFilter_QBaseProcess(Konsole__RegExpFilter* self) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsole__regexpfilter->setKonsole__RegExpFilter_Process_IsBase(true);
        vkonsole__regexpfilter->process();
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->process();
    }
}

Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_NewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsole__regexpfilter->newHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__RegExpFilter_OnNewHotSpot(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsole__regexpfilter->setKonsole__RegExpFilter_NewHotSpot_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_NewHotSpot_Callback>(slot));
    }
}

// Virtual base class handler implementation
Konsole__RegExpFilter__HotSpot* Konsole__RegExpFilter_QBaseNewHotSpot(Konsole__RegExpFilter* self, int startLine, int startColumn, int endLine, int endColumn) {
    auto* vkonsole__regexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsole__regexpfilter && vkonsole__regexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsole__regexpfilter->setKonsole__RegExpFilter_NewHotSpot_IsBase(true);
        return vkonsole__regexpfilter->newHotSpot(static_cast<int>(startLine), static_cast<int>(startColumn), static_cast<int>(endLine), static_cast<int>(endColumn));
    }
    return {};
}

// Derived class handler implementation
int Konsole__RegExpFilter_Metacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Konsole::RegExpFilter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Base class handler implementation
int Konsole__RegExpFilter_QBaseMetacall(Konsole__RegExpFilter* self, int param1, int param2, void** param3) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Metacall_IsBase(true);
        return vkonsoleregexpfilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Konsole::RegExpFilter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnMetacall(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Metacall_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__RegExpFilter_Event(Konsole__RegExpFilter* self, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->event(event);
    } else {
        return self->Konsole::RegExpFilter::event(event);
    }
}

// Base class handler implementation
bool Konsole__RegExpFilter_QBaseEvent(Konsole__RegExpFilter* self, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Event_IsBase(true);
        return vkonsoleregexpfilter->event(event);
    } else {
        return self->Konsole::RegExpFilter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Event_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__RegExpFilter_EventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->eventFilter(watched, event);
    } else {
        return self->Konsole::RegExpFilter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Konsole__RegExpFilter_QBaseEventFilter(Konsole__RegExpFilter* self, QObject* watched, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_EventFilter_IsBase(true);
        return vkonsoleregexpfilter->eventFilter(watched, event);
    } else {
        return self->Konsole::RegExpFilter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnEventFilter(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_EventFilter_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_TimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->timerEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseTimerEvent(Konsole__RegExpFilter* self, QTimerEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_TimerEvent_IsBase(true);
        vkonsoleregexpfilter->timerEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnTimerEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_TimerEvent_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_ChildEvent(Konsole__RegExpFilter* self, QChildEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->childEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseChildEvent(Konsole__RegExpFilter* self, QChildEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_ChildEvent_IsBase(true);
        vkonsoleregexpfilter->childEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnChildEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_ChildEvent_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_CustomEvent(Konsole__RegExpFilter* self, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->customEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseCustomEvent(Konsole__RegExpFilter* self, QEvent* event) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_CustomEvent_IsBase(true);
        vkonsoleregexpfilter->customEvent(event);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnCustomEvent(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_CustomEvent_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_ConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseConnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_ConnectNotify_IsBase(true);
        vkonsoleregexpfilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnConnectNotify(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_ConnectNotify_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_DisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseDisconnectNotify(Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_DisconnectNotify_IsBase(true);
        vkonsoleregexpfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnDisconnectNotify(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_DisconnectNotify_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_AddHotSpot(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->addHotSpot(param1);
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseAddHotSpot(Konsole__RegExpFilter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_AddHotSpot_IsBase(true);
        vkonsoleregexpfilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->addHotSpot(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnAddHotSpot(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_AddHotSpot_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_AddHotSpot_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string Konsole__RegExpFilter_Buffer(Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        const QString* _ret = vkonsoleregexpfilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleRegExpFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string Konsole__RegExpFilter_QBaseBuffer(Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Buffer_IsBase(true);
        const QString* _ret = vkonsoleregexpfilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleRegExpFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnBuffer(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Buffer_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Buffer_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter_GetLineColumn(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Base class handler implementation
void Konsole__RegExpFilter_QBaseGetLineColumn(Konsole__RegExpFilter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_GetLineColumn_IsBase(true);
        vkonsoleregexpfilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleRegExpFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnGetLineColumn(Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = dynamic_cast<VirtualKonsoleRegExpFilter*>(self);
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_GetLineColumn_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_GetLineColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Konsole__RegExpFilter_Sender(const Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->sender();
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->sender();
    }
}

// Base class handler implementation
QObject* Konsole__RegExpFilter_QBaseSender(const Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Sender_IsBase(true);
        return vkonsoleregexpfilter->sender();
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnSender(const Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Sender_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__RegExpFilter_SenderSignalIndex(const Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Konsole__RegExpFilter_QBaseSenderSignalIndex(const Konsole__RegExpFilter* self) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_SenderSignalIndex_IsBase(true);
        return vkonsoleregexpfilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnSenderSignalIndex(const Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__RegExpFilter_Receivers(const Konsole__RegExpFilter* self, const char* signal) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->receivers(signal);
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Konsole__RegExpFilter_QBaseReceivers(const Konsole__RegExpFilter* self, const char* signal) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Receivers_IsBase(true);
        return vkonsoleregexpfilter->receivers(signal);
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnReceivers(const Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_Receivers_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__RegExpFilter_IsSignalConnected(const Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        return vkonsoleregexpfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Konsole__RegExpFilter_QBaseIsSignalConnected(const Konsole__RegExpFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_IsSignalConnected_IsBase(true);
        return vkonsoleregexpfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleRegExpFilter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter_OnIsSignalConnected(const Konsole__RegExpFilter* self, intptr_t slot) {
    auto* vkonsoleregexpfilter = const_cast<VirtualKonsoleRegExpFilter*>(dynamic_cast<const VirtualKonsoleRegExpFilter*>(self));
    if (vkonsoleregexpfilter && vkonsoleregexpfilter->isVirtualKonsoleRegExpFilter) {
        vkonsoleregexpfilter->setKonsole__RegExpFilter_IsSignalConnected_Callback(reinterpret_cast<VirtualKonsoleRegExpFilter::Konsole__RegExpFilter_IsSignalConnected_Callback>(slot));
    }
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
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__UrlFilter_OnMetacall(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        vkonsole__urlfilter->setKonsole__UrlFilter_Metacall_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int Konsole__UrlFilter_QBaseMetacall(Konsole__UrlFilter* self, int param1, int param2, void** param3) {
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        vkonsole__urlfilter->setKonsole__UrlFilter_Metacall_IsBase(true);
        return vkonsole__urlfilter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Konsole__UrlFilter_Tr(const char* s) {
    QString _ret = Konsole::UrlFilter::tr(s);
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
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsole__urlfilter->newHotSpot(static_cast<int>(param1), static_cast<int>(param2), static_cast<int>(param3), static_cast<int>(param4));
    }
    return {};
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__UrlFilter_OnNewHotSpot(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        vkonsole__urlfilter->setKonsole__UrlFilter_NewHotSpot_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_NewHotSpot_Callback>(slot));
    }
}

// Virtual base class handler implementation
Konsole__RegExpFilter__HotSpot* Konsole__UrlFilter_QBaseNewHotSpot(Konsole__UrlFilter* self, int param1, int param2, int param3, int param4) {
    auto* vkonsole__urlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsole__urlfilter && vkonsole__urlfilter->isVirtualKonsoleUrlFilter) {
        vkonsole__urlfilter->setKonsole__UrlFilter_NewHotSpot_IsBase(true);
        return vkonsole__urlfilter->newHotSpot(static_cast<int>(param1), static_cast<int>(param2), static_cast<int>(param3), static_cast<int>(param4));
    }
    return {};
}

void Konsole__UrlFilter_Activated(Konsole__UrlFilter* self, const QUrl* url, bool fromContextMenu) {
    self->activated(*url, fromContextMenu);
}

void Konsole__UrlFilter_Connect_Activated(Konsole__UrlFilter* self, intptr_t slot) {
    void (*slotFunc)(Konsole__UrlFilter*, QUrl*, bool) = reinterpret_cast<void (*)(Konsole__UrlFilter*, QUrl*, bool)>(slot);
    Konsole::UrlFilter::connect(self, &Konsole::UrlFilter::activated, [self, slotFunc](const QUrl& url, bool fromContextMenu) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        bool sigval2 = fromContextMenu;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string Konsole__UrlFilter_Tr2(const char* s, const char* c) {
    QString _ret = Konsole::UrlFilter::tr(s, c);
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
    QString _ret = Konsole::UrlFilter::tr(s, c, static_cast<int>(n));
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
void Konsole__UrlFilter_Process(Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->process();
    } else {
        self->Konsole::UrlFilter::process();
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseProcess(Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Process_IsBase(true);
        vkonsoleurlfilter->process();
    } else {
        self->Konsole::UrlFilter::process();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnProcess(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Process_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Process_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__UrlFilter_Event(Konsole__UrlFilter* self, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->event(event);
    } else {
        return self->Konsole::UrlFilter::event(event);
    }
}

// Base class handler implementation
bool Konsole__UrlFilter_QBaseEvent(Konsole__UrlFilter* self, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Event_IsBase(true);
        return vkonsoleurlfilter->event(event);
    } else {
        return self->Konsole::UrlFilter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnEvent(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Event_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__UrlFilter_EventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->eventFilter(watched, event);
    } else {
        return self->Konsole::UrlFilter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Konsole__UrlFilter_QBaseEventFilter(Konsole__UrlFilter* self, QObject* watched, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_EventFilter_IsBase(true);
        return vkonsoleurlfilter->eventFilter(watched, event);
    } else {
        return self->Konsole::UrlFilter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnEventFilter(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_EventFilter_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_TimerEvent(Konsole__UrlFilter* self, QTimerEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->timerEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseTimerEvent(Konsole__UrlFilter* self, QTimerEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_TimerEvent_IsBase(true);
        vkonsoleurlfilter->timerEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnTimerEvent(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_TimerEvent_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_ChildEvent(Konsole__UrlFilter* self, QChildEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->childEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseChildEvent(Konsole__UrlFilter* self, QChildEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_ChildEvent_IsBase(true);
        vkonsoleurlfilter->childEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnChildEvent(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_ChildEvent_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_CustomEvent(Konsole__UrlFilter* self, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->customEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseCustomEvent(Konsole__UrlFilter* self, QEvent* event) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_CustomEvent_IsBase(true);
        vkonsoleurlfilter->customEvent(event);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnCustomEvent(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_CustomEvent_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_ConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseConnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_ConnectNotify_IsBase(true);
        vkonsoleurlfilter->connectNotify(*signal);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnConnectNotify(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_ConnectNotify_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_DisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseDisconnectNotify(Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_DisconnectNotify_IsBase(true);
        vkonsoleurlfilter->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnDisconnectNotify(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_DisconnectNotify_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_AddHotSpot(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->addHotSpot(param1);
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseAddHotSpot(Konsole__UrlFilter* self, Konsole__Filter__HotSpot* param1) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_AddHotSpot_IsBase(true);
        vkonsoleurlfilter->addHotSpot(param1);
    } else {
        ((VirtualKonsoleUrlFilter*)self)->addHotSpot(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnAddHotSpot(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_AddHotSpot_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_AddHotSpot_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string Konsole__UrlFilter_Buffer(Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        const QString* _ret = vkonsoleurlfilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleUrlFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string Konsole__UrlFilter_QBaseBuffer(Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Buffer_IsBase(true);
        const QString* _ret = vkonsoleurlfilter->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        const QString* _ret = ((VirtualKonsoleUrlFilter*)self)->buffer();
        // Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret->toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnBuffer(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Buffer_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Buffer_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__UrlFilter_GetLineColumn(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleUrlFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Base class handler implementation
void Konsole__UrlFilter_QBaseGetLineColumn(Konsole__UrlFilter* self, int position, int* startLine, int* startColumn) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_GetLineColumn_IsBase(true);
        vkonsoleurlfilter->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    } else {
        ((VirtualKonsoleUrlFilter*)self)->getLineColumn(static_cast<int>(position), static_cast<int&>(*startLine), static_cast<int&>(*startColumn));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnGetLineColumn(Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = dynamic_cast<VirtualKonsoleUrlFilter*>(self);
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_GetLineColumn_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_GetLineColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Konsole__UrlFilter_Sender(const Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->sender();
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->sender();
    }
}

// Base class handler implementation
QObject* Konsole__UrlFilter_QBaseSender(const Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Sender_IsBase(true);
        return vkonsoleurlfilter->sender();
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnSender(const Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Sender_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__UrlFilter_SenderSignalIndex(const Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Konsole__UrlFilter_QBaseSenderSignalIndex(const Konsole__UrlFilter* self) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_SenderSignalIndex_IsBase(true);
        return vkonsoleurlfilter->senderSignalIndex();
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnSenderSignalIndex(const Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__UrlFilter_Receivers(const Konsole__UrlFilter* self, const char* signal) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->receivers(signal);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Konsole__UrlFilter_QBaseReceivers(const Konsole__UrlFilter* self, const char* signal) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Receivers_IsBase(true);
        return vkonsoleurlfilter->receivers(signal);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnReceivers(const Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_Receivers_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__UrlFilter_IsSignalConnected(const Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        return vkonsoleurlfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Konsole__UrlFilter_QBaseIsSignalConnected(const Konsole__UrlFilter* self, const QMetaMethod* signal) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_IsSignalConnected_IsBase(true);
        return vkonsoleurlfilter->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleUrlFilter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter_OnIsSignalConnected(const Konsole__UrlFilter* self, intptr_t slot) {
    auto* vkonsoleurlfilter = const_cast<VirtualKonsoleUrlFilter*>(dynamic_cast<const VirtualKonsoleUrlFilter*>(self));
    if (vkonsoleurlfilter && vkonsoleurlfilter->isVirtualKonsoleUrlFilter) {
        vkonsoleurlfilter->setKonsole__UrlFilter_IsSignalConnected_Callback(reinterpret_cast<VirtualKonsoleUrlFilter::Konsole__UrlFilter_IsSignalConnected_Callback>(slot));
    }
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
    auto* vkonsole__filterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsole__filterobject && vkonsole__filterobject->isVirtualKonsoleFilterObject) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__FilterObject_OnMetacall(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsole__filterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsole__filterobject && vkonsole__filterobject->isVirtualKonsoleFilterObject) {
        vkonsole__filterobject->setKonsole__FilterObject_Metacall_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int Konsole__FilterObject_QBaseMetacall(Konsole__FilterObject* self, int param1, int param2, void** param3) {
    auto* vkonsole__filterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsole__filterobject && vkonsole__filterobject->isVirtualKonsoleFilterObject) {
        vkonsole__filterobject->setKonsole__FilterObject_Metacall_IsBase(true);
        return vkonsole__filterobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Konsole__FilterObject_Tr(const char* s) {
    QString _ret = Konsole::FilterObject::tr(s);
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
    Konsole::FilterObject::connect(self, &Konsole::FilterObject::activated, [self, slotFunc](const QUrl& url, bool fromContextMenu) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        bool sigval2 = fromContextMenu;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string Konsole__FilterObject_Tr2(const char* s, const char* c) {
    QString _ret = Konsole::FilterObject::tr(s, c);
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
    QString _ret = Konsole::FilterObject::tr(s, c, static_cast<int>(n));
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
bool Konsole__FilterObject_Event(Konsole__FilterObject* self, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->event(event);
    } else {
        return self->Konsole::FilterObject::event(event);
    }
}

// Base class handler implementation
bool Konsole__FilterObject_QBaseEvent(Konsole__FilterObject* self, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Event_IsBase(true);
        return vkonsolefilterobject->event(event);
    } else {
        return self->Konsole::FilterObject::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnEvent(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Event_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__FilterObject_EventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->eventFilter(watched, event);
    } else {
        return self->Konsole::FilterObject::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Konsole__FilterObject_QBaseEventFilter(Konsole__FilterObject* self, QObject* watched, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_EventFilter_IsBase(true);
        return vkonsolefilterobject->eventFilter(watched, event);
    } else {
        return self->Konsole::FilterObject::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnEventFilter(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_EventFilter_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__FilterObject_TimerEvent(Konsole__FilterObject* self, QTimerEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->timerEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Konsole__FilterObject_QBaseTimerEvent(Konsole__FilterObject* self, QTimerEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_TimerEvent_IsBase(true);
        vkonsolefilterobject->timerEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnTimerEvent(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_TimerEvent_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__FilterObject_ChildEvent(Konsole__FilterObject* self, QChildEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->childEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Konsole__FilterObject_QBaseChildEvent(Konsole__FilterObject* self, QChildEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_ChildEvent_IsBase(true);
        vkonsolefilterobject->childEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnChildEvent(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_ChildEvent_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__FilterObject_CustomEvent(Konsole__FilterObject* self, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->customEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Konsole__FilterObject_QBaseCustomEvent(Konsole__FilterObject* self, QEvent* event) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_CustomEvent_IsBase(true);
        vkonsolefilterobject->customEvent(event);
    } else {
        ((VirtualKonsoleFilterObject*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnCustomEvent(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_CustomEvent_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__FilterObject_ConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->connectNotify(*signal);
    } else {
        ((VirtualKonsoleFilterObject*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__FilterObject_QBaseConnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_ConnectNotify_IsBase(true);
        vkonsolefilterobject->connectNotify(*signal);
    } else {
        ((VirtualKonsoleFilterObject*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnConnectNotify(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_ConnectNotify_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__FilterObject_DisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleFilterObject*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__FilterObject_QBaseDisconnectNotify(Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_DisconnectNotify_IsBase(true);
        vkonsolefilterobject->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleFilterObject*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnDisconnectNotify(Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = dynamic_cast<VirtualKonsoleFilterObject*>(self);
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_DisconnectNotify_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Konsole__FilterObject_Sender(const Konsole__FilterObject* self) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->sender();
    } else {
        return ((VirtualKonsoleFilterObject*)self)->sender();
    }
}

// Base class handler implementation
QObject* Konsole__FilterObject_QBaseSender(const Konsole__FilterObject* self) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Sender_IsBase(true);
        return vkonsolefilterobject->sender();
    } else {
        return ((VirtualKonsoleFilterObject*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnSender(const Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Sender_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__FilterObject_SenderSignalIndex(const Konsole__FilterObject* self) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->senderSignalIndex();
    } else {
        return ((VirtualKonsoleFilterObject*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Konsole__FilterObject_QBaseSenderSignalIndex(const Konsole__FilterObject* self) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_SenderSignalIndex_IsBase(true);
        return vkonsolefilterobject->senderSignalIndex();
    } else {
        return ((VirtualKonsoleFilterObject*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnSenderSignalIndex(const Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__FilterObject_Receivers(const Konsole__FilterObject* self, const char* signal) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->receivers(signal);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Konsole__FilterObject_QBaseReceivers(const Konsole__FilterObject* self, const char* signal) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Receivers_IsBase(true);
        return vkonsolefilterobject->receivers(signal);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnReceivers(const Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_Receivers_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__FilterObject_IsSignalConnected(const Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        return vkonsolefilterobject->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Konsole__FilterObject_QBaseIsSignalConnected(const Konsole__FilterObject* self, const QMetaMethod* signal) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_IsSignalConnected_IsBase(true);
        return vkonsolefilterobject->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleFilterObject*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__FilterObject_OnIsSignalConnected(const Konsole__FilterObject* self, intptr_t slot) {
    auto* vkonsolefilterobject = const_cast<VirtualKonsoleFilterObject*>(dynamic_cast<const VirtualKonsoleFilterObject*>(self));
    if (vkonsolefilterobject && vkonsolefilterobject->isVirtualKonsoleFilterObject) {
        vkonsolefilterobject->setKonsole__FilterObject_IsSignalConnected_Callback(reinterpret_cast<VirtualKonsoleFilterObject::Konsole__FilterObject_IsSignalConnected_Callback>(slot));
    }
}

void Konsole__FilterObject_Delete(Konsole__FilterObject* self) {
    delete self;
}

Konsole__FilterChain* Konsole__FilterChain_new(const Konsole__FilterChain* param1) {
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
    Konsole__Filter__HotSpot** _arr = static_cast<Konsole__Filter__HotSpot**>(malloc(sizeof(Konsole__Filter__HotSpot*) * (_ret.size() + 1)));
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
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsole__filter__hotspot->activate(action_QString);
    } else {
        ((VirtualKonsoleFilterHotSpot*)self)->activate(action_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__Filter__HotSpot_OnActivate(Konsole__Filter__HotSpot* self, intptr_t slot) {
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsole__filter__hotspot->setKonsole__Filter__HotSpot_Activate_Callback(reinterpret_cast<VirtualKonsoleFilterHotSpot::Konsole__Filter__HotSpot_Activate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void Konsole__Filter__HotSpot_QBaseActivate(Konsole__Filter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsole__filter__hotspot->setKonsole__Filter__HotSpot_Activate_IsBase(true);
        vkonsole__filter__hotspot->activate(action_QString);
    } else {
        ((VirtualKonsoleFilterHotSpot*)self)->activate(action_QString);
    }
}

libqt_list /* of QAction* */ Konsole__Filter__HotSpot_Actions(Konsole__Filter__HotSpot* self) {
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
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
    } else {
        QList<QAction*> _ret = ((VirtualKonsoleFilterHotSpot*)self)->actions();
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
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__Filter__HotSpot_OnActions(Konsole__Filter__HotSpot* self, intptr_t slot) {
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsole__filter__hotspot->setKonsole__Filter__HotSpot_Actions_Callback(reinterpret_cast<VirtualKonsoleFilterHotSpot::Konsole__Filter__HotSpot_Actions_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of QAction* */ Konsole__Filter__HotSpot_QBaseActions(Konsole__Filter__HotSpot* self) {
    auto* vkonsole__filter__hotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsole__filter__hotspot && vkonsole__filter__hotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsole__filter__hotspot->setKonsole__Filter__HotSpot_Actions_IsBase(true);
        QList<QAction*> _ret = vkonsole__filter__hotspot->actions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualKonsoleFilterHotSpot*)self)->actions();
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
}

// Derived class handler implementation
void Konsole__Filter__HotSpot_SetType(Konsole__Filter__HotSpot* self, int typeVal) {
    auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsolefilterhotspot && vkonsolefilterhotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsolefilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Base class handler implementation
void Konsole__Filter__HotSpot_QBaseSetType(Konsole__Filter__HotSpot* self, int typeVal) {
    auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsolefilterhotspot && vkonsolefilterhotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsolefilterhotspot->setKonsole__Filter__HotSpot_SetType_IsBase(true);
        vkonsolefilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Filter__HotSpot_OnSetType(Konsole__Filter__HotSpot* self, intptr_t slot) {
    auto* vkonsolefilterhotspot = dynamic_cast<VirtualKonsoleFilterHotSpot*>(self);
    if (vkonsolefilterhotspot && vkonsolefilterhotspot->isVirtualKonsoleFilterHotSpot) {
        vkonsolefilterhotspot->setKonsole__Filter__HotSpot_SetType_Callback(reinterpret_cast<VirtualKonsoleFilterHotSpot::Konsole__Filter__HotSpot_SetType_Callback>(slot));
    }
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
    auto* vkonsole__regexpfilter__hotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsole__regexpfilter__hotspot && vkonsole__regexpfilter__hotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        self->activate(action_QString);
    } else {
        ((VirtualKonsoleRegExpFilterHotSpot*)self)->activate(action_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__RegExpFilter__HotSpot_OnActivate(Konsole__RegExpFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsole__regexpfilter__hotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsole__regexpfilter__hotspot && vkonsole__regexpfilter__hotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsole__regexpfilter__hotspot->setKonsole__RegExpFilter__HotSpot_Activate_Callback(reinterpret_cast<VirtualKonsoleRegExpFilterHotSpot::Konsole__RegExpFilter__HotSpot_Activate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void Konsole__RegExpFilter__HotSpot_QBaseActivate(Konsole__RegExpFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    auto* vkonsole__regexpfilter__hotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsole__regexpfilter__hotspot && vkonsole__regexpfilter__hotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsole__regexpfilter__hotspot->setKonsole__RegExpFilter__HotSpot_Activate_IsBase(true);
        vkonsole__regexpfilter__hotspot->activate(action_QString);
    } else {
        ((VirtualKonsoleRegExpFilterHotSpot*)self)->activate(action_QString);
    }
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

// Derived class handler implementation
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_Actions(Konsole__RegExpFilter__HotSpot* self) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        QList<QAction*> _ret = vkonsoleregexpfilterhotspot->actions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = self->Konsole::RegExpFilter::HotSpot::actions();
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
}

// Base class handler implementation
libqt_list /* of QAction* */ Konsole__RegExpFilter__HotSpot_QBaseActions(Konsole__RegExpFilter__HotSpot* self) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsoleregexpfilterhotspot->setKonsole__RegExpFilter__HotSpot_Actions_IsBase(true);
        QList<QAction*> _ret = vkonsoleregexpfilterhotspot->actions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = self->Konsole::RegExpFilter::HotSpot::actions();
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
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter__HotSpot_OnActions(Konsole__RegExpFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsoleregexpfilterhotspot->setKonsole__RegExpFilter__HotSpot_Actions_Callback(reinterpret_cast<VirtualKonsoleRegExpFilterHotSpot::Konsole__RegExpFilter__HotSpot_Actions_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__RegExpFilter__HotSpot_SetType(Konsole__RegExpFilter__HotSpot* self, int typeVal) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsoleregexpfilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleRegExpFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Base class handler implementation
void Konsole__RegExpFilter__HotSpot_QBaseSetType(Konsole__RegExpFilter__HotSpot* self, int typeVal) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsoleregexpfilterhotspot->setKonsole__RegExpFilter__HotSpot_SetType_IsBase(true);
        vkonsoleregexpfilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleRegExpFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__RegExpFilter__HotSpot_OnSetType(Konsole__RegExpFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsoleregexpfilterhotspot = dynamic_cast<VirtualKonsoleRegExpFilterHotSpot*>(self);
    if (vkonsoleregexpfilterhotspot && vkonsoleregexpfilterhotspot->isVirtualKonsoleRegExpFilterHotSpot) {
        vkonsoleregexpfilterhotspot->setKonsole__RegExpFilter__HotSpot_SetType_Callback(reinterpret_cast<VirtualKonsoleRegExpFilterHotSpot::Konsole__RegExpFilter__HotSpot_SetType_Callback>(slot));
    }
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
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
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
    } else {
        QList<QAction*> _ret = ((VirtualKonsoleUrlFilterHotSpot*)self)->actions();
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
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__UrlFilter__HotSpot_OnActions(Konsole__UrlFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsole__urlfilter__hotspot->setKonsole__UrlFilter__HotSpot_Actions_Callback(reinterpret_cast<VirtualKonsoleUrlFilterHotSpot::Konsole__UrlFilter__HotSpot_Actions_Callback>(slot));
    }
}

// Virtual base class handler implementation
libqt_list /* of QAction* */ Konsole__UrlFilter__HotSpot_QBaseActions(Konsole__UrlFilter__HotSpot* self) {
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsole__urlfilter__hotspot->setKonsole__UrlFilter__HotSpot_Actions_IsBase(true);
        QList<QAction*> _ret = vkonsole__urlfilter__hotspot->actions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualKonsoleUrlFilterHotSpot*)self)->actions();
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
}

void Konsole__UrlFilter__HotSpot_Activate(Konsole__UrlFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
        self->activate(action_QString);
    } else {
        ((VirtualKonsoleUrlFilterHotSpot*)self)->activate(action_QString);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__UrlFilter__HotSpot_OnActivate(Konsole__UrlFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsole__urlfilter__hotspot->setKonsole__UrlFilter__HotSpot_Activate_Callback(reinterpret_cast<VirtualKonsoleUrlFilterHotSpot::Konsole__UrlFilter__HotSpot_Activate_Callback>(slot));
    }
}

// Virtual base class handler implementation
void Konsole__UrlFilter__HotSpot_QBaseActivate(Konsole__UrlFilter__HotSpot* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    auto* vkonsole__urlfilter__hotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsole__urlfilter__hotspot && vkonsole__urlfilter__hotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsole__urlfilter__hotspot->setKonsole__UrlFilter__HotSpot_Activate_IsBase(true);
        vkonsole__urlfilter__hotspot->activate(action_QString);
    } else {
        ((VirtualKonsoleUrlFilterHotSpot*)self)->activate(action_QString);
    }
}

// Derived class handler implementation
void Konsole__UrlFilter__HotSpot_SetType(Konsole__UrlFilter__HotSpot* self, int typeVal) {
    auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsoleurlfilterhotspot && vkonsoleurlfilterhotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsoleurlfilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleUrlFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Base class handler implementation
void Konsole__UrlFilter__HotSpot_QBaseSetType(Konsole__UrlFilter__HotSpot* self, int typeVal) {
    auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsoleurlfilterhotspot && vkonsoleurlfilterhotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsoleurlfilterhotspot->setKonsole__UrlFilter__HotSpot_SetType_IsBase(true);
        vkonsoleurlfilterhotspot->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    } else {
        ((VirtualKonsoleUrlFilterHotSpot*)self)->setType(static_cast<Konsole::Filter::HotSpot::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__UrlFilter__HotSpot_OnSetType(Konsole__UrlFilter__HotSpot* self, intptr_t slot) {
    auto* vkonsoleurlfilterhotspot = dynamic_cast<VirtualKonsoleUrlFilterHotSpot*>(self);
    if (vkonsoleurlfilterhotspot && vkonsoleurlfilterhotspot->isVirtualKonsoleUrlFilterHotSpot) {
        vkonsoleurlfilterhotspot->setKonsole__UrlFilter__HotSpot_SetType_Callback(reinterpret_cast<VirtualKonsoleUrlFilterHotSpot::Konsole__UrlFilter__HotSpot_SetType_Callback>(slot));
    }
}

void Konsole__UrlFilter__HotSpot_Delete(Konsole__UrlFilter__HotSpot* self) {
    delete self;
}
