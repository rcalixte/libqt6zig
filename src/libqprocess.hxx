#pragma once
#ifndef LIBQPROCESS_HXX
#define LIBQPROCESS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProcess
class VirtualQProcess final : public QProcess {
  public:
    // Virtual class public types (including callbacks and access types)
    using QProcess_MetaObject_Callback = QMetaObject* (*)(const QProcess*);
    using QProcess_Metacast_Callback = void* (*)(QProcess*, const char*);
    using QProcess_Metacall_Callback = int (*)(QProcess*, int, int, void**);
    using QProcess_Open_Callback = bool (*)(QProcess*, int);
    using QProcess_WaitForReadyRead_Callback = bool (*)(QProcess*, int);
    using QProcess_WaitForBytesWritten_Callback = bool (*)(QProcess*, int);
    using QProcess_BytesToWrite_Callback = long long (*)(const QProcess*);
    using QProcess_IsSequential_Callback = bool (*)(const QProcess*);
    using QProcess_Close_Callback = void (*)(QProcess*);
    using QProcess_ReadData_Callback = long long (*)(QProcess*, char*, long long);
    using QProcess_WriteData_Callback = long long (*)(QProcess*, const char*, long long);
    using QProcess_Pos_Callback = long long (*)(const QProcess*);
    using QProcess_Size_Callback = long long (*)(const QProcess*);
    using QProcess_Seek_Callback = bool (*)(QProcess*, long long);
    using QProcess_AtEnd_Callback = bool (*)(const QProcess*);
    using QProcess_Reset_Callback = bool (*)(QProcess*);
    using QProcess_BytesAvailable_Callback = long long (*)(const QProcess*);
    using QProcess_CanReadLine_Callback = bool (*)(const QProcess*);
    using QProcess_ReadLineData_Callback = long long (*)(QProcess*, char*, long long);
    using QProcess_SkipData_Callback = long long (*)(QProcess*, long long);
    using QProcess_Event_Callback = bool (*)(QProcess*, QEvent*);
    using QProcess_EventFilter_Callback = bool (*)(QProcess*, QObject*, QEvent*);
    using QProcess_TimerEvent_Callback = void (*)(QProcess*, QTimerEvent*);
    using QProcess_ChildEvent_Callback = void (*)(QProcess*, QChildEvent*);
    using QProcess_CustomEvent_Callback = void (*)(QProcess*, QEvent*);
    using QProcess_ConnectNotify_Callback = void (*)(QProcess*, QMetaMethod*);
    using QProcess_DisconnectNotify_Callback = void (*)(QProcess*, QMetaMethod*);
    using QProcess::isSignalConnected;
    using QProcess::receivers;
    using QProcess::sender;
    using QProcess::senderSignalIndex;
    using QProcess::setErrorString;
    using QProcess::setOpenMode;
    using QProcess::setProcessState;

    // Instance callback storage
    QProcess_MetaObject_Callback qprocess_metaobject_callback = nullptr;
    QProcess_Metacast_Callback qprocess_metacast_callback = nullptr;
    QProcess_Metacall_Callback qprocess_metacall_callback = nullptr;
    QProcess_Open_Callback qprocess_open_callback = nullptr;
    QProcess_WaitForReadyRead_Callback qprocess_waitforreadyread_callback = nullptr;
    QProcess_WaitForBytesWritten_Callback qprocess_waitforbyteswritten_callback = nullptr;
    QProcess_BytesToWrite_Callback qprocess_bytestowrite_callback = nullptr;
    QProcess_IsSequential_Callback qprocess_issequential_callback = nullptr;
    QProcess_Close_Callback qprocess_close_callback = nullptr;
    QProcess_ReadData_Callback qprocess_readdata_callback = nullptr;
    QProcess_WriteData_Callback qprocess_writedata_callback = nullptr;
    QProcess_Pos_Callback qprocess_pos_callback = nullptr;
    QProcess_Size_Callback qprocess_size_callback = nullptr;
    QProcess_Seek_Callback qprocess_seek_callback = nullptr;
    QProcess_AtEnd_Callback qprocess_atend_callback = nullptr;
    QProcess_Reset_Callback qprocess_reset_callback = nullptr;
    QProcess_BytesAvailable_Callback qprocess_bytesavailable_callback = nullptr;
    QProcess_CanReadLine_Callback qprocess_canreadline_callback = nullptr;
    QProcess_ReadLineData_Callback qprocess_readlinedata_callback = nullptr;
    QProcess_SkipData_Callback qprocess_skipdata_callback = nullptr;
    QProcess_Event_Callback qprocess_event_callback = nullptr;
    QProcess_EventFilter_Callback qprocess_eventfilter_callback = nullptr;
    QProcess_TimerEvent_Callback qprocess_timerevent_callback = nullptr;
    QProcess_ChildEvent_Callback qprocess_childevent_callback = nullptr;
    QProcess_CustomEvent_Callback qprocess_customevent_callback = nullptr;
    QProcess_ConnectNotify_Callback qprocess_connectnotify_callback = nullptr;
    QProcess_DisconnectNotify_Callback qprocess_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QProcess {
        using QProcess::childEvent;
        using QProcess::connectNotify;
        using QProcess::customEvent;
        using QProcess::disconnectNotify;
        using QProcess::readData;
        using QProcess::readLineData;
        using QProcess::skipData;
        using QProcess::timerEvent;
        using QProcess::writeData;
    };

