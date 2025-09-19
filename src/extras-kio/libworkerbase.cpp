#include <KConfigGroup>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__AuthInfo
#include <KIO/MetaData>
#include <KIO/UDSEntry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerBase
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__WorkerResult
#include <KRemoteEncoding>
#include <QByteArray>
#include <QDateTime>
#include <QHostInfo>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <workerbase.h>
#include "libworkerbase.h"
#include "libworkerbase.hxx"

KIO__WorkerResult* KIO__WorkerResult_new(const KIO__WorkerResult* param1) {
    return new KIO::WorkerResult(*param1);
}

void KIO__WorkerResult_OperatorAssign(KIO__WorkerResult* self, const KIO__WorkerResult* param1) {
    self->operator=(*param1);
}

bool KIO__WorkerResult_Success(const KIO__WorkerResult* self) {
    return self->success();
}

int KIO__WorkerResult_Error(const KIO__WorkerResult* self) {
    return self->error();
}

libqt_string KIO__WorkerResult_ErrorString(const KIO__WorkerResult* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__WorkerResult* KIO__WorkerResult_Fail() {
    return new KIO::WorkerResult(KIO::WorkerResult::fail());
}

KIO__WorkerResult* KIO__WorkerResult_Pass() {
    return new KIO::WorkerResult(KIO::WorkerResult::pass());
}

KIO__WorkerResult* KIO__WorkerResult_Fail1(int _error) {
    return new KIO::WorkerResult(KIO::WorkerResult::fail(static_cast<int>(_error)));
}

KIO__WorkerResult* KIO__WorkerResult_Fail2(int _error, const libqt_string _errorString) {
    QString _errorString_QString = QString::fromUtf8(_errorString.data, _errorString.len);
    return new KIO::WorkerResult(KIO::WorkerResult::fail(static_cast<int>(_error), _errorString_QString));
}

void KIO__WorkerResult_Delete(KIO__WorkerResult* self) {
    delete self;
}

KIO__WorkerBase* KIO__WorkerBase_new(const libqt_string protocol, const libqt_string poolSocket, const libqt_string appSocket) {
    QByteArray protocol_QByteArray(protocol.data, protocol.len);
    QByteArray poolSocket_QByteArray(poolSocket.data, poolSocket.len);
    QByteArray appSocket_QByteArray(appSocket.data, appSocket.len);
    return new VirtualKIOWorkerBase(protocol_QByteArray, poolSocket_QByteArray, appSocket_QByteArray);
}

void KIO__WorkerBase_Exit(KIO__WorkerBase* self) {
    self->exit();
}

void KIO__WorkerBase_DispatchLoop(KIO__WorkerBase* self) {
    self->dispatchLoop();
}

void KIO__WorkerBase_Data(KIO__WorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->data(data_QByteArray);
}

void KIO__WorkerBase_DataReq(KIO__WorkerBase* self) {
    self->dataReq();
}

void KIO__WorkerBase_WorkerStatus(KIO__WorkerBase* self, const libqt_string host, bool connected) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    self->workerStatus(host_QString, connected);
}

void KIO__WorkerBase_StatEntry(KIO__WorkerBase* self, const KIO__UDSEntry* _entry) {
    self->statEntry(*_entry);
}

void KIO__WorkerBase_ListEntries(KIO__WorkerBase* self, const libqt_list /* of KIO__UDSEntry* */ _entry) {
    QList<KIO::UDSEntry> _entry_QList;
    _entry_QList.reserve(_entry.len);
    KIO__UDSEntry** _entry_arr = static_cast<KIO__UDSEntry**>(_entry.data);
    for (size_t i = 0; i < _entry.len; ++i) {
        _entry_QList.push_back(*(_entry_arr[i]));
    }
    self->listEntries(_entry_QList);
}

bool KIO__WorkerBase_CanResume(KIO__WorkerBase* self, unsigned long long offset) {
    return self->canResume(static_cast<KIO::filesize_t>(offset));
}

void KIO__WorkerBase_CanResume2(KIO__WorkerBase* self) {
    self->canResume();
}

void KIO__WorkerBase_TotalSize(KIO__WorkerBase* self, unsigned long long _bytes) {
    self->totalSize(static_cast<KIO::filesize_t>(_bytes));
}

