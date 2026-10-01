#include <QChildEvent>
#include <QDrag>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QString>
#include <QTimerEvent>
#include <qdrag.h>
#include "libqdrag.h"
#include "libqdrag.hxx"

QDrag* QDrag_new(QObject* dragSource) {
    return new VirtualQDrag(dragSource);
}

QMetaObject* QDrag_MetaObject(const QDrag* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDrag_Metacast(QDrag* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDrag_Metacall(QDrag* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QDrag_Tr(const char* s) {
    auto _ret = QDrag::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDrag_SetMimeData(QDrag* self, QMimeData* data) {
    self->setMimeData(data);
}

QMimeData* QDrag_MimeData(const QDrag* self) {
    return self->mimeData();
}

void QDrag_SetPixmap(QDrag* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

QPixmap* QDrag_Pixmap(const QDrag* self) {
    return new QPixmap(self->pixmap());
}

void QDrag_SetHotSpot(QDrag* self, const QPoint* hotspot) {
    self->setHotSpot(*hotspot);
}

QPoint* QDrag_HotSpot(const QDrag* self) {
    return new QPoint(self->hotSpot());
}

QObject* QDrag_Source(const QDrag* self) {
    return self->source();
}

QObject* QDrag_Target(const QDrag* self) {
    return self->target();
}

int QDrag_Exec(QDrag* self) {
    return static_cast<int>(self->exec());
}

int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction) {
    return static_cast<int>(self->exec(static_cast<Qt::DropActions>(supportedActions), static_cast<Qt::DropAction>(defaultAction)));
}

void QDrag_SetDragCursor(QDrag* self, const QPixmap* cursor, int action) {
    self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_DragCursor(const QDrag* self, int action) {
    return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_SupportedActions(const QDrag* self) {
    return static_cast<int>(self->supportedActions());
}

int QDrag_DefaultAction(const QDrag* self) {
    return static_cast<int>(self->defaultAction());
}

void QDrag_Cancel() {
    QDrag::cancel();
}

void QDrag_ActionChanged(QDrag* self, int action) {
    self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_Connect_ActionChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, int) = reinterpret_cast<void (*)(QDrag*, int)>(slot);
    QDrag::connect(self,
                   static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged),
                   [self, slotFunc](Qt::DropAction action) {
                       int sigval1 = static_cast<int>(action);
                       slotFunc(self, sigval1);
                   });
}

void QDrag_TargetChanged(QDrag* self, QObject* newTarget) {
    self->targetChanged(newTarget);
}

void QDrag_Connect_TargetChanged(QDrag* self, intptr_t slot) {
    void (*slotFunc)(QDrag*, QObject*) = reinterpret_cast<void (*)(QDrag*, QObject*)>(slot);
    QDrag::connect(self,
                   static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged),
                   [self, slotFunc](QObject* newTarget) {
                       QObject* sigval1 = newTarget;
                       slotFunc(self, sigval1);
                   });
}

libqt_string QDrag_Tr2(const char* s, const char* c) {
    auto _ret = QDrag::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDrag_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDrag::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDrag_Exec1(QDrag* self, int supportedActions) {
    return static_cast<int>(self->exec(static_cast<Qt::DropActions>(supportedActions)));
}

// Base class handler implementation
QMetaObject* QDrag_SuperMetaObject(const QDrag* self) {
    return (QMetaObject*)self->QDrag::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnMetaObject(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self)))
        vqdrag->qdrag_metaobject_callback = reinterpret_cast<VirtualQDrag::QDrag_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QDrag_SuperMetacast(QDrag* self, const char* param1) {
    return self->QDrag::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnMetacast(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_metacast_callback = reinterpret_cast<VirtualQDrag::QDrag_Metacast_Callback>(slot);
}

// Base class handler implementation
int QDrag_SuperMetacall(QDrag* self, int param1, int param2, void** param3) {
    return self->QDrag::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnMetacall(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_metacall_callback = reinterpret_cast<VirtualQDrag::QDrag_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QDrag_Event(QDrag* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QDrag_SuperEvent(QDrag* self, QEvent* event) {
    return self->QDrag::event(event);
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnEvent(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_event_callback = reinterpret_cast<VirtualQDrag::QDrag_Event_Callback>(slot);
}

// Derived class handler implementation
bool QDrag_EventFilter(QDrag* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QDrag_SuperEventFilter(QDrag* self, QObject* watched, QEvent* event) {
    return self->QDrag::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnEventFilter(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_eventfilter_callback = reinterpret_cast<VirtualQDrag::QDrag_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QDrag_TimerEvent(QDrag* self, QTimerEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag) {
        vqdrag->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDrag::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDrag_SuperTimerEvent(QDrag* self, QTimerEvent* event) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self)) {
        vqdrag->QDrag::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QDrag::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnTimerEvent(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_timerevent_callback = reinterpret_cast<VirtualQDrag::QDrag_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QDrag_ChildEvent(QDrag* self, QChildEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag) {
        vqdrag->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDrag::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDrag_SuperChildEvent(QDrag* self, QChildEvent* event) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self)) {
        vqdrag->QDrag::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QDrag::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnChildEvent(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_childevent_callback = reinterpret_cast<VirtualQDrag::QDrag_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QDrag_CustomEvent(QDrag* self, QEvent* event) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag) {
        vqdrag->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QDrag::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QDrag_SuperCustomEvent(QDrag* self, QEvent* event) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self)) {
        vqdrag->QDrag::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QDrag::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnCustomEvent(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_customevent_callback = reinterpret_cast<VirtualQDrag::QDrag_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QDrag_ConnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag) {
        vqdrag->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDrag::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDrag_SuperConnectNotify(QDrag* self, const QMetaMethod* signal) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self)) {
        vqdrag->QDrag::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDrag::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnConnectNotify(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_connectnotify_callback = reinterpret_cast<VirtualQDrag::QDrag_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QDrag_DisconnectNotify(QDrag* self, const QMetaMethod* signal) {
    auto* vqdrag = dynamic_cast<VirtualQDrag*>(self);
    if (vqdrag) {
        vqdrag->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QDrag::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QDrag_SuperDisconnectNotify(QDrag* self, const QMetaMethod* signal) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self)) {
        vqdrag->QDrag::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QDrag::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QDrag_OnDisconnectNotify(QDrag* self, intptr_t slot) {
    if (auto* vqdrag = dynamic_cast<VirtualQDrag*>(self))
        vqdrag->qdrag_disconnectnotify_callback = reinterpret_cast<VirtualQDrag::QDrag_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QDrag_Sender(const QDrag* self) {
    if (auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self))) {
        return vqdrag->VirtualQDrag::sender();
    } else
        qFatal("Error: Protected method QDrag::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QDrag_SenderSignalIndex(const QDrag* self) {
    if (auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self))) {
        return vqdrag->VirtualQDrag::senderSignalIndex();
    } else
        qFatal("Error: Protected method QDrag::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QDrag_Receivers(const QDrag* self, const char* signal) {
    if (auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self))) {
        return vqdrag->VirtualQDrag::receivers(signal);
    } else
        qFatal("Error: Protected method QDrag::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QDrag_IsSignalConnected(const QDrag* self, const QMetaMethod* signal) {
    if (auto* vqdrag = const_cast<VirtualQDrag*>(dynamic_cast<const VirtualQDrag*>(self))) {
        return vqdrag->VirtualQDrag::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QDrag::isSignalConnected called without a directly constructed type");
}

void QDrag_Delete(QDrag* self) {
    delete self;
}
