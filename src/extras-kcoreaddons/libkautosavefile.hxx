#pragma once
#ifndef EXTRAS_KCOREADDONS_LIBKAUTOSAVEFILE_HXX
#define EXTRAS_KCOREADDONS_LIBKAUTOSAVEFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KAutoSaveFile
class VirtualKAutoSaveFile final : public KAutoSaveFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using KAutoSaveFile_MetaObject_Callback = QMetaObject* (*)(const KAutoSaveFile*);
    using KAutoSaveFile_Metacast_Callback = void* (*)(KAutoSaveFile*, const char*);
    using KAutoSaveFile_Metacall_Callback = int (*)(KAutoSaveFile*, int, int, void**);
    using KAutoSaveFile_ReleaseLock_Callback = void (*)(KAutoSaveFile*);
    using KAutoSaveFile_Open_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_FileName_Callback = const char* (*)(const KAutoSaveFile*);
    using KAutoSaveFile_Size_Callback = long long (*)(const KAutoSaveFile*);
    using KAutoSaveFile_Resize_Callback = bool (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_Permissions_Callback = int (*)(const KAutoSaveFile*);
    using KAutoSaveFile_SetPermissions_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_Close_Callback = void (*)(KAutoSaveFile*);
    using KAutoSaveFile_IsSequential_Callback = bool (*)(const KAutoSaveFile*);
    using KAutoSaveFile_Pos_Callback = long long (*)(const KAutoSaveFile*);
    using KAutoSaveFile_Seek_Callback = bool (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_AtEnd_Callback = bool (*)(const KAutoSaveFile*);
    using KAutoSaveFile_ReadData_Callback = long long (*)(KAutoSaveFile*, char*, long long);
    using KAutoSaveFile_WriteData_Callback = long long (*)(KAutoSaveFile*, const char*, long long);
    using KAutoSaveFile_ReadLineData_Callback = long long (*)(KAutoSaveFile*, char*, long long);
    using KAutoSaveFile_Reset_Callback = bool (*)(KAutoSaveFile*);
    using KAutoSaveFile_BytesAvailable_Callback = long long (*)(const KAutoSaveFile*);
    using KAutoSaveFile_BytesToWrite_Callback = long long (*)(const KAutoSaveFile*);
    using KAutoSaveFile_CanReadLine_Callback = bool (*)(const KAutoSaveFile*);
    using KAutoSaveFile_WaitForReadyRead_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_WaitForBytesWritten_Callback = bool (*)(KAutoSaveFile*, int);
    using KAutoSaveFile_SkipData_Callback = long long (*)(KAutoSaveFile*, long long);
    using KAutoSaveFile_Event_Callback = bool (*)(KAutoSaveFile*, QEvent*);
    using KAutoSaveFile_EventFilter_Callback = bool (*)(KAutoSaveFile*, QObject*, QEvent*);
    using KAutoSaveFile_TimerEvent_Callback = void (*)(KAutoSaveFile*, QTimerEvent*);
    using KAutoSaveFile_ChildEvent_Callback = void (*)(KAutoSaveFile*, QChildEvent*);
    using KAutoSaveFile_CustomEvent_Callback = void (*)(KAutoSaveFile*, QEvent*);
    using KAutoSaveFile_ConnectNotify_Callback = void (*)(KAutoSaveFile*, QMetaMethod*);
    using KAutoSaveFile_DisconnectNotify_Callback = void (*)(KAutoSaveFile*, QMetaMethod*);
    using KAutoSaveFile::isSignalConnected;
    using KAutoSaveFile::receivers;
    using KAutoSaveFile::sender;
    using KAutoSaveFile::senderSignalIndex;
    using KAutoSaveFile::setErrorString;
    using KAutoSaveFile::setOpenMode;

    // Instance callback storage
    KAutoSaveFile_MetaObject_Callback kautosavefile_metaobject_callback = nullptr;
    KAutoSaveFile_Metacast_Callback kautosavefile_metacast_callback = nullptr;
    KAutoSaveFile_Metacall_Callback kautosavefile_metacall_callback = nullptr;
    KAutoSaveFile_ReleaseLock_Callback kautosavefile_releaselock_callback = nullptr;
    KAutoSaveFile_Open_Callback kautosavefile_open_callback = nullptr;
    KAutoSaveFile_FileName_Callback kautosavefile_filename_callback = nullptr;
    KAutoSaveFile_Size_Callback kautosavefile_size_callback = nullptr;
    KAutoSaveFile_Resize_Callback kautosavefile_resize_callback = nullptr;
    KAutoSaveFile_Permissions_Callback kautosavefile_permissions_callback = nullptr;
    KAutoSaveFile_SetPermissions_Callback kautosavefile_setpermissions_callback = nullptr;
    KAutoSaveFile_Close_Callback kautosavefile_close_callback = nullptr;
    KAutoSaveFile_IsSequential_Callback kautosavefile_issequential_callback = nullptr;
    KAutoSaveFile_Pos_Callback kautosavefile_pos_callback = nullptr;
    KAutoSaveFile_Seek_Callback kautosavefile_seek_callback = nullptr;
    KAutoSaveFile_AtEnd_Callback kautosavefile_atend_callback = nullptr;
    KAutoSaveFile_ReadData_Callback kautosavefile_readdata_callback = nullptr;
    KAutoSaveFile_WriteData_Callback kautosavefile_writedata_callback = nullptr;
    KAutoSaveFile_ReadLineData_Callback kautosavefile_readlinedata_callback = nullptr;
    KAutoSaveFile_Reset_Callback kautosavefile_reset_callback = nullptr;
    KAutoSaveFile_BytesAvailable_Callback kautosavefile_bytesavailable_callback = nullptr;
    KAutoSaveFile_BytesToWrite_Callback kautosavefile_bytestowrite_callback = nullptr;
    KAutoSaveFile_CanReadLine_Callback kautosavefile_canreadline_callback = nullptr;
    KAutoSaveFile_WaitForReadyRead_Callback kautosavefile_waitforreadyread_callback = nullptr;
    KAutoSaveFile_WaitForBytesWritten_Callback kautosavefile_waitforbyteswritten_callback = nullptr;
    KAutoSaveFile_SkipData_Callback kautosavefile_skipdata_callback = nullptr;
    KAutoSaveFile_Event_Callback kautosavefile_event_callback = nullptr;
    KAutoSaveFile_EventFilter_Callback kautosavefile_eventfilter_callback = nullptr;
    KAutoSaveFile_TimerEvent_Callback kautosavefile_timerevent_callback = nullptr;
    KAutoSaveFile_ChildEvent_Callback kautosavefile_childevent_callback = nullptr;
    KAutoSaveFile_CustomEvent_Callback kautosavefile_customevent_callback = nullptr;
    KAutoSaveFile_ConnectNotify_Callback kautosavefile_connectnotify_callback = nullptr;
    KAutoSaveFile_DisconnectNotify_Callback kautosavefile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KAutoSaveFile {
        using KAutoSaveFile::childEvent;
        using KAutoSaveFile::connectNotify;
        using KAutoSaveFile::customEvent;
        using KAutoSaveFile::disconnectNotify;
        using KAutoSaveFile::readData;
        using KAutoSaveFile::readLineData;
        using KAutoSaveFile::skipData;
        using KAutoSaveFile::timerEvent;
        using KAutoSaveFile::writeData;
    };

    VirtualKAutoSaveFile(const QUrl& filename) : KAutoSaveFile(filename) {};
    VirtualKAutoSaveFile() : KAutoSaveFile() {};
    VirtualKAutoSaveFile(const QUrl& filename, QObject* parent) : KAutoSaveFile(filename, parent) {};
    VirtualKAutoSaveFile(QObject* parent) : KAutoSaveFile(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kautosavefile_metaobject_callback) {
            QMetaObject* callback_ret = kautosavefile_metaobject_callback(this);
            return callback_ret;
        }
        return KAutoSaveFile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kautosavefile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kautosavefile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kautosavefile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kautosavefile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KAutoSaveFile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void releaseLock() override {
        if (kautosavefile_releaselock_callback) {
            kautosavefile_releaselock_callback(this);
            return;
        }
        KAutoSaveFile::releaseLock();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> openmode) override {
        if (kautosavefile_open_callback) {
            int cbval1 = static_cast<int>(openmode);
            bool callback_ret = kautosavefile_open_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::open(openmode);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (kautosavefile_filename_callback) {
            const char* callback_ret = kautosavefile_filename_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KAutoSaveFile::fileName();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (kautosavefile_size_callback) {
            long long callback_ret = kautosavefile_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (kautosavefile_resize_callback) {
            long long cbval1 = static_cast<long long>(sz);
            bool callback_ret = kautosavefile_resize_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::resize(sz);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (kautosavefile_permissions_callback) {
            int callback_ret = kautosavefile_permissions_callback(this);
            return static_cast<QFileDevice::Permissions>(callback_ret);
        }
        return KAutoSaveFile::permissions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (kautosavefile_setpermissions_callback) {
            int cbval1 = static_cast<int>(permissionSpec);
            bool callback_ret = kautosavefile_setpermissions_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::setPermissions(permissionSpec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (kautosavefile_close_callback) {
            kautosavefile_close_callback(this);
            return;
        }
        KAutoSaveFile::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (kautosavefile_issequential_callback) {
            bool callback_ret = kautosavefile_issequential_callback(this);
            return callback_ret;
        }
        return KAutoSaveFile::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (kautosavefile_pos_callback) {
            long long callback_ret = kautosavefile_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (kautosavefile_seek_callback) {
            long long cbval1 = static_cast<long long>(offset);
            bool callback_ret = kautosavefile_seek_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (kautosavefile_atend_callback) {
            bool callback_ret = kautosavefile_atend_callback(this);
            return callback_ret;
        }
        return KAutoSaveFile::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (kautosavefile_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kautosavefile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (kautosavefile_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = kautosavefile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (kautosavefile_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = kautosavefile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (kautosavefile_reset_callback) {
            bool callback_ret = kautosavefile_reset_callback(this);
            return callback_ret;
        }
        return KAutoSaveFile::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (kautosavefile_bytesavailable_callback) {
            long long callback_ret = kautosavefile_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (kautosavefile_bytestowrite_callback) {
            long long callback_ret = kautosavefile_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (kautosavefile_canreadline_callback) {
            bool callback_ret = kautosavefile_canreadline_callback(this);
            return callback_ret;
        }
        return KAutoSaveFile::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (kautosavefile_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = kautosavefile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (kautosavefile_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = kautosavefile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (kautosavefile_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = kautosavefile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return KAutoSaveFile::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kautosavefile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kautosavefile_event_callback(this, cbval1);
            return callback_ret;
        }
        return KAutoSaveFile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kautosavefile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kautosavefile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KAutoSaveFile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kautosavefile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kautosavefile_timerevent_callback(this, cbval1);
            return;
        }
        KAutoSaveFile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kautosavefile_childevent_callback) {
            QChildEvent* cbval1 = event;
            kautosavefile_childevent_callback(this, cbval1);
            return;
        }
        KAutoSaveFile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kautosavefile_customevent_callback) {
            QEvent* cbval1 = event;
            kautosavefile_customevent_callback(this, cbval1);
            return;
        }
        KAutoSaveFile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kautosavefile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kautosavefile_connectnotify_callback(this, cbval1);
            return;
        }
        KAutoSaveFile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kautosavefile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kautosavefile_disconnectnotify_callback(this, cbval1);
            return;
        }
        KAutoSaveFile::disconnectNotify(signal);
    }

    // Friend functions
    friend long long KAutoSaveFile_SuperReadData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_SuperWriteData(KAutoSaveFile* self, const char* data, long long len);
    friend long long KAutoSaveFile_SuperReadLineData(KAutoSaveFile* self, char* data, long long maxlen);
    friend long long KAutoSaveFile_SuperSkipData(KAutoSaveFile* self, long long maxSize);
    friend void KAutoSaveFile_SuperTimerEvent(KAutoSaveFile* self, QTimerEvent* event);
    friend void KAutoSaveFile_SuperChildEvent(KAutoSaveFile* self, QChildEvent* event);
    friend void KAutoSaveFile_SuperCustomEvent(KAutoSaveFile* self, QEvent* event);
    friend void KAutoSaveFile_SuperConnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
    friend void KAutoSaveFile_SuperDisconnectNotify(KAutoSaveFile* self, const QMetaMethod* signal);
};

#endif
