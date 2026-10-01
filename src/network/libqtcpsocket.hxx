#pragma once
#ifndef NETWORK_LIBQTCPSOCKET_HXX
#define NETWORK_LIBQTCPSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QTcpSocket
class VirtualQTcpSocket final : public QTcpSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTcpSocket_MetaObject_Callback = QMetaObject* (*)(const QTcpSocket*);
    using QTcpSocket_Metacast_Callback = void* (*)(QTcpSocket*, const char*);
    using QTcpSocket_Metacall_Callback = int (*)(QTcpSocket*, int, int, void**);
    using QTcpSocket_Resume_Callback = void (*)(QTcpSocket*);
    using QTcpSocket_Bind_Callback = bool (*)(QTcpSocket*, QHostAddress*, uint16_t, int);
    using QTcpSocket_ConnectToHost_Callback = void (*)(QTcpSocket*, const char*, uint16_t, int, int);
    using QTcpSocket_DisconnectFromHost_Callback = void (*)(QTcpSocket*);
    using QTcpSocket_BytesAvailable_Callback = long long (*)(const QTcpSocket*);
    using QTcpSocket_BytesToWrite_Callback = long long (*)(const QTcpSocket*);
    using QTcpSocket_SetReadBufferSize_Callback = void (*)(QTcpSocket*, long long);
    using QTcpSocket_SocketDescriptor_Callback = intptr_t (*)(const QTcpSocket*);
    using QTcpSocket_SetSocketDescriptor_Callback = bool (*)(QTcpSocket*, intptr_t, int, int);
    using QTcpSocket_SetSocketOption_Callback = void (*)(QTcpSocket*, int, QVariant*);
    using QTcpSocket_SocketOption_Callback = QVariant* (*)(QTcpSocket*, int);
    using QTcpSocket_Close_Callback = void (*)(QTcpSocket*);
    using QTcpSocket_IsSequential_Callback = bool (*)(const QTcpSocket*);
    using QTcpSocket_WaitForConnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForReadyRead_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForBytesWritten_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_WaitForDisconnected_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_ReadData_Callback = long long (*)(QTcpSocket*, char*, long long);
    using QTcpSocket_ReadLineData_Callback = long long (*)(QTcpSocket*, char*, long long);
    using QTcpSocket_SkipData_Callback = long long (*)(QTcpSocket*, long long);
    using QTcpSocket_WriteData_Callback = long long (*)(QTcpSocket*, const char*, long long);
    using QTcpSocket_Open_Callback = bool (*)(QTcpSocket*, int);
    using QTcpSocket_Pos_Callback = long long (*)(const QTcpSocket*);
    using QTcpSocket_Size_Callback = long long (*)(const QTcpSocket*);
    using QTcpSocket_Seek_Callback = bool (*)(QTcpSocket*, long long);
    using QTcpSocket_AtEnd_Callback = bool (*)(const QTcpSocket*);
    using QTcpSocket_Reset_Callback = bool (*)(QTcpSocket*);
    using QTcpSocket_CanReadLine_Callback = bool (*)(const QTcpSocket*);
    using QTcpSocket_Event_Callback = bool (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_EventFilter_Callback = bool (*)(QTcpSocket*, QObject*, QEvent*);
    using QTcpSocket_TimerEvent_Callback = void (*)(QTcpSocket*, QTimerEvent*);
    using QTcpSocket_ChildEvent_Callback = void (*)(QTcpSocket*, QChildEvent*);
    using QTcpSocket_CustomEvent_Callback = void (*)(QTcpSocket*, QEvent*);
    using QTcpSocket_ConnectNotify_Callback = void (*)(QTcpSocket*, QMetaMethod*);
    using QTcpSocket_DisconnectNotify_Callback = void (*)(QTcpSocket*, QMetaMethod*);
    using QTcpSocket::isSignalConnected;
    using QTcpSocket::receivers;
    using QTcpSocket::sender;
    using QTcpSocket::senderSignalIndex;
    using QTcpSocket::setErrorString;
    using QTcpSocket::setLocalAddress;
    using QTcpSocket::setLocalPort;
    using QTcpSocket::setOpenMode;
    using QTcpSocket::setPeerAddress;
    using QTcpSocket::setPeerName;
    using QTcpSocket::setPeerPort;
    using QTcpSocket::setSocketError;
    using QTcpSocket::setSocketState;

    // Instance callback storage
    QTcpSocket_MetaObject_Callback qtcpsocket_metaobject_callback = nullptr;
    QTcpSocket_Metacast_Callback qtcpsocket_metacast_callback = nullptr;
    QTcpSocket_Metacall_Callback qtcpsocket_metacall_callback = nullptr;
    QTcpSocket_Resume_Callback qtcpsocket_resume_callback = nullptr;
    QTcpSocket_Bind_Callback qtcpsocket_bind_callback = nullptr;
    QTcpSocket_ConnectToHost_Callback qtcpsocket_connecttohost_callback = nullptr;
    QTcpSocket_DisconnectFromHost_Callback qtcpsocket_disconnectfromhost_callback = nullptr;
    QTcpSocket_BytesAvailable_Callback qtcpsocket_bytesavailable_callback = nullptr;
    QTcpSocket_BytesToWrite_Callback qtcpsocket_bytestowrite_callback = nullptr;
    QTcpSocket_SetReadBufferSize_Callback qtcpsocket_setreadbuffersize_callback = nullptr;
    QTcpSocket_SocketDescriptor_Callback qtcpsocket_socketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketDescriptor_Callback qtcpsocket_setsocketdescriptor_callback = nullptr;
    QTcpSocket_SetSocketOption_Callback qtcpsocket_setsocketoption_callback = nullptr;
    QTcpSocket_SocketOption_Callback qtcpsocket_socketoption_callback = nullptr;
    QTcpSocket_Close_Callback qtcpsocket_close_callback = nullptr;
    QTcpSocket_IsSequential_Callback qtcpsocket_issequential_callback = nullptr;
    QTcpSocket_WaitForConnected_Callback qtcpsocket_waitforconnected_callback = nullptr;
    QTcpSocket_WaitForReadyRead_Callback qtcpsocket_waitforreadyread_callback = nullptr;
    QTcpSocket_WaitForBytesWritten_Callback qtcpsocket_waitforbyteswritten_callback = nullptr;
    QTcpSocket_WaitForDisconnected_Callback qtcpsocket_waitfordisconnected_callback = nullptr;
    QTcpSocket_ReadData_Callback qtcpsocket_readdata_callback = nullptr;
    QTcpSocket_ReadLineData_Callback qtcpsocket_readlinedata_callback = nullptr;
    QTcpSocket_SkipData_Callback qtcpsocket_skipdata_callback = nullptr;
    QTcpSocket_WriteData_Callback qtcpsocket_writedata_callback = nullptr;
    QTcpSocket_Open_Callback qtcpsocket_open_callback = nullptr;
    QTcpSocket_Pos_Callback qtcpsocket_pos_callback = nullptr;
    QTcpSocket_Size_Callback qtcpsocket_size_callback = nullptr;
    QTcpSocket_Seek_Callback qtcpsocket_seek_callback = nullptr;
    QTcpSocket_AtEnd_Callback qtcpsocket_atend_callback = nullptr;
    QTcpSocket_Reset_Callback qtcpsocket_reset_callback = nullptr;
    QTcpSocket_CanReadLine_Callback qtcpsocket_canreadline_callback = nullptr;
    QTcpSocket_Event_Callback qtcpsocket_event_callback = nullptr;
    QTcpSocket_EventFilter_Callback qtcpsocket_eventfilter_callback = nullptr;
    QTcpSocket_TimerEvent_Callback qtcpsocket_timerevent_callback = nullptr;
    QTcpSocket_ChildEvent_Callback qtcpsocket_childevent_callback = nullptr;
    QTcpSocket_CustomEvent_Callback qtcpsocket_customevent_callback = nullptr;
    QTcpSocket_ConnectNotify_Callback qtcpsocket_connectnotify_callback = nullptr;
    QTcpSocket_DisconnectNotify_Callback qtcpsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTcpSocket {
        using QTcpSocket::childEvent;
        using QTcpSocket::connectNotify;
        using QTcpSocket::customEvent;
        using QTcpSocket::disconnectNotify;
        using QTcpSocket::readData;
        using QTcpSocket::readLineData;
        using QTcpSocket::skipData;
        using QTcpSocket::timerEvent;
        using QTcpSocket::writeData;
    };

    VirtualQTcpSocket() : QTcpSocket() {};
    VirtualQTcpSocket(QObject* parent) : QTcpSocket(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtcpsocket_metaobject_callback) {
            QMetaObject* callback_ret = qtcpsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QTcpSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtcpsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtcpsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtcpsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtcpsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTcpSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qtcpsocket_resume_callback) {
            qtcpsocket_resume_callback(this);
            return;
        }
        QTcpSocket::resume();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qtcpsocket_bind_callback) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            bool callback_ret = qtcpsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTcpSocket::bind(address, port, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qtcpsocket_connecttohost_callback) {
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
            qtcpsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(hostName_str);
            return;
        }
        QTcpSocket::connectToHost(hostName, port, mode, protocol);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qtcpsocket_disconnectfromhost_callback) {
            qtcpsocket_disconnectfromhost_callback(this);
            return;
        }
        QTcpSocket::disconnectFromHost();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qtcpsocket_bytesavailable_callback) {
            long long callback_ret = qtcpsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qtcpsocket_bytestowrite_callback) {
            long long callback_ret = qtcpsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qtcpsocket_setreadbuffersize_callback) {
            long long cbval1 = static_cast<long long>(size);
            qtcpsocket_setreadbuffersize_callback(this, cbval1);
            return;
        }
        QTcpSocket::setReadBufferSize(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qtcpsocket_socketdescriptor_callback) {
            intptr_t callback_ret = qtcpsocket_socketdescriptor_callback(this);
            return (qintptr)(callback_ret);
        }
        return QTcpSocket::socketDescriptor();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qtcpsocket_setsocketdescriptor_callback) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);
            bool callback_ret = qtcpsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QTcpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qtcpsocket_setsocketoption_callback) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qtcpsocket_setsocketoption_callback(this, cbval1, cbval2);
            return;
        }
        QTcpSocket::setSocketOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qtcpsocket_socketoption_callback) {
            int cbval1 = static_cast<int>(option);
            QVariant* callback_ret = qtcpsocket_socketoption_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTcpSocket::socketOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qtcpsocket_close_callback) {
            qtcpsocket_close_callback(this);
            return;
        }
        QTcpSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qtcpsocket_issequential_callback) {
            bool callback_ret = qtcpsocket_issequential_callback(this);
            return callback_ret;
        }
        return QTcpSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qtcpsocket_waitforconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtcpsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForConnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qtcpsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtcpsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qtcpsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtcpsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qtcpsocket_waitfordisconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtcpsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::waitForDisconnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qtcpsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qtcpsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qtcpsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qtcpsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qtcpsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qtcpsocket_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qtcpsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qtcpsocket_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qtcpsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qtcpsocket_pos_callback) {
            long long callback_ret = qtcpsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qtcpsocket_size_callback) {
            long long callback_ret = qtcpsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTcpSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qtcpsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qtcpsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qtcpsocket_atend_callback) {
            bool callback_ret = qtcpsocket_atend_callback(this);
            return callback_ret;
        }
        return QTcpSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qtcpsocket_reset_callback) {
            bool callback_ret = qtcpsocket_reset_callback(this);
            return callback_ret;
        }
        return QTcpSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qtcpsocket_canreadline_callback) {
            bool callback_ret = qtcpsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QTcpSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtcpsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtcpsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTcpSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtcpsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtcpsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTcpSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtcpsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtcpsocket_timerevent_callback(this, cbval1);
            return;
        }
        QTcpSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtcpsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtcpsocket_childevent_callback(this, cbval1);
            return;
        }
        QTcpSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtcpsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qtcpsocket_customevent_callback(this, cbval1);
            return;
        }
        QTcpSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtcpsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QTcpSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtcpsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtcpsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTcpSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QTcpSocket_SuperReadData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_SuperReadLineData(QTcpSocket* self, char* data, long long maxlen);
    friend long long QTcpSocket_SuperSkipData(QTcpSocket* self, long long maxSize);
    friend long long QTcpSocket_SuperWriteData(QTcpSocket* self, const char* data, long long len);
    friend void QTcpSocket_SuperTimerEvent(QTcpSocket* self, QTimerEvent* event);
    friend void QTcpSocket_SuperChildEvent(QTcpSocket* self, QChildEvent* event);
    friend void QTcpSocket_SuperCustomEvent(QTcpSocket* self, QEvent* event);
    friend void QTcpSocket_SuperConnectNotify(QTcpSocket* self, const QMetaMethod* signal);
    friend void QTcpSocket_SuperDisconnectNotify(QTcpSocket* self, const QMetaMethod* signal);
};

#endif