    VirtualQProcess() : QProcess() {};
    VirtualQProcess(QObject* parent) : QProcess(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprocess_metaobject_callback) {
            QMetaObject* callback_ret = qprocess_metaobject_callback(this);
            return callback_ret;
        }
        return QProcess::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprocess_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprocess_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprocess_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprocess_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QProcess::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QProcess::OpenMode mode) override {
        if (qprocess_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qprocess_open_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qprocess_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qprocess_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qprocess_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qprocess_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qprocess_bytestowrite_callback) {
            long long callback_ret = qprocess_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qprocess_issequential_callback) {
            bool callback_ret = qprocess_issequential_callback(this);
            return callback_ret;
        }
        return QProcess::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qprocess_close_callback) {
            qprocess_close_callback(this);
            return;
        }
        QProcess::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qprocess_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qprocess_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qprocess_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qprocess_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qprocess_pos_callback) {
            long long callback_ret = qprocess_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qprocess_size_callback) {
            long long callback_ret = qprocess_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qprocess_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qprocess_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qprocess_atend_callback) {
            bool callback_ret = qprocess_atend_callback(this);
            return callback_ret;
        }
        return QProcess::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qprocess_reset_callback) {
            bool callback_ret = qprocess_reset_callback(this);
            return callback_ret;
        }
        return QProcess::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qprocess_bytesavailable_callback) {
            long long callback_ret = qprocess_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qprocess_canreadline_callback) {
            bool callback_ret = qprocess_canreadline_callback(this);
            return callback_ret;
        }
        return QProcess::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qprocess_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qprocess_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qprocess_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qprocess_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QProcess::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprocess_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qprocess_event_callback(this, cbval1);
            return callback_ret;
        }
        return QProcess::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprocess_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qprocess_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QProcess::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprocess_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprocess_timerevent_callback(this, cbval1);
            return;
        }
        QProcess::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprocess_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprocess_childevent_callback(this, cbval1);
            return;
        }
        QProcess::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprocess_customevent_callback) {
            QEvent* cbval1 = event;
            qprocess_customevent_callback(this, cbval1);
            return;
        }
        QProcess::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprocess_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprocess_connectnotify_callback(this, cbval1);
            return;
        }
        QProcess::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprocess_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprocess_disconnectnotify_callback(this, cbval1);
            return;
        }
        QProcess::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QProcess_SuperReadData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_SuperWriteData(QProcess* self, const char* data, long long len);
    friend long long QProcess_SuperReadLineData(QProcess* self, char* data, long long maxlen);
    friend long long QProcess_SuperSkipData(QProcess* self, long long maxSize);
    friend void QProcess_SuperTimerEvent(QProcess* self, QTimerEvent* event);
    friend void QProcess_SuperChildEvent(QProcess* self, QChildEvent* event);
    friend void QProcess_SuperCustomEvent(QProcess* self, QEvent* event);
    friend void QProcess_SuperConnectNotify(QProcess* self, const QMetaMethod* signal);
    friend void QProcess_SuperDisconnectNotify(QProcess* self, const QMetaMethod* signal);
};

#endif
