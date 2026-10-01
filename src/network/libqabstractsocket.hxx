#pragma once
#ifndef NETWORK_LIBQABSTRACTSOCKET_HXX
#define NETWORK_LIBQABSTRACTSOCKET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractSocket
class VirtualQAbstractSocket final : public QAbstractSocket {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractSocket_MetaObject_Callback = QMetaObject* (*)(const QAbstractSocket*);
    using QAbstractSocket_Metacast_Callback = void* (*)(QAbstractSocket*, const char*);
    using QAbstractSocket_Metacall_Callback = int (*)(QAbstractSocket*, int, int, void**);
    using QAbstractSocket_Resume_Callback = void (*)(QAbstractSocket*);
    using QAbstractSocket_Bind_Callback = bool (*)(QAbstractSocket*, QHostAddress*, uint16_t, int);
    using QAbstractSocket_ConnectToHost_Callback = void (*)(QAbstractSocket*, const char*, uint16_t, int, int);
    using QAbstractSocket_DisconnectFromHost_Callback = void (*)(QAbstractSocket*);
    using QAbstractSocket_BytesAvailable_Callback = long long (*)(const QAbstractSocket*);
    using QAbstractSocket_BytesToWrite_Callback = long long (*)(const QAbstractSocket*);
    using QAbstractSocket_SetReadBufferSize_Callback = void (*)(QAbstractSocket*, long long);
    using QAbstractSocket_SocketDescriptor_Callback = intptr_t (*)(const QAbstractSocket*);
    using QAbstractSocket_SetSocketDescriptor_Callback = bool (*)(QAbstractSocket*, intptr_t, int, int);
    using QAbstractSocket_SetSocketOption_Callback = void (*)(QAbstractSocket*, int, QVariant*);
    using QAbstractSocket_SocketOption_Callback = QVariant* (*)(QAbstractSocket*, int);
    using QAbstractSocket_Close_Callback = void (*)(QAbstractSocket*);
    using QAbstractSocket_IsSequential_Callback = bool (*)(const QAbstractSocket*);
    using QAbstractSocket_WaitForConnected_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForReadyRead_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForBytesWritten_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_WaitForDisconnected_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_ReadData_Callback = long long (*)(QAbstractSocket*, char*, long long);
    using QAbstractSocket_ReadLineData_Callback = long long (*)(QAbstractSocket*, char*, long long);
    using QAbstractSocket_SkipData_Callback = long long (*)(QAbstractSocket*, long long);
    using QAbstractSocket_WriteData_Callback = long long (*)(QAbstractSocket*, const char*, long long);
    using QAbstractSocket_Open_Callback = bool (*)(QAbstractSocket*, int);
    using QAbstractSocket_Pos_Callback = long long (*)(const QAbstractSocket*);
    using QAbstractSocket_Size_Callback = long long (*)(const QAbstractSocket*);
    using QAbstractSocket_Seek_Callback = bool (*)(QAbstractSocket*, long long);
    using QAbstractSocket_AtEnd_Callback = bool (*)(const QAbstractSocket*);
    using QAbstractSocket_Reset_Callback = bool (*)(QAbstractSocket*);
    using QAbstractSocket_CanReadLine_Callback = bool (*)(const QAbstractSocket*);
    using QAbstractSocket_Event_Callback = bool (*)(QAbstractSocket*, QEvent*);
    using QAbstractSocket_EventFilter_Callback = bool (*)(QAbstractSocket*, QObject*, QEvent*);
    using QAbstractSocket_TimerEvent_Callback = void (*)(QAbstractSocket*, QTimerEvent*);
    using QAbstractSocket_ChildEvent_Callback = void (*)(QAbstractSocket*, QChildEvent*);
    using QAbstractSocket_CustomEvent_Callback = void (*)(QAbstractSocket*, QEvent*);
    using QAbstractSocket_ConnectNotify_Callback = void (*)(QAbstractSocket*, QMetaMethod*);
    using QAbstractSocket_DisconnectNotify_Callback = void (*)(QAbstractSocket*, QMetaMethod*);
    using QAbstractSocket::isSignalConnected;
    using QAbstractSocket::receivers;
    using QAbstractSocket::sender;
    using QAbstractSocket::senderSignalIndex;
    using QAbstractSocket::setErrorString;
    using QAbstractSocket::setLocalAddress;
    using QAbstractSocket::setLocalPort;
    using QAbstractSocket::setOpenMode;
    using QAbstractSocket::setPeerAddress;
    using QAbstractSocket::setPeerName;
    using QAbstractSocket::setPeerPort;
    using QAbstractSocket::setSocketError;
    using QAbstractSocket::setSocketState;