void KIO__WorkerBase_ProcessedSize(KIO__WorkerBase* self, unsigned long long _bytes) {
    self->processedSize(static_cast<KIO::filesize_t>(_bytes));
}

void KIO__WorkerBase_Position(KIO__WorkerBase* self, unsigned long long _pos) {
    self->position(static_cast<KIO::filesize_t>(_pos));
}

void KIO__WorkerBase_Written(KIO__WorkerBase* self, unsigned long long _bytes) {
    self->written(static_cast<KIO::filesize_t>(_bytes));
}

void KIO__WorkerBase_Truncated(KIO__WorkerBase* self, unsigned long long _length) {
    self->truncated(static_cast<KIO::filesize_t>(_length));
}

void KIO__WorkerBase_Speed(KIO__WorkerBase* self, unsigned long _bytes_per_second) {
    self->speed(static_cast<unsigned long>(_bytes_per_second));
}

void KIO__WorkerBase_Redirection(KIO__WorkerBase* self, const QUrl* _url) {
    self->redirection(*_url);
}

void KIO__WorkerBase_ErrorPage(KIO__WorkerBase* self) {
    self->errorPage();
}

void KIO__WorkerBase_MimeType(KIO__WorkerBase* self, const libqt_string _type) {
    QString _type_QString = QString::fromUtf8(_type.data, _type.len);
    self->mimeType(_type_QString);
}

void KIO__WorkerBase_Warning(KIO__WorkerBase* self, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->warning(msg_QString);
}

void KIO__WorkerBase_InfoMessage(KIO__WorkerBase* self, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->infoMessage(msg_QString);
}

int KIO__WorkerBase_MessageBox(KIO__WorkerBase* self, int typeVal, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->messageBox(static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), text_QString);
}

int KIO__WorkerBase_MessageBox2(KIO__WorkerBase* self, const libqt_string text, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->messageBox(text_QString, static_cast<KIO::WorkerBase::MessageBoxType>(typeVal));
}

int KIO__WorkerBase_SslError(KIO__WorkerBase* self, const libqt_map /* of libqt_string to QVariant* */ sslData) {
    QMap<QString, QVariant> sslData_QMap;
    libqt_string* sslData_karr = static_cast<libqt_string*>(sslData.keys);
    QVariant** sslData_varr = static_cast<QVariant**>(sslData.values);
    for (size_t i = 0; i < sslData.len; ++i) {
        QString sslData_karr_i_QString = QString::fromUtf8(sslData_karr[i].data, sslData_karr[i].len);
        sslData_QMap[sslData_karr_i_QString] = *(sslData_varr[i]);
    }
    return self->sslError(sslData_QMap);
}

void KIO__WorkerBase_SetMetaData(KIO__WorkerBase* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setMetaData(key_QString, value_QString);
}

bool KIO__WorkerBase_HasMetaData(const KIO__WorkerBase* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->hasMetaData(key_QString);
}

libqt_string KIO__WorkerBase_MetaData(const KIO__WorkerBase* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->metaData(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__MetaData* KIO__WorkerBase_AllMetaData(const KIO__WorkerBase* self) {
    return new KIO::MetaData(self->allMetaData());
}

libqt_map /* of libqt_string to QVariant* */ KIO__WorkerBase_MapConfig(const KIO__WorkerBase* self) {
    QMap<QString, QVariant> _ret = self->mapConfig();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool KIO__WorkerBase_ConfigValue(const KIO__WorkerBase* self, const libqt_string key, bool defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->configValue(key_QString, defaultValue);
}

int KIO__WorkerBase_ConfigValue2(const KIO__WorkerBase* self, const libqt_string key, int defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->configValue(key_QString, static_cast<int>(defaultValue));
}

libqt_string KIO__WorkerBase_ConfigValue3(const KIO__WorkerBase* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->configValue(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfigGroup* KIO__WorkerBase_Config(KIO__WorkerBase* self) {
    return self->config();
}

KRemoteEncoding* KIO__WorkerBase_RemoteEncoding(KIO__WorkerBase* self) {
    return self->remoteEncoding();
}

void KIO__WorkerBase_AppConnectionMade(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        self->appConnectionMade();
    } else {
        ((VirtualKIOWorkerBase*)self)->appConnectionMade();
    }
}

void KIO__WorkerBase_SetHost(KIO__WorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        self->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    } else {
        ((VirtualKIOWorkerBase*)self)->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    }
}

KIO__WorkerResult* KIO__WorkerBase_OpenConnection(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->openConnection());
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->openConnection());
    }
}

