#include <KUriFilter>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <kurifilter.h>
#include "libkurifilter.h"
#include "libkurifilter.hxx"

KUriFilterSearchProvider* KUriFilterSearchProvider_new() {
    return new VirtualKUriFilterSearchProvider();
}

KUriFilterSearchProvider* KUriFilterSearchProvider_new2(const KUriFilterSearchProvider* param1) {
    return new VirtualKUriFilterSearchProvider(*param1);
}

libqt_string KUriFilterSearchProvider_DesktopEntryName(const KUriFilterSearchProvider* self) {
    QString _ret = self->desktopEntryName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUriFilterSearchProvider_Name(const KUriFilterSearchProvider* self) {
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

libqt_string KUriFilterSearchProvider_IconName(const KUriFilterSearchProvider* self) {
    auto* vkurifiltersearchprovider = dynamic_cast<const VirtualKUriFilterSearchProvider*>(self);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        QString _ret = self->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKUriFilterSearchProvider*)self)->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_list /* of libqt_string */ KUriFilterSearchProvider_Keys(const KUriFilterSearchProvider* self) {
    QList<QString> _ret = self->keys();
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

libqt_string KUriFilterSearchProvider_DefaultKey(const KUriFilterSearchProvider* self) {
    QString _ret = self->defaultKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUriFilterSearchProvider_OperatorAssign(KUriFilterSearchProvider* self, const KUriFilterSearchProvider* param1) {
    self->operator=(*param1);
}

// Base class handler implementation
libqt_string KUriFilterSearchProvider_QBaseIconName(const KUriFilterSearchProvider* self) {
    auto* vkurifiltersearchprovider = const_cast<VirtualKUriFilterSearchProvider*>(dynamic_cast<const VirtualKUriFilterSearchProvider*>(self));
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_IconName_IsBase(true);
        QString _ret = vkurifiltersearchprovider->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KUriFilterSearchProvider::iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KUriFilterSearchProvider_OnIconName(const KUriFilterSearchProvider* self, intptr_t slot) {
    auto* vkurifiltersearchprovider = const_cast<VirtualKUriFilterSearchProvider*>(dynamic_cast<const VirtualKUriFilterSearchProvider*>(self));
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_IconName_Callback(reinterpret_cast<VirtualKUriFilterSearchProvider::KUriFilterSearchProvider_IconName_Callback>(slot));
    }
}

// Derived class handler implementation
void KUriFilterSearchProvider_SetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString desktopEntryName_QString = QString::fromUtf8(desktopEntryName.data, desktopEntryName.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setDesktopEntryName(desktopEntryName_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setDesktopEntryName(desktopEntryName_QString);
    }
}

// Base class handler implementation
void KUriFilterSearchProvider_QBaseSetDesktopEntryName(KUriFilterSearchProvider* self, const libqt_string desktopEntryName) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString desktopEntryName_QString = QString::fromUtf8(desktopEntryName.data, desktopEntryName.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetDesktopEntryName_IsBase(true);
        vkurifiltersearchprovider->setDesktopEntryName(desktopEntryName_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setDesktopEntryName(desktopEntryName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUriFilterSearchProvider_OnSetDesktopEntryName(KUriFilterSearchProvider* self, intptr_t slot) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetDesktopEntryName_Callback(reinterpret_cast<VirtualKUriFilterSearchProvider::KUriFilterSearchProvider_SetDesktopEntryName_Callback>(slot));
    }
}

// Derived class handler implementation
void KUriFilterSearchProvider_SetIconName(KUriFilterSearchProvider* self, const libqt_string iconName) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setIconName(iconName_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setIconName(iconName_QString);
    }
}

// Base class handler implementation
void KUriFilterSearchProvider_QBaseSetIconName(KUriFilterSearchProvider* self, const libqt_string iconName) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetIconName_IsBase(true);
        vkurifiltersearchprovider->setIconName(iconName_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setIconName(iconName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUriFilterSearchProvider_OnSetIconName(KUriFilterSearchProvider* self, intptr_t slot) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetIconName_Callback(reinterpret_cast<VirtualKUriFilterSearchProvider::KUriFilterSearchProvider_SetIconName_Callback>(slot));
    }
}

// Derived class handler implementation
void KUriFilterSearchProvider_SetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QList<QString> keys_QList;
    keys_QList.reserve(keys.len);
    libqt_string* keys_arr = static_cast<libqt_string*>(keys.data);
    for (size_t i = 0; i < keys.len; ++i) {
        QString keys_arr_i_QString = QString::fromUtf8(keys_arr[i].data, keys_arr[i].len);
        keys_QList.push_back(keys_arr_i_QString);
    }
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKeys(keys_QList);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setKeys(keys_QList);
    }
}

// Base class handler implementation
void KUriFilterSearchProvider_QBaseSetKeys(KUriFilterSearchProvider* self, const libqt_list /* of libqt_string */ keys) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QList<QString> keys_QList;
    keys_QList.reserve(keys.len);
    libqt_string* keys_arr = static_cast<libqt_string*>(keys.data);
    for (size_t i = 0; i < keys.len; ++i) {
        QString keys_arr_i_QString = QString::fromUtf8(keys_arr[i].data, keys_arr[i].len);
        keys_QList.push_back(keys_arr_i_QString);
    }
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetKeys_IsBase(true);
        vkurifiltersearchprovider->setKeys(keys_QList);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setKeys(keys_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KUriFilterSearchProvider_OnSetKeys(KUriFilterSearchProvider* self, intptr_t slot) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetKeys_Callback(reinterpret_cast<VirtualKUriFilterSearchProvider::KUriFilterSearchProvider_SetKeys_Callback>(slot));
    }
}

