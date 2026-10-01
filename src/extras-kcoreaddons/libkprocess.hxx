#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKPROCESS_HXX
#define EXTRAS_KCOREADDONS_LIBKPROCESS_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KProcess
class VirtualKProcess final : public KProcess {
  public:
    // Virtual class public types (including callbacks and access types)
    using KProcess_MetaObject_Callback = QMetaObject* (*)(const KProcess*);
    using KProcess_Metacast_Callback = void* (*)(KProcess*, const char*);
    using KProcess_Metacall_Callback = int (*)(KProcess*, int, int, void**);
    using KProcess_Open_Callback = bool (*)(KProcess*, int);
    using KProcess_WaitForReadyRead_Callback = bool (*)(KProcess*, int);
    using KProcess_WaitForBytesWritten_Callback = bool (*)(KProcess*, int);
    using KProcess_BytesToWrite_Callback = long long (*)(const KProcess*);
    using KProcess_IsSequential_Callback = bool (*)(const KProcess*);
    using KProcess_Close_Callback = void (*)(KProcess*);
    using KProcess_ReadData_Callback = long long (*)(KProcess*, char*, long long);
    using KProcess_WriteData_Callback = long long (*)(KProcess*, const char*, long long);
    using KProcess_Pos_Callback = long long (*)(const KProcess*);
    using KProcess_Size_Callback = long long (*)(const KProcess*);
    using KProcess_Seek_Callback = bool (*)(KProcess*, long long);
    using KProcess_AtEnd_Callback = bool (*)(const KProcess*);
    using KProcess_Reset_Callback = bool (*)(KProcess*);
    using KProcess_BytesAvailable_Callback = long long (*)(const KProcess*);
    using KProcess_CanReadLine_Callback = bool (*)(const KProcess*);
    using KProcess_ReadLineData_Callback = long long (*)(KProcess*, char*, long long);
    using KProcess_SkipData_Callback = long long (*)(KProcess*, long long);
    using KProcess_Event_Callback = bool (*)(KProcess*, QEvent*);
    using KProcess_EventFilter_Callback = bool (*)(KProcess*, QObject*, QEvent*);
    using KProcess_TimerEvent_Callback = void (*)(KProcess*, QTimerEvent*);
    using KProcess_ChildEvent_Callback = void (*)(KProcess*, QChildEvent*);
    using KProcess_CustomEvent_Callback = void (*)(KProcess*, QEvent*);
    using KProcess_ConnectNotify_Callback = void (*)(KProcess*, QMetaMethod*);
    using KProcess_DisconnectNotify_Callback = void (*)(KProcess*, QMetaMethod*);
    using KProcess::isSignalConnected;
    using KProcess::receivers;
    using KProcess::sender;
    using KProcess::senderSignalIndex;
    using KProcess::setErrorString;
    using KProcess::setOpenMode;
    using KProcess::setProcessState;

    // Instance callback storage
    KProcess_MetaObject_Callback kprocess_metaobject_callback = nullptr;
    KProcess_Metacast_Callback kprocess_metacast_callback = nullptr;
    KProcess_Metacall_Callback kprocess_metacall_callback = nullptr;
    KProcess_Open_Callback kprocess_open_callback = nullptr;
    KProcess_WaitForReadyRead_Callback kprocess_waitforreadyread_callback = nullptr;
    KProcess_WaitForBytesWritten_Callback kprocess_waitforbyteswritten_callback = nullptr;
    KProcess_BytesToWrite_Callback kprocess_bytestowrite_callback = nullptr;
    KProcess_IsSequential_Callback kprocess_issequential_callback = nullptr;
    KProcess_Close_Callback kprocess_close_callback = nullptr;
    KProcess_ReadData_Callback kprocess_readdata_callback = nullptr;
    KProcess_WriteData_Callback kprocess_writedata_callback = nullptr;
    KProcess_Pos_Callback kprocess_pos_callback = nullptr;
    KProcess_Size_Callback kprocess_size_callback = nullptr;
    KProcess_Seek_Callback kprocess_seek_callback = nullptr;
    KProcess_AtEnd_Callback kprocess_atend_callback = nullptr;
    KProcess_Reset_Callback kprocess_reset_callback = nullptr;
    KProcess_BytesAvailable_Callback kprocess_bytesavailable_callback = nullptr;
    KProcess_CanReadLine_Callback kprocess_canreadline_callback = nullptr;
    KProcess_ReadLineData_Callback kprocess_readlinedata_callback = nullptr;
    KProcess_SkipData_Callback kprocess_skipdata_callback = nullptr;
    KProcess_Event_Callback kprocess_event_callback = nullptr;
    KProcess_EventFilter_Callback kprocess_eventfilter_callback = nullptr;
    KProcess_TimerEvent_Callback kprocess_timerevent_callback = nullptr;
    KProcess_ChildEvent_Callback kprocess_childevent_callback = nullptr;
    KProcess_CustomEvent_Callback kprocess_customevent_callback = nullptr;
    KProcess_ConnectNotify_Callback kprocess_connectnotify_callback = nullptr;
    KProcess_DisconnectNotify_Callback kprocess_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KProcess {
        using KProcess::childEvent;
        using KProcess::connectNotify;
        using KProcess::customEvent;
        using KProcess::disconnectNotify;
        using KProcess::readData;
        using KProcess::readLineData;
        using KProcess::skipData;
        using KProcess::timerEvent;
        using KProcess::writeData;
    };

