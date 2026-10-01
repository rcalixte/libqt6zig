#pragma once
#ifndef LIBQFILE_HXX
#define LIBQFILE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFile
class VirtualQFile final : public QFile {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFile_MetaObject_Callback = QMetaObject* (*)(const QFile*);
    using QFile_Metacast_Callback = void* (*)(QFile*, const char*);
    using QFile_Metacall_Callback = int (*)(QFile*, int, int, void**);
    using QFile_FileName_Callback = const char* (*)(const QFile*);
    using QFile_Open_Callback = bool (*)(QFile*, int);
    using QFile_Size_Callback = long long (*)(const QFile*);
    using QFile_Resize_Callback = bool (*)(QFile*, long long);
    using QFile_Permissions_Callback = int (*)(const QFile*);
    using QFile_SetPermissions_Callback = bool (*)(QFile*, int);
    using QFile_Close_Callback = void (*)(QFile*);
    using QFile_IsSequential_Callback = bool (*)(const QFile*);
    using QFile_Pos_Callback = long long (*)(const QFile*);
    using QFile_Seek_Callback = bool (*)(QFile*, long long);
    using QFile_AtEnd_Callback = bool (*)(const QFile*);
    using QFile_ReadData_Callback = long long (*)(QFile*, char*, long long);
    using QFile_WriteData_Callback = long long (*)(QFile*, const char*, long long);
    using QFile_ReadLineData_Callback = long long (*)(QFile*, char*, long long);
    using QFile_Reset_Callback = bool (*)(QFile*);
    using QFile_BytesAvailable_Callback = long long (*)(const QFile*);
    using QFile_BytesToWrite_Callback = long long (*)(const QFile*);
    using QFile_CanReadLine_Callback = bool (*)(const QFile*);
    using QFile_WaitForReadyRead_Callback = bool (*)(QFile*, int);
    using QFile_WaitForBytesWritten_Callback = bool (*)(QFile*, int);
    using QFile_SkipData_Callback = long long (*)(QFile*, long long);
    using QFile_Event_Callback = bool (*)(QFile*, QEvent*);
    using QFile_EventFilter_Callback = bool (*)(QFile*, QObject*, QEvent*);
    using QFile_TimerEvent_Callback = void (*)(QFile*, QTimerEvent*);
    using QFile_ChildEvent_Callback = void (*)(QFile*, QChildEvent*);
    using QFile_CustomEvent_Callback = void (*)(QFile*, QEvent*);
    using QFile_ConnectNotify_Callback = void (*)(QFile*, QMetaMethod*);
    using QFile_DisconnectNotify_Callback = void (*)(QFile*, QMetaMethod*);
    using QFile::isSignalConnected;
    using QFile::receivers;
    using QFile::sender;
    using QFile::senderSignalIndex;
    using QFile::setErrorString;
    using QFile::setOpenMode;

