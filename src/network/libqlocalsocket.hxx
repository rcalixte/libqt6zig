#pragma once
#ifndef NETWORK_LIBQLOCALSOCKET_HXX
#define NETWORK_LIBQLOCALSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QLocalSocket
class VirtualQLocalSocket final : public QLocalSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QLocalSocket_MetaObject_Callback = QMetaObject* (*)(const QLocalSocket*);
    using QLocalSocket_Metacast_Callback = void* (*)(QLocalSocket*, const char*);
    using QLocalSocket_Metacall_Callback = int (*)(QLocalSocket*, int, int, void**);
    using QLocalSocket_IsSequential_Callback = bool (*)(const QLocalSocket*);
    using QLocalSocket_BytesAvailable_Callback = long long (*)(const QLocalSocket*);
    using QLocalSocket_BytesToWrite_Callback = long long (*)(const QLocalSocket*);
    using QLocalSocket_CanReadLine_Callback = bool (*)(const QLocalSocket*);
    using QLocalSocket_Open_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_Close_Callback = void (*)(QLocalSocket*);
    using QLocalSocket_WaitForBytesWritten_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_WaitForReadyRead_Callback = bool (*)(QLocalSocket*, int);
    using QLocalSocket_ReadData_Callback = long long (*)(QLocalSocket*, char*, long long);
    using QLocalSocket_ReadLineData_Callback = long long (*)(QLocalSocket*, char*, long long);
    using QLocalSocket_SkipData_Callback = long long (*)(QLocalSocket*, long long);
    using QLocalSocket_WriteData_Callback = long long (*)(QLocalSocket*, const char*, long long);
    using QLocalSocket_Pos_Callback = long long (*)(const QLocalSocket*);
    using QLocalSocket_Size_Callback = long long (*)(const QLocalSocket*);
    using QLocalSocket_Seek_Callback = bool (*)(QLocalSocket*, long long);
    using QLocalSocket_AtEnd_Callback = bool (*)(const QLocalSocket*);
    using QLocalSocket_Reset_Callback = bool (*)(QLocalSocket*);
    using QLocalSocket_Event_Callback = bool (*)(QLocalSocket*, QEvent*);
    using QLocalSocket_EventFilter_Callback = bool (*)(QLocalSocket*, QObject*, QEvent*);
    using QLocalSocket_TimerEvent_Callback = void (*)(QLocalSocket*, QTimerEvent*);
    using QLocalSocket_ChildEvent_Callback = void (*)(QLocalSocket*, QChildEvent*);
    using QLocalSocket_CustomEvent_Callback = void (*)(QLocalSocket*, QEvent*);
    using QLocalSocket_ConnectNotify_Callback = void (*)(QLocalSocket*, QMetaMethod*);
    using QLocalSocket_DisconnectNotify_Callback = void (*)(QLocalSocket*, QMetaMethod*);
    using QLocalSocket::isSignalConnected;
    using QLocalSocket::receivers;
    using QLocalSocket::sender;
    using QLocalSocket::senderSignalIndex;
    using QLocalSocket::setErrorString;
    using QLocalSocket::setOpenMode;

    // Instance callback storage
    QLocalSocket_MetaObject_Callback qlocalsocket_metaobject_callback = nullptr;
    QLocalSocket_Metacast_Callback qlocalsocket_metacast_callback = nullptr;
    QLocalSocket_Metacall_Callback qlocalsocket_metacall_callback = nullptr;
    QLocalSocket_IsSequential_Callback qlocalsocket_issequential_callback = nullptr;
    QLocalSocket_BytesAvailable_Callback qlocalsocket_bytesavailable_callback = nullptr;
    QLocalSocket_BytesToWrite_Callback qlocalsocket_bytestowrite_callback = nullptr;
    QLocalSocket_CanReadLine_Callback qlocalsocket_canreadline_callback = nullptr;
    QLocalSocket_Open_Callback qlocalsocket_open_callback = nullptr;
    QLocalSocket_Close_Callback qlocalsocket_close_callback = nullptr;
    QLocalSocket_WaitForBytesWritten_Callback qlocalsocket_waitforbyteswritten_callback = nullptr;
    QLocalSocket_WaitForReadyRead_Callback qlocalsocket_waitforreadyread_callback = nullptr;
    QLocalSocket_ReadData_Callback qlocalsocket_readdata_callback = nullptr;
    QLocalSocket_ReadLineData_Callback qlocalsocket_readlinedata_callback = nullptr;
    QLocalSocket_SkipData_Callback qlocalsocket_skipdata_callback = nullptr;
    QLocalSocket_WriteData_Callback qlocalsocket_writedata_callback = nullptr;
    QLocalSocket_Pos_Callback qlocalsocket_pos_callback = nullptr;
    QLocalSocket_Size_Callback qlocalsocket_size_callback = nullptr;
    QLocalSocket_Seek_Callback qlocalsocket_seek_callback = nullptr;
    QLocalSocket_AtEnd_Callback qlocalsocket_atend_callback = nullptr;
    QLocalSocket_Reset_Callback qlocalsocket_reset_callback = nullptr;
    QLocalSocket_Event_Callback qlocalsocket_event_callback = nullptr;
    QLocalSocket_EventFilter_Callback qlocalsocket_eventfilter_callback = nullptr;
    QLocalSocket_TimerEvent_Callback qlocalsocket_timerevent_callback = nullptr;
    QLocalSocket_ChildEvent_Callback qlocalsocket_childevent_callback = nullptr;
    QLocalSocket_CustomEvent_Callback qlocalsocket_customevent_callback = nullptr;
    QLocalSocket_ConnectNotify_Callback qlocalsocket_connectnotify_callback = nullptr;
    QLocalSocket_DisconnectNotify_Callback qlocalsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QLocalSocket {
        using QLocalSocket::childEvent;
        using QLocalSocket::connectNotify;
        using QLocalSocket::customEvent;
        using QLocalSocket::disconnectNotify;
        using QLocalSocket::readData;
        using QLocalSocket::readLineData;
        using QLocalSocket::skipData;
        using QLocalSocket::timerEvent;
        using QLocalSocket::writeData;
    };

    VirtualQLocalSocket() : QLocalSocket() {};
    VirtualQLocalSocket(QObject* parent) : QLocalSocket(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qlocalsocket_metaobject_callback) {
            QMetaObject* callback_ret = qlocalsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QLocalSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qlocalsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qlocalsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlocalsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qlocalsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QLocalSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qlocalsocket_issequential_callback) {
            bool callback_ret = qlocalsocket_issequential_callback(this);
            return callback_ret;
        }
        return QLocalSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qlocalsocket_bytesavailable_callback) {
            long long callback_ret = qlocalsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qlocalsocket_bytestowrite_callback) {
            long long callback_ret = qlocalsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qlocalsocket_canreadline_callback) {
            bool callback_ret = qlocalsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QLocalSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qlocalsocket_open_callback) {
            int cbval1 = static_cast<int>(openMode);
            bool callback_ret = qlocalsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::open(openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qlocalsocket_close_callback) {
            qlocalsocket_close_callback(this);
            return;
        }
        QLocalSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qlocalsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qlocalsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qlocalsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qlocalsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* param1, qint64 param2) override {
        if (qlocalsocket_readdata_callback) {
            char* cbval1 = param1;
            long long cbval2 = static_cast<long long>(param2);
            long long callback_ret = qlocalsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::readData(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxSize) override {
        if (qlocalsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxSize);
            long long callback_ret = qlocalsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::readLineData(data, maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qlocalsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qlocalsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* param1, qint64 param2) override {
        if (qlocalsocket_writedata_callback) {
            const char* cbval1 = (const char*)param1;
            long long cbval2 = static_cast<long long>(param2);
            long long callback_ret = qlocalsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::writeData(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qlocalsocket_pos_callback) {
            long long callback_ret = qlocalsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qlocalsocket_size_callback) {
            long long callback_ret = qlocalsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QLocalSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qlocalsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qlocalsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qlocalsocket_atend_callback) {
            bool callback_ret = qlocalsocket_atend_callback(this);
            return callback_ret;
        }
        return QLocalSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qlocalsocket_reset_callback) {
            bool callback_ret = qlocalsocket_reset_callback(this);
            return callback_ret;
        }
        return QLocalSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qlocalsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qlocalsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QLocalSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlocalsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qlocalsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QLocalSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlocalsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qlocalsocket_timerevent_callback(this, cbval1);
            return;
        }
        QLocalSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlocalsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qlocalsocket_childevent_callback(this, cbval1);
            return;
        }
        QLocalSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlocalsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qlocalsocket_customevent_callback(this, cbval1);
            return;
        }
        QLocalSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlocalsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlocalsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QLocalSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlocalsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qlocalsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QLocalSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QLocalSocket_SuperReadData(QLocalSocket* self, char* param1, long long param2);
    friend long long QLocalSocket_SuperReadLineData(QLocalSocket* self, char* data, long long maxSize);
    friend long long QLocalSocket_SuperSkipData(QLocalSocket* self, long long maxSize);
    friend long long QLocalSocket_SuperWriteData(QLocalSocket* self, const char* param1, long long param2);
    friend void QLocalSocket_SuperTimerEvent(QLocalSocket* self, QTimerEvent* event);
    friend void QLocalSocket_SuperChildEvent(QLocalSocket* self, QChildEvent* event);
    friend void QLocalSocket_SuperCustomEvent(QLocalSocket* self, QEvent* event);
    friend void QLocalSocket_SuperConnectNotify(QLocalSocket* self, const QMetaMethod* signal);
    friend void QLocalSocket_SuperDisconnectNotify(QLocalSocket* self, const QMetaMethod* signal);
};

#endif
