#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfLink>
#include <QPdfPageNavigator>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpdfpagenavigator.h>
#include "libqpdfpagenavigator.h"
#include "libqpdfpagenavigator.hxx"

QPdfPageNavigator* QPdfPageNavigator_new() {
    return new VirtualQPdfPageNavigator();
}

QPdfPageNavigator* QPdfPageNavigator_new2(QObject* parent) {
    return new VirtualQPdfPageNavigator(parent);
}

QMetaObject* QPdfPageNavigator_MetaObject(const QPdfPageNavigator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPdfPageNavigator_Metacast(QPdfPageNavigator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPdfPageNavigator_Metacall(QPdfPageNavigator* self, int param1, int param2, void** param3) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPdfPageNavigator_OnMetacall(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Metacall_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPdfPageNavigator_QBaseMetacall(QPdfPageNavigator* self, int param1, int param2, void** param3) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Metacall_IsBase(true);
        return vqpdfpagenavigator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPdfPageNavigator_Tr(const char* s) {
    QString _ret = QPdfPageNavigator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QPdfPageNavigator_CurrentPage(const QPdfPageNavigator* self) {
    return self->currentPage();
}

QPointF* QPdfPageNavigator_CurrentLocation(const QPdfPageNavigator* self) {
    return new QPointF(self->currentLocation());
}

double QPdfPageNavigator_CurrentZoom(const QPdfPageNavigator* self) {
    return static_cast<double>(self->currentZoom());
}

bool QPdfPageNavigator_BackAvailable(const QPdfPageNavigator* self) {
    return self->backAvailable();
}

bool QPdfPageNavigator_ForwardAvailable(const QPdfPageNavigator* self) {
    return self->forwardAvailable();
}

void QPdfPageNavigator_Clear(QPdfPageNavigator* self) {
    self->clear();
}

void QPdfPageNavigator_Jump(QPdfPageNavigator* self, QPdfLink* destination) {
    self->jump(*destination);
}

void QPdfPageNavigator_Jump2(QPdfPageNavigator* self, int page, const QPointF* location) {
    self->jump(static_cast<int>(page), *location);
}

void QPdfPageNavigator_Update(QPdfPageNavigator* self, int page, const QPointF* location, double zoom) {
    self->update(static_cast<int>(page), *location, static_cast<qreal>(zoom));
}

void QPdfPageNavigator_Forward(QPdfPageNavigator* self) {
    self->forward();
}

void QPdfPageNavigator_Back(QPdfPageNavigator* self) {
    self->back();
}

void QPdfPageNavigator_CurrentPageChanged(QPdfPageNavigator* self, int page) {
    self->currentPageChanged(static_cast<int>(page));
}

void QPdfPageNavigator_Connect_CurrentPageChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, int) = reinterpret_cast<void (*)(QPdfPageNavigator*, int)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::currentPageChanged, [self, slotFunc](int page) {
        int sigval1 = page;
        slotFunc(self, sigval1);
    });
}

void QPdfPageNavigator_CurrentLocationChanged(QPdfPageNavigator* self, QPointF* location) {
    self->currentLocationChanged(*location);
}

void QPdfPageNavigator_Connect_CurrentLocationChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, QPointF*) = reinterpret_cast<void (*)(QPdfPageNavigator*, QPointF*)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::currentLocationChanged, [self, slotFunc](QPointF location) {
        QPointF* sigval1 = new QPointF(location);
        slotFunc(self, sigval1);
    });
}

void QPdfPageNavigator_CurrentZoomChanged(QPdfPageNavigator* self, double zoom) {
    self->currentZoomChanged(static_cast<qreal>(zoom));
}

void QPdfPageNavigator_Connect_CurrentZoomChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, double) = reinterpret_cast<void (*)(QPdfPageNavigator*, double)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::currentZoomChanged, [self, slotFunc](qreal zoom) {
        double sigval1 = static_cast<double>(zoom);
        slotFunc(self, sigval1);
    });
}

void QPdfPageNavigator_BackAvailableChanged(QPdfPageNavigator* self, bool available) {
    self->backAvailableChanged(available);
}

void QPdfPageNavigator_Connect_BackAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, bool) = reinterpret_cast<void (*)(QPdfPageNavigator*, bool)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::backAvailableChanged, [self, slotFunc](bool available) {
        bool sigval1 = available;
        slotFunc(self, sigval1);
    });
}

void QPdfPageNavigator_ForwardAvailableChanged(QPdfPageNavigator* self, bool available) {
    self->forwardAvailableChanged(available);
}

void QPdfPageNavigator_Connect_ForwardAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, bool) = reinterpret_cast<void (*)(QPdfPageNavigator*, bool)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::forwardAvailableChanged, [self, slotFunc](bool available) {
        bool sigval1 = available;
        slotFunc(self, sigval1);
    });
}

void QPdfPageNavigator_Jumped(QPdfPageNavigator* self, QPdfLink* current) {
    self->jumped(*current);
}

void QPdfPageNavigator_Connect_Jumped(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, QPdfLink*) = reinterpret_cast<void (*)(QPdfPageNavigator*, QPdfLink*)>(slot);
    QPdfPageNavigator::connect(self, &QPdfPageNavigator::jumped, [self, slotFunc](QPdfLink current) {
        QPdfLink* sigval1 = new QPdfLink(current);
        slotFunc(self, sigval1);
    });
}

