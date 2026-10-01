#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKCOMPRESSIONDEVICE_HXX
#define EXTRAS_KARCHIVE_LIBKCOMPRESSIONDEVICE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCompressionDevice
class VirtualKCompressionDevice final : public KCompressionDevice {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCompressionDevice_MetaObject_Callback = QMetaObject* (*)(const KCompressionDevice*);
    using KCompressionDevice_Metacast_Callback = void* (*)(KCompressionDevice*, const char*);
    using KCompressionDevice_Metacall_Callback = int (*)(KCompressionDevice*, int, int, void**);
    using KCompressionDevice_Open_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_Close_Callback = void (*)(KCompressionDevice*);
    using KCompressionDevice_Seek_Callback = bool (*)(KCompressionDevice*, long long);
    using KCompressionDevice_AtEnd_Callback = bool (*)(const KCompressionDevice*);
    using KCompressionDevice_ReadData_Callback = long long (*)(KCompressionDevice*, char*, long long);
    using KCompressionDevice_WriteData_Callback = long long (*)(KCompressionDevice*, const char*, long long);
    using KCompressionDevice_IsSequential_Callback = bool (*)(const KCompressionDevice*);
    using KCompressionDevice_Pos_Callback = long long (*)(const KCompressionDevice*);
    using KCompressionDevice_Size_Callback = long long (*)(const KCompressionDevice*);
    using KCompressionDevice_Reset_Callback = bool (*)(KCompressionDevice*);
    using KCompressionDevice_BytesAvailable_Callback = long long (*)(const KCompressionDevice*);
    using KCompressionDevice_BytesToWrite_Callback = long long (*)(const KCompressionDevice*);
    using KCompressionDevice_CanReadLine_Callback = bool (*)(const KCompressionDevice*);
    using KCompressionDevice_WaitForReadyRead_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_WaitForBytesWritten_Callback = bool (*)(KCompressionDevice*, int);
    using KCompressionDevice_ReadLineData_Callback = long long (*)(KCompressionDevice*, char*, long long);
    using KCompressionDevice_SkipData_Callback = long long (*)(KCompressionDevice*, long long);
    using KCompressionDevice_Event_Callback = bool (*)(KCompressionDevice*, QEvent*);
    using KCompressionDevice_EventFilter_Callback = bool (*)(KCompressionDevice*, QObject*, QEvent*);
    using KCompressionDevice_TimerEvent_Callback = void (*)(KCompressionDevice*, QTimerEvent*);
    using KCompressionDevice_ChildEvent_Callback = void (*)(KCompressionDevice*, QChildEvent*);
    using KCompressionDevice_CustomEvent_Callback = void (*)(KCompressionDevice*, QEvent*);
    using KCompressionDevice_ConnectNotify_Callback = void (*)(KCompressionDevice*, QMetaMethod*);
    using KCompressionDevice_DisconnectNotify_Callback = void (*)(KCompressionDevice*, QMetaMethod*);
    using KCompressionDevice::filterBase;
    using KCompressionDevice::isSignalConnected;
    using KCompressionDevice::receivers;
    using KCompressionDevice::sender;
    using KCompressionDevice::senderSignalIndex;
    using KCompressionDevice::setErrorString;
    using KCompressionDevice::setOpenMode;

    // Instance callback storage
    KCompressionDevice_MetaObject_Callback kcompressiondevice_metaobject_callback = nullptr;
    KCompressionDevice_Metacast_Callback kcompressiondevice_metacast_callback = nullptr;
    KCompressionDevice_Metacall_Callback kcompressiondevice_metacall_callback = nullptr;
    KCompressionDevice_Open_Callback kcompressiondevice_open_callback = nullptr;
    KCompressionDevice_Close_Callback kcompressiondevice_close_callback = nullptr;
    KCompressionDevice_Seek_Callback kcompressiondevice_seek_callback = nullptr;
    KCompressionDevice_AtEnd_Callback kcompressiondevice_atend_callback = nullptr;
    KCompressionDevice_ReadData_Callback kcompressiondevice_readdata_callback = nullptr;
    KCompressionDevice_WriteData_Callback kcompressiondevice_writedata_callback = nullptr;
    KCompressionDevice_IsSequential_Callback kcompressiondevice_issequential_callback = nullptr;
    KCompressionDevice_Pos_Callback kcompressiondevice_pos_callback = nullptr;
    KCompressionDevice_Size_Callback kcompressiondevice_size_callback = nullptr;
    KCompressionDevice_Reset_Callback kcompressiondevice_reset_callback = nullptr;
    KCompressionDevice_BytesAvailable_Callback kcompressiondevice_bytesavailable_callback = nullptr;
    KCompressionDevice_BytesToWrite_Callback kcompressiondevice_bytestowrite_callback = nullptr;
    KCompressionDevice_CanReadLine_Callback kcompressiondevice_canreadline_callback = nullptr;
    KCompressionDevice_WaitForReadyRead_Callback kcompressiondevice_waitforreadyread_callback = nullptr;
    KCompressionDevice_WaitForBytesWritten_Callback kcompressiondevice_waitforbyteswritten_callback = nullptr;
    KCompressionDevice_ReadLineData_Callback kcompressiondevice_readlinedata_callback = nullptr;
    KCompressionDevice_SkipData_Callback kcompressiondevice_skipdata_callback = nullptr;
    KCompressionDevice_Event_Callback kcompressiondevice_event_callback = nullptr;
    KCompressionDevice_EventFilter_Callback kcompressiondevice_eventfilter_callback = nullptr;
    KCompressionDevice_TimerEvent_Callback kcompressiondevice_timerevent_callback = nullptr;
    KCompressionDevice_ChildEvent_Callback kcompressiondevice_childevent_callback = nullptr;
    KCompressionDevice_CustomEvent_Callback kcompressiondevice_customevent_callback = nullptr;
    KCompressionDevice_ConnectNotify_Callback kcompressiondevice_connectnotify_callback = nullptr;
    KCompressionDevice_DisconnectNotify_Callback kcompressiondevice_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCompressionDevice {
        using KCompressionDevice::childEvent;
        using KCompressionDevice::connectNotify;
        using KCompressionDevice::customEvent;
        using KCompressionDevice::disconnectNotify;
        using KCompressionDevice::readData;
        using KCompressionDevice::readLineData;
        using KCompressionDevice::skipData;
        using KCompressionDevice::timerEvent;
        using KCompressionDevice::writeData;
    };

