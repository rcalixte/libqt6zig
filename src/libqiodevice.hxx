#pragma once
#ifndef LIBQIODEVICE_HXX
#define LIBQIODEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIODevice
class VirtualQIODevice : public QIODevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using QIODevice_MetaObject_Callback = QMetaObject* (*)(const QIODevice*);
    using QIODevice_Metacast_Callback = void* (*)(QIODevice*, const char*);
    using QIODevice_Metacall_Callback = int (*)(QIODevice*, int, int, void**);
    using QIODevice_IsSequential_Callback = bool (*)(const QIODevice*);
    using QIODevice_Open_Callback = bool (*)(QIODevice*, int);
    using QIODevice_Close_Callback = void (*)(QIODevice*);
    using QIODevice_Pos_Callback = long long (*)(const QIODevice*);
    using QIODevice_Size_Callback = long long (*)(const QIODevice*);
    using QIODevice_Seek_Callback = bool (*)(QIODevice*, long long);
    using QIODevice_AtEnd_Callback = bool (*)(const QIODevice*);
    using QIODevice_Reset_Callback = bool (*)(QIODevice*);
    using QIODevice_BytesAvailable_Callback = long long (*)(const QIODevice*);
    using QIODevice_BytesToWrite_Callback = long long (*)(const QIODevice*);
    using QIODevice_CanReadLine_Callback = bool (*)(const QIODevice*);
    using QIODevice_WaitForReadyRead_Callback = bool (*)(QIODevice*, int);
    using QIODevice_WaitForBytesWritten_Callback = bool (*)(QIODevice*, int);
    using QIODevice_ReadData_Callback = long long (*)(QIODevice*, char*, long long);
    using QIODevice_ReadLineData_Callback = long long (*)(QIODevice*, char*, long long);
    using QIODevice_SkipData_Callback = long long (*)(QIODevice*, long long);
    using QIODevice_WriteData_Callback = long long (*)(QIODevice*, const char*, long long);
    using QIODevice_Event_Callback = bool (*)(QIODevice*, QEvent*);
    using QIODevice_EventFilter_Callback = bool (*)(QIODevice*, QObject*, QEvent*);
    using QIODevice_TimerEvent_Callback = void (*)(QIODevice*, QTimerEvent*);
    using QIODevice_ChildEvent_Callback = void (*)(QIODevice*, QChildEvent*);
    using QIODevice_CustomEvent_Callback = void (*)(QIODevice*, QEvent*);
    using QIODevice_ConnectNotify_Callback = void (*)(QIODevice*, QMetaMethod*);
    using QIODevice_DisconnectNotify_Callback = void (*)(QIODevice*, QMetaMethod*);
    using QIODevice::isSignalConnected;
    using QIODevice::receivers;
    using QIODevice::sender;
    using QIODevice::senderSignalIndex;
    using QIODevice::setErrorString;
    using QIODevice::setOpenMode;

    // Instance callback storage
    QIODevice_MetaObject_Callback qiodevice_metaobject_callback = nullptr;
    QIODevice_Metacast_Callback qiodevice_metacast_callback = nullptr;
    QIODevice_Metacall_Callback qiodevice_metacall_callback = nullptr;
    QIODevice_IsSequential_Callback qiodevice_issequential_callback = nullptr;
    QIODevice_Open_Callback qiodevice_open_callback = nullptr;
    QIODevice_Close_Callback qiodevice_close_callback = nullptr;
    QIODevice_Pos_Callback qiodevice_pos_callback = nullptr;
    QIODevice_Size_Callback qiodevice_size_callback = nullptr;
    QIODevice_Seek_Callback qiodevice_seek_callback = nullptr;
    QIODevice_AtEnd_Callback qiodevice_atend_callback = nullptr;
    QIODevice_Reset_Callback qiodevice_reset_callback = nullptr;
    QIODevice_BytesAvailable_Callback qiodevice_bytesavailable_callback = nullptr;
    QIODevice_BytesToWrite_Callback qiodevice_bytestowrite_callback = nullptr;
    QIODevice_CanReadLine_Callback qiodevice_canreadline_callback = nullptr;
    QIODevice_WaitForReadyRead_Callback qiodevice_waitforreadyread_callback = nullptr;
    QIODevice_WaitForBytesWritten_Callback qiodevice_waitforbyteswritten_callback = nullptr;
    QIODevice_ReadData_Callback qiodevice_readdata_callback = nullptr;
    QIODevice_ReadLineData_Callback qiodevice_readlinedata_callback = nullptr;
    QIODevice_SkipData_Callback qiodevice_skipdata_callback = nullptr;
    QIODevice_WriteData_Callback qiodevice_writedata_callback = nullptr;
    QIODevice_Event_Callback qiodevice_event_callback = nullptr;
    QIODevice_EventFilter_Callback qiodevice_eventfilter_callback = nullptr;
    QIODevice_TimerEvent_Callback qiodevice_timerevent_callback = nullptr;
    QIODevice_ChildEvent_Callback qiodevice_childevent_callback = nullptr;
    QIODevice_CustomEvent_Callback qiodevice_customevent_callback = nullptr;
    QIODevice_ConnectNotify_Callback qiodevice_connectnotify_callback = nullptr;
    QIODevice_DisconnectNotify_Callback qiodevice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QIODevice {
        using QIODevice::childEvent;
        using QIODevice::connectNotify;
        using QIODevice::customEvent;
        using QIODevice::disconnectNotify;
        using QIODevice::readData;
        using QIODevice::readLineData;
        using QIODevice::skipData;
        using QIODevice::timerEvent;
        using QIODevice::writeData;
    };

    VirtualQIODevice() : QIODevice() {};
    VirtualQIODevice(QObject* parent) : QIODevice(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qiodevice_metaobject_callback) {
            QMetaObject* callback_ret = qiodevice_metaobject_callback(this);
            return callback_ret;
        }
        return QIODevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qiodevice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qiodevice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qiodevice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qiodevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QIODevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qiodevice_issequential_callback) {
            bool callback_ret = qiodevice_issequential_callback(this);
            return callback_ret;
        }
        return QIODevice::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODeviceBase::OpenMode mode) override {
        if (qiodevice_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = qiodevice_open_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qiodevice_close_callback) {
            qiodevice_close_callback(this);
            return;
        }
        QIODevice::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qiodevice_pos_callback) {
            long long callback_ret = qiodevice_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qiodevice_size_callback) {
            long long callback_ret = qiodevice_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (qiodevice_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = qiodevice_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qiodevice_atend_callback) {
            bool callback_ret = qiodevice_atend_callback(this);
            return callback_ret;
        }
        return QIODevice::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qiodevice_reset_callback) {
            bool callback_ret = qiodevice_reset_callback(this);
            return callback_ret;
        }
        return QIODevice::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qiodevice_bytesavailable_callback) {
            long long callback_ret = qiodevice_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qiodevice_bytestowrite_callback) {
            long long callback_ret = qiodevice_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qiodevice_canreadline_callback) {
            bool callback_ret = qiodevice_canreadline_callback(this);
            return callback_ret;
        }
        return QIODevice::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qiodevice_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qiodevice_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qiodevice_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qiodevice_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qiodevice_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qiodevice_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QIODevice::readData called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qiodevice_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qiodevice_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qiodevice_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qiodevice_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QIODevice::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qiodevice_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qiodevice_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QIODevice::writeData called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qiodevice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qiodevice_event_callback(this, cbval1);
            return callback_ret;
        }
        return QIODevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qiodevice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qiodevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QIODevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qiodevice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qiodevice_timerevent_callback(this, cbval1);
            return;
        }
        QIODevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qiodevice_childevent_callback) {
            QChildEvent* cbval1 = event;
            qiodevice_childevent_callback(this, cbval1);
            return;
        }
        QIODevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qiodevice_customevent_callback) {
            QEvent* cbval1 = event;
            qiodevice_customevent_callback(this, cbval1);
            return;
        }
        QIODevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qiodevice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qiodevice_connectnotify_callback(this, cbval1);
            return;
        }
        QIODevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qiodevice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qiodevice_disconnectnotify_callback(this, cbval1);
            return;
        }
        QIODevice::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QIODevice_SuperReadLineData(QIODevice* self, char* data, long long maxlen);
    friend long long QIODevice_SuperSkipData(QIODevice* self, long long maxSize);
    friend void QIODevice_SuperTimerEvent(QIODevice* self, QTimerEvent* event);
    friend void QIODevice_SuperChildEvent(QIODevice* self, QChildEvent* event);
    friend void QIODevice_SuperCustomEvent(QIODevice* self, QEvent* event);
    friend void QIODevice_SuperConnectNotify(QIODevice* self, const QMetaMethod* signal);
    friend void QIODevice_SuperDisconnectNotify(QIODevice* self, const QMetaMethod* signal);
};

#endif
