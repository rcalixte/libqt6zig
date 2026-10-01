#include <KConfig>
#include <KConfigBase>
#include <QList>
#include <QMap>
#include <QString>
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
    auto _ret = self->name();
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

bool KConfig_Sync(KConfig* self) {
    return self->sync();
}

bool KConfig_IsDirty(const KConfig* self) {
    return self->isDirty();
}

void KConfig_MarkAsClean(KConfig* self) {
    self->markAsClean();
}

int KConfig_AccessMode(const KConfig* self) {
    return static_cast<int>(self->accessMode());
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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
    auto _ret = self->locale();
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

bool KConfig_IsImmutable(const KConfig* self) {
    return self->isImmutable();
}

libqt_list /* of libqt_string */ KConfig_GroupList(const KConfig* self) {
    QList<QString> _ret = self->groupList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

libqt_map /* of libqt_string to libqt_string */ KConfig_EntryMap(const KConfig* self) {
    QMap<QString, QString> _ret = self->entryMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        auto _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        auto _mapval_ret = _itr->second;
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
    auto _ret = KConfig::mainConfigName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KConfig_HasGroupImpl(const KConfig* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfig = dynamic_cast<const VirtualKConfig*>(self);
    if (vkconfig) {
        return vkconfig->hasGroupImpl(groupName_QString);
    }
    qFatal("Error: Protected method KConfig::hasGroupImpl called without a directly constructed type");
}

void KConfig_DeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig) {
        vkconfig->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

bool KConfig_IsGroupImmutableImpl(const KConfig* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfig = dynamic_cast<const VirtualKConfig*>(self);
    if (vkconfig) {
        return vkconfig->isGroupImmutableImpl(groupName_QString);
    }
    qFatal("Error: Protected method KConfig::isGroupImmutableImpl called without a directly constructed type");
}

void KConfig_VirtualHook(KConfig* self, int id, void* data) {
    auto* vkconfig = dynamic_cast<VirtualKConfig*>(self);
    if (vkconfig) {
        vkconfig->virtual_hook(static_cast<int>(id), data);
    }
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
        auto _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        auto _mapval_ret = _itr->second;
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

// Base class handler implementation
bool KConfig_SuperSync(KConfig* self) {
    return self->KConfig::sync();
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnSync(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self))
        vkconfig->kconfig_sync_callback = reinterpret_cast<VirtualKConfig::KConfig_Sync_Callback>(slot);
}

// Base class handler implementation
void KConfig_SuperMarkAsClean(KConfig* self) {
    self->KConfig::markAsClean();
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnMarkAsClean(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self))
        vkconfig->kconfig_markasclean_callback = reinterpret_cast<VirtualKConfig::KConfig_MarkAsClean_Callback>(slot);
}

// Base class handler implementation
int KConfig_SuperAccessMode(const KConfig* self) {
    return static_cast<int>(self->KConfig::accessMode());
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnAccessMode(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self)))
        vkconfig->kconfig_accessmode_callback = reinterpret_cast<VirtualKConfig::KConfig_AccessMode_Callback>(slot);
}

// Base class handler implementation
bool KConfig_SuperIsImmutable(const KConfig* self) {
    return self->KConfig::isImmutable();
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnIsImmutable(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self)))
        vkconfig->kconfig_isimmutable_callback = reinterpret_cast<VirtualKConfig::KConfig_IsImmutable_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ KConfig_SuperGroupList(const KConfig* self) {
    QList<QString> _ret = self->KConfig::groupList();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

// Auxiliary method to allow providing re-implementation
void KConfig_OnGroupList(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self)))
        vkconfig->kconfig_grouplist_callback = reinterpret_cast<VirtualKConfig::KConfig_GroupList_Callback>(slot);
}

// Base class handler implementation
bool KConfig_SuperHasGroupImpl(const KConfig* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self))) {
        return vkconfig->KConfig::hasGroupImpl(groupName_QString);
    } else
        qFatal("Error: Protected virtual method KConfig::hasGroupImpl called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnHasGroupImpl(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self)))
        vkconfig->kconfig_hasgroupimpl_callback = reinterpret_cast<VirtualKConfig::KConfig_HasGroupImpl_Callback>(slot);
}

// Base class handler implementation
void KConfig_SuperDeleteGroupImpl(KConfig* self, const libqt_string groupName, int flags) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self)) {
        vkconfig->KConfig::deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else
        qFatal("Error: Protected virtual method KConfig::deleteGroupImpl called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnDeleteGroupImpl(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self))
        vkconfig->kconfig_deletegroupimpl_callback = reinterpret_cast<VirtualKConfig::KConfig_DeleteGroupImpl_Callback>(slot);
}

// Base class handler implementation
bool KConfig_SuperIsGroupImmutableImpl(const KConfig* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self))) {
        return vkconfig->KConfig::isGroupImmutableImpl(groupName_QString);
    } else
        qFatal("Error: Protected virtual method KConfig::isGroupImmutableImpl called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnIsGroupImmutableImpl(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = const_cast<VirtualKConfig*>(dynamic_cast<const VirtualKConfig*>(self)))
        vkconfig->kconfig_isgroupimmutableimpl_callback = reinterpret_cast<VirtualKConfig::KConfig_IsGroupImmutableImpl_Callback>(slot);
}

// Base class handler implementation
void KConfig_SuperVirtualHook(KConfig* self, int id, void* data) {
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self)) {
        vkconfig->KConfig::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KConfig::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KConfig_OnVirtualHook(KConfig* self, intptr_t slot) {
    if (auto* vkconfig = dynamic_cast<VirtualKConfig*>(self))
        vkconfig->kconfig_virtualhook_callback = reinterpret_cast<VirtualKConfig::KConfig_VirtualHook_Callback>(slot);
}

void KConfig_Delete(KConfig* self) {
    delete self;
}
