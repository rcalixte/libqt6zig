#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <QVideoSink>
#include <qvideosink.h>
#include "libqvideosink.h"
#include "libqvideosink.hxx"

QVideoSink* QVideoSink_new() {
    return new VirtualQVideoSink();
}

QVideoSink* QVideoSink_new2(QObject* parent) {
    return new VirtualQVideoSink(parent);
}

QMetaObject* QVideoSink_MetaObject(const QVideoSink* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoSink_Metacast(QVideoSink* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoSink_Metacall(QVideoSink* self, int param1, int param2, void** param3) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVideoSink*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVideoSink_OnMetacall(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Metacall_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVideoSink_QBaseMetacall(QVideoSink* self, int param1, int param2, void** param3) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Metacall_IsBase(true);
        return vqvideosink->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQVideoSink*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVideoSink_Tr(const char* s) {
    QString _ret = QVideoSink::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QVideoSink_VideoSize(const QVideoSink* self) {
    return new QSize(self->videoSize());
}

libqt_string QVideoSink_SubtitleText(const QVideoSink* self) {
    QString _ret = self->subtitleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVideoSink_SetSubtitleText(QVideoSink* self, const libqt_string subtitle) {
    QString subtitle_QString = QString::fromUtf8(subtitle.data, subtitle.len);
    self->setSubtitleText(subtitle_QString);
}

void QVideoSink_SetVideoFrame(QVideoSink* self, const QVideoFrame* frame) {
    self->setVideoFrame(*frame);
}

QVideoFrame* QVideoSink_VideoFrame(const QVideoSink* self) {
    return new QVideoFrame(self->videoFrame());
}

void QVideoSink_VideoFrameChanged(const QVideoSink* self, const QVideoFrame* frame) {
    self->videoFrameChanged(*frame);
}

void QVideoSink_Connect_VideoFrameChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*, QVideoFrame*) = reinterpret_cast<void (*)(QVideoSink*, QVideoFrame*)>(slot);
    QVideoSink::connect(self, &QVideoSink::videoFrameChanged, [self, slotFunc](const QVideoFrame& frame) {
        const QVideoFrame& frame_ret = frame;
        // Cast returned reference into pointer
        QVideoFrame* sigval1 = const_cast<QVideoFrame*>(&frame_ret);
        slotFunc(self, sigval1);
    });
}

void QVideoSink_SubtitleTextChanged(const QVideoSink* self, const libqt_string subtitleText) {
    QString subtitleText_QString = QString::fromUtf8(subtitleText.data, subtitleText.len);
    self->subtitleTextChanged(subtitleText_QString);
}

void QVideoSink_Connect_SubtitleTextChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*, libqt_string) = reinterpret_cast<void (*)(QVideoSink*, libqt_string)>(slot);
    QVideoSink::connect(self, &QVideoSink::subtitleTextChanged, [self, slotFunc](const QString& subtitleText) {
        const QString subtitleText_ret = subtitleText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray subtitleText_b = subtitleText_ret.toUtf8();
        libqt_string subtitleText_str;
        subtitleText_str.len = subtitleText_b.length();
        subtitleText_str.data = static_cast<const char*>(malloc((subtitleText_str.len + 1) * sizeof(char)));
        memcpy((void*)subtitleText_str.data, subtitleText_b.data(), subtitleText_str.len);
        ((char*)subtitleText_str.data)[subtitleText_str.len] = '\0';
        libqt_string sigval1 = subtitleText_str;
        slotFunc(self, sigval1);
    });
}

void QVideoSink_VideoSizeChanged(QVideoSink* self) {
    self->videoSizeChanged();
}

void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*) = reinterpret_cast<void (*)(QVideoSink*)>(slot);
    QVideoSink::connect(self, &QVideoSink::videoSizeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVideoSink_Tr2(const char* s, const char* c) {
    QString _ret = QVideoSink::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoSink_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVideoSink::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QVideoSink_Event(QVideoSink* self, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->event(event);
    } else {
        return self->QVideoSink::event(event);
    }
}

// Base class handler implementation
bool QVideoSink_QBaseEvent(QVideoSink* self, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Event_IsBase(true);
        return vqvideosink->event(event);
    } else {
        return self->QVideoSink::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnEvent(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Event_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoSink_EventFilter(QVideoSink* self, QObject* watched, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->eventFilter(watched, event);
    } else {
        return self->QVideoSink::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVideoSink_QBaseEventFilter(QVideoSink* self, QObject* watched, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_EventFilter_IsBase(true);
        return vqvideosink->eventFilter(watched, event);
    } else {
        return self->QVideoSink::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnEventFilter(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_EventFilter_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoSink_TimerEvent(QVideoSink* self, QTimerEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->timerEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVideoSink_QBaseTimerEvent(QVideoSink* self, QTimerEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_TimerEvent_IsBase(true);
        vqvideosink->timerEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnTimerEvent(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_TimerEvent_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoSink_ChildEvent(QVideoSink* self, QChildEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->childEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVideoSink_QBaseChildEvent(QVideoSink* self, QChildEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_ChildEvent_IsBase(true);
        vqvideosink->childEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnChildEvent(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_ChildEvent_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoSink_CustomEvent(QVideoSink* self, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->customEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVideoSink_QBaseCustomEvent(QVideoSink* self, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_CustomEvent_IsBase(true);
        vqvideosink->customEvent(event);
    } else {
        ((VirtualQVideoSink*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnCustomEvent(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_CustomEvent_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoSink_ConnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->connectNotify(*signal);
    } else {
        ((VirtualQVideoSink*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoSink_QBaseConnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_ConnectNotify_IsBase(true);
        vqvideosink->connectNotify(*signal);
    } else {
        ((VirtualQVideoSink*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnConnectNotify(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_ConnectNotify_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoSink_DisconnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoSink*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoSink_QBaseDisconnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_DisconnectNotify_IsBase(true);
        vqvideosink->disconnectNotify(*signal);
    } else {
        ((VirtualQVideoSink*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnDisconnectNotify(QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_DisconnectNotify_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVideoSink_Sender(const QVideoSink* self) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->sender();
    } else {
        return ((VirtualQVideoSink*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVideoSink_QBaseSender(const QVideoSink* self) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Sender_IsBase(true);
        return vqvideosink->sender();
    } else {
        return ((VirtualQVideoSink*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnSender(const QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Sender_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoSink_SenderSignalIndex(const QVideoSink* self) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->senderSignalIndex();
    } else {
        return ((VirtualQVideoSink*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVideoSink_QBaseSenderSignalIndex(const QVideoSink* self) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_SenderSignalIndex_IsBase(true);
        return vqvideosink->senderSignalIndex();
    } else {
        return ((VirtualQVideoSink*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnSenderSignalIndex(const QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoSink_Receivers(const QVideoSink* self, const char* signal) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->receivers(signal);
    } else {
        return ((VirtualQVideoSink*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVideoSink_QBaseReceivers(const QVideoSink* self, const char* signal) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Receivers_IsBase(true);
        return vqvideosink->receivers(signal);
    } else {
        return ((VirtualQVideoSink*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnReceivers(const QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_Receivers_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoSink_IsSignalConnected(const QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        return vqvideosink->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoSink*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVideoSink_QBaseIsSignalConnected(const QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_IsSignalConnected_IsBase(true);
        return vqvideosink->isSignalConnected(*signal);
    } else {
        return ((VirtualQVideoSink*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnIsSignalConnected(const QVideoSink* self, intptr_t slot) {
    auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self));
    if (vqvideosink && vqvideosink->isVirtualQVideoSink) {
        vqvideosink->setQVideoSink_IsSignalConnected_Callback(reinterpret_cast<VirtualQVideoSink::QVideoSink_IsSignalConnected_Callback>(slot));
    }
}

void QVideoSink_Delete(QVideoSink* self) {
    delete self;
}
