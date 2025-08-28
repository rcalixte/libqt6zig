#include <QAudioBufferOutput>
#include <QAudioOutput>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QMediaTimeRange>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVideoSink>
#include <qmediaplayer.h>
#include "libqmediaplayer.h"
#include "libqmediaplayer.hxx"

QMediaPlayer* QMediaPlayer_new() {
    return new VirtualQMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
    return new VirtualQMediaPlayer(parent);
}

QMetaObject* QMediaPlayer_MetaObject(const QMediaPlayer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMediaPlayer_Metacast(QMediaPlayer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMediaPlayer_Metacall(QMediaPlayer* self, int param1, int param2, void** param3) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMediaPlayer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMediaPlayer_Tr(const char* s) {
    QString _ret = QMediaPlayer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_AudioTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->audioTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_VideoTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->videoTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QMediaMetaData* */ QMediaPlayer_SubtitleTracks(const QMediaPlayer* self) {
    QList<QMediaMetaData> _ret = self->subtitleTracks();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMediaMetaData** _arr = static_cast<QMediaMetaData**>(malloc(sizeof(QMediaMetaData*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QMediaMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self) {
    return self->activeAudioTrack();
}

int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self) {
    return self->activeVideoTrack();
}

int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self) {
    return self->activeSubtitleTrack();
}

void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index) {
    self->setActiveAudioTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index) {
    self->setActiveVideoTrack(static_cast<int>(index));
}

void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index) {
    self->setActiveSubtitleTrack(static_cast<int>(index));
}

void QMediaPlayer_SetAudioBufferOutput(QMediaPlayer* self, QAudioBufferOutput* output) {
    self->setAudioBufferOutput(output);
}

QAudioBufferOutput* QMediaPlayer_AudioBufferOutput(const QMediaPlayer* self) {
    return self->audioBufferOutput();
}

void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output) {
    self->setAudioOutput(output);
}

QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self) {
    return self->audioOutput();
}

void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput) {
    self->setVideoOutput(videoOutput);
}

QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self) {
    return self->videoOutput();
}

void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink) {
    self->setVideoSink(sink);
}

QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self) {
    return self->videoSink();
}

QUrl* QMediaPlayer_Source(const QMediaPlayer* self) {
    return new QUrl(self->source());
}

QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self) {
    return (QIODevice*)self->sourceDevice();
}

int QMediaPlayer_PlaybackState(const QMediaPlayer* self) {
    return static_cast<int>(self->playbackState());
}

int QMediaPlayer_MediaStatus(const QMediaPlayer* self) {
    return static_cast<int>(self->mediaStatus());
}

long long QMediaPlayer_Duration(const QMediaPlayer* self) {
    return static_cast<long long>(self->duration());
}

long long QMediaPlayer_Position(const QMediaPlayer* self) {
    return static_cast<long long>(self->position());
}

bool QMediaPlayer_HasAudio(const QMediaPlayer* self) {
    return self->hasAudio();
}

bool QMediaPlayer_HasVideo(const QMediaPlayer* self) {
    return self->hasVideo();
}

float QMediaPlayer_BufferProgress(const QMediaPlayer* self) {
    return self->bufferProgress();
}

QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self) {
    return new QMediaTimeRange(self->bufferedTimeRange());
}

bool QMediaPlayer_IsSeekable(const QMediaPlayer* self) {
    return self->isSeekable();
}

double QMediaPlayer_PlaybackRate(const QMediaPlayer* self) {
    return static_cast<double>(self->playbackRate());
}

bool QMediaPlayer_IsPlaying(const QMediaPlayer* self) {
    return self->isPlaying();
}

int QMediaPlayer_Loops(const QMediaPlayer* self) {
    return self->loops();
}

void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops) {
    self->setLoops(static_cast<int>(loops));
}

int QMediaPlayer_Error(const QMediaPlayer* self) {
    return static_cast<int>(self->error());
}

libqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self) {
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

bool QMediaPlayer_IsAvailable(const QMediaPlayer* self) {
    return self->isAvailable();
}

QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self) {
    return new QMediaMetaData(self->metaData());
}

void QMediaPlayer_Play(QMediaPlayer* self) {
    self->play();
}

void QMediaPlayer_Pause(QMediaPlayer* self) {
    self->pause();
}

void QMediaPlayer_Stop(QMediaPlayer* self) {
    self->stop();
}

void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position) {
    self->setPosition(static_cast<qint64>(position));
}

void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate) {
    self->setPlaybackRate(static_cast<qreal>(rate));
}

