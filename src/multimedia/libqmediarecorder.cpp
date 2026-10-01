#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMediaCaptureSession>
#include <QMediaFormat>
#include <QMediaMetaData>
#include <QMediaRecorder>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <qmediarecorder.h>
#include "libqmediarecorder.h"
#include "libqmediarecorder.hxx"

QMediaRecorder* QMediaRecorder_new() {
    return new VirtualQMediaRecorder();
}

QMediaRecorder* QMediaRecorder_new2(QObject* parent) {
    return new VirtualQMediaRecorder(parent);
}

QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaRecorder_Metacall(QMediaRecorder* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMediaRecorder_Tr(const char* s) {
    auto _ret = QMediaRecorder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QMediaRecorder_IsAvailable(const QMediaRecorder* self) {
    return self->isAvailable();
}

QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self) {
    return new QUrl(self->outputLocation());
}

void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, const QUrl* location) {
    self->setOutputLocation(*location);
}

void QMediaRecorder_SetOutputDevice(QMediaRecorder* self, QIODevice* device) {
    self->setOutputDevice(device);
}

QIODevice* QMediaRecorder_OutputDevice(const QMediaRecorder* self) {
    return self->outputDevice();
}

QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self) {
    return new QUrl(self->actualLocation());
}

int QMediaRecorder_RecorderState(const QMediaRecorder* self) {
    return static_cast<int>(self->recorderState());
}

int QMediaRecorder_Error(const QMediaRecorder* self) {
    return static_cast<int>(self->error());
}

libqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self) {
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

long long QMediaRecorder_Duration(const QMediaRecorder* self) {
    return static_cast<long long>(self->duration());
}

QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self) {
    return new QMediaFormat(self->mediaFormat());
}

void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, const QMediaFormat* format) {
    self->setMediaFormat(*format);
}

int QMediaRecorder_EncodingMode(const QMediaRecorder* self) {
    return static_cast<int>(self->encodingMode());
}

void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode) {
    self->setEncodingMode(static_cast<QMediaRecorder::EncodingMode>(encodingMode));
}

int QMediaRecorder_Quality(const QMediaRecorder* self) {
    return static_cast<int>(self->quality());
}

void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality) {
    self->setQuality(static_cast<QMediaRecorder::Quality>(quality));
}

QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self) {
    return new QSize(self->videoResolution());
}

void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, const QSize* videoResolution) {
    self->setVideoResolution(*videoResolution);
}

void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height) {
    self->setVideoResolution(static_cast<int>(width), static_cast<int>(height));
}

double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self) {
    return static_cast<double>(self->videoFrameRate());
}

void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate) {
    self->setVideoFrameRate(static_cast<qreal>(frameRate));
}

int QMediaRecorder_VideoBitRate(const QMediaRecorder* self) {
    return self->videoBitRate();
}

void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate) {
    self->setVideoBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioBitRate(const QMediaRecorder* self) {
    return self->audioBitRate();
}

void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate) {
    self->setAudioBitRate(static_cast<int>(bitRate));
}

int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self) {
    return self->audioChannelCount();
}

void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels) {
    self->setAudioChannelCount(static_cast<int>(channels));
}

int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self) {
    return self->audioSampleRate();
}

void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate) {
    self->setAudioSampleRate(static_cast<int>(sampleRate));
}

QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self) {
    return new QMediaMetaData(self->metaData());
}

void QMediaRecorder_SetMetaData(QMediaRecorder* self, const QMediaMetaData* metaData) {
    self->setMetaData(*metaData);
}

void QMediaRecorder_AddMetaData(QMediaRecorder* self, const QMediaMetaData* metaData) {
    self->addMetaData(*metaData);
}

bool QMediaRecorder_AutoStop(const QMediaRecorder* self) {
    return self->autoStop();
}

void QMediaRecorder_SetAutoStop(QMediaRecorder* self, bool autoStop) {
    self->setAutoStop(autoStop);
}

QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self) {
    return self->captureSession();
}

