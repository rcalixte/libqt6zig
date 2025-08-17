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
#include <QByteArray>
#include <cstring>
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
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaRecorder*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMediaRecorder_OnMetacall(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Metacall_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMediaRecorder_QBaseMetacall(QMediaRecorder* self, int param1, int param2, void** param3) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Metacall_IsBase(true);
        return vqmediarecorder->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaRecorder*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMediaRecorder_Tr(const char* s) {
    QString _ret = QMediaRecorder::tr(s);
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
    QString _ret = self->errorString();
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
    QMediaRecorder::connect(self, &QMediaRecorder::recorderStateChanged, [self, slotFunc](QMediaRecorder::RecorderState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

void QMediaRecorder_Connect_DurationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, long long) = reinterpret_cast<void (*)(QMediaRecorder*, long long)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::durationChanged, [self, slotFunc](qint64 duration) {
        long long sigval1 = static_cast<long long>(duration);
        slotFunc(self, sigval1);
    });
}

void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, const QUrl* location) {
    self->actualLocationChanged(*location);
}

void QMediaRecorder_Connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, QUrl*) = reinterpret_cast<void (*)(QMediaRecorder*, QUrl*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::actualLocationChanged, [self, slotFunc](const QUrl& location) {
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
    QMediaRecorder::connect(self, &QMediaRecorder::encoderSettingsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QMediaRecorder::Error>(errorVal), errorString_QString);
}

void QMediaRecorder_Connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*, int, libqt_string) = reinterpret_cast<void (*)(QMediaRecorder*, int, libqt_string)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::errorOccurred, [self, slotFunc](QMediaRecorder::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        libqt_string errorString_str;
        errorString_str.len = errorString_b.length();
        errorString_str.data = static_cast<const char*>(malloc(errorString_str.len + 1));
        memcpy((void*)errorString_str.data, errorString_b.data(), errorString_str.len);
        ((char*)errorString_str.data)[errorString_str.len] = '\0';
        libqt_string sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
    });
}

void QMediaRecorder_ErrorChanged(QMediaRecorder* self) {
    self->errorChanged();
}

void QMediaRecorder_Connect_ErrorChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_MetaDataChanged(QMediaRecorder* self) {
    self->metaDataChanged();
}

void QMediaRecorder_Connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self) {
    self->mediaFormatChanged();
}

void QMediaRecorder_Connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::mediaFormatChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self) {
    self->encodingModeChanged();
}

void QMediaRecorder_Connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::encodingModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_QualityChanged(QMediaRecorder* self) {
    self->qualityChanged();
}

void QMediaRecorder_Connect_QualityChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::qualityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self) {
    self->videoResolutionChanged();
}

void QMediaRecorder_Connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoResolutionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self) {
    self->videoFrameRateChanged();
}

void QMediaRecorder_Connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoFrameRateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self) {
    self->videoBitRateChanged();
}

void QMediaRecorder_Connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::videoBitRateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self) {
    self->audioBitRateChanged();
}

void QMediaRecorder_Connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioBitRateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self) {
    self->audioChannelCountChanged();
}

void QMediaRecorder_Connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioChannelCountChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self) {
    self->audioSampleRateChanged();
}

void QMediaRecorder_Connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::audioSampleRateChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaRecorder_AutoStopChanged(QMediaRecorder* self) {
    self->autoStopChanged();
}

