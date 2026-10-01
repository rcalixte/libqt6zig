#pragma once
#ifndef MULTIMEDIA_LIBQWAVEDECODER_HXX
#define MULTIMEDIA_LIBQWAVEDECODER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QWaveDecoder
class VirtualQWaveDecoder final : public QWaveDecoder {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWaveDecoder_MetaObject_Callback = QMetaObject* (*)(const QWaveDecoder*);
    using QWaveDecoder_Metacast_Callback = void* (*)(QWaveDecoder*, const char*);
    using QWaveDecoder_Metacall_Callback = int (*)(QWaveDecoder*, int, int, void**);
    using QWaveDecoder_Open_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_Close_Callback = void (*)(QWaveDecoder*);
    using QWaveDecoder_Seek_Callback = bool (*)(QWaveDecoder*, long long);
    using QWaveDecoder_Pos_Callback = long long (*)(const QWaveDecoder*);
    using QWaveDecoder_Size_Callback = long long (*)(const QWaveDecoder*);
    using QWaveDecoder_IsSequential_Callback = bool (*)(const QWaveDecoder*);
    using QWaveDecoder_BytesAvailable_Callback = long long (*)(const QWaveDecoder*);
    using QWaveDecoder_AtEnd_Callback = bool (*)(const QWaveDecoder*);
    using QWaveDecoder_Reset_Callback = bool (*)(QWaveDecoder*);
    using QWaveDecoder_BytesToWrite_Callback = long long (*)(const QWaveDecoder*);
    using QWaveDecoder_CanReadLine_Callback = bool (*)(const QWaveDecoder*);
    using QWaveDecoder_WaitForReadyRead_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_WaitForBytesWritten_Callback = bool (*)(QWaveDecoder*, int);
    using QWaveDecoder_ReadLineData_Callback = long long (*)(QWaveDecoder*, char*, long long);
    using QWaveDecoder_SkipData_Callback = long long (*)(QWaveDecoder*, long long);
    using QWaveDecoder_Event_Callback = bool (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_EventFilter_Callback = bool (*)(QWaveDecoder*, QObject*, QEvent*);
    using QWaveDecoder_TimerEvent_Callback = void (*)(QWaveDecoder*, QTimerEvent*);
    using QWaveDecoder_ChildEvent_Callback = void (*)(QWaveDecoder*, QChildEvent*);
    using QWaveDecoder_CustomEvent_Callback = void (*)(QWaveDecoder*, QEvent*);
    using QWaveDecoder_ConnectNotify_Callback = void (*)(QWaveDecoder*, QMetaMethod*);
    using QWaveDecoder_DisconnectNotify_Callback = void (*)(QWaveDecoder*, QMetaMethod*);
    using QWaveDecoder::isSignalConnected;
    using QWaveDecoder::receivers;
    using QWaveDecoder::sender;
    using QWaveDecoder::senderSignalIndex;
    using QWaveDecoder::setErrorString;
    using QWaveDecoder::setOpenMode;

    // Instance callback storage
    QWaveDecoder_MetaObject_Callback qwavedecoder_metaobject_callback = nullptr;
    QWaveDecoder_Metacast_Callback qwavedecoder_metacast_callback = nullptr;
    QWaveDecoder_Metacall_Callback qwavedecoder_metacall_callback = nullptr;
    QWaveDecoder_Open_Callback qwavedecoder_open_callback = nullptr;
    QWaveDecoder_Close_Callback qwavedecoder_close_callback = nullptr;
    QWaveDecoder_Seek_Callback qwavedecoder_seek_callback = nullptr;
    QWaveDecoder_Pos_Callback qwavedecoder_pos_callback = nullptr;
    QWaveDecoder_Size_Callback qwavedecoder_size_callback = nullptr;
    QWaveDecoder_IsSequential_Callback qwavedecoder_issequential_callback = nullptr;
    QWaveDecoder_BytesAvailable_Callback qwavedecoder_bytesavailable_callback = nullptr;
    QWaveDecoder_AtEnd_Callback qwavedecoder_atend_callback = nullptr;
    QWaveDecoder_Reset_Callback qwavedecoder_reset_callback = nullptr;
    QWaveDecoder_BytesToWrite_Callback qwavedecoder_bytestowrite_callback = nullptr;
    QWaveDecoder_CanReadLine_Callback qwavedecoder_canreadline_callback = nullptr;
    QWaveDecoder_WaitForReadyRead_Callback qwavedecoder_waitforreadyread_callback = nullptr;
    QWaveDecoder_WaitForBytesWritten_Callback qwavedecoder_waitforbyteswritten_callback = nullptr;
    QWaveDecoder_ReadLineData_Callback qwavedecoder_readlinedata_callback = nullptr;
    QWaveDecoder_SkipData_Callback qwavedecoder_skipdata_callback = nullptr;
    QWaveDecoder_Event_Callback qwavedecoder_event_callback = nullptr;
    QWaveDecoder_EventFilter_Callback qwavedecoder_eventfilter_callback = nullptr;
    QWaveDecoder_TimerEvent_Callback qwavedecoder_timerevent_callback = nullptr;
    QWaveDecoder_ChildEvent_Callback qwavedecoder_childevent_callback = nullptr;
    QWaveDecoder_CustomEvent_Callback qwavedecoder_customevent_callback = nullptr;
    QWaveDecoder_ConnectNotify_Callback qwavedecoder_connectnotify_callback = nullptr;
    QWaveDecoder_DisconnectNotify_Callback qwavedecoder_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWaveDecoder {
        using QWaveDecoder::childEvent;
        using QWaveDecoder::connectNotify;
        using QWaveDecoder::customEvent;
        using QWaveDecoder::disconnectNotify;
        using QWaveDecoder::readLineData;
        using QWaveDecoder::skipData;
        using QWaveDecoder::timerEvent;
    };

    VirtualQWaveDecoder(QIODevice* device) : QWaveDecoder(device) {};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format) : QWaveDecoder(device, format) {};
    VirtualQWaveDecoder(QIODevice* device, QObject* parent) : QWaveDecoder(device, parent) {};
    VirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent) : QWaveDecoder(device, format, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwavedecoder_metaobject_callback) {
            QMetaObject* callback_ret = qwavedecoder_metaobject_callback(this);
            return callback_ret;
        }
        return QWaveDecoder::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwavedecoder_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwavedecoder_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwavedecoder_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwavedecoder_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWaveDecoder::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (qwavedecoder_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qwavedecoder_open_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qwavedecoder_close_callback) {
            qwavedecoder_close_callback(this);
            return;
        }
        QWaveDecoder::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qwavedecoder_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qwavedecoder_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qwavedecoder_pos_callback) {
            long long callback_ret = qwavedecoder_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qwavedecoder_size_callback) {
            long long callback_ret = qwavedecoder_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qwavedecoder_issequential_callback) {
            bool callback_ret = qwavedecoder_issequential_callback(this);
            return callback_ret;
        }
        return QWaveDecoder::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qwavedecoder_bytesavailable_callback) {
            long long callback_ret = qwavedecoder_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qwavedecoder_atend_callback) {
            bool callback_ret = qwavedecoder_atend_callback(this);
            return callback_ret;
        }
        return QWaveDecoder::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qwavedecoder_reset_callback) {
            bool callback_ret = qwavedecoder_reset_callback(this);
            return callback_ret;
        }
        return QWaveDecoder::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qwavedecoder_bytestowrite_callback) {
            long long callback_ret = qwavedecoder_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qwavedecoder_canreadline_callback) {
            bool callback_ret = qwavedecoder_canreadline_callback(this);
            return callback_ret;
        }
        return QWaveDecoder::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qwavedecoder_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qwavedecoder_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qwavedecoder_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qwavedecoder_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qwavedecoder_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qwavedecoder_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qwavedecoder_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qwavedecoder_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QWaveDecoder::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwavedecoder_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwavedecoder_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWaveDecoder::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwavedecoder_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwavedecoder_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWaveDecoder::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwavedecoder_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwavedecoder_timerevent_callback(this, cbval1);
            return;
        }
        QWaveDecoder::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwavedecoder_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwavedecoder_childevent_callback(this, cbval1);
            return;
        }
        QWaveDecoder::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwavedecoder_customevent_callback) {
            QEvent* cbval1 = event;
            qwavedecoder_customevent_callback(this, cbval1);
            return;
        }
        QWaveDecoder::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwavedecoder_connectnotify_callback(this, cbval1);
            return;
        }
        QWaveDecoder::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwavedecoder_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwavedecoder_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWaveDecoder::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QWaveDecoder_SuperReadLineData(QWaveDecoder* self, char* data, long long maxlen);
    friend long long QWaveDecoder_SuperSkipData(QWaveDecoder* self, long long maxSize);
    friend void QWaveDecoder_SuperTimerEvent(QWaveDecoder* self, QTimerEvent* event);
    friend void QWaveDecoder_SuperChildEvent(QWaveDecoder* self, QChildEvent* event);
    friend void QWaveDecoder_SuperCustomEvent(QWaveDecoder* self, QEvent* event);
    friend void QWaveDecoder_SuperConnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
    friend void QWaveDecoder_SuperDisconnectNotify(QWaveDecoder* self, const QMetaMethod* signal);
};

#endif
