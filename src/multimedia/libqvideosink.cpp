#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVideoSink_Tr(const char* s) {
    auto _ret = QVideoSink::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QVideoSink_VideoSize(const QVideoSink* self) {
    return new QSize(self->videoSize());
}

libqt_string QVideoSink_SubtitleText(const QVideoSink* self) {
    auto _ret = self->subtitleText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QVideoSink_Connect_VideoFrameChanged(const QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(const QVideoSink*, QVideoFrame*) = reinterpret_cast<void (*)(const QVideoSink*, QVideoFrame*)>(slot);
    QVideoSink::connect(self,
                        static_cast<void (QVideoSink::*)(const QVideoFrame&) const>(&QVideoSink::videoFrameChanged),
                        [self, slotFunc](const QVideoFrame& frame) {
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

void QVideoSink_Connect_SubtitleTextChanged(const QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(const QVideoSink*, const char*) = reinterpret_cast<void (*)(const QVideoSink*, const char*)>(slot);
    QVideoSink::connect(self,
                        static_cast<void (QVideoSink::*)(const QString&) const>(&QVideoSink::subtitleTextChanged),
                        [self, slotFunc](const QString& subtitleText) {
                            const auto subtitleText_ret = subtitleText;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray subtitleText_b = subtitleText_ret.toUtf8();
                            auto subtitleText_str_len = subtitleText_b.length();
                            const char* subtitleText_str = static_cast<const char*>(malloc(subtitleText_str_len + 1));
                            memcpy((void*)subtitleText_str, subtitleText_b.data(), subtitleText_str_len);
                            ((char*)subtitleText_str)[subtitleText_str_len] = '\0';
                            const char* sigval1 = subtitleText_str;
                            slotFunc(self, sigval1);
                            libqt_free(subtitleText_str);
                        });
}

void QVideoSink_VideoSizeChanged(QVideoSink* self) {
    self->videoSizeChanged();
}

void QVideoSink_Connect_VideoSizeChanged(QVideoSink* self, intptr_t slot) {
    void (*slotFunc)(QVideoSink*) = reinterpret_cast<void (*)(QVideoSink*)>(slot);
    QVideoSink::connect(self,
                        static_cast<void (QVideoSink::*)()>(&QVideoSink::videoSizeChanged),
                        [self, slotFunc]() {
                            slotFunc(self);
                        });
}

libqt_string QVideoSink_Tr2(const char* s, const char* c) {
    auto _ret = QVideoSink::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVideoSink_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVideoSink::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVideoSink_SuperMetaObject(const QVideoSink* self) {
    return (QMetaObject*)self->QVideoSink::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnMetaObject(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self)))
        vqvideosink->qvideosink_metaobject_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVideoSink_SuperMetacast(QVideoSink* self, const char* param1) {
    return self->QVideoSink::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnMetacast(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_metacast_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVideoSink_SuperMetacall(QVideoSink* self, int param1, int param2, void** param3) {
    return self->QVideoSink::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnMetacall(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_metacall_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QVideoSink_Event(QVideoSink* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVideoSink_SuperEvent(QVideoSink* self, QEvent* event) {
    return self->QVideoSink::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnEvent(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_event_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVideoSink_EventFilter(QVideoSink* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVideoSink_SuperEventFilter(QVideoSink* self, QObject* watched, QEvent* event) {
    return self->QVideoSink::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnEventFilter(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_eventfilter_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVideoSink_TimerEvent(QVideoSink* self, QTimerEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink) {
        vqvideosink->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoSink::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoSink_SuperTimerEvent(QVideoSink* self, QTimerEvent* event) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self)) {
        vqvideosink->QVideoSink::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoSink::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnTimerEvent(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_timerevent_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoSink_ChildEvent(QVideoSink* self, QChildEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink) {
        vqvideosink->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoSink::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoSink_SuperChildEvent(QVideoSink* self, QChildEvent* event) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self)) {
        vqvideosink->QVideoSink::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoSink::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnChildEvent(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_childevent_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoSink_CustomEvent(QVideoSink* self, QEvent* event) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink) {
        vqvideosink->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVideoSink::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoSink_SuperCustomEvent(QVideoSink* self, QEvent* event) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self)) {
        vqvideosink->QVideoSink::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVideoSink::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnCustomEvent(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_customevent_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVideoSink_ConnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink) {
        vqvideosink->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoSink::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoSink_SuperConnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self)) {
        vqvideosink->QVideoSink::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoSink::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnConnectNotify(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_connectnotify_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVideoSink_DisconnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self);
    if (vqvideosink) {
        vqvideosink->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVideoSink::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVideoSink_SuperDisconnectNotify(QVideoSink* self, const QMetaMethod* signal) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self)) {
        vqvideosink->QVideoSink::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVideoSink::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVideoSink_OnDisconnectNotify(QVideoSink* self, intptr_t slot) {
    if (auto* vqvideosink = dynamic_cast<VirtualQVideoSink*>(self))
        vqvideosink->qvideosink_disconnectnotify_callback = reinterpret_cast<VirtualQVideoSink::QVideoSink_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVideoSink_Sender(const QVideoSink* self) {
    if (auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self))) {
        return vqvideosink->VirtualQVideoSink::sender();
    } else
        qFatal("Error: Protected method QVideoSink::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoSink_SenderSignalIndex(const QVideoSink* self) {
    if (auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self))) {
        return vqvideosink->VirtualQVideoSink::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVideoSink::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVideoSink_Receivers(const QVideoSink* self, const char* signal) {
    if (auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self))) {
        return vqvideosink->VirtualQVideoSink::receivers(signal);
    } else
        qFatal("Error: Protected method QVideoSink::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVideoSink_IsSignalConnected(const QVideoSink* self, const QMetaMethod* signal) {
    if (auto* vqvideosink = const_cast<VirtualQVideoSink*>(dynamic_cast<const VirtualQVideoSink*>(self))) {
        return vqvideosink->VirtualQVideoSink::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVideoSink::isSignalConnected called without a directly constructed type");
}

void QVideoSink_Delete(QVideoSink* self) {
    delete self;
}