void KIO__WorkerBase_CloseConnection(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        self->closeConnection();
    } else {
        ((VirtualKIOWorkerBase*)self)->closeConnection();
    }
}

KIO__WorkerResult* KIO__WorkerBase_Get(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->get(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->get(*url));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Open(KIO__WorkerBase* self, const QUrl* url, int mode) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Read(KIO__WorkerBase* self, unsigned long long size) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->read(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->read(static_cast<KIO::filesize_t>(size)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Write(KIO__WorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->write(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->write(data_QByteArray));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Seek(KIO__WorkerBase* self, unsigned long long offset) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->seek(static_cast<KIO::filesize_t>(offset)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->seek(static_cast<KIO::filesize_t>(offset)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Truncate(KIO__WorkerBase* self, unsigned long long size) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->truncate(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->truncate(static_cast<KIO::filesize_t>(size)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Close(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->close());
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->close());
    }
}

KIO__WorkerResult* KIO__WorkerBase_Put(KIO__WorkerBase* self, const QUrl* url, int permissions, int flags) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Stat(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->stat(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->stat(*url));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Mimetype(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->mimetype(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->mimetype(*url));
    }
}

KIO__WorkerResult* KIO__WorkerBase_ListDir(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->listDir(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->listDir(*url));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Mkdir(KIO__WorkerBase* self, const QUrl* url, int permissions) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->mkdir(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->mkdir(*url, static_cast<int>(permissions)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Rename(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Symlink(KIO__WorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Chmod(KIO__WorkerBase* self, const QUrl* url, int permissions) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->chmod(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->chmod(*url, static_cast<int>(permissions)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Chown(KIO__WorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->chown(*url, owner_QString, group_QString));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->chown(*url, owner_QString, group_QString));
    }
}

KIO__WorkerResult* KIO__WorkerBase_SetModificationTime(KIO__WorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->setModificationTime(*url, *mtime));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->setModificationTime(*url, *mtime));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Copy(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Del(KIO__WorkerBase* self, const QUrl* url, bool isfile) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->del(*url, isfile));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->del(*url, isfile));
    }
}

KIO__WorkerResult* KIO__WorkerBase_Special(KIO__WorkerBase* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->special(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->special(data_QByteArray));
    }
}

KIO__WorkerResult* KIO__WorkerBase_FileSystemFreeSpace(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        return new KIO::WorkerResult(self->fileSystemFreeSpace(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->fileSystemFreeSpace(*url));
    }
}

void KIO__WorkerBase_WorkerStatus2(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        self->worker_status();
    } else {
        ((VirtualKIOWorkerBase*)self)->worker_status();
    }
}

void KIO__WorkerBase_ReparseConfiguration(KIO__WorkerBase* self) {
    auto* vkio__workerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkio__workerbase && vkio__workerbase->isVirtualKIOWorkerBase) {
        self->reparseConfiguration();
    } else {
        ((VirtualKIOWorkerBase*)self)->reparseConfiguration();
    }
}

int KIO__WorkerBase_ConnectTimeout(KIO__WorkerBase* self) {
    return self->connectTimeout();
}

int KIO__WorkerBase_ProxyConnectTimeout(KIO__WorkerBase* self) {
    return self->proxyConnectTimeout();
}

int KIO__WorkerBase_ResponseTimeout(KIO__WorkerBase* self) {
    return self->responseTimeout();
}

int KIO__WorkerBase_ReadTimeout(KIO__WorkerBase* self) {
    return self->readTimeout();
}

void KIO__WorkerBase_SetTimeoutSpecialCommand(KIO__WorkerBase* self, int timeout) {
    self->setTimeoutSpecialCommand(static_cast<int>(timeout));
}

int KIO__WorkerBase_ReadData(KIO__WorkerBase* self, libqt_string buffer) {
    QByteArray buffer_QByteArray(buffer.data, buffer.len);
    return self->readData(buffer_QByteArray);
}

void KIO__WorkerBase_ListEntry(KIO__WorkerBase* self, const KIO__UDSEntry* entry) {
    self->listEntry(*entry);
}

void KIO__WorkerBase_ConnectWorker(KIO__WorkerBase* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->connectWorker(path_QString);
}

void KIO__WorkerBase_DisconnectWorker(KIO__WorkerBase* self) {
    self->disconnectWorker();
}

int KIO__WorkerBase_OpenPasswordDialog(KIO__WorkerBase* self, KIO__AuthInfo* info) {
    return self->openPasswordDialog(*info);
}

bool KIO__WorkerBase_CheckCachedAuthentication(KIO__WorkerBase* self, KIO__AuthInfo* info) {
    return self->checkCachedAuthentication(*info);
}

bool KIO__WorkerBase_CacheAuthentication(KIO__WorkerBase* self, const KIO__AuthInfo* info) {
    return self->cacheAuthentication(*info);
}

int KIO__WorkerBase_WaitForAnswer(KIO__WorkerBase* self, int expected1, int expected2, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->waitForAnswer(static_cast<int>(expected1), static_cast<int>(expected2), data_QByteArray);
}

void KIO__WorkerBase_SendMetaData(KIO__WorkerBase* self) {
    self->sendMetaData();
}

void KIO__WorkerBase_SendAndKeepMetaData(KIO__WorkerBase* self) {
    self->sendAndKeepMetaData();
}

bool KIO__WorkerBase_WasKilled(const KIO__WorkerBase* self) {
    return self->wasKilled();
}

void KIO__WorkerBase_LookupHost(KIO__WorkerBase* self, const libqt_string host) {
    QString host_QString = QString::fromUtf8(host.data, host.len);
    self->lookupHost(host_QString);
}

int KIO__WorkerBase_WaitForHostInfo(KIO__WorkerBase* self, QHostInfo* info) {
    return self->waitForHostInfo(*info);
}

int KIO__WorkerBase_RequestPrivilegeOperation(KIO__WorkerBase* self, const libqt_string operationDetails) {
    QString operationDetails_QString = QString::fromUtf8(operationDetails.data, operationDetails.len);
    return static_cast<int>(self->requestPrivilegeOperation(operationDetails_QString));
}

void KIO__WorkerBase_AddTemporaryAuthorization(KIO__WorkerBase* self, const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    self->addTemporaryAuthorization(action_QString);
}

void KIO__WorkerBase_SetIncomingMetaData(KIO__WorkerBase* self, const KIO__MetaData* metaData) {
    self->setIncomingMetaData(*metaData);
}

int KIO__WorkerBase_MessageBox3(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->messageBox(static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), text_QString, title_QString);
}

int KIO__WorkerBase_MessageBox4(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    return self->messageBox(static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), text_QString, title_QString, primaryActionText_QString);
}

