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
#include <QByteArray>
#include <cstring>
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
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPixmapSequenceOverlayPainter_Tr(const char* s) {
    QString _ret = KPixmapSequenceOverlayPainter::tr(s);
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
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->eventFilter(obj, event);
    }
    return {};
}

libqt_string KPixmapSequenceOverlayPainter_Tr2(const char* s, const char* c) {
    QString _ret = KPixmapSequenceOverlayPainter::tr(s, c);
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
    QString _ret = KPixmapSequenceOverlayPainter::tr(s, c, static_cast<int>(n));
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
int KPixmapSequenceOverlayPainter_QBaseMetacall(KPixmapSequenceOverlayPainter* self, int param1, int param2, void** param3) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Metacall_IsBase(true);
        return vkpixmapsequenceoverlaypainter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPixmapSequenceOverlayPainter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnMetacall(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Metacall_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KPixmapSequenceOverlayPainter_QBaseEventFilter(KPixmapSequenceOverlayPainter* self, QObject* obj, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_EventFilter_IsBase(true);
        return vkpixmapsequenceoverlaypainter->eventFilter(obj, event);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->eventFilter(obj, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnEventFilter(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_EventFilter_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceOverlayPainter_Event(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->event(event);
    } else {
        return self->KPixmapSequenceOverlayPainter::event(event);
    }
}

// Base class handler implementation
bool KPixmapSequenceOverlayPainter_QBaseEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Event_IsBase(true);
        return vkpixmapsequenceoverlaypainter->event(event);
    } else {
        return self->KPixmapSequenceOverlayPainter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Event_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_TimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->timerEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_QBaseTimerEvent(KPixmapSequenceOverlayPainter* self, QTimerEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_TimerEvent_IsBase(true);
        vkpixmapsequenceoverlaypainter->timerEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnTimerEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_TimerEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_ChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->childEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_QBaseChildEvent(KPixmapSequenceOverlayPainter* self, QChildEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_ChildEvent_IsBase(true);
        vkpixmapsequenceoverlaypainter->childEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnChildEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_ChildEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_CustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->customEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_QBaseCustomEvent(KPixmapSequenceOverlayPainter* self, QEvent* event) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_CustomEvent_IsBase(true);
        vkpixmapsequenceoverlaypainter->customEvent(event);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnCustomEvent(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_CustomEvent_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_ConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->connectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_QBaseConnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_ConnectNotify_IsBase(true);
        vkpixmapsequenceoverlaypainter->connectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnConnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_ConnectNotify_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPixmapSequenceOverlayPainter_DisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPixmapSequenceOverlayPainter_QBaseDisconnectNotify(KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_DisconnectNotify_IsBase(true);
        vkpixmapsequenceoverlaypainter->disconnectNotify(*signal);
    } else {
        ((VirtualKPixmapSequenceOverlayPainter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnDisconnectNotify(KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = dynamic_cast<VirtualKPixmapSequenceOverlayPainter*>(self);
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_DisconnectNotify_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPixmapSequenceOverlayPainter_Sender(const KPixmapSequenceOverlayPainter* self) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->sender();
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPixmapSequenceOverlayPainter_QBaseSender(const KPixmapSequenceOverlayPainter* self) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Sender_IsBase(true);
        return vkpixmapsequenceoverlaypainter->sender();
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnSender(const KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Sender_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceOverlayPainter_SenderSignalIndex(const KPixmapSequenceOverlayPainter* self) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->senderSignalIndex();
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPixmapSequenceOverlayPainter_QBaseSenderSignalIndex(const KPixmapSequenceOverlayPainter* self) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_SenderSignalIndex_IsBase(true);
        return vkpixmapsequenceoverlaypainter->senderSignalIndex();
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnSenderSignalIndex(const KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPixmapSequenceOverlayPainter_Receivers(const KPixmapSequenceOverlayPainter* self, const char* signal) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->receivers(signal);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPixmapSequenceOverlayPainter_QBaseReceivers(const KPixmapSequenceOverlayPainter* self, const char* signal) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Receivers_IsBase(true);
        return vkpixmapsequenceoverlaypainter->receivers(signal);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnReceivers(const KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_Receivers_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPixmapSequenceOverlayPainter_IsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        return vkpixmapsequenceoverlaypainter->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPixmapSequenceOverlayPainter_QBaseIsSignalConnected(const KPixmapSequenceOverlayPainter* self, const QMetaMethod* signal) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_IsSignalConnected_IsBase(true);
        return vkpixmapsequenceoverlaypainter->isSignalConnected(*signal);
    } else {
        return ((VirtualKPixmapSequenceOverlayPainter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPixmapSequenceOverlayPainter_OnIsSignalConnected(const KPixmapSequenceOverlayPainter* self, intptr_t slot) {
    auto* vkpixmapsequenceoverlaypainter = const_cast<VirtualKPixmapSequenceOverlayPainter*>(dynamic_cast<const VirtualKPixmapSequenceOverlayPainter*>(self));
    if (vkpixmapsequenceoverlaypainter && vkpixmapsequenceoverlaypainter->isVirtualKPixmapSequenceOverlayPainter) {
        vkpixmapsequenceoverlaypainter->setKPixmapSequenceOverlayPainter_IsSignalConnected_Callback(reinterpret_cast<VirtualKPixmapSequenceOverlayPainter::KPixmapSequenceOverlayPainter_IsSignalConnected_Callback>(slot));
    }
}

void KPixmapSequenceOverlayPainter_Delete(KPixmapSequenceOverlayPainter* self) {
    delete self;
}
