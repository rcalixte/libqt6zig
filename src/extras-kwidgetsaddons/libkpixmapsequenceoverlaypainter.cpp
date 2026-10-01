#include <KPixmapSequence>
#include <KPixmapSequenceOverlayPainter>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <kpixmapsequenceoverlaypainter.h>
#include "libkpixmapsequenceoverlaypainter.h"
#include "libkpixmapsequenceoverlaypainter.hxx"

KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new() {
    return new VirtualKPixmapSequenceOverlayPainter();
}

KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new2(const KPixmapSequence* seq) {
    return new VirtualKPixmapSequenceOverlayPainter(*seq);
}

KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new3(QObject* parent) {
    return new VirtualKPixmapSequenceOverlayPainter(parent);
}

KPixmapSequenceOverlayPainter* KPixmapSequenceOverlayPainter_new4(const KPixmapSequence* seq, QObject* parent) {
    return new VirtualKPixmapSequenceOverlayPainter(*seq, parent);
}

QMetaObject* KPixmapSequenceOverlayPainter_MetaObject(const KPixmapSequenceOverlayPainter* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPixmapSequenceOverlayPainter_Metacast(KPixmapSequenceOverlayPainter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPixmapSequenceOverlayPainter_Metacall(KPixmapSequenceOverlayPainter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KPixmapSequenceOverlayPainter_Tr(const char* s) {
    auto _ret = KPixmapSequenceOverlayPainter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KPixmapSequence* KPixmapSequenceOverlayPainter_Sequence(const KPixmapSequenceOverlayPainter* self) {
    return new KPixmapSequence(self->sequence());
}

int KPixmapSequenceOverlayPainter_Interval(const KPixmapSequenceOverlayPainter* self) {
    return self->interval();
}

QRect* KPixmapSequenceOverlayPainter_Rect(const KPixmapSequenceOverlayPainter* self) {
    return new QRect(self->rect());
}

int KPixmapSequenceOverlayPainter_Alignment(const KPixmapSequenceOverlayPainter* self) {
    return static_cast<int>(self->alignment());
}

QPoint* KPixmapSequenceOverlayPainter_Offset(const KPixmapSequenceOverlayPainter* self) {
    return new QPoint(self->offset());
}

void KPixmapSequenceOverlayPainter_SetSequence(KPixmapSequenceOverlayPainter* self, const KPixmapSequence* seq) {
    self->setSequence(*seq);
}

void KPixmapSequenceOverlayPainter_SetInterval(KPixmapSequenceOverlayPainter* self, int msecs) {
    self->setInterval(static_cast<int>(msecs));
}

void KPixmapSequenceOverlayPainter_SetWidget(KPixmapSequenceOverlayPainter* self, QWidget* w) {
    self->setWidget(w);
}

void KPixmapSequenceOverlayPainter_SetRect(KPixmapSequenceOverlayPainter* self, const QRect* rect) {
    self->setRect(*rect);
}

void KPixmapSequenceOverlayPainter_SetAlignment(KPixmapSequenceOverlayPainter* self, int alignVal) {
    self->setAlignment(static_cast<Qt::Alignment>(alignVal));
}

void KPixmapSequenceOverlayPainter_SetOffset(KPixmapSequenceOverlayPainter* self, const QPoint* offset) {
    self->setOffset(*offset);
}

void KPixmapSequenceOverlayPainter_Start(KPixmapSequenceOverlayPainter* self) {
    self->start();
}

void KPixmapSequenceOverlayPainter_Stop(KPixmapSequenceOverlayPainter* self) {
    self->stop();
}

bool KPixmapSequenceOverlayPainter_EventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        return vkpixmapsequenceoverlaypainter->eventFilter(obj, event);
    }
    qFatal("Error: Protected method KPixmapSequenceOverlayPainter::eventFilter called without a directly constructed type");
}

libqt_string KPixmapSequenceOverlayPainter_Tr2(const char* s, const char* c) {
    auto _ret = KPixmapSequenceOverlayPainter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPixmapSequenceOverlayPainter_Tr3(const char* s, const char* c, int n) {
    auto _ret = KPixmapSequenceOverlayPainter::tr(s, c, static_cast<int>(n));
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
QMetaObject* KPixmapSequenceOverlayPainter_SuperMetaObject(const KPixmapSequenceOverlayPainter* self) {
    return (QMetaObject*)self->KPixmapSequenceOverlayPainter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnMetaObject(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self)))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_metaobject_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KPixmapSequenceOverlayPainter_SuperMetacast(KPixmapSequenceOverlayPainter* self, const char* param1) {
    return self->KPixmapSequenceOverlayPainter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnMetacast(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_metacast_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Metacast_Callback>(slot);
}

// Base class handler implementation
int KPixmapSequenceOverlayPainter_SuperMetacall(KPixmapSequenceOverlayPainter* self, int param1, int param2, void** param3) {
    return self->KPixmapSequenceOverlayPainter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnMetacall(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_metacall_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KPixmapSequenceOverlayPainter_SuperEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        return vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::eventFilter(obj, event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnEventFilter(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_eventfilter_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KPixmapSequenceOverlayPainter_Event(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KPixmapSequenceOverlayPainter_SuperEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    return self->KPixmapSequenceOverlayPainter::event(event);
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_event_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Event_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_TimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        vkpixmapsequenceoverlaypainter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_SuperTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnTimerEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_timerevent_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_ChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        vkpixmapsequenceoverlaypainter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_SuperChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnChildEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_childevent_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_CustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        vkpixmapsequenceoverlaypainter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_SuperCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnCustomEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_customevent_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_ConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        vkpixmapsequenceoverlaypainter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_SuperConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnConnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_connectnotify_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_DisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter) {
        vkpixmapsequenceoverlaypainter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_SuperDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self)) {
        vkpixmapsequenceoverlaypainter->KPixmapSequenceOverlayPainter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KPixmapSequenceOverlayPainter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnDisconnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    if (auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self))
        vkpixmapsequenceoverlaypainter->kpixmapsequenceoverlaypainter_disconnectnotify_callback = reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KPixmapSequenceOverlayPainter_Sender(const KPixmapSequenceOverlayPainter* self) {
    if (auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self))) {
        return vkpixmapsequenceoverlaypainter->VirtualKPixmapSequenceOverlayPainter::sender();
    } else
        qFatal("Error: Protected method KPixmapSequenceOverlayPainter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapSequenceOverlayPainter_SenderSignalIndex(const KPixmapSequenceOverlayPainter* self) {
    if (auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self))) {
        return vkpixmapsequenceoverlaypainter->VirtualKPixmapSequenceOverlayPainter::senderSignalIndex();
    } else
        qFatal("Error: Protected method KPixmapSequenceOverlayPainter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KPixmapSequenceOverlayPainter_Receivers(const KPixmapSequenceOverlayPainter* self, const char* signal) {
    if (auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self))) {
        return vkpixmapsequenceoverlaypainter->VirtualKPixmapSequenceOverlayPainter::receivers(signal);
    } else
        qFatal("Error: Protected method KPixmapSequenceOverlayPainter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KPixmapSequenceOverlayPainter_IsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    if (auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self))) {
        return vkpixmapsequenceoverlaypainter->VirtualKPixmapSequenceOverlayPainter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KPixmapSequenceOverlayPainter::isSignalConnected called without a directly constructed type");
}

void KPixmapSequenceOverlayPainter_Delete(KPixmapSequenceOverlayPainter* self) {
    delete self;
}