void QMediaRecorder_Record(QMediaRecorder* self) {
    self->record();
}

void QMediaRecorder_Pause(QMediaRecorder* self) {
    self->pause();
}

void QMediaRecorder_Stop(QMediaRecorder* self) {
    self->stop();
}

void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state) {
    self->recorderStateChanged(static_cast<QMediaRecorder::RecorderState>(state));
}

void QMediaRecorder_Connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, int) = reinterpret_cast<void (*)(QMediaRecorder*, int)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)(QMediaRecorder::RecorderState)>(&QMediaRecorder::recorderStateChanged),
                            [self, slotFunc](QMediaRecorder::RecorderState state) {
                                int sigval1 = static_cast<int>(state);
                                slotFunc(self, sigval1);
                            });
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_Connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, long long) = reinterpret_cast<void (*)(QMediaRecorder*, long long)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)(qint64)>(&QMediaRecorder::durationChanged),
                            [self, slotFunc](qint64 duration) {
                                long long sigval1 = static_cast<long long>(duration);
                                slotFunc(self, sigval1);
                            });
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, const QUrl* location) {
    self->actualLocationChanged(*location);
}

void QMediaRecorder_Connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, QUrl*) = reinterpret_cast<void (*)(QMediaRecorder*, QUrl*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)(const QUrl&)>(&QMediaRecorder::actualLocationChanged),
                            [self, slotFunc](const QUrl& location) {
                                const QUrl& location_ret = location;
                                // Cast returned reference into pointer
                                QUrl* sigval1 = const_cast<QUrl*>(&location_ret);
                                slotFunc(self, sigval1);
                            });
}

void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self) {
    self->encoderSettingsChanged();
}

void QMediaRecorder_Connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encoderSettingsChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QMediaRecorder::Error>(errorVal), errorString_QString);
}

void QMediaRecorder_Connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, int, const char*) = reinterpret_cast<void (*)(QMediaRecorder*, int, const char*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)(QMediaRecorder::Error, const QString&)>(&QMediaRecorder::errorOccurred),
                            [self, slotFunc](QMediaRecorder::Error errorVal, const QString& errorString) {
                                int sigval1 = static_cast<int>(errorVal);
                                const auto errorString_ret = errorString;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray errorString_b = errorString_ret.toUtf8();
                                auto errorString_str_len = errorString_b.length();
                                const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                                memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                                ((char*)errorString_str)[errorString_str_len] = '\0';
                                const char* sigval2 = errorString_str;
                                slotFunc(self, sigval1, sigval2);
                                libqt_free(errorString_str);
                            });
}

void QMediaRecorder_ErrorChanged(QMediaRecorder* self) {
    self->errorChanged();
}

void QMediaRecorder_Connect_ErrorChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::errorChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
    self->metaDataChanged();
}

void QMediaRecorder_Connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self) {
    self->mediaFormatChanged();
}

void QMediaRecorder_Connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::mediaFormatChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self) {
    self->encodingModeChanged();
}

void QMediaRecorder_Connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::encodingModeChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_QualityChanged(QMediaRecorder* self) {
    self->qualityChanged();
}

void QMediaRecorder_Connect_QualityChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::qualityChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self) {
    self->videoResolutionChanged();
}

void QMediaRecorder_Connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoResolutionChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self) {
    self->videoFrameRateChanged();
}

void QMediaRecorder_Connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoFrameRateChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self) {
    self->videoBitRateChanged();
}

void QMediaRecorder_Connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::videoBitRateChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self) {
    self->audioBitRateChanged();
}

void QMediaRecorder_Connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioBitRateChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self) {
    self->audioChannelCountChanged();
}

void QMediaRecorder_Connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioChannelCountChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self) {
    self->audioSampleRateChanged();
}

void QMediaRecorder_Connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::audioSampleRateChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QMediaRecorder_AutoStopChanged(QMediaRecorder* self) {
    self->autoStopChanged();
}

