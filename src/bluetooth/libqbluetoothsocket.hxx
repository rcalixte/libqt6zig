#pragma once
#ifndef BLUETOOTH_LIBQBLUETOOTHSOCKET_HXX
#define BLUETOOTH_LIBQBLUETOOTHSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QBluetoothSocket
class VirtualQBluetoothSocket final : public QBluetoothSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBluetoothSocket_MetaObject_Callback = QMetaObject* (*)(const QBluetoothSocket*);
    using QBluetoothSocket_Metacast_Callback = void* (*)(QBluetoothSocket*, const char*);
    using QBluetoothSocket_Metacall_Callback = int (*)(QBluetoothSocket*, int, int, void**);
    using QBluetoothSocket_Close_Callback = void (*)(QBluetoothSocket*);
    using QBluetoothSocket_IsSequential_Callback = bool (*)(const QBluetoothSocket*);
    using QBluetoothSocket_BytesAvailable_Callback = long long (*)(const QBluetoothSocket*);
    using QBluetoothSocket_BytesToWrite_Callback = long long (*)(const QBluetoothSocket*);
    using QBluetoothSocket_CanReadLine_Callback = bool (*)(const QBluetoothSocket*);
    using QBluetoothSocket_ReadData_Callback = long long (*)(QBluetoothSocket*, char*, long long);
    using QBluetoothSocket_WriteData_Callback = long long (*)(QBluetoothSocket*, const char*, long long);
    using QBluetoothSocket_Open_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_Pos_Callback = long long (*)(const QBluetoothSocket*);
    using QBluetoothSocket_Size_Callback = long long (*)(const QBluetoothSocket*);
    using QBluetoothSocket_Seek_Callback = bool (*)(QBluetoothSocket*, long long);
    using QBluetoothSocket_AtEnd_Callback = bool (*)(const QBluetoothSocket*);
    using QBluetoothSocket_Reset_Callback = bool (*)(QBluetoothSocket*);
    using QBluetoothSocket_WaitForReadyRead_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_WaitForBytesWritten_Callback = bool (*)(QBluetoothSocket*, int);
    using QBluetoothSocket_ReadLineData_Callback = long long (*)(QBluetoothSocket*, char*, long long);
    using QBluetoothSocket_SkipData_Callback = long long (*)(QBluetoothSocket*, long long);
    using QBluetoothSocket_Event_Callback = bool (*)(QBluetoothSocket*, QEvent*);
    using QBluetoothSocket_EventFilter_Callback = bool (*)(QBluetoothSocket*, QObject*, QEvent*);
    using QBluetoothSocket_TimerEvent_Callback = void (*)(QBluetoothSocket*, QTimerEvent*);
    using QBluetoothSocket_ChildEvent_Callback = void (*)(QBluetoothSocket*, QChildEvent*);
    using QBluetoothSocket_CustomEvent_Callback = void (*)(QBluetoothSocket*, QEvent*);
    using QBluetoothSocket_ConnectNotify_Callback = void (*)(QBluetoothSocket*, QMetaMethod*);
    using QBluetoothSocket_DisconnectNotify_Callback = void (*)(QBluetoothSocket*, QMetaMethod*);
    using QBluetoothSocket::doDeviceDiscovery;
    using QBluetoothSocket::isSignalConnected;
    using QBluetoothSocket::receivers;
    using QBluetoothSocket::sender;
    using QBluetoothSocket::senderSignalIndex;
    using QBluetoothSocket::setErrorString;
    using QBluetoothSocket::setOpenMode;
    using QBluetoothSocket::setSocketError;
    using QBluetoothSocket::setSocketState;

    // Instance callback storage
    QBluetoothSocket_MetaObject_Callback qbluetoothsocket_metaobject_callback = nullptr;
    QBluetoothSocket_Metacast_Callback qbluetoothsocket_metacast_callback = nullptr;
    QBluetoothSocket_Metacall_Callback qbluetoothsocket_metacall_callback = nullptr;
    QBluetoothSocket_Close_Callback qbluetoothsocket_close_callback = nullptr;
    QBluetoothSocket_IsSequential_Callback qbluetoothsocket_issequential_callback = nullptr;
    QBluetoothSocket_BytesAvailable_Callback qbluetoothsocket_bytesavailable_callback = nullptr;
    QBluetoothSocket_BytesToWrite_Callback qbluetoothsocket_bytestowrite_callback = nullptr;
    QBluetoothSocket_CanReadLine_Callback qbluetoothsocket_canreadline_callback = nullptr;
    QBluetoothSocket_ReadData_Callback qbluetoothsocket_readdata_callback = nullptr;
    QBluetoothSocket_WriteData_Callback qbluetoothsocket_writedata_callback = nullptr;
    QBluetoothSocket_Open_Callback qbluetoothsocket_open_callback = nullptr;
    QBluetoothSocket_Pos_Callback qbluetoothsocket_pos_callback = nullptr;
    QBluetoothSocket_Size_Callback qbluetoothsocket_size_callback = nullptr;
    QBluetoothSocket_Seek_Callback qbluetoothsocket_seek_callback = nullptr;
    QBluetoothSocket_AtEnd_Callback qbluetoothsocket_atend_callback = nullptr;
    QBluetoothSocket_Reset_Callback qbluetoothsocket_reset_callback = nullptr;
    QBluetoothSocket_WaitForReadyRead_Callback qbluetoothsocket_waitforreadyread_callback = nullptr;
    QBluetoothSocket_WaitForBytesWritten_Callback qbluetoothsocket_waitforbyteswritten_callback = nullptr;
    QBluetoothSocket_ReadLineData_Callback qbluetoothsocket_readlinedata_callback = nullptr;
    QBluetoothSocket_SkipData_Callback qbluetoothsocket_skipdata_callback = nullptr;
    QBluetoothSocket_Event_Callback qbluetoothsocket_event_callback = nullptr;
    QBluetoothSocket_EventFilter_Callback qbluetoothsocket_eventfilter_callback = nullptr;
    QBluetoothSocket_TimerEvent_Callback qbluetoothsocket_timerevent_callback = nullptr;
    QBluetoothSocket_ChildEvent_Callback qbluetoothsocket_childevent_callback = nullptr;
    QBluetoothSocket_CustomEvent_Callback qbluetoothsocket_customevent_callback = nullptr;
    QBluetoothSocket_ConnectNotify_Callback qbluetoothsocket_connectnotify_callback = nullptr;
    QBluetoothSocket_DisconnectNotify_Callback qbluetoothsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QBluetoothSocket {
        using QBluetoothSocket::childEvent;
        using QBluetoothSocket::connectNotify;
        using QBluetoothSocket::customEvent;
        using QBluetoothSocket::disconnectNotify;
        using QBluetoothSocket::readData;
        using QBluetoothSocket::readLineData;
        using QBluetoothSocket::skipData;
        using QBluetoothSocket::timerEvent;
        using QBluetoothSocket::writeData;
    };

    VirtualQBluetoothSocket(QBluetoothServiceInfo::Protocol socketType) : QBluetoothSocket(socketType) {};
    VirtualQBluetoothSocket() : QBluetoothSocket() {};
    VirtualQBluetoothSocket(QBluetoothServiceInfo::Protocol socketType, QObject* parent) : QBluetoothSocket(socketType, parent) {};
    VirtualQBluetoothSocket(QObject* parent) : QBluetoothSocket(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbluetoothsocket_metaobject_callback) {
            QMetaObject* callback_ret = qbluetoothsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QBluetoothSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbluetoothsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbluetoothsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbluetoothsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbluetoothsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBluetoothSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qbluetoothsocket_close_callback) {
            qbluetoothsocket_close_callback(this);
            return;
        }
        QBluetoothSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qbluetoothsocket_issequential_callback) {
            bool callback_ret = qbluetoothsocket_issequential_callback(this);
            return callback_ret;
        }
        return QBluetoothSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qbluetoothsocket_bytesavailable_callback) {
            long long callback_ret = qbluetoothsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qbluetoothsocket_bytestowrite_callback) {
            long long callback_ret = qbluetoothsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qbluetoothsocket_canreadline_callback) {
            bool callback_ret = qbluetoothsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QBluetoothSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxSize) override {
        if (qbluetoothsocket_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxSize);
            long long callback_ret = qbluetoothsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::readData(data, maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 maxSize) override {
        if (qbluetoothsocket_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(maxSize);
            long long callback_ret = qbluetoothsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::writeData(data, maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qbluetoothsocket_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qbluetoothsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qbluetoothsocket_pos_callback) {
            long long callback_ret = qbluetoothsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qbluetoothsocket_size_callback) {
            long long callback_ret = qbluetoothsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qbluetoothsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qbluetoothsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qbluetoothsocket_atend_callback) {
            bool callback_ret = qbluetoothsocket_atend_callback(this);
            return callback_ret;
        }
        return QBluetoothSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qbluetoothsocket_reset_callback) {
            bool callback_ret = qbluetoothsocket_reset_callback(this);
            return callback_ret;
        }
        return QBluetoothSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qbluetoothsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qbluetoothsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qbluetoothsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qbluetoothsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qbluetoothsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qbluetoothsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qbluetoothsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qbluetoothsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QBluetoothSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbluetoothsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbluetoothsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBluetoothSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbluetoothsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbluetoothsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBluetoothSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbluetoothsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbluetoothsocket_timerevent_callback(this, cbval1);
            return;
        }
        QBluetoothSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbluetoothsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbluetoothsocket_childevent_callback(this, cbval1);
            return;
        }
        QBluetoothSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbluetoothsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qbluetoothsocket_customevent_callback(this, cbval1);
            return;
        }
        QBluetoothSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qbluetoothsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qbluetoothsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qbluetoothsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBluetoothSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QBluetoothSocket_SuperReadData(QBluetoothSocket* self, char* data, long long maxSize);
    friend long long QBluetoothSocket_SuperWriteData(QBluetoothSocket* self, const char* data, long long maxSize);
    friend long long QBluetoothSocket_SuperReadLineData(QBluetoothSocket* self, char* data, long long maxlen);
    friend long long QBluetoothSocket_SuperSkipData(QBluetoothSocket* self, long long maxSize);
    friend void QBluetoothSocket_SuperTimerEvent(QBluetoothSocket* self, QTimerEvent* event);
    friend void QBluetoothSocket_SuperChildEvent(QBluetoothSocket* self, QChildEvent* event);
    friend void QBluetoothSocket_SuperCustomEvent(QBluetoothSocket* self, QEvent* event);
    friend void QBluetoothSocket_SuperConnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
    friend void QBluetoothSocket_SuperDisconnectNotify(QBluetoothSocket* self, const QMetaMethod* signal);
};

#endif
