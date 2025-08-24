#include <KConfig>
#include <KConfigBase>
#include <KConfigGroup>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kconfig.h>
#include "libkconfig.h"
#include "libkconfig.hxx"

KConfig* KConfig_new() {
    return new VirtualKConfig();
}

KConfig* KConfig_new2(const libqt_string file, const libqt_string backend) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    QString backend_QString = QString::fromUtf8(backend.data, backend.len);
    return new VirtualKConfig(file_QString, backend_QString);
}

KConfig* KConfig_new3(const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualKConfig(file_QString);
}

KConfig* KConfig_new4(const libqt_string file, int mode) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualKConfig(file_QString, static_cast<KConfig::OpenFlags>(mode));
}

KConfig* KConfig_new5(const libqt_string file, int mode, int typeVal) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return new VirtualKConfig(file_QString, static_cast<KConfig::OpenFlags>(mode), static_cast<QStandardPaths::StandardLocation>(typeVal));
}

KConfig* KConfig_new6(const libqt_string file, const libqt_string backend, int typeVal) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    QString backend_QString = QString::fromUtf8(backend.data, backend.len);
    return new VirtualKConfig(file_QString, backend_QString, static_cast<QStandardPaths::StandardLocation>(typeVal));
}

int KConfig_LocationType(const KConfig* self) {
    return static_cast<int>(self->locationType());
}

libqt_string KConfig_Name(const KConfig* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KConfig_OpenFlags(const KConfig* self) {
    return static_cast<int>(self->openFlags());
}

bool KConfig_IsDirty(const KConfig* self) {
    return self->isDirty();
}

bool KConfig_IsConfigWritable(KConfig* self, bool warnUser) {
    return self->isConfigWritable(warnUser);
}

KConfig* KConfig_CopyTo(const KConfig* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return self->copyTo(file_QString);
}

void KConfig_CheckUpdate(KConfig* self, const libqt_string id, const libqt_string updateFile) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    QString updateFile_QString = QString::fromUtf8(updateFile.data, updateFile.len);
    self->checkUpdate(id_QString, updateFile_QString);
}

void KConfig_ReparseConfiguration(KConfig* self) {
    self->reparseConfiguration();
}

void KConfig_AddConfigSources(KConfig* self, const libqt_list /* of libqt_string */ sources) {
    QList<QString> sources_QList;
    sources_QList.reserve(sources.len);
    libqt_string* sources_arr = static_cast<libqt_string*>(sources.data);
    for (size_t i = 0; i < sources.len; ++i) {
        QString sources_arr_i_QString = QString::fromUtf8(sources_arr[i].data, sources_arr[i].len);
        sources_QList.push_back(sources_arr_i_QString);
    }
    self->addConfigSources(sources_QList);
}

libqt_list /* of libqt_string */ KConfig_AdditionalConfigSources(const KConfig* self) {
    QList<QString> _ret = self->additionalConfigSources();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KConfig_Locale(const KConfig* self) {
    QString _ret = self->locale();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KConfig_SetLocale(KConfig* self, const libqt_string aLocale) {
    QString aLocale_QString = QString::fromUtf8(aLocale.data, aLocale.len);
    return self->setLocale(aLocale_QString);
}

void KConfig_SetReadDefaults(KConfig* self, bool b) {
    self->setReadDefaults(b);
}

bool KConfig_ReadDefaults(const KConfig* self) {
    return self->readDefaults();
}

libqt_map /* of libqt_string to libqt_string */ KConfig_EntryMap(const KConfig* self) {
    QMap<QString, QString> _ret = self->entryMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void KConfig_SetMainConfigName(const libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    KConfig::setMainConfigName(str_QString);
}

libqt_string KConfig_MainConfigName() {
    QString _ret = KConfig::mainConfigName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfig* KConfig_CopyTo2(const KConfig* self, const libqt_string file, KConfig* config) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return self->copyTo(file_QString, config);
}

libqt_map /* of libqt_string to libqt_string */ KConfig_EntryMap1(const KConfig* self, const libqt_string aGroup) {
    QString aGroup_QString = QString::fromUtf8(aGroup.data, aGroup.len);
    QMap<QString, QString> _ret = self->entryMap(aGroup_QString);
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

// Derived class handler implementation
bool KConfig_Sync(KConfig* self) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return vkconfig->sync();
    } else {
        return self->KConfig::sync();
    }
}

// Base class handler implementation
bool KConfig_QBaseSync(KConfig* self) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_Sync_IsBase(true);
        return vkconfig->sync();
    } else {
        return self->KConfig::sync();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnSync(KConfig* self, intptr_t slot) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_Sync_Callback(reinterpret_cast<VirtualKConfig::KConfig_Sync_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfig_MarkAsClean(KConfig* self) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->markAsClean();
    } else {
        self->KConfig::markAsClean();
    }
}

// Base class handler implementation
void KConfig_QBaseMarkAsClean(KConfig* self) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_MarkAsClean_IsBase(true);
        vkconfig->markAsClean();
    } else {
        self->KConfig::markAsClean();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnMarkAsClean(KConfig* self, intptr_t slot) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_MarkAsClean_Callback(reinterpret_cast<VirtualKConfig::KConfig_MarkAsClean_Callback>(slot));
    }
}