    VirtualKCompressionDevice(QIODevice* inputDevice, bool autoDeleteInputDevice, KCompressionDevice::CompressionType typeVal) : KCompressionDevice(inputDevice, autoDeleteInputDevice, typeVal) {};
    VirtualKCompressionDevice(const QString& fileName, KCompressionDevice::CompressionType typeVal) : KCompressionDevice(fileName, typeVal) {};
    VirtualKCompressionDevice(const QString& fileName) : KCompressionDevice(fileName) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcompressiondevice_metaobject_callback) {
            QMetaObject* callback_ret = kcompressiondevice_metaobject_callback(this);
            return callback_ret;
        }
        return KCompressionDevice::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcompressiondevice_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcompressiondevice_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcompressiondevice_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcompressiondevice_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCompressionDevice::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QIODevice::OpenMode mode) override {
        if (kcompressiondevice_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kcompressiondevice_open_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kcompressiondevice_close_callback) {
            kcompressiondevice_close_callback(this);
            return;
        }
        KCompressionDevice::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 param1) override {
        if (kcompressiondevice_seek_callback) {
            long long cbval1 = static_cast<long long>(param1);
            bool callback_ret = kcompressiondevice_seek_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::seek(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kcompressiondevice_atend_callback) {
            bool callback_ret = kcompressiondevice_atend_callback(this);
            return callback_ret;
        }
        return KCompressionDevice::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kcompressiondevice_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kcompressiondevice_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (kcompressiondevice_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = kcompressiondevice_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kcompressiondevice_issequential_callback) {
            bool callback_ret = kcompressiondevice_issequential_callback(this);
            return callback_ret;
        }
        return KCompressionDevice::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kcompressiondevice_pos_callback) {
            long long callback_ret = kcompressiondevice_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kcompressiondevice_size_callback) {
            long long callback_ret = kcompressiondevice_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kcompressiondevice_reset_callback) {
            bool callback_ret = kcompressiondevice_reset_callback(this);
            return callback_ret;
        }
        return KCompressionDevice::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kcompressiondevice_bytesavailable_callback) {
            long long callback_ret = kcompressiondevice_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kcompressiondevice_bytestowrite_callback) {
            long long callback_ret = kcompressiondevice_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kcompressiondevice_canreadline_callback) {
            bool callback_ret = kcompressiondevice_canreadline_callback(this);
            return callback_ret;
        }
        return KCompressionDevice::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kcompressiondevice_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = kcompressiondevice_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kcompressiondevice_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = kcompressiondevice_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kcompressiondevice_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kcompressiondevice_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kcompressiondevice_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = kcompressiondevice_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return KCompressionDevice::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcompressiondevice_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcompressiondevice_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCompressionDevice::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcompressiondevice_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcompressiondevice_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCompressionDevice::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcompressiondevice_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcompressiondevice_timerevent_callback(this, cbval1);
            return;
        }
        KCompressionDevice::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcompressiondevice_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcompressiondevice_childevent_callback(this, cbval1);
            return;
        }
        KCompressionDevice::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcompressiondevice_customevent_callback) {
            QEvent* cbval1 = event;
            kcompressiondevice_customevent_callback(this, cbval1);
            return;
        }
        KCompressionDevice::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcompressiondevice_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompressiondevice_connectnotify_callback(this, cbval1);
            return;
        }
        KCompressionDevice::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcompressiondevice_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcompressiondevice_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCompressionDevice::disconnectNotify(signal);
    }

    // Friend functions
    friend long long KCompressionDevice_SuperReadData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_SuperWriteData(KCompressionDevice* self, const char* data, long long len);
    friend long long KCompressionDevice_SuperReadLineData(KCompressionDevice* self, char* data, long long maxlen);
    friend long long KCompressionDevice_SuperSkipData(KCompressionDevice* self, long long maxSize);
    friend void KCompressionDevice_SuperTimerEvent(KCompressionDevice* self, QTimerEvent* event);
    friend void KCompressionDevice_SuperChildEvent(KCompressionDevice* self, QChildEvent* event);
    friend void KCompressionDevice_SuperCustomEvent(KCompressionDevice* self, QEvent* event);
    friend void KCompressionDevice_SuperConnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
    friend void KCompressionDevice_SuperDisconnectNotify(KCompressionDevice* self, const QMetaMethod* signal);
};

#endif
