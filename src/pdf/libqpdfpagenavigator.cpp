#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfLink>
#include <QPdfPageNavigator>
#include <QPointF>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPdfPageNavigator_Tr(const char* s) {
    auto _ret = QPdfPageNavigator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(int)>(&QPdfPageNavigator::currentPageChanged),
                               [self, slotFunc](int page) {
                                   int sigval1 = page;
                                   slotFunc(self, sigval1);
                               });
}

void QPdfPageNavigator_CurrentLocationChanged(QPdfPageNavigator* self, QPointF* location) {
    self->currentLocationChanged(*location);
}

void QPdfPageNavigator_Connect_CurrentLocationChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, QPointF*) = reinterpret_cast<void (*)(QPdfPageNavigator*, QPointF*)>(slot);
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(QPointF)>(&QPdfPageNavigator::currentLocationChanged),
                               [self, slotFunc](QPointF location) {
                                   QPointF* sigval1 = new QPointF(location);
                                   slotFunc(self, sigval1);
                               });
}

void QPdfPageNavigator_CurrentZoomChanged(QPdfPageNavigator* self, double zoom) {
    self->currentZoomChanged(static_cast<qreal>(zoom));
}

void QPdfPageNavigator_Connect_CurrentZoomChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, double) = reinterpret_cast<void (*)(QPdfPageNavigator*, double)>(slot);
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(qreal)>(&QPdfPageNavigator::currentZoomChanged),
                               [self, slotFunc](qreal zoom) {
                                   double sigval1 = static_cast<double>(zoom);
                                   slotFunc(self, sigval1);
                               });
}

void QPdfPageNavigator_BackAvailableChanged(QPdfPageNavigator* self, bool available) {
    self->backAvailableChanged(available);
}

void QPdfPageNavigator_Connect_BackAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, bool) = reinterpret_cast<void (*)(QPdfPageNavigator*, bool)>(slot);
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(bool)>(&QPdfPageNavigator::backAvailableChanged),
                               [self, slotFunc](bool available) {
                                   bool sigval1 = available;
                                   slotFunc(self, sigval1);
                               });
}

void QPdfPageNavigator_ForwardAvailableChanged(QPdfPageNavigator* self, bool available) {
    self->forwardAvailableChanged(available);
}

void QPdfPageNavigator_Connect_ForwardAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, bool) = reinterpret_cast<void (*)(QPdfPageNavigator*, bool)>(slot);
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(bool)>(&QPdfPageNavigator::forwardAvailableChanged),
                               [self, slotFunc](bool available) {
                                   bool sigval1 = available;
                                   slotFunc(self, sigval1);
                               });
}

void QPdfPageNavigator_Jumped(QPdfPageNavigator* self, QPdfLink* current) {
    self->jumped(*current);
}