void QMediaRecorder_Connect_AutoStopChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self,
                            static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::autoStopChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

libqt_string QMediaRecorder_Tr2(const char* s, const char* c) {
    auto _ret = QMediaRecorder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMediaRecorder::tr(s, c, static_cast<int>(n));
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
QMetaObject* QMediaRecorder_SuperMetaObject(const QMediaRecorder* self) {
    return (QMetaObject*)self->QMediaRecorder::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnMetaObject(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self)))
        vqmediarecorder->qmediarecorder_metaobject_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMediaRecorder_SuperMetacast(QMediaRecorder* self, const char* param1) {
    return self->QMediaRecorder::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnMetacast(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_metacast_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMediaRecorder_SuperMetacall(QMediaRecorder* self, int param1, int param2, void** param3) {
    return self->QMediaRecorder::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnMetacall(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_metacall_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool QMediaRecorder_Event(QMediaRecorder* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QMediaRecorder_SuperEvent(QMediaRecorder* self, QEvent* event) {
    return self->QMediaRecorder::event(event);
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnEvent(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_event_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Event_Callback>(slot);
}

// Derived class handler implementation
bool QMediaRecorder_EventFilter(QMediaRecorder* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QMediaRecorder_SuperEventFilter(QMediaRecorder* self, QObject* watched, QEvent* event) {
    return self->QMediaRecorder::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnEventFilter(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_eventfilter_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QMediaRecorder_TimerEvent(QMediaRecorder* self, QTimerEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder) {
        vqmediarecorder->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaRecorder::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaRecorder_SuperTimerEvent(QMediaRecorder* self, QTimerEvent* event) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self)) {
        vqmediarecorder->QMediaRecorder::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaRecorder::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnTimerEvent(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_timerevent_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaRecorder_ChildEvent(QMediaRecorder* self, QChildEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder) {
        vqmediarecorder->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaRecorder::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaRecorder_SuperChildEvent(QMediaRecorder* self, QChildEvent* event) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self)) {
        vqmediarecorder->QMediaRecorder::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaRecorder::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnChildEvent(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_childevent_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaRecorder_CustomEvent(QMediaRecorder* self, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder) {
        vqmediarecorder->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMediaRecorder::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaRecorder_SuperCustomEvent(QMediaRecorder* self, QEvent* event) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self)) {
        vqmediarecorder->QMediaRecorder::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMediaRecorder::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnCustomEvent(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_customevent_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMediaRecorder_ConnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder) {
        vqmediarecorder->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMediaRecorder::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaRecorder_SuperConnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self)) {
        vqmediarecorder->QMediaRecorder::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaRecorder::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnConnectNotify(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_connectnotify_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMediaRecorder_DisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder) {
        vqmediarecorder->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMediaRecorder::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMediaRecorder_SuperDisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self)) {
        vqmediarecorder->QMediaRecorder::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMediaRecorder::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnDisconnectNotify(QMediaRecorder* self, intptr_t slot) {
    if (auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self))
        vqmediarecorder->qmediarecorder_disconnectnotify_callback = reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QMediaRecorder_Sender(const QMediaRecorder* self) {
    if (auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self))) {
        return vqmediarecorder->VirtualQMediaRecorder::sender();
    } else
        qFatal("Error: Protected method QMediaRecorder::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaRecorder_SenderSignalIndex(const QMediaRecorder* self) {
    if (auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self))) {
        return vqmediarecorder->VirtualQMediaRecorder::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMediaRecorder::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMediaRecorder_Receivers(const QMediaRecorder* self, const char* signal) {
    if (auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self))) {
        return vqmediarecorder->VirtualQMediaRecorder::receivers(signal);
    } else
        qFatal("Error: Protected method QMediaRecorder::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMediaRecorder_IsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal) {
    if (auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self))) {
        return vqmediarecorder->VirtualQMediaRecorder::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMediaRecorder::isSignalConnected called without a directly constructed type");
}

void QMediaRecorder_Delete(QMediaRecorder* self) {
    delete self;
}