    // Instance callback storage
    QFile_MetaObject_Callback qfile_metaobject_callback = nullptr;
    QFile_Metacast_Callback qfile_metacast_callback = nullptr;
    QFile_Metacall_Callback qfile_metacall_callback = nullptr;
    QFile_FileName_Callback qfile_filename_callback = nullptr;
    QFile_Open_Callback qfile_open_callback = nullptr;
    QFile_Size_Callback qfile_size_callback = nullptr;
    QFile_Resize_Callback qfile_resize_callback = nullptr;
    QFile_Permissions_Callback qfile_permissions_callback = nullptr;
    QFile_SetPermissions_Callback qfile_setpermissions_callback = nullptr;
    QFile_Close_Callback qfile_close_callback = nullptr;
    QFile_IsSequential_Callback qfile_issequential_callback = nullptr;
    QFile_Pos_Callback qfile_pos_callback = nullptr;
    QFile_Seek_Callback qfile_seek_callback = nullptr;
    QFile_AtEnd_Callback qfile_atend_callback = nullptr;
    QFile_ReadData_Callback qfile_readdata_callback = nullptr;
    QFile_WriteData_Callback qfile_writedata_callback = nullptr;
    QFile_ReadLineData_Callback qfile_readlinedata_callback = nullptr;
    QFile_Reset_Callback qfile_reset_callback = nullptr;
    QFile_BytesAvailable_Callback qfile_bytesavailable_callback = nullptr;
    QFile_BytesToWrite_Callback qfile_bytestowrite_callback = nullptr;
    QFile_CanReadLine_Callback qfile_canreadline_callback = nullptr;
    QFile_WaitForReadyRead_Callback qfile_waitforreadyread_callback = nullptr;
    QFile_WaitForBytesWritten_Callback qfile_waitforbyteswritten_callback = nullptr;
    QFile_SkipData_Callback qfile_skipdata_callback = nullptr;
    QFile_Event_Callback qfile_event_callback = nullptr;
    QFile_EventFilter_Callback qfile_eventfilter_callback = nullptr;
    QFile_TimerEvent_Callback qfile_timerevent_callback = nullptr;
    QFile_ChildEvent_Callback qfile_childevent_callback = nullptr;
    QFile_CustomEvent_Callback qfile_customevent_callback = nullptr;
    QFile_ConnectNotify_Callback qfile_connectnotify_callback = nullptr;
    QFile_DisconnectNotify_Callback qfile_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QFile {
        using QFile::childEvent;
        using QFile::connectNotify;
        using QFile::customEvent;
        using QFile::disconnectNotify;
        using QFile::readData;
        using QFile::readLineData;
        using QFile::skipData;
        using QFile::timerEvent;
        using QFile::writeData;
    };