void QMediaPlayer_SetSource(QMediaPlayer* self, const QUrl* source) {
    self->setSource(*source);
}

void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device) {
    self->setSourceDevice(device);
}

void QMediaPlayer_SourceChanged(QMediaPlayer* self, const QUrl* media) {
    self->sourceChanged(*media);
}

void QMediaPlayer_Connect_SourceChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, QUrl*) = reinterpret_cast<void (*)(QMediaPlayer*, QUrl*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::sourceChanged, [self, slotFunc](const QUrl& media) {
        const QUrl& media_ret = media;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&media_ret);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState) {
    self->playbackStateChanged(static_cast<QMediaPlayer::PlaybackState>(newState));
}

void QMediaPlayer_Connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackStateChanged, [self, slotFunc](QMediaPlayer::PlaybackState newState) {
        int sigval1 = static_cast<int>(newState);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status) {
    self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_Connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::mediaStatusChanged, [self, slotFunc](QMediaPlayer::MediaStatus status) {
        int sigval1 = static_cast<int>(status);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

void QMediaPlayer_Connect_DurationChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::durationChanged, [self, slotFunc](qint64 duration) {
        long long sigval1 = static_cast<long long>(duration);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position) {
    self->positionChanged(static_cast<qint64>(position));
}

void QMediaPlayer_Connect_PositionChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::positionChanged, [self, slotFunc](qint64 position) {
        long long sigval1 = static_cast<long long>(position);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available) {
    self->hasAudioChanged(available);
}

void QMediaPlayer_Connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasAudioChanged, [self, slotFunc](bool available) {
        bool sigval1 = available;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
    self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_Connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasVideoChanged, [self, slotFunc](bool videoAvailable) {
        bool sigval1 = videoAvailable;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress) {
    self->bufferProgressChanged(static_cast<float>(progress));
}

void QMediaPlayer_Connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, float) = reinterpret_cast<void (*)(QMediaPlayer*, float)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::bufferProgressChanged, [self, slotFunc](float progress) {
        float sigval1 = progress;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable) {
    self->seekableChanged(seekable);
}

void QMediaPlayer_Connect_SeekableChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::seekableChanged, [self, slotFunc](bool seekable) {
        bool sigval1 = seekable;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PlayingChanged(QMediaPlayer* self, bool playing) {
    self->playingChanged(playing);
}

void QMediaPlayer_Connect_PlayingChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playingChanged, [self, slotFunc](bool playing) {
        bool sigval1 = playing;
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate) {
    self->playbackRateChanged(static_cast<qreal>(rate));
}

void QMediaPlayer_Connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, double) = reinterpret_cast<void (*)(QMediaPlayer*, double)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackRateChanged, [self, slotFunc](qreal rate) {
        double sigval1 = static_cast<double>(rate);
        slotFunc(self, sigval1);
    });
}

void QMediaPlayer_LoopsChanged(QMediaPlayer* self) {
    self->loopsChanged();
}

void QMediaPlayer_Connect_LoopsChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::loopsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_MetaDataChanged(QMediaPlayer* self) {
    self->metaDataChanged();
}

void QMediaPlayer_Connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::metaDataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self) {
    self->videoOutputChanged();
}

void QMediaPlayer_Connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::videoOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self) {
    self->audioOutputChanged();
}

void QMediaPlayer_Connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::audioOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_AudioBufferOutputChanged(QMediaPlayer* self) {
    self->audioBufferOutputChanged();
}

void QMediaPlayer_Connect_AudioBufferOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::audioBufferOutputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_TracksChanged(QMediaPlayer* self) {
    self->tracksChanged();
}

void QMediaPlayer_Connect_TracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::tracksChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self) {
    self->activeTracksChanged();
}

void QMediaPlayer_Connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::activeTracksChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ErrorChanged(QMediaPlayer* self) {
    self->errorChanged();
}

void QMediaPlayer_Connect_ErrorChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QMediaPlayer::Error>(errorVal), errorString_QString);
}

void QMediaPlayer_Connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int, const char*) = reinterpret_cast<void (*)(QMediaPlayer*, int, const char*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorOccurred, [self, slotFunc](QMediaPlayer::Error errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(errorString_str);
    });
}

libqt_string QMediaPlayer_Tr2(const char* s, const char* c) {
    QString _ret = QMediaPlayer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMediaPlayer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, const QUrl* sourceUrl) {
    self->setSourceDevice(device, *sourceUrl);
}