// Derived class handler implementation
int KConfig_AccessMode(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return static_cast<int>(vkconfig->accessMode());
    } else {
        return static_cast<int>(self->KConfig::accessMode());
    }
}

// Base class handler implementation
int KConfig_QBaseAccessMode(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_AccessMode_IsBase(true);
        return static_cast<int>(vkconfig->accessMode());
    } else {
        return static_cast<int>(self->KConfig::accessMode());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnAccessMode(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_AccessMode_Callback(reinterpret_cast<VirtualKConfig::KConfig_AccessMode_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfig_IsImmutable(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return vkconfig->isImmutable();
    } else {
        return self->KConfig::isImmutable();
    }
}

// Base class handler implementation
bool KConfig_QBaseIsImmutable(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_IsImmutable_IsBase(true);
        return vkconfig->isImmutable();
    } else {
        return self->KConfig::isImmutable();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnIsImmutable(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_IsImmutable_Callback(reinterpret_cast<VirtualKConfig::KConfig_IsImmutable_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KConfig_GroupList(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        QList<QString> _ret = vkconfig->groupList();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->KConfig::groupList();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KConfig_QBaseGroupList(const KConfig* self) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupList_IsBase(true);
        QList<QString> _ret = vkconfig->groupList();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = self->KConfig::groupList();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnGroupList(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupList_Callback(reinterpret_cast<VirtualKConfig::KConfig_GroupList_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfig_HasGroupImpl(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return vkconfig->hasGroupImpl(groupName_QString);
    } else {
        return ((VirtualKConfig*)self)->hasGroupImpl(groupName_QString);
    }
}

// Base class handler implementation
bool KConfig_QBaseHasGroupImpl(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_HasGroupImpl_IsBase(true);
        return vkconfig->hasGroupImpl(groupName_QString);
    } else {
        return ((VirtualKConfig*)self)->hasGroupImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnHasGroupImpl(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_HasGroupImpl_Callback(reinterpret_cast<VirtualKConfig::KConfig_HasGroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
KConfigGroup* KConfig_GroupImpl(KConfig* self, const libqt_string groupName) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return new KConfigGroup(vkconfig->groupImpl(groupName_QString));
    }
    return {};
}

// Base class handler implementation
KConfigGroup* KConfig_QBaseGroupImpl(KConfig* self, const libqt_string groupName) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupImpl_IsBase(true);
        return new KConfigGroup(vkconfig->groupImpl(groupName_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnGroupImpl(KConfig* self, intptr_t slot) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupImpl_Callback(reinterpret_cast<VirtualKConfig::KConfig_GroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
KConfigGroup* KConfig_GroupImpl2(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return new KConfigGroup(vkconfig->groupImpl(groupName_QString));
    }
    return {};
}

// Base class handler implementation
KConfigGroup* KConfig_QBaseGroupImpl2(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupImpl2_IsBase(true);
        return new KConfigGroup(vkconfig->groupImpl(groupName_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnGroupImpl2(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_GroupImpl2_Callback(reinterpret_cast<VirtualKConfig::KConfig_GroupImpl2_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfig_DeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else {
        ((VirtualKConfig*)self)->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

// Base class handler implementation
void KConfig_QBaseDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_DeleteGroupImpl_IsBase(true);
        vkconfig->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else {
        ((VirtualKConfig*)self)->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnDeleteGroupImpl(KConfig* self, intptr_t slot) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_DeleteGroupImpl_Callback(reinterpret_cast<VirtualKConfig::KConfig_DeleteGroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
bool KConfig_IsGroupImmutableImpl(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        return vkconfig->isGroupImmutableImpl(groupName_QString);
    } else {
        return ((VirtualKConfig*)self)->isGroupImmutableImpl(groupName_QString);
    }
}

// Base class handler implementation
bool KConfig_QBaseIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_IsGroupImmutableImpl_IsBase(true);
        return vkconfig->isGroupImmutableImpl(groupName_QString);
    } else {
        return ((VirtualKConfig*)self)->isGroupImmutableImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnIsGroupImmutableImpl(const KConfig* self, intptr_t slot) {
    auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self));
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_IsGroupImmutableImpl_Callback(reinterpret_cast<VirtualKConfig::KConfig_IsGroupImmutableImpl_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfig_VirtualHook(KConfig* self, int id, void* data) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKConfig*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KConfig_QBaseVirtualHook(KConfig* self, int id, void* data) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_VirtualHook_IsBase(true);
        vkconfig->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKConfig*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnVirtualHook(KConfig* self, intptr_t slot) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig && vkconfig->isVirtualKConfig) {
        vkconfig->setKConfig_VirtualHook_Callback(reinterpret_cast<VirtualKConfig::KConfig_VirtualHook_Callback>(slot));
    }
}

void KConfig_Delete(KConfig* self) {
    delete self;
}
