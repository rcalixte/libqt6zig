#pragma once
#ifndef LIBQSAVEFILE_HXX
#define LIBQSAVEFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSaveFile
class VirtualQSaveFile final : public QSaveFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QSaveFile_MetaObject_Callback = QMetaObject* (*)(const QSaveFile*);
    using QSaveFile_Metacast_Callback = void* (*)(QSaveFile*, const char*);
    using QSaveFile_Metacall_Callback = int (*)(QSaveFile*, int, int, void**);
    using QSaveFile_FileName_Callback = const char* (*)(const QSaveFile*);
    using QSaveFile_Open_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_WriteData_Callback = long long (*)(QSaveFile*, const char*, long long);
    using QSaveFile_IsSequential_Callback = bool (*)(const QSaveFile*);
    using QSaveFile_Pos_Callback = long long (*)(const QSaveFile*);
    using QSaveFile_Seek_Callback = bool (*)(QSaveFile*, long long);
    using QSaveFile_AtEnd_Callback = bool (*)(const QSaveFile*);
    using QSaveFile_Size_Callback = long long (*)(const QSaveFile*);
    using QSaveFile_Resize_Callback = bool (*)(QSaveFile*, long long);
    using QSaveFile_Permissions_Callback = int (*)(const QSaveFile*);
    using QSaveFile_SetPermissions_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_ReadData_Callback = long long (*)(QSaveFile*, char*, long long);
    using QSaveFile_ReadLineData_Callback = long long (*)(QSaveFile*, char*, long long);
    using QSaveFile_Reset_Callback = bool (*)(QSaveFile*);
    using QSaveFile_BytesAvailable_Callback = long long (*)(const QSaveFile*);
    using QSaveFile_BytesToWrite_Callback = long long (*)(const QSaveFile*);
    using QSaveFile_CanReadLine_Callback = bool (*)(const QSaveFile*);
    using QSaveFile_WaitForReadyRead_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_WaitForBytesWritten_Callback = bool (*)(QSaveFile*, int);
    using QSaveFile_SkipData_Callback = long long (*)(QSaveFile*, long long);
    using QSaveFile_Event_Callback = bool (*)(QSaveFile*, QEvent*);
    using QSaveFile_EventFilter_Callback = bool (*)(QSaveFile*, QObject*, QEvent*);
    using QSaveFile_TimerEvent_Callback = void (*)(QSaveFile*, QTimerEvent*);
    using QSaveFile_ChildEvent_Callback = void (*)(QSaveFile*, QChildEvent*);
    using QSaveFile_CustomEvent_Callback = void (*)(QSaveFile*, QEvent*);
    using QSaveFile_ConnectNotify_Callback = void (*)(QSaveFile*, QMetaMethod*);
    using QSaveFile_DisconnectNotify_Callback = void (*)(QSaveFile*, QMetaMethod*);
    using QSaveFile::isSignalConnected;
    using QSaveFile::receivers;
    using QSaveFile::sender;
    using QSaveFile::senderSignalIndex;
    using QSaveFile::setErrorString;
    using QSaveFile::setOpenMode;

    // Instance callback storage
    QSaveFile_MetaObject_Callback qsavefile_metaobject_callback = nullptr;
    QSaveFile_Metacast_Callback qsavefile_metacast_callback = nullptr;
    QSaveFile_Metacall_Callback qsavefile_metacall_callback = nullptr;
    QSaveFile_FileName_Callback qsavefile_filename_callback = nullptr;
    QSaveFile_Open_Callback qsavefile_open_callback = nullptr;
    QSaveFile_WriteData_Callback qsavefile_writedata_callback = nullptr;
    QSaveFile_IsSequential_Callback qsavefile_issequential_callback = nullptr;
    QSaveFile_Pos_Callback qsavefile_pos_callback = nullptr;
    QSaveFile_Seek_Callback qsavefile_seek_callback = nullptr;
    QSaveFile_AtEnd_Callback qsavefile_atend_callback = nullptr;
    QSaveFile_Size_Callback qsavefile_size_callback = nullptr;
    QSaveFile_Resize_Callback qsavefile_resize_callback = nullptr;
    QSaveFile_Permissions_Callback qsavefile_permissions_callback = nullptr;
    QSaveFile_SetPermissions_Callback qsavefile_setpermissions_callback = nullptr;
    QSaveFile_ReadData_Callback qsavefile_readdata_callback = nullptr;
    QSaveFile_ReadLineData_Callback qsavefile_readlinedata_callback = nullptr;
    QSaveFile_Reset_Callback qsavefile_reset_callback = nullptr;
    QSaveFile_BytesAvailable_Callback qsavefile_bytesavailable_callback = nullptr;
    QSaveFile_BytesToWrite_Callback qsavefile_bytestowrite_callback = nullptr;
    QSaveFile_CanReadLine_Callback qsavefile_canreadline_callback = nullptr;
    QSaveFile_WaitForReadyRead_Callback qsavefile_waitforreadyread_callback = nullptr;
    QSaveFile_WaitForBytesWritten_Callback qsavefile_waitforbyteswritten_callback = nullptr;
    QSaveFile_SkipData_Callback qsavefile_skipdata_callback = nullptr;
    QSaveFile_Event_Callback qsavefile_event_callback = nullptr;
    QSaveFile_EventFilter_Callback qsavefile_eventfilter_callback = nullptr;
    QSaveFile_TimerEvent_Callback qsavefile_timerevent_callback = nullptr;
    QSaveFile_ChildEvent_Callback qsavefile_childevent_callback = nullptr;
    QSaveFile_CustomEvent_Callback qsavefile_customevent_callback = nullptr;
    QSaveFile_ConnectNotify_Callback qsavefile_connectnotify_callback = nullptr;
    QSaveFile_DisconnectNotify_Callback qsavefile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QSaveFile {
        using QSaveFile::childEvent;
        using QSaveFile::connectNotify;
        using QSaveFile::customEvent;
        using QSaveFile::disconnectNotify;
        using QSaveFile::readData;
        using QSaveFile::readLineData;
        using QSaveFile::skipData;
        using QSaveFile::timerEvent;
        using QSaveFile::writeData;
    };

    VirtualQSaveFile(const QString& name) : QSaveFile(name) {};
    VirtualQSaveFile() : QSaveFile() {};
    VirtualQSaveFile(const QString& name, QObject* parent) : QSaveFile(name, parent) {};
    VirtualQSaveFile(QObject* parent) : QSaveFile(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qsavefile_metaobject_callback) {
            QMetaObject* callback_ret = qsavefile_metaobject_callback(this);
            return callback_ret;
        }
        return QSaveFile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qsavefile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qsavefile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsavefile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qsavefile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QSaveFile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qsavefile_filename_callback) {
            const char* callback_ret = qsavefile_filename_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QSaveFile::fileName();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> flags) override {
        if (qsavefile_open_callback) {
            int cbval1 = static_cast<int>(flags);
            bool callback_ret = qsavefile_open_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::open(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qsavefile_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qsavefile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qsavefile_issequential_callback) {
            bool callback_ret = qsavefile_issequential_callback(this);
            return callback_ret;
        }
        return QSaveFile::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qsavefile_pos_callback) {
            long long callback_ret = qsavefile_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qsavefile_seek_callback) {
            long long cbval1 = static_cast<long long>(offset);
            bool callback_ret = qsavefile_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qsavefile_atend_callback) {
            bool callback_ret = qsavefile_atend_callback(this);
            return callback_ret;
        }
        return QSaveFile::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qsavefile_size_callback) {
            long long callback_ret = qsavefile_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qsavefile_resize_callback) {
            long long cbval1 = static_cast<long long>(sz);
            bool callback_ret = qsavefile_resize_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::resize(sz);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qsavefile_permissions_callback) {
            int callback_ret = qsavefile_permissions_callback(this);
            return static_cast<QFileDevice::Permissions>(callback_ret);
        }
        return QSaveFile::permissions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qsavefile_setpermissions_callback) {
            int cbval1 = static_cast<int>(permissionSpec);
            bool callback_ret = qsavefile_setpermissions_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::setPermissions(permissionSpec);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qsavefile_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsavefile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qsavefile_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qsavefile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qsavefile_reset_callback) {
            bool callback_ret = qsavefile_reset_callback(this);
            return callback_ret;
        }
        return QSaveFile::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qsavefile_bytesavailable_callback) {
            long long callback_ret = qsavefile_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qsavefile_bytestowrite_callback) {
            long long callback_ret = qsavefile_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qsavefile_canreadline_callback) {
            bool callback_ret = qsavefile_canreadline_callback(this);
            return callback_ret;
        }
        return QSaveFile::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qsavefile_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsavefile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qsavefile_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qsavefile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qsavefile_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qsavefile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QSaveFile::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qsavefile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qsavefile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QSaveFile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsavefile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qsavefile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QSaveFile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsavefile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qsavefile_timerevent_callback(this, cbval1);
            return;
        }
        QSaveFile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsavefile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qsavefile_childevent_callback(this, cbval1);
            return;
        }
        QSaveFile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsavefile_customevent_callback) {
            QEvent* cbval1 = event;
            qsavefile_customevent_callback(this, cbval1);
            return;
        }
        QSaveFile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsavefile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsavefile_connectnotify_callback(this, cbval1);
            return;
        }
        QSaveFile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsavefile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qsavefile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QSaveFile::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QSaveFile_SuperWriteData(QSaveFile* self, const char* data, long long len);
    friend long long QSaveFile_SuperReadData(QSaveFile* self, char* data, long long maxlen);
    friend long long QSaveFile_SuperReadLineData(QSaveFile* self, char* data, long long maxlen);
    friend long long QSaveFile_SuperSkipData(QSaveFile* self, long long maxSize);
    friend void QSaveFile_SuperTimerEvent(QSaveFile* self, QTimerEvent* event);
    friend void QSaveFile_SuperChildEvent(QSaveFile* self, QChildEvent* event);
    friend void QSaveFile_SuperCustomEvent(QSaveFile* self, QEvent* event);
    friend void QSaveFile_SuperConnectNotify(QSaveFile* self, const QMetaMethod* signal);
    friend void QSaveFile_SuperDisconnectNotify(QSaveFile* self, const QMetaMethod* signal);
};

#endif