    // Instance callback storage
    QAbstractSocket_MetaObject_Callback qabstractsocket_metaobject_callback = nullptr;
    QAbstractSocket_Metacast_Callback qabstractsocket_metacast_callback = nullptr;
    QAbstractSocket_Metacall_Callback qabstractsocket_metacall_callback = nullptr;
    QAbstractSocket_Resume_Callback qabstractsocket_resume_callback = nullptr;
    QAbstractSocket_Bind_Callback qabstractsocket_bind_callback = nullptr;
    QAbstractSocket_ConnectToHost_Callback qabstractsocket_connecttohost_callback = nullptr;
    QAbstractSocket_DisconnectFromHost_Callback qabstractsocket_disconnectfromhost_callback = nullptr;
    QAbstractSocket_BytesAvailable_Callback qabstractsocket_bytesavailable_callback = nullptr;
    QAbstractSocket_BytesToWrite_Callback qabstractsocket_bytestowrite_callback = nullptr;
    QAbstractSocket_SetReadBufferSize_Callback qabstractsocket_setreadbuffersize_callback = nullptr;
    QAbstractSocket_SocketDescriptor_Callback qabstractsocket_socketdescriptor_callback = nullptr;
    QAbstractSocket_SetSocketDescriptor_Callback qabstractsocket_setsocketdescriptor_callback = nullptr;
    QAbstractSocket_SetSocketOption_Callback qabstractsocket_setsocketoption_callback = nullptr;
    QAbstractSocket_SocketOption_Callback qabstractsocket_socketoption_callback = nullptr;
    QAbstractSocket_Close_Callback qabstractsocket_close_callback = nullptr;
    QAbstractSocket_IsSequential_Callback qabstractsocket_issequential_callback = nullptr;
    QAbstractSocket_WaitForConnected_Callback qabstractsocket_waitforconnected_callback = nullptr;
    QAbstractSocket_WaitForReadyRead_Callback qabstractsocket_waitforreadyread_callback = nullptr;
    QAbstractSocket_WaitForBytesWritten_Callback qabstractsocket_waitforbyteswritten_callback = nullptr;
    QAbstractSocket_WaitForDisconnected_Callback qabstractsocket_waitfordisconnected_callback = nullptr;
    QAbstractSocket_ReadData_Callback qabstractsocket_readdata_callback = nullptr;
    QAbstractSocket_ReadLineData_Callback qabstractsocket_readlinedata_callback = nullptr;
    QAbstractSocket_SkipData_Callback qabstractsocket_skipdata_callback = nullptr;
    QAbstractSocket_WriteData_Callback qabstractsocket_writedata_callback = nullptr;
    QAbstractSocket_Open_Callback qabstractsocket_open_callback = nullptr;
    QAbstractSocket_Pos_Callback qabstractsocket_pos_callback = nullptr;
    QAbstractSocket_Size_Callback qabstractsocket_size_callback = nullptr;
    QAbstractSocket_Seek_Callback qabstractsocket_seek_callback = nullptr;
    QAbstractSocket_AtEnd_Callback qabstractsocket_atend_callback = nullptr;
    QAbstractSocket_Reset_Callback qabstractsocket_reset_callback = nullptr;
    QAbstractSocket_CanReadLine_Callback qabstractsocket_canreadline_callback = nullptr;
    QAbstractSocket_Event_Callback qabstractsocket_event_callback = nullptr;
    QAbstractSocket_EventFilter_Callback qabstractsocket_eventfilter_callback = nullptr;
    QAbstractSocket_TimerEvent_Callback qabstractsocket_timerevent_callback = nullptr;
    QAbstractSocket_ChildEvent_Callback qabstractsocket_childevent_callback = nullptr;
    QAbstractSocket_CustomEvent_Callback qabstractsocket_customevent_callback = nullptr;
    QAbstractSocket_ConnectNotify_Callback qabstractsocket_connectnotify_callback = nullptr;
    QAbstractSocket_DisconnectNotify_Callback qabstractsocket_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QAbstractSocket {
        using QAbstractSocket::childEvent;
        using QAbstractSocket::connectNotify;
        using QAbstractSocket::customEvent;
        using QAbstractSocket::disconnectNotify;
        using QAbstractSocket::readData;
        using QAbstractSocket::readLineData;
        using QAbstractSocket::skipData;
        using QAbstractSocket::timerEvent;
        using QAbstractSocket::writeData;
    };

