#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QIODevice>
#include <QImage>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMovie>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmovie.h>
#include "libqmovie.h"
#include "libqmovie.hxx"

QMovie* QMovie_new() {
    return new VirtualQMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
    return new VirtualQMovie(device);
}

QMovie* QMovie_new3(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQMovie(fileName_QString);
}

QMovie* QMovie_new4(QObject* parent) {
    return new VirtualQMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    return new VirtualQMovie(device, format_QByteArray);
}

QMovie* QMovie_new6(QIODevice* device, const libqt_string format, QObject* parent) {
    QByteArray format_QByteArray(format.data, format.len);
    return new VirtualQMovie(device, format_QByteArray, parent);
}

QMovie* QMovie_new7(const libqt_string fileName, const libqt_string format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray format_QByteArray(format.data, format.len);
    return new VirtualQMovie(fileName_QString, format_QByteArray);
}

QMovie* QMovie_new8(const libqt_string fileName, const libqt_string format, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QByteArray format_QByteArray(format.data, format.len);
    return new VirtualQMovie(fileName_QString, format_QByteArray, parent);
}

QMetaObject* QMovie_MetaObject(const QMovie* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMovie_Metacast(QMovie* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMovie_Metacall(QMovie* self, int param1, int param2, void** param3) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQMovie*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMovie_Tr(const char* s) {
    QString _ret = QMovie::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QMovie_SupportedFormats() {
    QList<QByteArray> _ret = QMovie::supportedFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_qb.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QMovie_SetDevice(QMovie* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QMovie_Device(const QMovie* self) {
    return self->device();
}

void QMovie_SetFileName(QMovie* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QMovie_FileName(const QMovie* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMovie_SetFormat(QMovie* self, const libqt_string format) {
    QByteArray format_QByteArray(format.data, format.len);
    self->setFormat(format_QByteArray);
}

libqt_string QMovie_Format(const QMovie* self) {
    QByteArray _qb = self->format();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMovie_SetBackgroundColor(QMovie* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

QColor* QMovie_BackgroundColor(const QMovie* self) {
    return new QColor(self->backgroundColor());
}

int QMovie_State(const QMovie* self) {
    return static_cast<int>(self->state());
}

QRect* QMovie_FrameRect(const QMovie* self) {
    return new QRect(self->frameRect());
}

QImage* QMovie_CurrentImage(const QMovie* self) {
    return new QImage(self->currentImage());
}

QPixmap* QMovie_CurrentPixmap(const QMovie* self) {
    return new QPixmap(self->currentPixmap());
}

bool QMovie_IsValid(const QMovie* self) {
    return self->isValid();
}

int QMovie_LastError(const QMovie* self) {
    return static_cast<int>(self->lastError());
}

libqt_string QMovie_LastErrorString(const QMovie* self) {
    QString _ret = self->lastErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QMovie_JumpToFrame(QMovie* self, int frameNumber) {
    return self->jumpToFrame(static_cast<int>(frameNumber));
}

int QMovie_LoopCount(const QMovie* self) {
    return self->loopCount();
}

int QMovie_FrameCount(const QMovie* self) {
    return self->frameCount();
}

int QMovie_NextFrameDelay(const QMovie* self) {
    return self->nextFrameDelay();
}

int QMovie_CurrentFrameNumber(const QMovie* self) {
    return self->currentFrameNumber();
}

int QMovie_Speed(const QMovie* self) {
    return self->speed();
}

QSize* QMovie_ScaledSize(QMovie* self) {
    return new QSize(self->scaledSize());
}

void QMovie_SetScaledSize(QMovie* self, const QSize* size) {
    self->setScaledSize(*size);
}

int QMovie_CacheMode(const QMovie* self) {
    return static_cast<int>(self->cacheMode());
}

void QMovie_SetCacheMode(QMovie* self, int mode) {
    self->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_Started(QMovie* self) {
    self->started();
}

void QMovie_Connect_Started(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*) = reinterpret_cast<void (*)(QMovie*)>(slot);
    QMovie::connect(self, &QMovie::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMovie_Resized(QMovie* self, const QSize* size) {
    self->resized(*size);
}

void QMovie_Connect_Resized(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, QSize*) = reinterpret_cast<void (*)(QMovie*, QSize*)>(slot);
    QMovie::connect(self, &QMovie::resized, [self, slotFunc](const QSize& size) {
        const QSize& size_ret = size;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

void QMovie_Updated(QMovie* self, const QRect* rect) {
    self->updated(*rect);
}

void QMovie_Connect_Updated(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, QRect*) = reinterpret_cast<void (*)(QMovie*, QRect*)>(slot);
    QMovie::connect(self, &QMovie::updated, [self, slotFunc](const QRect& rect) {
        const QRect& rect_ret = rect;
        // Cast returned reference into pointer
        QRect* sigval1 = const_cast<QRect*>(&rect_ret);
        slotFunc(self, sigval1);
    });
}

void QMovie_StateChanged(QMovie* self, int state) {
    self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_Connect_StateChanged(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::stateChanged, [self, slotFunc](QMovie::MovieState state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QMovie_Error(QMovie* self, int errorVal) {
    self->error(static_cast<QImageReader::ImageReaderError>(errorVal));
}

void QMovie_Connect_Error(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::error, [self, slotFunc](QImageReader::ImageReaderError errorVal) {
        int sigval1 = static_cast<int>(errorVal);
        slotFunc(self, sigval1);
    });
}

void QMovie_Finished(QMovie* self) {
    self->finished();
}

void QMovie_Connect_Finished(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*) = reinterpret_cast<void (*)(QMovie*)>(slot);
    QMovie::connect(self, &QMovie::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QMovie_FrameChanged(QMovie* self, int frameNumber) {
    self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_Connect_FrameChanged(QMovie* self, intptr_t slot) {
    void (*slotFunc)(QMovie*, int) = reinterpret_cast<void (*)(QMovie*, int)>(slot);
    QMovie::connect(self, &QMovie::frameChanged, [self, slotFunc](int frameNumber) {
        int sigval1 = frameNumber;
        slotFunc(self, sigval1);
    });
}

void QMovie_Start(QMovie* self) {
    self->start();
}

bool QMovie_JumpToNextFrame(QMovie* self) {
    return self->jumpToNextFrame();
}

void QMovie_SetPaused(QMovie* self, bool paused) {
    self->setPaused(paused);
}

void QMovie_Stop(QMovie* self) {
    self->stop();
}

void QMovie_SetSpeed(QMovie* self, int percentSpeed) {
    self->setSpeed(static_cast<int>(percentSpeed));
}

libqt_string QMovie_Tr2(const char* s, const char* c) {
    QString _ret = QMovie::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMovie_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMovie::tr(s, c, static_cast<int>(n));
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
int QMovie_QBaseMetacall(QMovie* self, int param1, int param2, void** param3) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Metacall_IsBase(true);
        return vqmovie->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QMovie::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnMetacall(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Metacall_Callback(reinterpret_cast<VirtualQMovie::QMovie_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMovie_Event(QMovie* self, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->event(event);
    } else {
        return self->QMovie::event(event);
    }
}

// Base class handler implementation
bool QMovie_QBaseEvent(QMovie* self, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Event_IsBase(true);
        return vqmovie->event(event);
    } else {
        return self->QMovie::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnEvent(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Event_Callback(reinterpret_cast<VirtualQMovie::QMovie_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMovie_EventFilter(QMovie* self, QObject* watched, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->eventFilter(watched, event);
    } else {
        return self->QMovie::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QMovie_QBaseEventFilter(QMovie* self, QObject* watched, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_EventFilter_IsBase(true);
        return vqmovie->eventFilter(watched, event);
    } else {
        return self->QMovie::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnEventFilter(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_EventFilter_Callback(reinterpret_cast<VirtualQMovie::QMovie_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMovie_TimerEvent(QMovie* self, QTimerEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->timerEvent(event);
    } else {
        ((VirtualQMovie*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QMovie_QBaseTimerEvent(QMovie* self, QTimerEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_TimerEvent_IsBase(true);
        vqmovie->timerEvent(event);
    } else {
        ((VirtualQMovie*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnTimerEvent(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_TimerEvent_Callback(reinterpret_cast<VirtualQMovie::QMovie_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMovie_ChildEvent(QMovie* self, QChildEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->childEvent(event);
    } else {
        ((VirtualQMovie*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QMovie_QBaseChildEvent(QMovie* self, QChildEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_ChildEvent_IsBase(true);
        vqmovie->childEvent(event);
    } else {
        ((VirtualQMovie*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnChildEvent(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_ChildEvent_Callback(reinterpret_cast<VirtualQMovie::QMovie_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMovie_CustomEvent(QMovie* self, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->customEvent(event);
    } else {
        ((VirtualQMovie*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QMovie_QBaseCustomEvent(QMovie* self, QEvent* event) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_CustomEvent_IsBase(true);
        vqmovie->customEvent(event);
    } else {
        ((VirtualQMovie*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnCustomEvent(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_CustomEvent_Callback(reinterpret_cast<VirtualQMovie::QMovie_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMovie_ConnectNotify(QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->connectNotify(*signal);
    } else {
        ((VirtualQMovie*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMovie_QBaseConnectNotify(QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_ConnectNotify_IsBase(true);
        vqmovie->connectNotify(*signal);
    } else {
        ((VirtualQMovie*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnConnectNotify(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_ConnectNotify_Callback(reinterpret_cast<VirtualQMovie::QMovie_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMovie_DisconnectNotify(QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->disconnectNotify(*signal);
    } else {
        ((VirtualQMovie*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMovie_QBaseDisconnectNotify(QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_DisconnectNotify_IsBase(true);
        vqmovie->disconnectNotify(*signal);
    } else {
        ((VirtualQMovie*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnDisconnectNotify(QMovie* self, intptr_t slot) {
    auto* vqmovie = dynamic_cast<VirtualQMovie*>(self);
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_DisconnectNotify_Callback(reinterpret_cast<VirtualQMovie::QMovie_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMovie_Sender(const QMovie* self) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->sender();
    } else {
        return ((VirtualQMovie*)self)->sender();
    }
}

// Base class handler implementation
QObject* QMovie_QBaseSender(const QMovie* self) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Sender_IsBase(true);
        return vqmovie->sender();
    } else {
        return ((VirtualQMovie*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnSender(const QMovie* self, intptr_t slot) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Sender_Callback(reinterpret_cast<VirtualQMovie::QMovie_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMovie_SenderSignalIndex(const QMovie* self) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->senderSignalIndex();
    } else {
        return ((VirtualQMovie*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QMovie_QBaseSenderSignalIndex(const QMovie* self) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_SenderSignalIndex_IsBase(true);
        return vqmovie->senderSignalIndex();
    } else {
        return ((VirtualQMovie*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnSenderSignalIndex(const QMovie* self, intptr_t slot) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMovie::QMovie_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMovie_Receivers(const QMovie* self, const char* signal) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->receivers(signal);
    } else {
        return ((VirtualQMovie*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QMovie_QBaseReceivers(const QMovie* self, const char* signal) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Receivers_IsBase(true);
        return vqmovie->receivers(signal);
    } else {
        return ((VirtualQMovie*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnReceivers(const QMovie* self, intptr_t slot) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_Receivers_Callback(reinterpret_cast<VirtualQMovie::QMovie_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMovie_IsSignalConnected(const QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        return vqmovie->isSignalConnected(*signal);
    } else {
        return ((VirtualQMovie*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMovie_QBaseIsSignalConnected(const QMovie* self, const QMetaMethod* signal) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_IsSignalConnected_IsBase(true);
        return vqmovie->isSignalConnected(*signal);
    } else {
        return ((VirtualQMovie*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMovie_OnIsSignalConnected(const QMovie* self, intptr_t slot) {
    auto* vqmovie = const_cast<VirtualQMovie*>(dynamic_cast<const VirtualQMovie*>(self));
    if (vqmovie && vqmovie->isVirtualQMovie) {
        vqmovie->setQMovie_IsSignalConnected_Callback(reinterpret_cast<VirtualQMovie::QMovie_IsSignalConnected_Callback>(slot));
    }
}

void QMovie_Delete(QMovie* self) {
    delete self;
}