    VirtualKProcess() : KProcess() {};
    VirtualKProcess(QObject* parent) : KProcess(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kprocess_metaobject_callback) {
            QMetaObject* callback_ret = kprocess_metaobject_callback(this);
            return callback_ret;
        }
        return KProcess::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kprocess_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kprocess_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kprocess_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kprocess_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KProcess::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QProcess::OpenMode mode) override {
        if (kprocess_open_callback) {
            int cbval1 = static_cast<int>(mode);
            bool callback_ret = kprocess_open_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::open(mode);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kprocess_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = kprocess_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kprocess_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = kprocess_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kprocess_bytestowrite_callback) {
            long long callback_ret = kprocess_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kprocess_issequential_callback) {
            bool callback_ret = kprocess_issequential_callback(this);
            return callback_ret;
        }
        return KProcess::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kprocess_close_callback) {
            kprocess_close_callback(this);
            return;
        }
        KProcess::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kprocess_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kprocess_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (kprocess_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = kprocess_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kprocess_pos_callback) {
            long long callback_ret = kprocess_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kprocess_size_callback) {
            long long callback_ret = kprocess_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 pos) override {
        if (kprocess_seek_callback) {
            long long cbval1 = static_cast<long long>(pos);
            bool callback_ret = kprocess_seek_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::seek(pos);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kprocess_atend_callback) {
            bool callback_ret = kprocess_atend_callback(this);
            return callback_ret;
        }
        return KProcess::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kprocess_reset_callback) {
            bool callback_ret = kprocess_reset_callback(this);
            return callback_ret;
        }
        return KProcess::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kprocess_bytesavailable_callback) {
            long long callback_ret = kprocess_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kprocess_canreadline_callback) {
            bool callback_ret = kprocess_canreadline_callback(this);
            return callback_ret;
        }
        return KProcess::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kprocess_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kprocess_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kprocess_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = kprocess_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return KProcess::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kprocess_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kprocess_event_callback(this, cbval1);
            return callback_ret;
        }
        return KProcess::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kprocess_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kprocess_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KProcess::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kprocess_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kprocess_timerevent_callback(this, cbval1);
            return;
        }
        KProcess::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kprocess_childevent_callback) {
            QChildEvent* cbval1 = event;
            kprocess_childevent_callback(this, cbval1);
            return;
        }
        KProcess::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kprocess_customevent_callback) {
            QEvent* cbval1 = event;
            kprocess_customevent_callback(this, cbval1);
            return;
        }
        KProcess::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kprocess_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kprocess_connectnotify_callback(this, cbval1);
            return;
        }
        KProcess::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kprocess_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kprocess_disconnectnotify_callback(this, cbval1);
            return;
        }
        KProcess::disconnectNotify(signal);
    }

    // Friend functions
    friend long long KProcess_SuperReadData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SuperWriteData(KProcess* self, const char* data, long long len);
    friend long long KProcess_SuperReadLineData(KProcess* self, char* data, long long maxlen);
    friend long long KProcess_SuperSkipData(KProcess* self, long long maxSize);
    friend void KProcess_SuperTimerEvent(KProcess* self, QTimerEvent* event);
    friend void KProcess_SuperChildEvent(KProcess* self, QChildEvent* event);
    friend void KProcess_SuperCustomEvent(KProcess* self, QEvent* event);
    friend void KProcess_SuperConnectNotify(KProcess* self, const QMetaMethod* signal);
    friend void KProcess_SuperDisconnectNotify(KProcess* self, const QMetaMethod* signal);
};

#endif