void QMediaRecorder_Connect_AutoStopChanged(QMediaRecorder* self, intptr_t slot) {
    void (*slotFunc)(QMediaRecorder*) = reinterpret_cast<void (*)(QMediaRecorder*)>(slot);
    QMediaRecorder::connect(self, &QMediaRecorder::autoStopChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QMediaRecorder_Tr2(const char* s, const char* c) {
    QString _ret = QMediaRecorder::tr(s, c);
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
    QString _ret = QMediaRecorder::tr(s, c, static_cast<int>(n));
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
bool QMediaRecorder_Event(QMediaRecorder* self, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->event(event);
    } else {
        return self->QMediaRecorder::event(event);
    }
}

// Base class handler implementation
bool QMediaRecorder_QBaseEvent(QMediaRecorder* self, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Event_IsBase(true);
        return vqmediarecorder->event(event);
    } else {
        return self->QMediaRecorder::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnEvent(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Event_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaRecorder_EventFilter(QMediaRecorder* self, QObject* watched, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->eventFilter(watched, event);
    } else {
        return self->QMediaRecorder::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMediaRecorder_QBaseEventFilter(QMediaRecorder* self, QObject* watched, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_EventFilter_IsBase(true);
        return vqmediarecorder->eventFilter(watched, event);
    } else {
        return self->QMediaRecorder::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnEventFilter(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_EventFilter_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaRecorder_TimerEvent(QMediaRecorder* self, QTimerEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->timerEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMediaRecorder_QBaseTimerEvent(QMediaRecorder* self, QTimerEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_TimerEvent_IsBase(true);
        vqmediarecorder->timerEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnTimerEvent(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_TimerEvent_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaRecorder_ChildEvent(QMediaRecorder* self, QChildEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->childEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMediaRecorder_QBaseChildEvent(QMediaRecorder* self, QChildEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_ChildEvent_IsBase(true);
        vqmediarecorder->childEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnChildEvent(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_ChildEvent_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaRecorder_CustomEvent(QMediaRecorder* self, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->customEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMediaRecorder_QBaseCustomEvent(QMediaRecorder* self, QEvent* event) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_CustomEvent_IsBase(true);
        vqmediarecorder->customEvent(event);
    } else {
        ((VirtualQMediaRecorder*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnCustomEvent(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_CustomEvent_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaRecorder_ConnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->connectNotify(*signal);
    } else {
        ((VirtualQMediaRecorder*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaRecorder_QBaseConnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_ConnectNotify_IsBase(true);
        vqmediarecorder->connectNotify(*signal);
    } else {
        ((VirtualQMediaRecorder*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnConnectNotify(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaRecorder_DisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaRecorder*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaRecorder_QBaseDisconnectNotify(QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_DisconnectNotify_IsBase(true);
        vqmediarecorder->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaRecorder*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnDisconnectNotify(QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = dynamic_cast<VirtualQMediaRecorder*>(self);
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_DisconnectNotify_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMediaRecorder_Sender(const QMediaRecorder* self) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->sender();
    } else {
        return ((VirtualQMediaRecorder*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMediaRecorder_QBaseSender(const QMediaRecorder* self) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Sender_IsBase(true);
        return vqmediarecorder->sender();
    } else {
        return ((VirtualQMediaRecorder*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnSender(const QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Sender_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaRecorder_SenderSignalIndex(const QMediaRecorder* self) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->senderSignalIndex();
    } else {
        return ((VirtualQMediaRecorder*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMediaRecorder_QBaseSenderSignalIndex(const QMediaRecorder* self) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_SenderSignalIndex_IsBase(true);
        return vqmediarecorder->senderSignalIndex();
    } else {
        return ((VirtualQMediaRecorder*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnSenderSignalIndex(const QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaRecorder_Receivers(const QMediaRecorder* self, const char* signal) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->receivers(signal);
    } else {
        return ((VirtualQMediaRecorder*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMediaRecorder_QBaseReceivers(const QMediaRecorder* self, const char* signal) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Receivers_IsBase(true);
        return vqmediarecorder->receivers(signal);
    } else {
        return ((VirtualQMediaRecorder*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnReceivers(const QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_Receivers_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaRecorder_IsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        return vqmediarecorder->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaRecorder*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMediaRecorder_QBaseIsSignalConnected(const QMediaRecorder* self, const QMetaMethod* signal) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_IsSignalConnected_IsBase(true);
        return vqmediarecorder->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaRecorder*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaRecorder_OnIsSignalConnected(const QMediaRecorder* self, intptr_t slot) {
    auto* vqmediarecorder = const_cast<VirtualQMediaRecorder*>(dynamic_cast<const VirtualQMediaRecorder*>(self));
    if (vqmediarecorder && vqmediarecorder->isVirtualQMediaRecorder) {
        vqmediarecorder->setQMediaRecorder_IsSignalConnected_Callback(reinterpret_cast<VirtualQMediaRecorder::QMediaRecorder_IsSignalConnected_Callback>(slot));
    }
}

void QMediaRecorder_Delete(QMediaRecorder* self) {
    delete self;
}
