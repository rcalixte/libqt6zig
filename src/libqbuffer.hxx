#pragma once
#ifndef LIBQBUFFER_HXX
#define LIBQBUFFER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QBuffer
class VirtualQBuffer final : public QBuffer {
  public:
    // Virtual class public types (including callbacks and access types)
    using QBuffer_MetaObject_Callback = QMetaObject* (*)(const QBuffer*);
    using QBuffer_Metacast_Callback = void* (*)(QBuffer*, const char*);
    using QBuffer_Metacall_Callback = int (*)(QBuffer*, int, int, void**);
    using QBuffer_Open_Callback = bool (*)(QBuffer*, int);
    using QBuffer_Close_Callback = void (*)(QBuffer*);
    using QBuffer_Size_Callback = long long (*)(const QBuffer*);
    using QBuffer_Pos_Callback = long long (*)(const QBuffer*);
    using QBuffer_Seek_Callback = bool (*)(QBuffer*, long long);
    using QBuffer_AtEnd_Callback = bool (*)(const QBuffer*);
    using QBuffer_CanReadLine_Callback = bool (*)(const QBuffer*);
    using QBuffer_ConnectNotify_Callback = void (*)(QBuffer*, QMetaMethod*);
    using QBuffer_DisconnectNotify_Callback = void (*)(QBuffer*, QMetaMethod*);
    using QBuffer_ReadData_Callback = long long (*)(QBuffer*, char*, long long);
    using QBuffer_WriteData_Callback = long long (*)(QBuffer*, const char*, long long);
    using QBuffer_IsSequential_Callback = bool (*)(const QBuffer*);
    using QBuffer_Reset_Callback = bool (*)(QBuffer*);
    using QBuffer_BytesAvailable_Callback = long long (*)(const QBuffer*);
    using QBuffer_BytesToWrite_Callback = long long (*)(const QBuffer*);
    using QBuffer_WaitForReadyRead_Callback = bool (*)(QBuffer*, int);
    using QBuffer_WaitForBytesWritten_Callback = bool (*)(QBuffer*, int);
    using QBuffer_ReadLineData_Callback = long long (*)(QBuffer*, char*, long long);
    using QBuffer_SkipData_Callback = long long (*)(QBuffer*, long long);
    using QBuffer_Event_Callback = bool (*)(QBuffer*, QEvent*);
    using QBuffer_EventFilter_Callback = bool (*)(QBuffer*, QObject*, QEvent*);
    using QBuffer_TimerEvent_Callback = void (*)(QBuffer*, QTimerEvent*);
    using QBuffer_ChildEvent_Callback = void (*)(QBuffer*, QChildEvent*);
    using QBuffer_CustomEvent_Callback = void (*)(QBuffer*, QEvent*);
    using QBuffer::isSignalConnected;
    using QBuffer::receivers;
    using QBuffer::sender;
    using QBuffer::senderSignalIndex;
    using QBuffer::setErrorString;
    using QBuffer::setOpenMode;

    // Instance callback storage
    QBuffer_MetaObject_Callback qbuffer_metaobject_callback = nullptr;
    QBuffer_Metacast_Callback qbuffer_metacast_callback = nullptr;
    QBuffer_Metacall_Callback qbuffer_metacall_callback = nullptr;
    QBuffer_Open_Callback qbuffer_open_callback = nullptr;
    QBuffer_Close_Callback qbuffer_close_callback = nullptr;
    QBuffer_Size_Callback qbuffer_size_callback = nullptr;
    QBuffer_Pos_Callback qbuffer_pos_callback = nullptr;
    QBuffer_Seek_Callback qbuffer_seek_callback = nullptr;
    QBuffer_AtEnd_Callback qbuffer_atend_callback = nullptr;
    QBuffer_CanReadLine_Callback qbuffer_canreadline_callback = nullptr;
    QBuffer_ConnectNotify_Callback qbuffer_connectnotify_callback = nullptr;
    QBuffer_DisconnectNotify_Callback qbuffer_disconnectnotify_callback = nullptr;
    QBuffer_ReadData_Callback qbuffer_readdata_callback = nullptr;
    QBuffer_WriteData_Callback qbuffer_writedata_callback = nullptr;
    QBuffer_IsSequential_Callback qbuffer_issequential_callback = nullptr;
    QBuffer_Reset_Callback qbuffer_reset_callback = nullptr;
    QBuffer_BytesAvailable_Callback qbuffer_bytesavailable_callback = nullptr;
    QBuffer_BytesToWrite_Callback qbuffer_bytestowrite_callback = nullptr;
    QBuffer_WaitForReadyRead_Callback qbuffer_waitforreadyread_callback = nullptr;
    QBuffer_WaitForBytesWritten_Callback qbuffer_waitforbyteswritten_callback = nullptr;
    QBuffer_ReadLineData_Callback qbuffer_readlinedata_callback = nullptr;
    QBuffer_SkipData_Callback qbuffer_skipdata_callback = nullptr;
    QBuffer_Event_Callback qbuffer_event_callback = nullptr;
    QBuffer_EventFilter_Callback qbuffer_eventfilter_callback = nullptr;
    QBuffer_TimerEvent_Callback qbuffer_timerevent_callback = nullptr;
    QBuffer_ChildEvent_Callback qbuffer_childevent_callback = nullptr;
    QBuffer_CustomEvent_Callback qbuffer_customevent_callback = nullptr;