int KIO__WorkerBase_MessageBox5(KIO__WorkerBase* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondaryActionText_QString = QString::fromUtf8(secondaryActionText.data, secondaryActionText.len);
    return self->messageBox(static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), text_QString, title_QString, primaryActionText_QString, secondaryActionText_QString);
}

int KIO__WorkerBase_MessageBox32(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return self->messageBox(text_QString, static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), title_QString);
}

int KIO__WorkerBase_MessageBox42(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    return self->messageBox(text_QString, static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), title_QString, primaryActionText_QString);
}

int KIO__WorkerBase_MessageBox52(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondaryActionText_QString = QString::fromUtf8(secondaryActionText.data, secondaryActionText.len);
    return self->messageBox(text_QString, static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), title_QString, primaryActionText_QString, secondaryActionText_QString);
}

int KIO__WorkerBase_MessageBox6(KIO__WorkerBase* self, const libqt_string text, int typeVal, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondaryActionText, const libqt_string dontAskAgainName) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString primaryActionText_QString = QString::fromUtf8(primaryActionText.data, primaryActionText.len);
    QString secondaryActionText_QString = QString::fromUtf8(secondaryActionText.data, secondaryActionText.len);
    QString dontAskAgainName_QString = QString::fromUtf8(dontAskAgainName.data, dontAskAgainName.len);
    return self->messageBox(text_QString, static_cast<KIO::WorkerBase::MessageBoxType>(typeVal), title_QString, primaryActionText_QString, secondaryActionText_QString, dontAskAgainName_QString);
}