// Derived class handler implementation
void KUriFilterSearchProvider_SetName(KUriFilterSearchProvider* self, const libqt_string name) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setName(name_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setName(name_QString);
    }
}

// Base class handler implementation
void KUriFilterSearchProvider_QBaseSetName(KUriFilterSearchProvider* self, const libqt_string name) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetName_IsBase(true);
        vkurifiltersearchprovider->setName(name_QString);
    } else {
        ((VirtualKUriFilterSearchProvider*)self)->setName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KUriFilterSearchProvider_OnSetName(KUriFilterSearchProvider* self, intptr_t slot) {
    auto* vkurifiltersearchprovider = dynamic_cast<VirtualKUriFilterSearchProvider*>(self);
    if (vkurifiltersearchprovider && vkurifiltersearchprovider->isVirtualKUriFilterSearchProvider) {
        vkurifiltersearchprovider->setKUriFilterSearchProvider_SetName_Callback(reinterpret_cast<VirtualKUriFilterSearchProvider::KUriFilterSearchProvider_SetName_Callback>(slot));
    }
}

void KUriFilterSearchProvider_Delete(KUriFilterSearchProvider* self) {
    delete self;
}

KUriFilterData* KUriFilterData_new() {
    return new KUriFilterData();
}

KUriFilterData* KUriFilterData_new2(const QUrl* url) {
    return new KUriFilterData(*url);
}

KUriFilterData* KUriFilterData_new3(const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    return new KUriFilterData(url_QString);
}

KUriFilterData* KUriFilterData_new4(const KUriFilterData* other) {
    return new KUriFilterData(*other);
}

QUrl* KUriFilterData_Uri(const KUriFilterData* self) {
    return new QUrl(self->uri());
}

libqt_string KUriFilterData_ErrorMsg(const KUriFilterData* self) {
    QString _ret = self->errorMsg();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KUriFilterData_UriType(const KUriFilterData* self) {
    return static_cast<int>(self->uriType());
}

libqt_string KUriFilterData_AbsolutePath(const KUriFilterData* self) {
    QString _ret = self->absolutePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KUriFilterData_HasAbsolutePath(const KUriFilterData* self) {
    return self->hasAbsolutePath();
}

libqt_string KUriFilterData_ArgsAndOptions(const KUriFilterData* self) {
    QString _ret = self->argsAndOptions();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KUriFilterData_HasArgsAndOptions(const KUriFilterData* self) {
    return self->hasArgsAndOptions();
}

bool KUriFilterData_CheckForExecutables(const KUriFilterData* self) {
    return self->checkForExecutables();
}

libqt_string KUriFilterData_TypedString(const KUriFilterData* self) {
    QString _ret = self->typedString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUriFilterData_SearchTerm(const KUriFilterData* self) {
    QString _ret = self->searchTerm();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QChar* KUriFilterData_SearchTermSeparator(const KUriFilterData* self) {
    return new QChar(self->searchTermSeparator());
}

libqt_string KUriFilterData_SearchProvider(const KUriFilterData* self) {
    QString _ret = self->searchProvider();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KUriFilterData_PreferredSearchProviders(const KUriFilterData* self) {
    QList<QString> _ret = self->preferredSearchProviders();
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

KUriFilterSearchProvider* KUriFilterData_QueryForSearchProvider(const KUriFilterData* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    return new KUriFilterSearchProvider(self->queryForSearchProvider(provider_QString));
}

libqt_string KUriFilterData_QueryForPreferredSearchProvider(const KUriFilterData* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    QString _ret = self->queryForPreferredSearchProvider(provider_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KUriFilterData_AllQueriesForSearchProvider(const KUriFilterData* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    QList<QString> _ret = self->allQueriesForSearchProvider(provider_QString);
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

libqt_string KUriFilterData_IconNameForPreferredSearchProvider(const KUriFilterData* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    QString _ret = self->iconNameForPreferredSearchProvider(provider_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KUriFilterData_AlternateSearchProviders(const KUriFilterData* self) {
    QList<QString> _ret = self->alternateSearchProviders();
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

libqt_string KUriFilterData_AlternateDefaultSearchProvider(const KUriFilterData* self) {
    QString _ret = self->alternateDefaultSearchProvider();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUriFilterData_DefaultUrlScheme(const KUriFilterData* self) {
    QString _ret = self->defaultUrlScheme();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KUriFilterData_SearchFilteringOptions(const KUriFilterData* self) {
    return static_cast<int>(self->searchFilteringOptions());
}

libqt_string KUriFilterData_IconName(KUriFilterData* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUriFilterData_SetCheckForExecutables(KUriFilterData* self, bool check) {
    self->setCheckForExecutables(check);
}

void KUriFilterData_SetData(KUriFilterData* self, const QUrl* url) {
    self->setData(*url);
}

void KUriFilterData_SetData2(KUriFilterData* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->setData(url_QString);
}

bool KUriFilterData_SetAbsolutePath(KUriFilterData* self, const libqt_string abs_path) {
    QString abs_path_QString = QString::fromUtf8(abs_path.data, abs_path.len);
    return self->setAbsolutePath(abs_path_QString);
}

void KUriFilterData_SetAlternateSearchProviders(KUriFilterData* self, const libqt_list /* of libqt_string */ providers) {
    QList<QString> providers_QList;
    providers_QList.reserve(providers.len);
    libqt_string* providers_arr = static_cast<libqt_string*>(providers.data);
    for (size_t i = 0; i < providers.len; ++i) {
        QString providers_arr_i_QString = QString::fromUtf8(providers_arr[i].data, providers_arr[i].len);
        providers_QList.push_back(providers_arr_i_QString);
    }
    self->setAlternateSearchProviders(providers_QList);
}

void KUriFilterData_SetAlternateDefaultSearchProvider(KUriFilterData* self, const libqt_string provider) {
    QString provider_QString = QString::fromUtf8(provider.data, provider.len);
    self->setAlternateDefaultSearchProvider(provider_QString);
}

void KUriFilterData_SetDefaultUrlScheme(KUriFilterData* self, const libqt_string defaultUrlScheme) {
    QString defaultUrlScheme_QString = QString::fromUtf8(defaultUrlScheme.data, defaultUrlScheme.len);
    self->setDefaultUrlScheme(defaultUrlScheme_QString);
}

void KUriFilterData_SetSearchFilteringOptions(KUriFilterData* self, int options) {
    self->setSearchFilteringOptions(static_cast<KUriFilterData::SearchFilterOptions>(options));
}

void KUriFilterData_OperatorAssign(KUriFilterData* self, const QUrl* url) {
    self->operator=(*url);
}

void KUriFilterData_OperatorAssign2(KUriFilterData* self, const libqt_string url) {
    QString url_QString = QString::fromUtf8(url.data, url.len);
    self->operator=(url_QString);
}

void KUriFilterData_Delete(KUriFilterData* self) {
    delete self;
}

KUriFilter* KUriFilter_Self() {
    return KUriFilter::self();
}

bool KUriFilter_FilterUri(KUriFilter* self, KUriFilterData* data) {
    return self->filterUri(*data);
}

bool KUriFilter_FilterUri2(KUriFilter* self, QUrl* uri) {
    return self->filterUri(*uri);
}

bool KUriFilter_FilterUri3(KUriFilter* self, libqt_string uri) {
    QString uri_QString = QString::fromUtf8(uri.data, uri.len);
    return self->filterUri(uri_QString);
}

QUrl* KUriFilter_FilteredUri(KUriFilter* self, const QUrl* uri) {
    return new QUrl(self->filteredUri(*uri));
}

libqt_string KUriFilter_FilteredUri2(KUriFilter* self, const libqt_string uri) {
    QString uri_QString = QString::fromUtf8(uri.data, uri.len);
    QString _ret = self->filteredUri(uri_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KUriFilter_FilterSearchUri(KUriFilter* self, KUriFilterData* data, int types) {
    return self->filterSearchUri(*data, static_cast<KUriFilter::SearchFilterTypes>(types));
}

libqt_list /* of libqt_string */ KUriFilter_PluginNames(const KUriFilter* self) {
    QList<QString> _ret = self->pluginNames();
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

bool KUriFilter_FilterUri22(KUriFilter* self, KUriFilterData* data, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    return self->filterUri(*data, filters_QList);
}

bool KUriFilter_FilterUri23(KUriFilter* self, QUrl* uri, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    return self->filterUri(*uri, filters_QList);
}

bool KUriFilter_FilterUri24(KUriFilter* self, libqt_string uri, const libqt_list /* of libqt_string */ filters) {
    QString uri_QString = QString::fromUtf8(uri.data, uri.len);
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    return self->filterUri(uri_QString, filters_QList);
}

QUrl* KUriFilter_FilteredUri22(KUriFilter* self, const QUrl* uri, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    return new QUrl(self->filteredUri(*uri, filters_QList));
}

libqt_string KUriFilter_FilteredUri23(KUriFilter* self, const libqt_string uri, const libqt_list /* of libqt_string */ filters) {
    QString uri_QString = QString::fromUtf8(uri.data, uri.len);
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    QString _ret = self->filteredUri(uri_QString, filters_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUriFilter_Delete(KUriFilter* self) {
    delete self;
}