    // Access struct
    struct Base : QBuffer {
        using QBuffer::childEvent;
        using QBuffer::connectNotify;
        using QBuffer::customEvent;
        using QBuffer::disconnectNotify;
        using QBuffer::readData;
        using QBuffer::readLineData;
        using QBuffer::skipData;
        using QBuffer::timerEvent;
        using QBuffer::writeData;
    };

    VirtualQBuffer() : QBuffer() {};
    VirtualQBuffer(QObject* parent) : QBuffer(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qbuffer_metaobject_callback) {
            QMetaObject* callback_ret = qbuffer_metaobject_callback(this);
            return callback_ret;
        }
        return QBuffer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qbuffer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qbuffer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qbuffer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qbuffer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QBuffer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> openMode) override {
        if (qbuffer_open_callback) {
            int cbval1 = static_cast<int>(openMode);
            bool callback_ret = qbuffer_open_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::open(openMode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qbuffer_close_callback) {
            qbuffer_close_callback(this);
            return;
        }
        QBuffer::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qbuffer_size_callback) {
            long long callback_ret = qbuffer_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qbuffer_pos_callback) {
            long long callback_ret = qbuffer_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 off) override {
        if (qbuffer_seek_callback) {
            long long cbval1 = static_cast<long long>(off);
            bool callback_ret = qbuffer_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::seek(off);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qbuffer_atend_callback) {
            bool callback_ret = qbuffer_atend_callback(this);
            return callback_ret;
        }
        return QBuffer::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qbuffer_canreadline_callback) {
            bool callback_ret = qbuffer_canreadline_callback(this);
            return callback_ret;
        }
        return QBuffer::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& param1) override {
        if (qbuffer_connectnotify_callback) {
            const QMetaMethod& param1_ret = param1;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&param1_ret);
            qbuffer_connectnotify_callback(this, cbval1);
            return;
        }
        QBuffer::connectNotify(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& param1) override {
        if (qbuffer_disconnectnotify_callback) {
            const QMetaMethod& param1_ret = param1;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&param1_ret);
            qbuffer_disconnectnotify_callback(this, cbval1);
            return;
        }
        QBuffer::disconnectNotify(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qbuffer_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qbuffer_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qbuffer_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qbuffer_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qbuffer_issequential_callback) {
            bool callback_ret = qbuffer_issequential_callback(this);
            return callback_ret;
        }
        return QBuffer::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qbuffer_reset_callback) {
            bool callback_ret = qbuffer_reset_callback(this);
            return callback_ret;
        }
        return QBuffer::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qbuffer_bytesavailable_callback) {
            long long callback_ret = qbuffer_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qbuffer_bytestowrite_callback) {
            long long callback_ret = qbuffer_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qbuffer_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qbuffer_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qbuffer_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qbuffer_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qbuffer_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qbuffer_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qbuffer_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qbuffer_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QBuffer::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qbuffer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qbuffer_event_callback(this, cbval1);
            return callback_ret;
        }
        return QBuffer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qbuffer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qbuffer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QBuffer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qbuffer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qbuffer_timerevent_callback(this, cbval1);
            return;
        }
        QBuffer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qbuffer_childevent_callback) {
            QChildEvent* cbval1 = event;
            qbuffer_childevent_callback(this, cbval1);
            return;
        }
        QBuffer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qbuffer_customevent_callback) {
            QEvent* cbval1 = event;
            qbuffer_customevent_callback(this, cbval1);
            return;
        }
        QBuffer::customEvent(event);
    }

    // Friend functions
    friend void QBuffer_SuperConnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend void QBuffer_SuperDisconnectNotify(QBuffer* self, const QMetaMethod* param1);
    friend long long QBuffer_SuperReadData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_SuperWriteData(QBuffer* self, const char* data, long long len);
    friend long long QBuffer_SuperReadLineData(QBuffer* self, char* data, long long maxlen);
    friend long long QBuffer_SuperSkipData(QBuffer* self, long long maxSize);
    friend void QBuffer_SuperTimerEvent(QBuffer* self, QTimerEvent* event);
    friend void QBuffer_SuperChildEvent(QBuffer* self, QChildEvent* event);
    friend void QBuffer_SuperCustomEvent(QBuffer* self, QEvent* event);
};

#endif
