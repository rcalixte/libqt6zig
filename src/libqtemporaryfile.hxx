#pragma once
#ifndef LIBQTEMPORARYFILE_HXX
#define LIBQTEMPORARYFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTemporaryFile
class VirtualQTemporaryFile final : public QTemporaryFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTemporaryFile_MetaObject_Callback = QMetaObject* (*)(const QTemporaryFile*);
    using QTemporaryFile_Metacast_Callback = void* (*)(QTemporaryFile*, const char*);
    using QTemporaryFile_Metacall_Callback = int (*)(QTemporaryFile*, int, int, void**);
    using QTemporaryFile_FileName_Callback = const char* (*)(const QTemporaryFile*);
    using QTemporaryFile_Open2_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_Size_Callback = long long (*)(const QTemporaryFile*);
    using QTemporaryFile_Resize_Callback = bool (*)(QTemporaryFile*, long long);
    using QTemporaryFile_Permissions_Callback = int (*)(const QTemporaryFile*);
    using QTemporaryFile_SetPermissions_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_Close_Callback = void (*)(QTemporaryFile*);
    using QTemporaryFile_IsSequential_Callback = bool (*)(const QTemporaryFile*);
    using QTemporaryFile_Pos_Callback = long long (*)(const QTemporaryFile*);
    using QTemporaryFile_Seek_Callback = bool (*)(QTemporaryFile*, long long);
    using QTemporaryFile_AtEnd_Callback = bool (*)(const QTemporaryFile*);
    using QTemporaryFile_ReadData_Callback = long long (*)(QTemporaryFile*, char*, long long);
    using QTemporaryFile_WriteData_Callback = long long (*)(QTemporaryFile*, const char*, long long);
    using QTemporaryFile_ReadLineData_Callback = long long (*)(QTemporaryFile*, char*, long long);
    using QTemporaryFile_Reset_Callback = bool (*)(QTemporaryFile*);
    using QTemporaryFile_BytesAvailable_Callback = long long (*)(const QTemporaryFile*);
    using QTemporaryFile_BytesToWrite_Callback = long long (*)(const QTemporaryFile*);
    using QTemporaryFile_CanReadLine_Callback = bool (*)(const QTemporaryFile*);
    using QTemporaryFile_WaitForReadyRead_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_WaitForBytesWritten_Callback = bool (*)(QTemporaryFile*, int);
    using QTemporaryFile_SkipData_Callback = long long (*)(QTemporaryFile*, long long);
    using QTemporaryFile_Event_Callback = bool (*)(QTemporaryFile*, QEvent*);
    using QTemporaryFile_EventFilter_Callback = bool (*)(QTemporaryFile*, QObject*, QEvent*);
    using QTemporaryFile_TimerEvent_Callback = void (*)(QTemporaryFile*, QTimerEvent*);
    using QTemporaryFile_ChildEvent_Callback = void (*)(QTemporaryFile*, QChildEvent*);
    using QTemporaryFile_CustomEvent_Callback = void (*)(QTemporaryFile*, QEvent*);
    using QTemporaryFile_ConnectNotify_Callback = void (*)(QTemporaryFile*, QMetaMethod*);
    using QTemporaryFile_DisconnectNotify_Callback = void (*)(QTemporaryFile*, QMetaMethod*);
    using QTemporaryFile::isSignalConnected;
    using QTemporaryFile::receivers;
    using QTemporaryFile::sender;
    using QTemporaryFile::senderSignalIndex;
    using QTemporaryFile::setErrorString;
    using QTemporaryFile::setOpenMode;

    // Instance callback storage
    QTemporaryFile_MetaObject_Callback qtemporaryfile_metaobject_callback = nullptr;
    QTemporaryFile_Metacast_Callback qtemporaryfile_metacast_callback = nullptr;
    QTemporaryFile_Metacall_Callback qtemporaryfile_metacall_callback = nullptr;
    QTemporaryFile_FileName_Callback qtemporaryfile_filename_callback = nullptr;
    QTemporaryFile_Open2_Callback qtemporaryfile_open2_callback = nullptr;
    QTemporaryFile_Size_Callback qtemporaryfile_size_callback = nullptr;
    QTemporaryFile_Resize_Callback qtemporaryfile_resize_callback = nullptr;
    QTemporaryFile_Permissions_Callback qtemporaryfile_permissions_callback = nullptr;
    QTemporaryFile_SetPermissions_Callback qtemporaryfile_setpermissions_callback = nullptr;
    QTemporaryFile_Close_Callback qtemporaryfile_close_callback = nullptr;
    QTemporaryFile_IsSequential_Callback qtemporaryfile_issequential_callback = nullptr;
    QTemporaryFile_Pos_Callback qtemporaryfile_pos_callback = nullptr;
    QTemporaryFile_Seek_Callback qtemporaryfile_seek_callback = nullptr;
    QTemporaryFile_AtEnd_Callback qtemporaryfile_atend_callback = nullptr;
    QTemporaryFile_ReadData_Callback qtemporaryfile_readdata_callback = nullptr;
    QTemporaryFile_WriteData_Callback qtemporaryfile_writedata_callback = nullptr;
    QTemporaryFile_ReadLineData_Callback qtemporaryfile_readlinedata_callback = nullptr;
    QTemporaryFile_Reset_Callback qtemporaryfile_reset_callback = nullptr;
    QTemporaryFile_BytesAvailable_Callback qtemporaryfile_bytesavailable_callback = nullptr;
    QTemporaryFile_BytesToWrite_Callback qtemporaryfile_bytestowrite_callback = nullptr;
    QTemporaryFile_CanReadLine_Callback qtemporaryfile_canreadline_callback = nullptr;
    QTemporaryFile_WaitForReadyRead_Callback qtemporaryfile_waitforreadyread_callback = nullptr;
    QTemporaryFile_WaitForBytesWritten_Callback qtemporaryfile_waitforbyteswritten_callback = nullptr;
    QTemporaryFile_SkipData_Callback qtemporaryfile_skipdata_callback = nullptr;
    QTemporaryFile_Event_Callback qtemporaryfile_event_callback = nullptr;
    QTemporaryFile_EventFilter_Callback qtemporaryfile_eventfilter_callback = nullptr;
    QTemporaryFile_TimerEvent_Callback qtemporaryfile_timerevent_callback = nullptr;
    QTemporaryFile_ChildEvent_Callback qtemporaryfile_childevent_callback = nullptr;
    QTemporaryFile_CustomEvent_Callback qtemporaryfile_customevent_callback = nullptr;
    QTemporaryFile_ConnectNotify_Callback qtemporaryfile_connectnotify_callback = nullptr;
    QTemporaryFile_DisconnectNotify_Callback qtemporaryfile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTemporaryFile {
        using QTemporaryFile::childEvent;
        using QTemporaryFile::connectNotify;
        using QTemporaryFile::customEvent;
        using QTemporaryFile::disconnectNotify;
        using QTemporaryFile::open;
        using QTemporaryFile::readData;
        using QTemporaryFile::readLineData;
        using QTemporaryFile::skipData;
        using QTemporaryFile::timerEvent;
        using QTemporaryFile::writeData;
    };

    VirtualQTemporaryFile() : QTemporaryFile() {};
    VirtualQTemporaryFile(const QString& templateName) : QTemporaryFile(templateName) {};
    VirtualQTemporaryFile(QObject* parent) : QTemporaryFile(parent) {};
    VirtualQTemporaryFile(const QString& templateName, QObject* parent) : QTemporaryFile(templateName, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtemporaryfile_metaobject_callback) {
            QMetaObject* callback_ret = qtemporaryfile_metaobject_callback(this);
            return callback_ret;
        }
        return QTemporaryFile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtemporaryfile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtemporaryfile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtemporaryfile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtemporaryfile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTemporaryFile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qtemporaryfile_filename_callback) {
            const char* callback_ret = qtemporaryfile_filename_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QTemporaryFile::fileName();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> flags) override {
        if (qtemporaryfile_open2_callback) {
            int cbval1 = static_cast<int>(flags);
            bool callback_ret = qtemporaryfile_open2_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::open(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qtemporaryfile_size_callback) {
            long long callback_ret = qtemporaryfile_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qtemporaryfile_resize_callback) {
            long long cbval1 = static_cast<long long>(sz);
            bool callback_ret = qtemporaryfile_resize_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::resize(sz);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qtemporaryfile_permissions_callback) {
            int callback_ret = qtemporaryfile_permissions_callback(this);
            return static_cast<QFileDevice::Permissions>(callback_ret);
        }
        return QTemporaryFile::permissions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qtemporaryfile_setpermissions_callback) {
            int cbval1 = static_cast<int>(permissionSpec);
            bool callback_ret = qtemporaryfile_setpermissions_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::setPermissions(permissionSpec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qtemporaryfile_close_callback) {
            qtemporaryfile_close_callback(this);
            return;
        }
        QTemporaryFile::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qtemporaryfile_issequential_callback) {
            bool callback_ret = qtemporaryfile_issequential_callback(this);
            return callback_ret;
        }
        return QTemporaryFile::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qtemporaryfile_pos_callback) {
            long long callback_ret = qtemporaryfile_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qtemporaryfile_seek_callback) {
            long long cbval1 = static_cast<long long>(offset);
            bool callback_ret = qtemporaryfile_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qtemporaryfile_atend_callback) {
            bool callback_ret = qtemporaryfile_atend_callback(this);
            return callback_ret;
        }
        return QTemporaryFile::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qtemporaryfile_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qtemporaryfile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qtemporaryfile_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qtemporaryfile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qtemporaryfile_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qtemporaryfile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qtemporaryfile_reset_callback) {
            bool callback_ret = qtemporaryfile_reset_callback(this);
            return callback_ret;
        }
        return QTemporaryFile::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qtemporaryfile_bytesavailable_callback) {
            long long callback_ret = qtemporaryfile_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qtemporaryfile_bytestowrite_callback) {
            long long callback_ret = qtemporaryfile_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qtemporaryfile_canreadline_callback) {
            bool callback_ret = qtemporaryfile_canreadline_callback(this);
            return callback_ret;
        }
        return QTemporaryFile::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qtemporaryfile_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtemporaryfile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qtemporaryfile_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qtemporaryfile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qtemporaryfile_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qtemporaryfile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QTemporaryFile::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtemporaryfile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qtemporaryfile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTemporaryFile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtemporaryfile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtemporaryfile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTemporaryFile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtemporaryfile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtemporaryfile_timerevent_callback(this, cbval1);
            return;
        }
        QTemporaryFile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtemporaryfile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtemporaryfile_childevent_callback(this, cbval1);
            return;
        }
        QTemporaryFile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtemporaryfile_customevent_callback) {
            QEvent* cbval1 = event;
            qtemporaryfile_customevent_callback(this, cbval1);
            return;
        }
        QTemporaryFile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtemporaryfile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtemporaryfile_connectnotify_callback(this, cbval1);
            return;
        }
        QTemporaryFile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtemporaryfile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtemporaryfile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTemporaryFile::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QTemporaryFile_SuperOpen2(QTemporaryFile* self, int flags);
    friend long long QTemporaryFile_SuperReadData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_SuperWriteData(QTemporaryFile* self, const char* data, long long len);
    friend long long QTemporaryFile_SuperReadLineData(QTemporaryFile* self, char* data, long long maxlen);
    friend long long QTemporaryFile_SuperSkipData(QTemporaryFile* self, long long maxSize);
    friend void QTemporaryFile_SuperTimerEvent(QTemporaryFile* self, QTimerEvent* event);
    friend void QTemporaryFile_SuperChildEvent(QTemporaryFile* self, QChildEvent* event);
    friend void QTemporaryFile_SuperCustomEvent(QTemporaryFile* self, QEvent* event);
    friend void QTemporaryFile_SuperConnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
    friend void QTemporaryFile_SuperDisconnectNotify(QTemporaryFile* self, const QMetaMethod* signal);
};

#endif