libqt_string QPdfPageNavigator_Tr2(const char* s, const char* c) {
    QString _ret = QPdfPageNavigator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageNavigator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPdfPageNavigator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPdfPageNavigator_Jump3(QPdfPageNavigator* self, int page, const QPointF* location, double zoom) {
    self->jump(static_cast<int>(page), *location, static_cast<qreal>(zoom));
}

// Derived class handler implementation
bool QPdfPageNavigator_Event(QPdfPageNavigator* self, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->event(event);
    } else {
        return self->QPdfPageNavigator::event(event);
    }
}

// Base class handler implementation
bool QPdfPageNavigator_QBaseEvent(QPdfPageNavigator* self, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Event_IsBase(true);
        return vqpdfpagenavigator->event(event);
    } else {
        return self->QPdfPageNavigator::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnEvent(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Event_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageNavigator_EventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->eventFilter(watched, event);
    } else {
        return self->QPdfPageNavigator::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPdfPageNavigator_QBaseEventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_EventFilter_IsBase(true);
        return vqpdfpagenavigator->eventFilter(watched, event);
    } else {
        return self->QPdfPageNavigator::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnEventFilter(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_EventFilter_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageNavigator_TimerEvent(QPdfPageNavigator* self, QTimerEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->timerEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPdfPageNavigator_QBaseTimerEvent(QPdfPageNavigator* self, QTimerEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_TimerEvent_IsBase(true);
        vqpdfpagenavigator->timerEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnTimerEvent(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_TimerEvent_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageNavigator_ChildEvent(QPdfPageNavigator* self, QChildEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->childEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPdfPageNavigator_QBaseChildEvent(QPdfPageNavigator* self, QChildEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_ChildEvent_IsBase(true);
        vqpdfpagenavigator->childEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnChildEvent(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_ChildEvent_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageNavigator_CustomEvent(QPdfPageNavigator* self, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->customEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPdfPageNavigator_QBaseCustomEvent(QPdfPageNavigator* self, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_CustomEvent_IsBase(true);
        vqpdfpagenavigator->customEvent(event);
    } else {
        ((VirtualQPdfPageNavigator*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnCustomEvent(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_CustomEvent_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageNavigator_ConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->connectNotify(*signal);
    } else {
        ((VirtualQPdfPageNavigator*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageNavigator_QBaseConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_ConnectNotify_IsBase(true);
        vqpdfpagenavigator->connectNotify(*signal);
    } else {
        ((VirtualQPdfPageNavigator*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnConnectNotify(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_ConnectNotify_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPdfPageNavigator_DisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfPageNavigator*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPdfPageNavigator_QBaseDisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_DisconnectNotify_IsBase(true);
        vqpdfpagenavigator->disconnectNotify(*signal);
    } else {
        ((VirtualQPdfPageNavigator*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnDisconnectNotify(QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_DisconnectNotify_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QPdfLink* QPdfPageNavigator_CurrentLink(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return new QPdfLink(vqpdfpagenavigator->currentLink());
    }
    return {};
}

// Base class handler implementation
QPdfLink* QPdfPageNavigator_QBaseCurrentLink(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_CurrentLink_IsBase(true);
        return new QPdfLink(vqpdfpagenavigator->currentLink());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnCurrentLink(const QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_CurrentLink_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_CurrentLink_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPdfPageNavigator_Sender(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->sender();
    } else {
        return ((VirtualQPdfPageNavigator*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPdfPageNavigator_QBaseSender(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Sender_IsBase(true);
        return vqpdfpagenavigator->sender();
    } else {
        return ((VirtualQPdfPageNavigator*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnSender(const QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Sender_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageNavigator_SenderSignalIndex(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->senderSignalIndex();
    } else {
        return ((VirtualQPdfPageNavigator*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPdfPageNavigator_QBaseSenderSignalIndex(const QPdfPageNavigator* self) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_SenderSignalIndex_IsBase(true);
        return vqpdfpagenavigator->senderSignalIndex();
    } else {
        return ((VirtualQPdfPageNavigator*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnSenderSignalIndex(const QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPdfPageNavigator_Receivers(const QPdfPageNavigator* self, const char* signal) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->receivers(signal);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPdfPageNavigator_QBaseReceivers(const QPdfPageNavigator* self, const char* signal) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Receivers_IsBase(true);
        return vqpdfpagenavigator->receivers(signal);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnReceivers(const QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_Receivers_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPdfPageNavigator_IsSignalConnected(const QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        return vqpdfpagenavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPdfPageNavigator_QBaseIsSignalConnected(const QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_IsSignalConnected_IsBase(true);
        return vqpdfpagenavigator->isSignalConnected(*signal);
    } else {
        return ((VirtualQPdfPageNavigator*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnIsSignalConnected(const QPdfPageNavigator* self, intptr_t slot) {
    auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self));
    if (vqpdfpagenavigator && vqpdfpagenavigator->isVirtualQPdfPageNavigator) {
        vqpdfpagenavigator->setQPdfPageNavigator_IsSignalConnected_Callback(reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_IsSignalConnected_Callback>(slot));
    }
}

void QPdfPageNavigator_Delete(QPdfPageNavigator* self) {
    delete self;
}
