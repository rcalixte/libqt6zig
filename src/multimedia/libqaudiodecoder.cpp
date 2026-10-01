#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qaudiodecoder.h>
#include "libqaudiodecoder.h"
#include "libqaudiodecoder.hxx"

QAudioDecoder* QAudioDecoder_new() {
    return new VirtualQAudioDecoder();
}

QAudioDecoder* QAudioDecoder_new2(QObject* parent) {
    return new VirtualQAudioDecoder(parent);
}

QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioDecoder_Metacall(QAudioDecoder* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAudioDecoder_Tr(const char* s) {
    auto _ret = QAudioDecoder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QAudioDecoder_IsSupported(const QAudioDecoder* self) {
    return self->isSupported();
}

bool QAudioDecoder_IsDecoding(const QAudioDecoder* self) {
    return self->isDecoding();
}

QUrl* QAudioDecoder_Source(const QAudioDecoder* self) {
    return new QUrl(self->source());
}

void QAudioDecoder_SetSource(QAudioDecoder* self, const QUrl* fileName) {
    self->setSource(*fileName);
}

QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self) {
    return self->sourceDevice();
}

void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device) {
    self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self) {
    return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, const QAudioFormat* format) {
    self->setAudioFormat(*format);
}

int QAudioDecoder_Error(const QAudioDecoder* self) {
    return static_cast<int>(self->error());
}

libqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self) {
    return new QAudioBuffer(self->read());
}

bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self) {
    return self->bufferAvailable();
}

long long QAudioDecoder_Position(const QAudioDecoder* self) {
    return static_cast<long long>(self->position());
}

long long QAudioDecoder_Duration(const QAudioDecoder* self) {
    return static_cast<long long>(self->duration());
}

void QAudioDecoder_Start(QAudioDecoder* self) {
    self->start();
}

void QAudioDecoder_Stop(QAudioDecoder* self) {
    self->stop();
}

void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1) {
    self->bufferAvailableChanged(param1);
}

void QAudioDecoder_Connect_BufferAvailableChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, bool) = reinterpret_cast<void (*)(QAudioDecoder*, bool)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::bufferAvailableChanged),
                           [self, slotFunc](bool param1) {
                               bool sigval1 = param1;
                               slotFunc(self, sigval1);
                           });
}

void QAudioDecoder_BufferReady(QAudioDecoder* self) {
    self->bufferReady();
}

void QAudioDecoder_Connect_BufferReady(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*) = reinterpret_cast<void (*)(QAudioDecoder*)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::bufferReady),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAudioDecoder_Finished(QAudioDecoder* self) {
    self->finished();
}

void QAudioDecoder_Connect_Finished(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*) = reinterpret_cast<void (*)(QAudioDecoder*)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::finished),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1) {
    self->isDecodingChanged(param1);
}

void QAudioDecoder_Connect_IsDecodingChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, bool) = reinterpret_cast<void (*)(QAudioDecoder*, bool)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(bool)>(&QAudioDecoder::isDecodingChanged),
                           [self, slotFunc](bool param1) {
                               bool sigval1 = param1;
                               slotFunc(self, sigval1);
                           });
}

void QAudioDecoder_FormatChanged(QAudioDecoder* self, const QAudioFormat* format) {
    self->formatChanged(*format);
}

void QAudioDecoder_Connect_FormatChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, QAudioFormat*) = reinterpret_cast<void (*)(QAudioDecoder*, QAudioFormat*)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(const QAudioFormat&)>(&QAudioDecoder::formatChanged),
                           [self, slotFunc](const QAudioFormat& format) {
                               const QAudioFormat& format_ret = format;
                               // Cast returned reference into pointer
                               QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
                               slotFunc(self, sigval1);
                           });
}

void QAudioDecoder_Error2(QAudioDecoder* self, int errorVal) {
    self->error(static_cast<QAudioDecoder::Error>(errorVal));
}

void QAudioDecoder_Connect_Error2(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, int) = reinterpret_cast<void (*)(QAudioDecoder*, int)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(QAudioDecoder::Error)>(&QAudioDecoder::error),
                           [self, slotFunc](QAudioDecoder::Error errorVal) {
                               int sigval1 = static_cast<int>(errorVal);
                               slotFunc(self, sigval1);
                           });
}

void QAudioDecoder_SourceChanged(QAudioDecoder* self) {
    self->sourceChanged();
}

void QAudioDecoder_Connect_SourceChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*) = reinterpret_cast<void (*)(QAudioDecoder*)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)()>(&QAudioDecoder::sourceChanged),
                           [self, slotFunc]() {
                               slotFunc(self);
                           });
}

void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position) {
    self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoder_Connect_PositionChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, long long) = reinterpret_cast<void (*)(QAudioDecoder*, long long)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::positionChanged),
                           [self, slotFunc](qint64 position) {
                               long long sigval1 = static_cast<long long>(position);
                               slotFunc(self, sigval1);
                           });
}

