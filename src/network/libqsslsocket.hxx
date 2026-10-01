#pragma once
#ifndef NETWORK_LIBQSSLSOCKET_HXX
#define NETWORK_LIBQSSLSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QSslSocket
class VirtualQSslSocket final : public QSslSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSslSocket_MetaObject_Callback = QMetaObject* (*)(const QSslSocket*);
    using QSslSocket_Metacast_Callback = void* (*)(QSslSocket*, const char*);
    using QSslSocket_Metacall_Callback = int (*)(QSslSocket*, int, int, void**);
    using QSslSocket_Resume_Callback = void (*)(QSslSocket*);
    using QSslSocket_SetSocketDescriptor_Callback = bool (*)(QSslSocket*, intptr_t, int, int);
    using QSslSocket_ConnectToHost_Callback = void (*)(QSslSocket*, const char*, uint16_t, int, int);
    using QSslSocket_DisconnectFromHost_Callback = void (*)(QSslSocket*);
    using QSslSocket_SetSocketOption_Callback = void (*)(QSslSocket*, int, QVariant*);
    using QSslSocket_SocketOption_Callback = QVariant* (*)(QSslSocket*, int);
    using QSslSocket_BytesAvailable_Callback = long long (*)(const QSslSocket*);
    using QSslSocket_BytesToWrite_Callback = long long (*)(const QSslSocket*);
    using QSslSocket_CanReadLine_Callback = bool (*)(const QSslSocket*);
    using QSslSocket_Close_Callback = void (*)(QSslSocket*);
    using QSslSocket_AtEnd_Callback = bool (*)(const QSslSocket*);
    using QSslSocket_SetReadBufferSize_Callback = void (*)(QSslSocket*, long long);
    using QSslSocket_WaitForConnected_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForReadyRead_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForBytesWritten_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_WaitForDisconnected_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_ReadData_Callback = long long (*)(QSslSocket*, char*, long long);
    using QSslSocket_SkipData_Callback = long long (*)(QSslSocket*, long long);
    using QSslSocket_WriteData_Callback = long long (*)(QSslSocket*, const char*, long long);
    using QSslSocket_Bind_Callback = bool (*)(QSslSocket*, QHostAddress*, uint16_t, int);
    using QSslSocket_SocketDescriptor_Callback = intptr_t (*)(const QSslSocket*);
    using QSslSocket_IsSequential_Callback = bool (*)(const QSslSocket*);
    using QSslSocket_ReadLineData_Callback = long long (*)(QSslSocket*, char*, long long);
    using QSslSocket_Open_Callback = bool (*)(QSslSocket*, int);
    using QSslSocket_Pos_Callback = long long (*)(const QSslSocket*);
    using QSslSocket_Size_Callback = long long (*)(const QSslSocket*);
    using QSslSocket_Seek_Callback = bool (*)(QSslSocket*, long long);
    using QSslSocket_Reset_Callback = bool (*)(QSslSocket*);
    using QSslSocket_Event_Callback = bool (*)(QSslSocket*, QEvent*);
    using QSslSocket_EventFilter_Callback = bool (*)(QSslSocket*, QObject*, QEvent*);
    using QSslSocket_TimerEvent_Callback = void (*)(QSslSocket*, QTimerEvent*);
    using QSslSocket_ChildEvent_Callback = void (*)(QSslSocket*, QChildEvent*);
    using QSslSocket_CustomEvent_Callback = void (*)(QSslSocket*, QEvent*);
    using QSslSocket_ConnectNotify_Callback = void (*)(QSslSocket*, QMetaMethod*);
    using QSslSocket_DisconnectNotify_Callback = void (*)(QSslSocket*, QMetaMethod*);
    using QSslSocket::isSignalConnected;
    using QSslSocket::receivers;
    using QSslSocket::sender;
    using QSslSocket::senderSignalIndex;
    using QSslSocket::setErrorString;
    using QSslSocket::setLocalAddress;
    using QSslSocket::setLocalPort;
    using QSslSocket::setOpenMode;
    using QSslSocket::setPeerAddress;
    using QSslSocket::setPeerName;
    using QSslSocket::setPeerPort;
    using QSslSocket::setSocketError;
    using QSslSocket::setSocketState;

    // Instance callback storage
    QSslSocket_MetaObject_Callback qsslsocket_metaobject_callback = nullptr;
    QSslSocket_Metacast_Callback qsslsocket_metacast_callback = nullptr;
    QSslSocket_Metacall_Callback qsslsocket_metacall_callback = nullptr;
    QSslSocket_Resume_Callback qsslsocket_resume_callback = nullptr;
    QSslSocket_SetSocketDescriptor_Callback qsslsocket_setsocketdescriptor_callback = nullptr;
    QSslSocket_ConnectToHost_Callback qsslsocket_connecttohost_callback = nullptr;
    QSslSocket_DisconnectFromHost_Callback qsslsocket_disconnectfromhost_callback = nullptr;
    QSslSocket_SetSocketOption_Callback qsslsocket_setsocketoption_callback = nullptr;
    QSslSocket_SocketOption_Callback qsslsocket_socketoption_callback = nullptr;
    QSslSocket_BytesAvailable_Callback qsslsocket_bytesavailable_callback = nullptr;
    QSslSocket_BytesToWrite_Callback qsslsocket_bytestowrite_callback = nullptr;
    QSslSocket_CanReadLine_Callback qsslsocket_canreadline_callback = nullptr;
    QSslSocket_Close_Callback qsslsocket_close_callback = nullptr;
    QSslSocket_AtEnd_Callback qsslsocket_atend_callback = nullptr;
    QSslSocket_SetReadBufferSize_Callback qsslsocket_setreadbuffersize_callback = nullptr;
    QSslSocket_WaitForConnected_Callback qsslsocket_waitforconnected_callback = nullptr;
    QSslSocket_WaitForReadyRead_Callback qsslsocket_waitforreadyread_callback = nullptr;
    QSslSocket_WaitForBytesWritten_Callback qsslsocket_waitforbyteswritten_callback = nullptr;
    QSslSocket_WaitForDisconnected_Callback qsslsocket_waitfordisconnected_callback = nullptr;
    QSslSocket_ReadData_Callback qsslsocket_readdata_callback = nullptr;
    QSslSocket_SkipData_Callback qsslsocket_skipdata_callback = nullptr;
    QSslSocket_WriteData_Callback qsslsocket_writedata_callback = nullptr;
    QSslSocket_Bind_Callback qsslsocket_bind_callback = nullptr;
    QSslSocket_SocketDescriptor_Callback qsslsocket_socketdescriptor_callback = nullptr;
    QSslSocket_IsSequential_Callback qsslsocket_issequential_callback = nullptr;
    QSslSocket_ReadLineData_Callback qsslsocket_readlinedata_callback = nullptr;
    QSslSocket_Open_Callback qsslsocket_open_callback = nullptr;
    QSslSocket_Pos_Callback qsslsocket_pos_callback = nullptr;
    QSslSocket_Size_Callback qsslsocket_size_callback = nullptr;
    QSslSocket_Seek_Callback qsslsocket_seek_callback = nullptr;
    QSslSocket_Reset_Callback qsslsocket_reset_callback = nullptr;
    QSslSocket_Event_Callback qsslsocket_event_callback = nullptr;
    QSslSocket_EventFilter_Callback qsslsocket_eventfilter_callback = nullptr;
    QSslSocket_TimerEvent_Callback qsslsocket_timerevent_callback = nullptr;
    QSslSocket_ChildEvent_Callback qsslsocket_childevent_callback = nullptr;
    QSslSocket_CustomEvent_Callback qsslsocket_customevent_callback = nullptr;
    QSslSocket_ConnectNotify_Callback qsslsocket_connectnotify_callback = nullptr;
    QSslSocket_DisconnectNotify_Callback qsslsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSslSocket {
        using QSslSocket::childEvent;
        using QSslSocket::connectNotify;
        using QSslSocket::customEvent;
        using QSslSocket::disconnectNotify;
        using QSslSocket::readData;
        using QSslSocket::readLineData;
        using QSslSocket::skipData;
        using QSslSocket::timerEvent;
        using QSslSocket::writeData;
    };

    VirtualQSslSocket() : QSslSocket() {};
    VirtualQSslSocket(QObject* parent) : QSslSocket(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsslsocket_metaobject_callback) {
            QMetaObject* callback_ret = qsslsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QSslSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsslsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsslsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsslsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsslsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSslSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qsslsocket_resume_callback) {
            qsslsocket_resume_callback(this);
            return;
        }
        QSslSocket::resume();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qsslsocket_setsocketdescriptor_callback) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);
            bool callback_ret = qsslsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> openMode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qsslsocket_connecttohost_callback) {
            const auto hostName_ret = hostName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray hostName_b = hostName_ret.toUtf8();
            auto hostName_str_len = hostName_b.length();
            const char* hostName_str = static_cast<const char*>(malloc(hostName_str_len + 1));
            memcpy((void*)hostName_str, hostName_b.data(), hostName_str_len);
            ((char*)hostName_str)[hostName_str_len] = '\0';
            const char* cbval1 = hostName_str;
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(openMode);
            int cbval4 = static_cast<int>(protocol);
            qsslsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(hostName_str);
            return;
        }
        QSslSocket::connectToHost(hostName, port, openMode, protocol);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qsslsocket_disconnectfromhost_callback) {
            qsslsocket_disconnectfromhost_callback(this);
            return;
        }
        QSslSocket::disconnectFromHost();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qsslsocket_setsocketoption_callback) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qsslsocket_setsocketoption_callback(this, cbval1, cbval2);
            return;
        }
        QSslSocket::setSocketOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qsslsocket_socketoption_callback) {
            int cbval1 = static_cast<int>(option);
            QVariant* callback_ret = qsslsocket_socketoption_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QSslSocket::socketOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsslsocket_bytesavailable_callback) {
            long long callback_ret = qsslsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsslsocket_bytestowrite_callback) {
            long long callback_ret = qsslsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsslsocket_canreadline_callback) {
            bool callback_ret = qsslsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QSslSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qsslsocket_close_callback) {
            qsslsocket_close_callback(this);
            return;
        }
        QSslSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsslsocket_atend_callback) {
            bool callback_ret = qsslsocket_atend_callback(this);
            return callback_ret;
        }
        return QSslSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qsslsocket_setreadbuffersize_callback) {
            long long cbval1 = static_cast<long long>(size);
            qsslsocket_setreadbuffersize_callback(this, cbval1);
            return;
        }
        QSslSocket::setReadBufferSize(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qsslsocket_waitforconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsslsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::waitForConnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsslsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsslsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsslsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsslsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qsslsocket_waitfordisconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsslsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::waitForDisconnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsslsocket_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsslsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsslsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qsslsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qsslsocket_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qsslsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qsslsocket_bind_callback) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            bool callback_ret = qsslsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QSslSocket::bind(address, port, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qsslsocket_socketdescriptor_callback) {
            intptr_t callback_ret = qsslsocket_socketdescriptor_callback(this);
            return (qintptr)(callback_ret);
        }
        return QSslSocket::socketDescriptor();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsslsocket_issequential_callback) {
            bool callback_ret = qsslsocket_issequential_callback(this);
            return callback_ret;
        }
        return QSslSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsslsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsslsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qsslsocket_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qsslsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsslsocket_pos_callback) {
            long long callback_ret = qsslsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsslsocket_size_callback) {
            long long callback_ret = qsslsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSslSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qsslsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qsslsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsslsocket_reset_callback) {
            bool callback_ret = qsslsocket_reset_callback(this);
            return callback_ret;
        }
        return QSslSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsslsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsslsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSslSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsslsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsslsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSslSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsslsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsslsocket_timerevent_callback(this, cbval1);
            return;
        }
        QSslSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsslsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsslsocket_childevent_callback(this, cbval1);
            return;
        }
        QSslSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsslsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qsslsocket_customevent_callback(this, cbval1);
            return;
        }
        QSslSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsslsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsslsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QSslSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsslsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsslsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSslSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QSslSocket_SuperReadData(QSslSocket* self, char* data, long long maxlen);
    friend long long QSslSocket_SuperSkipData(QSslSocket* self, long long maxSize);
    friend long long QSslSocket_SuperWriteData(QSslSocket* self, const char* data, long long len);
    friend long long QSslSocket_SuperReadLineData(QSslSocket* self, char* data, long long maxlen);
    friend void QSslSocket_SuperTimerEvent(QSslSocket* self, QTimerEvent* event);
    friend void QSslSocket_SuperChildEvent(QSslSocket* self, QChildEvent* event);
    friend void QSslSocket_SuperCustomEvent(QSslSocket* self, QEvent* event);
    friend void QSslSocket_SuperConnectNotify(QSslSocket* self, const QMetaMethod* signal);
    friend void QSslSocket_SuperDisconnectNotify(QSslSocket* self, const QMetaMethod* signal);
};

#endif
