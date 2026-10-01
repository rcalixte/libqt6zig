#pragma once
#ifndef NETWORK_LIBQSCTPSOCKET_HXX
#define NETWORK_LIBQSCTPSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSctpSocket
class VirtualQSctpSocket final : public QSctpSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSctpSocket_MetaObject_Callback = QMetaObject* (*)(const QSctpSocket*);
    using QSctpSocket_Metacast_Callback = void* (*)(QSctpSocket*, const char*);
    using QSctpSocket_Metacall_Callback = int (*)(QSctpSocket*, int, int, void**);
    using QSctpSocket_Close_Callback = void (*)(QSctpSocket*);
    using QSctpSocket_DisconnectFromHost_Callback = void (*)(QSctpSocket*);
    using QSctpSocket_ReadData_Callback = long long (*)(QSctpSocket*, char*, long long);
    using QSctpSocket_ReadLineData_Callback = long long (*)(QSctpSocket*, char*, long long);
    using QSctpSocket_Resume_Callback = void (*)(QSctpSocket*);
    using QSctpSocket_Bind_Callback = bool (*)(QSctpSocket*, QHostAddress*, uint16_t, int);
    using QSctpSocket_ConnectToHost_Callback = void (*)(QSctpSocket*, const char*, uint16_t, int, int);
    using QSctpSocket_BytesAvailable_Callback = long long (*)(const QSctpSocket*);
    using QSctpSocket_BytesToWrite_Callback = long long (*)(const QSctpSocket*);
    using QSctpSocket_SetReadBufferSize_Callback = void (*)(QSctpSocket*, long long);
    using QSctpSocket_SocketDescriptor_Callback = intptr_t (*)(const QSctpSocket*);
    using QSctpSocket_SetSocketDescriptor_Callback = bool (*)(QSctpSocket*, intptr_t, int, int);
    using QSctpSocket_SetSocketOption_Callback = void (*)(QSctpSocket*, int, QVariant*);
    using QSctpSocket_SocketOption_Callback = QVariant* (*)(QSctpSocket*, int);
    using QSctpSocket_IsSequential_Callback = bool (*)(const QSctpSocket*);
    using QSctpSocket_WaitForConnected_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForReadyRead_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForBytesWritten_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_WaitForDisconnected_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_SkipData_Callback = long long (*)(QSctpSocket*, long long);
    using QSctpSocket_WriteData_Callback = long long (*)(QSctpSocket*, const char*, long long);
    using QSctpSocket_Open_Callback = bool (*)(QSctpSocket*, int);
    using QSctpSocket_Pos_Callback = long long (*)(const QSctpSocket*);
    using QSctpSocket_Size_Callback = long long (*)(const QSctpSocket*);
    using QSctpSocket_Seek_Callback = bool (*)(QSctpSocket*, long long);
    using QSctpSocket_AtEnd_Callback = bool (*)(const QSctpSocket*);
    using QSctpSocket_Reset_Callback = bool (*)(QSctpSocket*);
    using QSctpSocket_CanReadLine_Callback = bool (*)(const QSctpSocket*);
    using QSctpSocket_Event_Callback = bool (*)(QSctpSocket*, QEvent*);
    using QSctpSocket_EventFilter_Callback = bool (*)(QSctpSocket*, QObject*, QEvent*);
    using QSctpSocket_TimerEvent_Callback = void (*)(QSctpSocket*, QTimerEvent*);
    using QSctpSocket_ChildEvent_Callback = void (*)(QSctpSocket*, QChildEvent*);
    using QSctpSocket_CustomEvent_Callback = void (*)(QSctpSocket*, QEvent*);
    using QSctpSocket_ConnectNotify_Callback = void (*)(QSctpSocket*, QMetaMethod*);
    using QSctpSocket_DisconnectNotify_Callback = void (*)(QSctpSocket*, QMetaMethod*);
    using QSctpSocket::isSignalConnected;
    using QSctpSocket::receivers;
    using QSctpSocket::sender;
    using QSctpSocket::senderSignalIndex;
    using QSctpSocket::setErrorString;
    using QSctpSocket::setLocalAddress;
    using QSctpSocket::setLocalPort;
    using QSctpSocket::setOpenMode;
    using QSctpSocket::setPeerAddress;
    using QSctpSocket::setPeerName;
    using QSctpSocket::setPeerPort;
    using QSctpSocket::setSocketError;
    using QSctpSocket::setSocketState;

    // Instance callback storage
    QSctpSocket_MetaObject_Callback qsctpsocket_metaobject_callback = nullptr;
    QSctpSocket_Metacast_Callback qsctpsocket_metacast_callback = nullptr;
    QSctpSocket_Metacall_Callback qsctpsocket_metacall_callback = nullptr;
    QSctpSocket_Close_Callback qsctpsocket_close_callback = nullptr;
    QSctpSocket_DisconnectFromHost_Callback qsctpsocket_disconnectfromhost_callback = nullptr;
    QSctpSocket_ReadData_Callback qsctpsocket_readdata_callback = nullptr;
    QSctpSocket_ReadLineData_Callback qsctpsocket_readlinedata_callback = nullptr;
    QSctpSocket_Resume_Callback qsctpsocket_resume_callback = nullptr;
    QSctpSocket_Bind_Callback qsctpsocket_bind_callback = nullptr;
    QSctpSocket_ConnectToHost_Callback qsctpsocket_connecttohost_callback = nullptr;
    QSctpSocket_BytesAvailable_Callback qsctpsocket_bytesavailable_callback = nullptr;
    QSctpSocket_BytesToWrite_Callback qsctpsocket_bytestowrite_callback = nullptr;
    QSctpSocket_SetReadBufferSize_Callback qsctpsocket_setreadbuffersize_callback = nullptr;
    QSctpSocket_SocketDescriptor_Callback qsctpsocket_socketdescriptor_callback = nullptr;
    QSctpSocket_SetSocketDescriptor_Callback qsctpsocket_setsocketdescriptor_callback = nullptr;
    QSctpSocket_SetSocketOption_Callback qsctpsocket_setsocketoption_callback = nullptr;
    QSctpSocket_SocketOption_Callback qsctpsocket_socketoption_callback = nullptr;
    QSctpSocket_IsSequential_Callback qsctpsocket_issequential_callback = nullptr;
    QSctpSocket_WaitForConnected_Callback qsctpsocket_waitforconnected_callback = nullptr;
    QSctpSocket_WaitForReadyRead_Callback qsctpsocket_waitforreadyread_callback = nullptr;
    QSctpSocket_WaitForBytesWritten_Callback qsctpsocket_waitforbyteswritten_callback = nullptr;
    QSctpSocket_WaitForDisconnected_Callback qsctpsocket_waitfordisconnected_callback = nullptr;
    QSctpSocket_SkipData_Callback qsctpsocket_skipdata_callback = nullptr;
    QSctpSocket_WriteData_Callback qsctpsocket_writedata_callback = nullptr;
    QSctpSocket_Open_Callback qsctpsocket_open_callback = nullptr;
    QSctpSocket_Pos_Callback qsctpsocket_pos_callback = nullptr;
    QSctpSocket_Size_Callback qsctpsocket_size_callback = nullptr;
    QSctpSocket_Seek_Callback qsctpsocket_seek_callback = nullptr;
    QSctpSocket_AtEnd_Callback qsctpsocket_atend_callback = nullptr;
    QSctpSocket_Reset_Callback qsctpsocket_reset_callback = nullptr;
    QSctpSocket_CanReadLine_Callback qsctpsocket_canreadline_callback = nullptr;
    QSctpSocket_Event_Callback qsctpsocket_event_callback = nullptr;
    QSctpSocket_EventFilter_Callback qsctpsocket_eventfilter_callback = nullptr;
    QSctpSocket_TimerEvent_Callback qsctpsocket_timerevent_callback = nullptr;
    QSctpSocket_ChildEvent_Callback qsctpsocket_childevent_callback = nullptr;
    QSctpSocket_CustomEvent_Callback qsctpsocket_customevent_callback = nullptr;
    QSctpSocket_ConnectNotify_Callback qsctpsocket_connectnotify_callback = nullptr;
    QSctpSocket_DisconnectNotify_Callback qsctpsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSctpSocket {
        using QSctpSocket::childEvent;
        using QSctpSocket::connectNotify;
        using QSctpSocket::customEvent;
        using QSctpSocket::disconnectNotify;
        using QSctpSocket::readData;
        using QSctpSocket::readLineData;
        using QSctpSocket::skipData;
        using QSctpSocket::timerEvent;
        using QSctpSocket::writeData;
    };

    VirtualQSctpSocket() : QSctpSocket() {};
    VirtualQSctpSocket(QObject* parent) : QSctpSocket(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsctpsocket_metaobject_callback) {
            QMetaObject* callback_ret = qsctpsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QSctpSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsctpsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsctpsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsctpsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsctpsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSctpSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsctpsocket_close_callback) {
            qsctpsocket_close_callback(this);
            return;
        }
        QSctpSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qsctpsocket_disconnectfromhost_callback) {
            qsctpsocket_disconnectfromhost_callback(this);
            return;
        }
        QSctpSocket::disconnectFromHost();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsctpsocket_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsctpsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsctpsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsctpsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qsctpsocket_resume_callback) {
            qsctpsocket_resume_callback(this);
            return;
        }
        QSctpSocket::resume();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qsctpsocket_bind_callback) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            bool callback_ret = qsctpsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSctpSocket::bind(address, port, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qsctpsocket_connecttohost_callback) {
            const auto hostName_ret = hostName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray hostName_b = hostName_ret.toUtf8();
            auto hostName_str_len = hostName_b.length();
            const char* hostName_str = static_cast<const char*>(malloc(hostName_str_len + 1));
            memcpy((void*)hostName_str, hostName_b.data(), hostName_str_len);
            ((char*)hostName_str)[hostName_str_len] = '\0';
            const char* cbval1 = hostName_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            int cbval4 = static_cast<int>(protocol);
            qsctpsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(hostName_str);
            return;
        }
        QSctpSocket::connectToHost(hostName, port, mode, protocol);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsctpsocket_bytesavailable_callback) {
            long long callback_ret = qsctpsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsctpsocket_bytestowrite_callback) {
            long long callback_ret = qsctpsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qsctpsocket_setreadbuffersize_callback) {
            long long cbval1 = static_cast<long long>(size);
            qsctpsocket_setreadbuffersize_callback(this, cbval1);
            return;
        }
        QSctpSocket::setReadBufferSize(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qsctpsocket_socketdescriptor_callback) {
            intptr_t callback_ret = qsctpsocket_socketdescriptor_callback(this);
            return (qintptr)(callback_ret);
        }
        return QSctpSocket::socketDescriptor();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qsctpsocket_setsocketdescriptor_callback) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);
            bool callback_ret = qsctpsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qsctpsocket_setsocketoption_callback) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qsctpsocket_setsocketoption_callback(this, cbval1, cbval2);
            return;
        }
        QSctpSocket::setSocketOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qsctpsocket_socketoption_callback) {
            int cbval1 = static_cast<int>(option);
            QVariant* callback_ret = qsctpsocket_socketoption_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSctpSocket::socketOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsctpsocket_issequential_callback) {
            bool callback_ret = qsctpsocket_issequential_callback(this);
            return callback_ret;
        }
        return QSctpSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qsctpsocket_waitforconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsctpsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::waitForConnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsctpsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsctpsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsctpsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsctpsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qsctpsocket_waitfordisconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsctpsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::waitForDisconnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsctpsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qsctpsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qsctpsocket_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qsctpsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qsctpsocket_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qsctpsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsctpsocket_pos_callback) {
            long long callback_ret = qsctpsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsctpsocket_size_callback) {
            long long callback_ret = qsctpsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSctpSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qsctpsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qsctpsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsctpsocket_atend_callback) {
            bool callback_ret = qsctpsocket_atend_callback(this);
            return callback_ret;
        }
        return QSctpSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsctpsocket_reset_callback) {
            bool callback_ret = qsctpsocket_reset_callback(this);
            return callback_ret;
        }
        return QSctpSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsctpsocket_canreadline_callback) {
            bool callback_ret = qsctpsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QSctpSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsctpsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsctpsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSctpSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsctpsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsctpsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSctpSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsctpsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsctpsocket_timerevent_callback(this, cbval1);
            return;
        }
        QSctpSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsctpsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsctpsocket_childevent_callback(this, cbval1);
            return;
        }
        QSctpSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsctpsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qsctpsocket_customevent_callback(this, cbval1);
            return;
        }
        QSctpSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsctpsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsctpsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QSctpSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsctpsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsctpsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSctpSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QSctpSocket_SuperReadData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_SuperReadLineData(QSctpSocket* self, char* data, long long maxlen);
    friend long long QSctpSocket_SuperSkipData(QSctpSocket* self, long long maxSize);
    friend long long QSctpSocket_SuperWriteData(QSctpSocket* self, const char* data, long long len);
    friend void QSctpSocket_SuperTimerEvent(QSctpSocket* self, QTimerEvent* event);
    friend void QSctpSocket_SuperChildEvent(QSctpSocket* self, QChildEvent* event);
    friend void QSctpSocket_SuperCustomEvent(QSctpSocket* self, QEvent* event);
    friend void QSctpSocket_SuperConnectNotify(QSctpSocket* self, const QMetaMethod* signal);
    friend void QSctpSocket_SuperDisconnectNotify(QSctpSocket* self, const QMetaMethod* signal);
};

#endif