void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

void QAudioDecoder_Connect_DurationChanged(QAudioDecoder* self, intptr_t slot) {
    void (*slotFunc)(QAudioDecoder*, long long) = reinterpret_cast<void (*)(QAudioDecoder*, long long)>(slot);
    QAudioDecoder::connect(self,
                           static_cast<void (QAudioDecoder::*)(qint64)>(&QAudioDecoder::durationChanged),
                           [self, slotFunc](qint64 duration) {
                               long long sigval1 = static_cast<long long>(duration);
                               slotFunc(self, sigval1);
                           });
}

libqt_string QAudioDecoder_Tr2(const char* s, const char* c) {
    auto _ret = QAudioDecoder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAudioDecoder::tr(s, c, static_cast<int>(n));
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
QMetaObject* QAudioDecoder_SuperMetaObject(const QAudioDecoder* self) {
    return (QMetaObject*)self->QAudioDecoder::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnMetaObject(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self)))
        vqaudiodecoder->qaudiodecoder_metaobject_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QAudioDecoder_SuperMetacast(QAudioDecoder* self, const char* param1) {
    return self->QAudioDecoder::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnMetacast(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_metacast_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Metacast_Callback>(slot);
}

// Base class handler implementation
int QAudioDecoder_SuperMetacall(QAudioDecoder* self, int param1, int param2, void** param3) {
    return self->QAudioDecoder::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnMetacall(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_metacall_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QAudioDecoder_Event(QAudioDecoder* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QAudioDecoder_SuperEvent(QAudioDecoder* self, QEvent* event) {
    return self->QAudioDecoder::event(event);
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_event_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Event_Callback>(slot);
}

// Derived class handler implementation
bool QAudioDecoder_EventFilter(QAudioDecoder* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QAudioDecoder_SuperEventFilter(QAudioDecoder* self, QObject* watched, QEvent* event) {
    return self->QAudioDecoder::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnEventFilter(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_eventfilter_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QAudioDecoder_TimerEvent(QAudioDecoder* self, QTimerEvent* event) {
    auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self);
    if (vqaudiodecoder) {
        vqaudiodecoder->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioDecoder::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioDecoder_SuperTimerEvent(QAudioDecoder* self, QTimerEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->QAudioDecoder::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioDecoder::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnTimerEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_timerevent_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioDecoder_ChildEvent(QAudioDecoder* self, QChildEvent* event) {
    auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self);
    if (vqaudiodecoder) {
        vqaudiodecoder->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioDecoder::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioDecoder_SuperChildEvent(QAudioDecoder* self, QChildEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->QAudioDecoder::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioDecoder::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnChildEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_childevent_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioDecoder_CustomEvent(QAudioDecoder* self, QEvent* event) {
    auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self);
    if (vqaudiodecoder) {
        vqaudiodecoder->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QAudioDecoder::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioDecoder_SuperCustomEvent(QAudioDecoder* self, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->QAudioDecoder::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QAudioDecoder::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnCustomEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_customevent_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QAudioDecoder_ConnectNotify(QAudioDecoder* self, const QMetaMethod* signal) {
    auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self);
    if (vqaudiodecoder) {
        vqaudiodecoder->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioDecoder::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioDecoder_SuperConnectNotify(QAudioDecoder* self, const QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->QAudioDecoder::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioDecoder::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnConnectNotify(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_connectnotify_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QAudioDecoder_DisconnectNotify(QAudioDecoder* self, const QMetaMethod* signal) {
    auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self);
    if (vqaudiodecoder) {
        vqaudiodecoder->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QAudioDecoder::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QAudioDecoder_SuperDisconnectNotify(QAudioDecoder* self, const QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->QAudioDecoder::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QAudioDecoder::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnDisconnectNotify(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self))
        vqaudiodecoder->qaudiodecoder_disconnectnotify_callback = reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QAudioDecoder_Sender(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->VirtualQAudioDecoder::sender();
    } else
        qFatal("Error: Protected method QAudioDecoder::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioDecoder_SenderSignalIndex(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->VirtualQAudioDecoder::senderSignalIndex();
    } else
        qFatal("Error: Protected method QAudioDecoder::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QAudioDecoder_Receivers(const QAudioDecoder* self, const char* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->VirtualQAudioDecoder::receivers(signal);
    } else
        qFatal("Error: Protected method QAudioDecoder::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QAudioDecoder_IsSignalConnected(const QAudioDecoder* self, const QMetaMethod* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->VirtualQAudioDecoder::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QAudioDecoder::isSignalConnected called without a directly constructed type");
}

void QAudioDecoder_Delete(QAudioDecoder* self) {
    delete self;
}