// Base class handler implementation
int QMediaPlayer_QBaseMetacall(QMediaPlayer* self, int param1, int param2, void** param3) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Metacall_IsBase(true);
        return vqmediaplayer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMediaPlayer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnMetacall(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Metacall_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaPlayer_Event(QMediaPlayer* self, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->event(event);
    } else {
        return self->QMediaPlayer::event(event);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseEvent(QMediaPlayer* self, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Event_IsBase(true);
        return vqmediaplayer->event(event);
    } else {
        return self->QMediaPlayer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnEvent(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Event_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaPlayer_EventFilter(QMediaPlayer* self, QObject* watched, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->eventFilter(watched, event);
    } else {
        return self->QMediaPlayer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseEventFilter(QMediaPlayer* self, QObject* watched, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_EventFilter_IsBase(true);
        return vqmediaplayer->eventFilter(watched, event);
    } else {
        return self->QMediaPlayer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnEventFilter(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_EventFilter_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_TimerEvent(QMediaPlayer* self, QTimerEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->timerEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseTimerEvent(QMediaPlayer* self, QTimerEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_TimerEvent_IsBase(true);
        vqmediaplayer->timerEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnTimerEvent(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_TimerEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_ChildEvent(QMediaPlayer* self, QChildEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->childEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseChildEvent(QMediaPlayer* self, QChildEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_ChildEvent_IsBase(true);
        vqmediaplayer->childEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnChildEvent(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_ChildEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_CustomEvent(QMediaPlayer* self, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->customEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseCustomEvent(QMediaPlayer* self, QEvent* event) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_CustomEvent_IsBase(true);
        vqmediaplayer->customEvent(event);
    } else {
        ((VirtualQMediaPlayer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnCustomEvent(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_CustomEvent_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_ConnectNotify(QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->connectNotify(*signal);
    } else {
        ((VirtualQMediaPlayer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseConnectNotify(QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_ConnectNotify_IsBase(true);
        vqmediaplayer->connectNotify(*signal);
    } else {
        ((VirtualQMediaPlayer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnConnectNotify(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_ConnectNotify_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMediaPlayer_DisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaPlayer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMediaPlayer_QBaseDisconnectNotify(QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_DisconnectNotify_IsBase(true);
        vqmediaplayer->disconnectNotify(*signal);
    } else {
        ((VirtualQMediaPlayer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnDisconnectNotify(QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = dynamic_cast<VirtualQMediaPlayer*>(self);
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_DisconnectNotify_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMediaPlayer_Sender(const QMediaPlayer* self) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->sender();
    } else {
        return ((VirtualQMediaPlayer*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMediaPlayer_QBaseSender(const QMediaPlayer* self) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Sender_IsBase(true);
        return vqmediaplayer->sender();
    } else {
        return ((VirtualQMediaPlayer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnSender(const QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Sender_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaPlayer_SenderSignalIndex(const QMediaPlayer* self) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->senderSignalIndex();
    } else {
        return ((VirtualQMediaPlayer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMediaPlayer_QBaseSenderSignalIndex(const QMediaPlayer* self) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_SenderSignalIndex_IsBase(true);
        return vqmediaplayer->senderSignalIndex();
    } else {
        return ((VirtualQMediaPlayer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnSenderSignalIndex(const QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMediaPlayer_Receivers(const QMediaPlayer* self, const char* signal) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->receivers(signal);
    } else {
        return ((VirtualQMediaPlayer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMediaPlayer_QBaseReceivers(const QMediaPlayer* self, const char* signal) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Receivers_IsBase(true);
        return vqmediaplayer->receivers(signal);
    } else {
        return ((VirtualQMediaPlayer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnReceivers(const QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_Receivers_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMediaPlayer_IsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        return vqmediaplayer->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaPlayer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMediaPlayer_QBaseIsSignalConnected(const QMediaPlayer* self, const QMetaMethod* signal) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_IsSignalConnected_IsBase(true);
        return vqmediaplayer->isSignalConnected(*signal);
    } else {
        return ((VirtualQMediaPlayer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMediaPlayer_OnIsSignalConnected(const QMediaPlayer* self, intptr_t slot) {
    auto* vqmediaplayer = const_cast<VirtualQMediaPlayer*>(dynamic_cast<const VirtualQMediaPlayer*>(self));
    if (vqmediaplayer && vqmediaplayer->isVirtualQMediaPlayer) {
        vqmediaplayer->setQMediaPlayer_IsSignalConnected_Callback(reinterpret_cast<VirtualQMediaPlayer::QMediaPlayer_IsSignalConnected_Callback>(slot));
    }
}

void QMediaPlayer_Delete(QMediaPlayer* self) {
    delete self;
}