    VirtualQAbstractSocket(QAbstractSocket::SocketType socketType, QObject* parent) : QAbstractSocket(socketType, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractsocket_metaobject_callback) {
            QMetaObject* callback_ret = qabstractsocket_metaobject_callback(this);
            return callback_ret;
        }
        return QAbstractSocket::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractsocket_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qabstractsocket_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractsocket_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qabstractsocket_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractSocket::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resume() override {
        if (qabstractsocket_resume_callback) {
            qabstractsocket_resume_callback(this);
            return;
        }
        QAbstractSocket::resume();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool bind(const QHostAddress& address, quint16 port, QFlags<QAbstractSocket::BindFlag> mode) override {
        if (qabstractsocket_bind_callback) {
            const QHostAddress& address_ret = address;
            // Cast returned reference into pointer
            QHostAddress* cbval1 = const_cast<QHostAddress*>(&address_ret);
            uint16_t cbval2 = static_cast<uint16_t>(port);
            int cbval3 = static_cast<int>(mode);
            bool callback_ret = qabstractsocket_bind_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractSocket::bind(address, port, mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectToHost(const QString& hostName, quint16 port, QFlags<QIODeviceBase::OpenModeFlag> mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
        if (qabstractsocket_connecttohost_callback) {
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
            qabstractsocket_connecttohost_callback(this, cbval1, cbval2, cbval3, cbval4);
            libqt_free(hostName_str);
            return;
        }
        QAbstractSocket::connectToHost(hostName, port, mode, protocol);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectFromHost() override {
        if (qabstractsocket_disconnectfromhost_callback) {
            qabstractsocket_disconnectfromhost_callback(this);
            return;
        }
        QAbstractSocket::disconnectFromHost();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qabstractsocket_bytesavailable_callback) {
            long long callback_ret = qabstractsocket_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qabstractsocket_bytestowrite_callback) {
            long long callback_ret = qabstractsocket_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setReadBufferSize(qint64 size) override {
        if (qabstractsocket_setreadbuffersize_callback) {
            long long cbval1 = static_cast<long long>(size);
            qabstractsocket_setreadbuffersize_callback(this, cbval1);
            return;
        }
        QAbstractSocket::setReadBufferSize(size);
    }

    // Virtual method for C ABI access and custom callback
    virtual qintptr socketDescriptor() const override {
        if (qabstractsocket_socketdescriptor_callback) {
            intptr_t callback_ret = qabstractsocket_socketdescriptor_callback(this);
            return (qintptr)(callback_ret);
        }
        return QAbstractSocket::socketDescriptor();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qabstractsocket_setsocketdescriptor_callback) {
            qintptr socketDescriptor_ret = socketDescriptor;
            intptr_t cbval1 = (intptr_t)(socketDescriptor_ret);
            int cbval2 = static_cast<int>(state);
            int cbval3 = static_cast<int>(openMode);
            bool callback_ret = qabstractsocket_setsocketdescriptor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
        if (qabstractsocket_setsocketoption_callback) {
            int cbval1 = static_cast<int>(option);
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval2 = const_cast<QVariant*>(&value_ret);
            qabstractsocket_setsocketoption_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractSocket::setSocketOption(option, value);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
        if (qabstractsocket_socketoption_callback) {
            int cbval1 = static_cast<int>(option);
            QVariant* callback_ret = qabstractsocket_socketoption_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAbstractSocket::socketOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qabstractsocket_close_callback) {
            qabstractsocket_close_callback(this);
            return;
        }
        QAbstractSocket::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qabstractsocket_issequential_callback) {
            bool callback_ret = qabstractsocket_issequential_callback(this);
            return callback_ret;
        }
        return QAbstractSocket::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForConnected(int msecs) override {
        if (qabstractsocket_waitforconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qabstractsocket_waitforconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::waitForConnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qabstractsocket_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qabstractsocket_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qabstractsocket_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qabstractsocket_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForDisconnected(int msecs) override {
        if (qabstractsocket_waitfordisconnected_callback) {
            int cbval1 = msecs;
            bool callback_ret = qabstractsocket_waitfordisconnected_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::waitForDisconnected(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qabstractsocket_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qabstractsocket_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qabstractsocket_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qabstractsocket_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qabstractsocket_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qabstractsocket_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qabstractsocket_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qabstractsocket_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qabstractsocket_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qabstractsocket_open_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qabstractsocket_pos_callback) {
            long long callback_ret = qabstractsocket_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qabstractsocket_size_callback) {
            long long callback_ret = qabstractsocket_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QAbstractSocket::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qabstractsocket_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qabstractsocket_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qabstractsocket_atend_callback) {
            bool callback_ret = qabstractsocket_atend_callback(this);
            return callback_ret;
        }
        return QAbstractSocket::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qabstractsocket_reset_callback) {
            bool callback_ret = qabstractsocket_reset_callback(this);
            return callback_ret;
        }
        return QAbstractSocket::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qabstractsocket_canreadline_callback) {
            bool callback_ret = qabstractsocket_canreadline_callback(this);
            return callback_ret;
        }
        return QAbstractSocket::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractsocket_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qabstractsocket_event_callback(this, cbval1);
            return callback_ret;
        }
        return QAbstractSocket::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractsocket_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qabstractsocket_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractSocket::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractsocket_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qabstractsocket_timerevent_callback(this, cbval1);
            return;
        }
        QAbstractSocket::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractsocket_childevent_callback) {
            QChildEvent* cbval1 = event;
            qabstractsocket_childevent_callback(this, cbval1);
            return;
        }
        QAbstractSocket::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractsocket_customevent_callback) {
            QEvent* cbval1 = event;
            qabstractsocket_customevent_callback(this, cbval1);
            return;
        }
        QAbstractSocket::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractsocket_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractsocket_connectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSocket::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractsocket_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qabstractsocket_disconnectnotify_callback(this, cbval1);
            return;
        }
        QAbstractSocket::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QAbstractSocket_SuperReadData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_SuperReadLineData(QAbstractSocket* self, char* data, long long maxlen);
    friend long long QAbstractSocket_SuperSkipData(QAbstractSocket* self, long long maxSize);
    friend long long QAbstractSocket_SuperWriteData(QAbstractSocket* self, const char* data, long long len);
    friend void QAbstractSocket_SuperTimerEvent(QAbstractSocket* self, QTimerEvent* event);
    friend void QAbstractSocket_SuperChildEvent(QAbstractSocket* self, QChildEvent* event);
    friend void QAbstractSocket_SuperCustomEvent(QAbstractSocket* self, QEvent* event);
    friend void QAbstractSocket_SuperConnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
    friend void QAbstractSocket_SuperDisconnectNotify(QAbstractSocket* self, const QMetaMethod* signal);
};

#endif