void QPdfPageNavigator_Connect_Jumped(QPdfPageNavigator* self, intptr_t slot) {
    void (*slotFunc)(QPdfPageNavigator*, QPdfLink*) = reinterpret_cast<void (*)(QPdfPageNavigator*, QPdfLink*)>(slot);
    QPdfPageNavigator::connect(self,
                               static_cast<void (QPdfPageNavigator::*)(QPdfLink)>(&QPdfPageNavigator::jumped),
                               [self, slotFunc](QPdfLink current) {
                                   QPdfLink* sigval1 = new QPdfLink(current);
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QPdfPageNavigator_Tr2(const char* s, const char* c) {
    auto _ret = QPdfPageNavigator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPdfPageNavigator_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPdfPageNavigator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPdfPageNavigator_Jump3(QPdfPageNavigator* self, int page, const QPointF* location, double zoom) {
    self->jump(static_cast<int>(page), *location, static_cast<qreal>(zoom));
}

// Base class handler implementation
QMetaObject* QPdfPageNavigator_SuperMetaObject(const QPdfPageNavigator* self) {
    return (QMetaObject*)self->QPdfPageNavigator::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnMetaObject(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self)))
        vqpdfpagenavigator->qpdfpagenavigator_metaobject_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPdfPageNavigator_SuperMetacast(QPdfPageNavigator* self, const char* param1) {
    return self->QPdfPageNavigator::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnMetacast(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_metacast_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPdfPageNavigator_SuperMetacall(QPdfPageNavigator* self, int param1, int param2, void** param3) {
    return self->QPdfPageNavigator::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnMetacall(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_metacall_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageNavigator_Event(QPdfPageNavigator* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPdfPageNavigator_SuperEvent(QPdfPageNavigator* self, QEvent* event) {
    return self->QPdfPageNavigator::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnEvent(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_event_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPdfPageNavigator_EventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPdfPageNavigator_SuperEventFilter(QPdfPageNavigator* self, QObject* watched, QEvent* event) {
    return self->QPdfPageNavigator::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnEventFilter(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_eventfilter_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageNavigator_TimerEvent(QPdfPageNavigator* self, QTimerEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator) {
        vqpdfpagenavigator->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageNavigator::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageNavigator_SuperTimerEvent(QPdfPageNavigator* self, QTimerEvent* event) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self)) {
        vqpdfpagenavigator->QPdfPageNavigator::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageNavigator::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnTimerEvent(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_timerevent_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageNavigator_ChildEvent(QPdfPageNavigator* self, QChildEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator) {
        vqpdfpagenavigator->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageNavigator::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageNavigator_SuperChildEvent(QPdfPageNavigator* self, QChildEvent* event) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self)) {
        vqpdfpagenavigator->QPdfPageNavigator::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageNavigator::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnChildEvent(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_childevent_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageNavigator_CustomEvent(QPdfPageNavigator* self, QEvent* event) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator) {
        vqpdfpagenavigator->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPdfPageNavigator::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageNavigator_SuperCustomEvent(QPdfPageNavigator* self, QEvent* event) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self)) {
        vqpdfpagenavigator->QPdfPageNavigator::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPdfPageNavigator::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnCustomEvent(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_customevent_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageNavigator_ConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator) {
        vqpdfpagenavigator->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageNavigator::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageNavigator_SuperConnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self)) {
        vqpdfpagenavigator->QPdfPageNavigator::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageNavigator::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnConnectNotify(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_connectnotify_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPdfPageNavigator_DisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self);
    if (vqpdfpagenavigator) {
        vqpdfpagenavigator->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPdfPageNavigator::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPdfPageNavigator_SuperDisconnectNotify(QPdfPageNavigator* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self)) {
        vqpdfpagenavigator->QPdfPageNavigator::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPdfPageNavigator::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPdfPageNavigator_OnDisconnectNotify(QPdfPageNavigator* self, intptr_t slot) {
    if (auto* vqpdfpagenavigator = dynamic_cast<VirtualQPdfPageNavigator*>(self))
        vqpdfpagenavigator->qpdfpagenavigator_disconnectnotify_callback = reinterpret_cast<VirtualQPdfPageNavigator::QPdfPageNavigator_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QPdfLink* QPdfPageNavigator_CurrentLink(const QPdfPageNavigator* self) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self)))
        return new QPdfLink(vqpdfpagenavigator->currentLink());
    qFatal("Error: Protected method QPdfPageNavigator::currentLink called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPdfPageNavigator_Sender(const QPdfPageNavigator* self) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self))) {
        return vqpdfpagenavigator->VirtualQPdfPageNavigator::sender();
    } else
        qFatal("Error: Protected method QPdfPageNavigator::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageNavigator_SenderSignalIndex(const QPdfPageNavigator* self) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self))) {
        return vqpdfpagenavigator->VirtualQPdfPageNavigator::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPdfPageNavigator::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPdfPageNavigator_Receivers(const QPdfPageNavigator* self, const char* signal) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self))) {
        return vqpdfpagenavigator->VirtualQPdfPageNavigator::receivers(signal);
    } else
        qFatal("Error: Protected method QPdfPageNavigator::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPdfPageNavigator_IsSignalConnected(const QPdfPageNavigator* self, const QMetaMethod* signal) {
    if (auto* vqpdfpagenavigator = const_cast<VirtualQPdfPageNavigator*>(dynamic_cast<const VirtualQPdfPageNavigator*>(self))) {
        return vqpdfpagenavigator->VirtualQPdfPageNavigator::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPdfPageNavigator::isSignalConnected called without a directly constructed type");
}

void QPdfPageNavigator_Delete(QPdfPageNavigator* self) {
    delete self;
}