libqt_string KIO__WorkerBase_ConfigValue22(const KIO__WorkerBase* self, const libqt_string key, const libqt_string defaultValue) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
    QString _ret = self->configValue(key_QString, defaultValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__WorkerBase_SetTimeoutSpecialCommand2(KIO__WorkerBase* self, int timeout, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setTimeoutSpecialCommand(static_cast<int>(timeout), data_QByteArray);
}

int KIO__WorkerBase_OpenPasswordDialog2(KIO__WorkerBase* self, KIO__AuthInfo* info, const libqt_string errorMsg) {
    QString errorMsg_QString = QString::fromUtf8(errorMsg.data, errorMsg.len);
    return self->openPasswordDialog(*info, errorMsg_QString);
}

int KIO__WorkerBase_WaitForAnswer4(KIO__WorkerBase* self, int expected1, int expected2, libqt_string data, int* pCmd) {
    QByteArray data_QByteArray(data.data, data.len);
    return self->waitForAnswer(static_cast<int>(expected1), static_cast<int>(expected2), data_QByteArray, static_cast<int*>(pCmd));
}

// Base class handler implementation
void KIO__WorkerBase_QBaseAppConnectionMade(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_AppConnectionMade_IsBase(true);
        vkioworkerbase->appConnectionMade();
    } else {
        self->KIO::WorkerBase::appConnectionMade();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnAppConnectionMade(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_AppConnectionMade_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_AppConnectionMade_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WorkerBase_QBaseSetHost(KIO__WorkerBase* self, const libqt_string host, uint16_t port, const libqt_string user, const libqt_string pass) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    QString host_QString = QString::fromUtf8(host.data, host.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString pass_QString = QString::fromUtf8(pass.data, pass.len);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_SetHost_IsBase(true);
        vkioworkerbase->setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    } else {
        self->KIO::WorkerBase::setHost(host_QString, static_cast<quint16>(port), user_QString, pass_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnSetHost(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_SetHost_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_SetHost_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseOpenConnection(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_OpenConnection_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->openConnection());
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->openConnection());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnOpenConnection(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_OpenConnection_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_OpenConnection_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WorkerBase_QBaseCloseConnection(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_CloseConnection_IsBase(true);
        vkioworkerbase->closeConnection();
    } else {
        self->KIO::WorkerBase::closeConnection();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnCloseConnection(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_CloseConnection_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_CloseConnection_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseGet(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Get_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->get(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->get(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnGet(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Get_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Get_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseOpen(KIO__WorkerBase* self, const QUrl* url, int mode) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Open_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->open(*url, static_cast<QIODevice::OpenMode>(mode)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnOpen(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Open_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Open_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseRead(KIO__WorkerBase* self, unsigned long long size) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Read_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->read(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->read(static_cast<KIO::filesize_t>(size)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnRead(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Read_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Read_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseWrite(KIO__WorkerBase* self, const libqt_string data) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Write_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->write(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->write(data_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnWrite(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Write_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Write_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseSeek(KIO__WorkerBase* self, unsigned long long offset) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Seek_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->seek(static_cast<KIO::filesize_t>(offset)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->seek(static_cast<KIO::filesize_t>(offset)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnSeek(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Seek_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Seek_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseTruncate(KIO__WorkerBase* self, unsigned long long size) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Truncate_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->truncate(static_cast<KIO::filesize_t>(size)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->truncate(static_cast<KIO::filesize_t>(size)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnTruncate(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Truncate_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Truncate_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseClose(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Close_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->close());
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->close());
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnClose(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Close_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Close_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBasePut(KIO__WorkerBase* self, const QUrl* url, int permissions, int flags) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Put_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->put(*url, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnPut(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Put_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Put_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseStat(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Stat_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->stat(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->stat(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnStat(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Stat_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Stat_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseMimetype(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Mimetype_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->mimetype(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->mimetype(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnMimetype(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Mimetype_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Mimetype_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseListDir(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_ListDir_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->listDir(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->listDir(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnListDir(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_ListDir_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_ListDir_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseMkdir(KIO__WorkerBase* self, const QUrl* url, int permissions) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Mkdir_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->mkdir(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->mkdir(*url, static_cast<int>(permissions)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnMkdir(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Mkdir_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Mkdir_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseRename(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int flags) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Rename_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->rename(*src, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnRename(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Rename_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Rename_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseSymlink(KIO__WorkerBase* self, const libqt_string target, const QUrl* dest, int flags) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    QString target_QString = QString::fromUtf8(target.data, target.len);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Symlink_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->symlink(target_QString, *dest, static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnSymlink(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Symlink_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Symlink_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseChmod(KIO__WorkerBase* self, const QUrl* url, int permissions) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Chmod_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->chmod(*url, static_cast<int>(permissions)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->chmod(*url, static_cast<int>(permissions)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnChmod(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Chmod_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Chmod_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseChown(KIO__WorkerBase* self, const QUrl* url, const libqt_string owner, const libqt_string group) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    QString owner_QString = QString::fromUtf8(owner.data, owner.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Chown_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->chown(*url, owner_QString, group_QString));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->chown(*url, owner_QString, group_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnChown(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Chown_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Chown_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseSetModificationTime(KIO__WorkerBase* self, const QUrl* url, const QDateTime* mtime) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_SetModificationTime_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->setModificationTime(*url, *mtime));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->setModificationTime(*url, *mtime));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnSetModificationTime(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_SetModificationTime_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_SetModificationTime_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseCopy(KIO__WorkerBase* self, const QUrl* src, const QUrl* dest, int permissions, int flags) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Copy_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->copy(*src, *dest, static_cast<int>(permissions), static_cast<KIO::JobFlags>(flags)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnCopy(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Copy_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Copy_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseDel(KIO__WorkerBase* self, const QUrl* url, bool isfile) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Del_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->del(*url, isfile));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->del(*url, isfile));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnDel(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Del_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Del_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseSpecial(KIO__WorkerBase* self, const libqt_string data) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    QByteArray data_QByteArray(data.data, data.len);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Special_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->special(data_QByteArray));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->special(data_QByteArray));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnSpecial(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_Special_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_Special_Callback>(slot));
    }
}

// Base class handler implementation
KIO__WorkerResult* KIO__WorkerBase_QBaseFileSystemFreeSpace(KIO__WorkerBase* self, const QUrl* url) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_FileSystemFreeSpace_IsBase(true);
        return new KIO::WorkerResult(vkioworkerbase->fileSystemFreeSpace(*url));
    } else {
        return new KIO::WorkerResult(((VirtualKIOWorkerBase*)self)->fileSystemFreeSpace(*url));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnFileSystemFreeSpace(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_FileSystemFreeSpace_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_FileSystemFreeSpace_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WorkerBase_QBaseWorkerStatus2(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_WorkerStatus2_IsBase(true);
        vkioworkerbase->worker_status();
    } else {
        self->KIO::WorkerBase::worker_status();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnWorkerStatus2(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_WorkerStatus2_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_WorkerStatus2_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__WorkerBase_QBaseReparseConfiguration(KIO__WorkerBase* self) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_ReparseConfiguration_IsBase(true);
        vkioworkerbase->reparseConfiguration();
    } else {
        self->KIO::WorkerBase::reparseConfiguration();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__WorkerBase_OnReparseConfiguration(KIO__WorkerBase* self, intptr_t slot) {
    auto* vkioworkerbase = dynamic_cast<VirtualKIOWorkerBase*>(self);
    if (vkioworkerbase && vkioworkerbase->isVirtualKIOWorkerBase) {
        vkioworkerbase->setKIO__WorkerBase_ReparseConfiguration_Callback(reinterpret_cast<VirtualKIOWorkerBase::KIO__WorkerBase_ReparseConfiguration_Callback>(slot));
    }
}

void KIO__WorkerBase_Delete(KIO__WorkerBase* self) {
    delete self;
}

libqt_string KIO_UnsupportedActionErrorString(const libqt_string param1, int param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QString _ret = KIO::unsupportedActionErrorString(param1_QString, static_cast<int>(param2));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