    VirtualQFile() : QFile() {};
    VirtualQFile(const QString& name) : QFile(name) {};
    VirtualQFile(QObject* parent) : QFile(parent) {};
    VirtualQFile(const QString& name, QObject* parent) : QFile(name, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qfile_metaobject_callback) {
            QMetaObject* callback_ret = qfile_metaobject_callback(this);
            return callback_ret;
        }
        return QFile::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qfile_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qfile_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfile_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qfile_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QFile::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString fileName() const override {
        if (qfile_filename_callback) {
            const char* callback_ret = qfile_filename_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QFile::fileName();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool open(QFlags<QIODeviceBase::OpenModeFlag> flags) override {
        if (qfile_open_callback) {
            int cbval1 = static_cast<int>(flags);
            bool callback_ret = qfile_open_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::open(flags);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 size() const override {
        if (qfile_size_callback) {
            long long callback_ret = qfile_size_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::size();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool resize(qint64 sz) override {
        if (qfile_resize_callback) {
            long long cbval1 = static_cast<long long>(sz);
            bool callback_ret = qfile_resize_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::resize(sz);
    }

    // Virtual method for C ABI access and custom callback
    virtual QFileDevice::Permissions permissions() const override {
        if (qfile_permissions_callback) {
            int callback_ret = qfile_permissions_callback(this);
            return static_cast<QFileDevice::Permissions>(callback_ret);
        }
        return QFile::permissions();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
        if (qfile_setpermissions_callback) {
            int cbval1 = static_cast<int>(permissionSpec);
            bool callback_ret = qfile_setpermissions_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::setPermissions(permissionSpec);
    }

    // Virtual method for C ABI access and custom callback
    virtual void close() override {
        if (qfile_close_callback) {
            qfile_close_callback(this);
            return;
        }
        QFile::close();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSequential() const override {
        if (qfile_issequential_callback) {
            bool callback_ret = qfile_issequential_callback(this);
            return callback_ret;
        }
        return QFile::isSequential();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 pos() const override {
        if (qfile_pos_callback) {
            long long callback_ret = qfile_pos_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::pos();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool seek(qint64 offset) override {
        if (qfile_seek_callback) {
            long long cbval1 = static_cast<long long>(offset);
            bool callback_ret = qfile_seek_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::seek(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool atEnd() const override {
        if (qfile_atend_callback) {
            bool callback_ret = qfile_atend_callback(this);
            return callback_ret;
        }
        return QFile::atEnd();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readData(char* data, qint64 maxlen) override {
        if (qfile_readdata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qfile_readdata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::readData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 writeData(const char* data, qint64 len) override {
        if (qfile_writedata_callback) {
            const char* cbval1 = (const char*)data;
            long long cbval2 = static_cast<long long>(len);
            long long callback_ret = qfile_writedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::writeData(data, len);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 readLineData(char* data, qint64 maxlen) override {
        if (qfile_readlinedata_callback) {
            char* cbval1 = data;
            long long cbval2 = static_cast<long long>(maxlen);
            long long callback_ret = qfile_readlinedata_callback(this, cbval1, cbval2);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::readLineData(data, maxlen);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reset() override {
        if (qfile_reset_callback) {
            bool callback_ret = qfile_reset_callback(this);
            return callback_ret;
        }
        return QFile::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesAvailable() const override {
        if (qfile_bytesavailable_callback) {
            long long callback_ret = qfile_bytesavailable_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::bytesAvailable();
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 bytesToWrite() const override {
        if (qfile_bytestowrite_callback) {
            long long callback_ret = qfile_bytestowrite_callback(this);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::bytesToWrite();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canReadLine() const override {
        if (qfile_canreadline_callback) {
            bool callback_ret = qfile_canreadline_callback(this);
            return callback_ret;
        }
        return QFile::canReadLine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForReadyRead(int msecs) override {
        if (qfile_waitforreadyread_callback) {
            int cbval1 = msecs;
            bool callback_ret = qfile_waitforreadyread_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::waitForReadyRead(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool waitForBytesWritten(int msecs) override {
        if (qfile_waitforbyteswritten_callback) {
            int cbval1 = msecs;
            bool callback_ret = qfile_waitforbyteswritten_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::waitForBytesWritten(msecs);
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 skipData(qint64 maxSize) override {
        if (qfile_skipdata_callback) {
            long long cbval1 = static_cast<long long>(maxSize);
            long long callback_ret = qfile_skipdata_callback(this, cbval1);
            return static_cast<qint64>(callback_ret);
        }
        return QFile::skipData(maxSize);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfile_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qfile_event_callback(this, cbval1);
            return callback_ret;
        }
        return QFile::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qfile_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qfile_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFile::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfile_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qfile_timerevent_callback(this, cbval1);
            return;
        }
        QFile::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfile_childevent_callback) {
            QChildEvent* cbval1 = event;
            qfile_childevent_callback(this, cbval1);
            return;
        }
        QFile::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfile_customevent_callback) {
            QEvent* cbval1 = event;
            qfile_customevent_callback(this, cbval1);
            return;
        }
        QFile::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfile_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfile_connectnotify_callback(this, cbval1);
            return;
        }
        QFile::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfile_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qfile_disconnectnotify_callback(this, cbval1);
            return;
        }
        QFile::disconnectNotify(signal);
    }

    // Friend functions
    friend long long QFile_SuperReadData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SuperWriteData(QFile* self, const char* data, long long len);
    friend long long QFile_SuperReadLineData(QFile* self, char* data, long long maxlen);
    friend long long QFile_SuperSkipData(QFile* self, long long maxSize);
    friend void QFile_SuperTimerEvent(QFile* self, QTimerEvent* event);
    friend void QFile_SuperChildEvent(QFile* self, QChildEvent* event);
    friend void QFile_SuperCustomEvent(QFile* self, QEvent* event);
    friend void QFile_SuperConnectNotify(QFile* self, const QMetaMethod* signal);
    friend void QFile_SuperDisconnectNotify(QFile* self, const QMetaMethod* signal);
};

#endif
