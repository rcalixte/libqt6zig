#include <KNSCore/Entry>
#include <KNSCore/Provider>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__CategoryMetadata
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchPreset
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest
#include <QChildEvent>
#include <QDomElement>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <provider.h>
#include "libprovider_1.h"
#include "libprovider_1.hxx"

KNSCore__Provider* KNSCore__Provider_new() {
    return new VirtualKNSCoreProvider();
}

QMetaObject* KNSCore__Provider_MetaObject(const KNSCore__Provider* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__Provider_Metacast(KNSCore__Provider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__Provider_Metacall(KNSCore__Provider* self, int param1, int param2, void** param3) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreProvider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__Provider_Tr(const char* s) {
    QString _ret = KNSCore::Provider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Provider_Id(const KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<const VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        QString _ret = vknscore__provider->id();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKNSCoreProvider*)self)->id();
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

bool KNSCore__Provider_SetProviderXML(KNSCore__Provider* self, const QDomElement* xmldata) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return vknscore__provider->setProviderXML(*xmldata);
    } else {
        return ((VirtualKNSCoreProvider*)self)->setProviderXML(*xmldata);
    }
}

bool KNSCore__Provider_IsInitialized(const KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<const VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return vknscore__provider->isInitialized();
    } else {
        return ((VirtualKNSCoreProvider*)self)->isInitialized();
    }
}

void KNSCore__Provider_SetCachedEntries(KNSCore__Provider* self, const libqt_list /* of KNSCore__Entry* */ cachedEntries) {
    QList<KNSCore::Entry> cachedEntries_QList;
    cachedEntries_QList.reserve(cachedEntries.len);
    KNSCore__Entry** cachedEntries_arr = static_cast<KNSCore__Entry**>(cachedEntries.data);
    for (size_t i = 0; i < cachedEntries.len; ++i) {
        cachedEntries_QList.push_back(*(cachedEntries_arr[i]));
    }
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        vknscore__provider->setCachedEntries(cachedEntries_QList);
    } else {
        ((VirtualKNSCoreProvider*)self)->setCachedEntries(cachedEntries_QList);
    }
}

libqt_string KNSCore__Provider_Name(const KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<const VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        QString _ret = self->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKNSCoreProvider*)self)->name();
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

QUrl* KNSCore__Provider_Icon(const KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<const VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return new QUrl(self->icon());
    } else {
        return new QUrl(((VirtualKNSCoreProvider*)self)->icon());
    }
}

void KNSCore__Provider_LoadEntries(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* request) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        vknscore__provider->loadEntries(*request);
    } else {
        ((VirtualKNSCoreProvider*)self)->loadEntries(*request);
    }
}

void KNSCore__Provider_LoadEntryDetails(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->loadEntryDetails(*param1);
    } else {
        ((VirtualKNSCoreProvider*)self)->loadEntryDetails(*param1);
    }
}

void KNSCore__Provider_LoadPayloadLink(KNSCore__Provider* self, const KNSCore__Entry* entry, int linkId) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        vknscore__provider->loadPayloadLink(*entry, static_cast<int>(linkId));
    } else {
        ((VirtualKNSCoreProvider*)self)->loadPayloadLink(*entry, static_cast<int>(linkId));
    }
}

void KNSCore__Provider_LoadComments(KNSCore__Provider* self, const KNSCore__Entry* param1, int param2, int param3) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->loadComments(*param1, static_cast<int>(param2), static_cast<int>(param3));
    } else {
        ((VirtualKNSCoreProvider*)self)->loadComments(*param1, static_cast<int>(param2), static_cast<int>(param3));
    }
}

void KNSCore__Provider_LoadPerson(KNSCore__Provider* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->loadPerson(param1_QString);
    } else {
        ((VirtualKNSCoreProvider*)self)->loadPerson(param1_QString);
    }
}

void KNSCore__Provider_LoadBasics(KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->loadBasics();
    } else {
        ((VirtualKNSCoreProvider*)self)->loadBasics();
    }
}

libqt_string KNSCore__Provider_Version(const KNSCore__Provider* self) {
    QString _ret = self->version();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Provider_SetVersion(KNSCore__Provider* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setVersion(version_QString);
}

QUrl* KNSCore__Provider_Website(const KNSCore__Provider* self) {
    return new QUrl(self->website());
}

void KNSCore__Provider_SetWebsite(KNSCore__Provider* self, const QUrl* website) {
    self->setWebsite(*website);
}

QUrl* KNSCore__Provider_Host(const KNSCore__Provider* self) {
    return new QUrl(self->host());
}

void KNSCore__Provider_SetHost(KNSCore__Provider* self, const QUrl* host) {
    self->setHost(*host);
}

libqt_string KNSCore__Provider_ContactEmail(const KNSCore__Provider* self) {
    QString _ret = self->contactEmail();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Provider_SetContactEmail(KNSCore__Provider* self, const libqt_string contactEmail) {
    QString contactEmail_QString = QString::fromUtf8(contactEmail.data, contactEmail.len);
    self->setContactEmail(contactEmail_QString);
}

bool KNSCore__Provider_SupportsSsl(const KNSCore__Provider* self) {
    return self->supportsSsl();
}

void KNSCore__Provider_SetSupportsSsl(KNSCore__Provider* self, bool supportsSsl) {
    self->setSupportsSsl(supportsSsl);
}

bool KNSCore__Provider_UserCanVote(KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return self->userCanVote();
    } else {
        return ((VirtualKNSCoreProvider*)self)->userCanVote();
    }
}

void KNSCore__Provider_Vote(KNSCore__Provider* self, const KNSCore__Entry* param1, unsigned int param2) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->vote(*param1, static_cast<unsigned int>(param2));
    } else {
        ((VirtualKNSCoreProvider*)self)->vote(*param1, static_cast<unsigned int>(param2));
    }
}

bool KNSCore__Provider_UserCanBecomeFan(KNSCore__Provider* self) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        return self->userCanBecomeFan();
    } else {
        return ((VirtualKNSCoreProvider*)self)->userCanBecomeFan();
    }
}

void KNSCore__Provider_BecomeFan(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    auto* vknscore__provider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscore__provider && vknscore__provider->isVirtualKNSCoreProvider) {
        self->becomeFan(*param1);
    } else {
        ((VirtualKNSCoreProvider*)self)->becomeFan(*param1);
    }
}

void KNSCore__Provider_SetTagFilter(KNSCore__Provider* self, const libqt_list /* of libqt_string */ tagFilter) {
    QList<QString> tagFilter_QList;
    tagFilter_QList.reserve(tagFilter.len);
    libqt_string* tagFilter_arr = static_cast<libqt_string*>(tagFilter.data);
    for (size_t i = 0; i < tagFilter.len; ++i) {
        QString tagFilter_arr_i_QString = QString::fromUtf8(tagFilter_arr[i].data, tagFilter_arr[i].len);
        tagFilter_QList.push_back(tagFilter_arr_i_QString);
    }
    self->setTagFilter(tagFilter_QList);
}

libqt_list /* of libqt_string */ KNSCore__Provider_TagFilter(const KNSCore__Provider* self) {
    QList<QString> _ret = self->tagFilter();
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

void KNSCore__Provider_SetDownloadTagFilter(KNSCore__Provider* self, const libqt_list /* of libqt_string */ downloadTagFilter) {
    QList<QString> downloadTagFilter_QList;
    downloadTagFilter_QList.reserve(downloadTagFilter.len);
    libqt_string* downloadTagFilter_arr = static_cast<libqt_string*>(downloadTagFilter.data);
    for (size_t i = 0; i < downloadTagFilter.len; ++i) {
        QString downloadTagFilter_arr_i_QString = QString::fromUtf8(downloadTagFilter_arr[i].data, downloadTagFilter_arr[i].len);
        downloadTagFilter_QList.push_back(downloadTagFilter_arr_i_QString);
    }
    self->setDownloadTagFilter(downloadTagFilter_QList);
}

libqt_list /* of libqt_string */ KNSCore__Provider_DownloadTagFilter(const KNSCore__Provider* self) {
    QList<QString> _ret = self->downloadTagFilter();
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

void KNSCore__Provider_ProviderInitialized(KNSCore__Provider* self, KNSCore__Provider* param1) {
    self->providerInitialized(param1);
}

void KNSCore__Provider_Connect_ProviderInitialized(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Provider*) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Provider*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::providerInitialized, [self, slotFunc](KNSCore::Provider* param1) {
        KNSCore__Provider* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KNSCore__Provider_LoadingFinished(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* param1, const libqt_list /* of KNSCore__Entry* */ param2) {
    QList<KNSCore::Entry> param2_QList;
    param2_QList.reserve(param2.len);
    KNSCore__Entry** param2_arr = static_cast<KNSCore__Entry**>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        param2_QList.push_back(*(param2_arr[i]));
    }
    self->loadingFinished(*param1, param2_QList);
}

void KNSCore__Provider_Connect_LoadingFinished(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*, KNSCore__Entry**) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*, KNSCore__Entry**)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::loadingFinished, [self, slotFunc](const KNSCore::Provider::SearchRequest& param1, const QList<KNSCore::Entry>& param2) {
        const KNSCore::Provider::SearchRequest& param1_ret = param1;
        // Cast returned reference into pointer
        KNSCore__Provider__SearchRequest* sigval1 = const_cast<KNSCore::Provider::SearchRequest*>(&param1_ret);
        const QList<KNSCore::Entry>& param2_ret = param2;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Entry** param2_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (param2_ret.size() + 1)));
        for (qsizetype i = 0; i < param2_ret.size(); ++i) {
            param2_arr[i] = new KNSCore::Entry(param2_ret[i]);
        }
        // Append sentinel value to the list
        param2_arr[param2_ret.size()] = nullptr;
        KNSCore__Entry** sigval2 = param2_arr;
        slotFunc(self, sigval1, sigval2);
        free(param2_arr);
    });
}

void KNSCore__Provider_LoadingFailed(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* param1) {
    self->loadingFailed(*param1);
}

void KNSCore__Provider_Connect_LoadingFailed(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Provider__SearchRequest*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::loadingFailed, [self, slotFunc](const KNSCore::Provider::SearchRequest& param1) {
        const KNSCore::Provider::SearchRequest& param1_ret = param1;
        // Cast returned reference into pointer
        KNSCore__Provider__SearchRequest* sigval1 = const_cast<KNSCore::Provider::SearchRequest*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void KNSCore__Provider_EntryDetailsLoaded(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    self->entryDetailsLoaded(*param1);
}

void KNSCore__Provider_Connect_EntryDetailsLoaded(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Entry*) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Entry*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::entryDetailsLoaded, [self, slotFunc](const KNSCore::Entry& param1) {
        const KNSCore::Entry& param1_ret = param1;
        // Cast returned reference into pointer
        KNSCore__Entry* sigval1 = const_cast<KNSCore::Entry*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void KNSCore__Provider_PayloadLinkLoaded(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    self->payloadLinkLoaded(*param1);
}

void KNSCore__Provider_Connect_PayloadLinkLoaded(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Entry*) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Entry*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::payloadLinkLoaded, [self, slotFunc](const KNSCore::Entry& param1) {
        const KNSCore::Entry& param1_ret = param1;
        // Cast returned reference into pointer
        KNSCore__Entry* sigval1 = const_cast<KNSCore::Entry*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void KNSCore__Provider_BasicsLoaded(KNSCore__Provider* self) {
    self->basicsLoaded();
}

void KNSCore__Provider_Connect_BasicsLoaded(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*) = reinterpret_cast<void (*)(KNSCore__Provider*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::basicsLoaded, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNSCore__Provider_SearchPresetsLoaded(KNSCore__Provider* self, const libqt_list /* of KNSCore__Provider__SearchPreset* */ presets) {
    QList<KNSCore::Provider::SearchPreset> presets_QList;
    presets_QList.reserve(presets.len);
    KNSCore__Provider__SearchPreset** presets_arr = static_cast<KNSCore__Provider__SearchPreset**>(presets.data);
    for (size_t i = 0; i < presets.len; ++i) {
        presets_QList.push_back(*(presets_arr[i]));
    }
    self->searchPresetsLoaded(presets_QList);
}

void KNSCore__Provider_Connect_SearchPresetsLoaded(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Provider__SearchPreset**) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Provider__SearchPreset**)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::searchPresetsLoaded, [self, slotFunc](const QList<KNSCore::Provider::SearchPreset>& presets) {
        const QList<KNSCore::Provider::SearchPreset>& presets_ret = presets;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Provider__SearchPreset** presets_arr = static_cast<KNSCore__Provider__SearchPreset**>(malloc(sizeof(KNSCore__Provider__SearchPreset*) * (presets_ret.size() + 1)));
        for (qsizetype i = 0; i < presets_ret.size(); ++i) {
            presets_arr[i] = new KNSCore::Provider::SearchPreset(presets_ret[i]);
        }
        // Append sentinel value to the list
        presets_arr[presets_ret.size()] = nullptr;
        KNSCore__Provider__SearchPreset** sigval1 = presets_arr;
        slotFunc(self, sigval1);
        free(presets_arr);
    });
}

void KNSCore__Provider_SignalInformation(KNSCore__Provider* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->signalInformation(param1_QString);
}

void KNSCore__Provider_Connect_SignalInformation(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, const char*) = reinterpret_cast<void (*)(KNSCore__Provider*, const char*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::signalInformation, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KNSCore__Provider_SignalError(KNSCore__Provider* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->signalError(param1_QString);
}

void KNSCore__Provider_Connect_SignalError(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, const char*) = reinterpret_cast<void (*)(KNSCore__Provider*, const char*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::signalError, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KNSCore__Provider_SignalErrorCode(KNSCore__Provider* self, int errorCode, const libqt_string message, const QVariant* metadata) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->signalErrorCode(static_cast<KNSCore::ErrorCode::ErrorCode>(errorCode), message_QString, *metadata);
}

void KNSCore__Provider_Connect_SignalErrorCode(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, int, const char*, QVariant*) = reinterpret_cast<void (*)(KNSCore__Provider*, int, const char*, QVariant*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::signalErrorCode, [self, slotFunc](KNSCore::ErrorCode::ErrorCode errorCode, const QString& message, const QVariant& metadata) {
        int sigval1 = static_cast<int>(errorCode);
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval2 = message_str;
        const QVariant& metadata_ret = metadata;
        // Cast returned reference into pointer
        QVariant* sigval3 = const_cast<QVariant*>(&metadata_ret);
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(message_str);
    });
}

void KNSCore__Provider_CategoriesMetadataLoded(KNSCore__Provider* self, const libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories) {
    QList<KNSCore::Provider::CategoryMetadata> categories_QList;
    categories_QList.reserve(categories.len);
    KNSCore__Provider__CategoryMetadata** categories_arr = static_cast<KNSCore__Provider__CategoryMetadata**>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        categories_QList.push_back(*(categories_arr[i]));
    }
    self->categoriesMetadataLoded(categories_QList);
}

void KNSCore__Provider_Connect_CategoriesMetadataLoded(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*, KNSCore__Provider__CategoryMetadata**) = reinterpret_cast<void (*)(KNSCore__Provider*, KNSCore__Provider__CategoryMetadata**)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::categoriesMetadataLoded, [self, slotFunc](const QList<KNSCore::Provider::CategoryMetadata>& categories) {
        const QList<KNSCore::Provider::CategoryMetadata>& categories_ret = categories;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Provider__CategoryMetadata** categories_arr = static_cast<KNSCore__Provider__CategoryMetadata**>(malloc(sizeof(KNSCore__Provider__CategoryMetadata*) * (categories_ret.size() + 1)));
        for (qsizetype i = 0; i < categories_ret.size(); ++i) {
            categories_arr[i] = new KNSCore::Provider::CategoryMetadata(categories_ret[i]);
        }
        // Append sentinel value to the list
        categories_arr[categories_ret.size()] = nullptr;
        KNSCore__Provider__CategoryMetadata** sigval1 = categories_arr;
        slotFunc(self, sigval1);
        free(categories_arr);
    });
}

void KNSCore__Provider_TagFilterChanged(KNSCore__Provider* self) {
    self->tagFilterChanged();
}

void KNSCore__Provider_Connect_TagFilterChanged(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*) = reinterpret_cast<void (*)(KNSCore__Provider*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::tagFilterChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNSCore__Provider_DownloadTagFilterChanged(KNSCore__Provider* self) {
    self->downloadTagFilterChanged();
}

void KNSCore__Provider_Connect_DownloadTagFilterChanged(KNSCore__Provider* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Provider*) = reinterpret_cast<void (*)(KNSCore__Provider*)>(slot);
    KNSCore::Provider::connect(self, &KNSCore::Provider::downloadTagFilterChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNSCore__Provider_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::Provider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Provider_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::Provider::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KNSCore__Provider_QBaseMetacall(KNSCore__Provider* self, int param1, int param2, void** param3) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Metacall_IsBase(true);
        return vknscoreprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::Provider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnMetacall(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Metacall_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KNSCore__Provider_QBaseId(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Id_IsBase(true);
        QString _ret = vknscoreprovider->id();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKNSCoreProvider*)self)->id();
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
void KNSCore__Provider_OnId(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Id_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Id_Callback>(slot));
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseSetProviderXML(KNSCore__Provider* self, const QDomElement* xmldata) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetProviderXML_IsBase(true);
        return vknscoreprovider->setProviderXML(*xmldata);
    } else {
        return ((VirtualKNSCoreProvider*)self)->setProviderXML(*xmldata);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSetProviderXML(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetProviderXML_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_SetProviderXML_Callback>(slot));
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseIsInitialized(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_IsInitialized_IsBase(true);
        return vknscoreprovider->isInitialized();
    } else {
        return ((VirtualKNSCoreProvider*)self)->isInitialized();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnIsInitialized(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_IsInitialized_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_IsInitialized_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseSetCachedEntries(KNSCore__Provider* self, const libqt_list /* of KNSCore__Entry* */ cachedEntries) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    QList<KNSCore::Entry> cachedEntries_QList;
    cachedEntries_QList.reserve(cachedEntries.len);
    KNSCore__Entry** cachedEntries_arr = static_cast<KNSCore__Entry**>(cachedEntries.data);
    for (size_t i = 0; i < cachedEntries.len; ++i) {
        cachedEntries_QList.push_back(*(cachedEntries_arr[i]));
    }
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetCachedEntries_IsBase(true);
        vknscoreprovider->setCachedEntries(cachedEntries_QList);
    } else {
        ((VirtualKNSCoreProvider*)self)->setCachedEntries(cachedEntries_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSetCachedEntries(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetCachedEntries_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_SetCachedEntries_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KNSCore__Provider_QBaseName(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Name_IsBase(true);
        QString _ret = vknscoreprovider->name();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KNSCore::Provider::name();
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
void KNSCore__Provider_OnName(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Name_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Name_Callback>(slot));
    }
}

// Base class handler implementation
QUrl* KNSCore__Provider_QBaseIcon(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Icon_IsBase(true);
        return new QUrl(vknscoreprovider->icon());
    } else {
        return new QUrl(((VirtualKNSCoreProvider*)self)->icon());
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnIcon(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Icon_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Icon_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadEntries(KNSCore__Provider* self, const KNSCore__Provider__SearchRequest* request) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadEntries_IsBase(true);
        vknscoreprovider->loadEntries(*request);
    } else {
        ((VirtualKNSCoreProvider*)self)->loadEntries(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadEntries(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadEntries_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadEntries_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadEntryDetails(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadEntryDetails_IsBase(true);
        vknscoreprovider->loadEntryDetails(*param1);
    } else {
        self->KNSCore::Provider::loadEntryDetails(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadEntryDetails(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadEntryDetails_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadEntryDetails_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadPayloadLink(KNSCore__Provider* self, const KNSCore__Entry* entry, int linkId) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadPayloadLink_IsBase(true);
        vknscoreprovider->loadPayloadLink(*entry, static_cast<int>(linkId));
    } else {
        ((VirtualKNSCoreProvider*)self)->loadPayloadLink(*entry, static_cast<int>(linkId));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadPayloadLink(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadPayloadLink_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadPayloadLink_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadComments(KNSCore__Provider* self, const KNSCore__Entry* param1, int param2, int param3) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadComments_IsBase(true);
        vknscoreprovider->loadComments(*param1, static_cast<int>(param2), static_cast<int>(param3));
    } else {
        self->KNSCore::Provider::loadComments(*param1, static_cast<int>(param2), static_cast<int>(param3));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadComments(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadComments_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadComments_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadPerson(KNSCore__Provider* self, const libqt_string param1) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadPerson_IsBase(true);
        vknscoreprovider->loadPerson(param1_QString);
    } else {
        self->KNSCore::Provider::loadPerson(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadPerson(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadPerson_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadPerson_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseLoadBasics(KNSCore__Provider* self) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadBasics_IsBase(true);
        vknscoreprovider->loadBasics();
    } else {
        self->KNSCore::Provider::loadBasics();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnLoadBasics(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_LoadBasics_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_LoadBasics_Callback>(slot));
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseUserCanVote(KNSCore__Provider* self) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_UserCanVote_IsBase(true);
        return vknscoreprovider->userCanVote();
    } else {
        return self->KNSCore::Provider::userCanVote();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnUserCanVote(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_UserCanVote_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_UserCanVote_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseVote(KNSCore__Provider* self, const KNSCore__Entry* param1, unsigned int param2) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Vote_IsBase(true);
        vknscoreprovider->vote(*param1, static_cast<unsigned int>(param2));
    } else {
        self->KNSCore::Provider::vote(*param1, static_cast<unsigned int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnVote(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Vote_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Vote_Callback>(slot));
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseUserCanBecomeFan(KNSCore__Provider* self) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_UserCanBecomeFan_IsBase(true);
        return vknscoreprovider->userCanBecomeFan();
    } else {
        return self->KNSCore::Provider::userCanBecomeFan();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnUserCanBecomeFan(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_UserCanBecomeFan_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_UserCanBecomeFan_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseBecomeFan(KNSCore__Provider* self, const KNSCore__Entry* param1) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_BecomeFan_IsBase(true);
        vknscoreprovider->becomeFan(*param1);
    } else {
        self->KNSCore::Provider::becomeFan(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnBecomeFan(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_BecomeFan_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_BecomeFan_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Provider_Event(KNSCore__Provider* self, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->event(event);
    } else {
        return self->KNSCore::Provider::event(event);
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseEvent(KNSCore__Provider* self, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Event_IsBase(true);
        return vknscoreprovider->event(event);
    } else {
        return self->KNSCore::Provider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnEvent(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Event_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Provider_EventFilter(KNSCore__Provider* self, QObject* watched, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->eventFilter(watched, event);
    } else {
        return self->KNSCore::Provider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseEventFilter(KNSCore__Provider* self, QObject* watched, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_EventFilter_IsBase(true);
        return vknscoreprovider->eventFilter(watched, event);
    } else {
        return self->KNSCore::Provider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnEventFilter(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_TimerEvent(KNSCore__Provider* self, QTimerEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->timerEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseTimerEvent(KNSCore__Provider* self, QTimerEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_TimerEvent_IsBase(true);
        vknscoreprovider->timerEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnTimerEvent(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_ChildEvent(KNSCore__Provider* self, QChildEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->childEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseChildEvent(KNSCore__Provider* self, QChildEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_ChildEvent_IsBase(true);
        vknscoreprovider->childEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnChildEvent(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_CustomEvent(KNSCore__Provider* self, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->customEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseCustomEvent(KNSCore__Provider* self, QEvent* event) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_CustomEvent_IsBase(true);
        vknscoreprovider->customEvent(event);
    } else {
        ((VirtualKNSCoreProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnCustomEvent(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_ConnectNotify(KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseConnectNotify(KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_ConnectNotify_IsBase(true);
        vknscoreprovider->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnConnectNotify(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_DisconnectNotify(KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseDisconnectNotify(KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_DisconnectNotify_IsBase(true);
        vknscoreprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnDisconnectNotify(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_SetName(KNSCore__Provider* self, const libqt_string name) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setName(name_QString);
    } else {
        ((VirtualKNSCoreProvider*)self)->setName(name_QString);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseSetName(KNSCore__Provider* self, const libqt_string name) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetName_IsBase(true);
        vknscoreprovider->setName(name_QString);
    } else {
        ((VirtualKNSCoreProvider*)self)->setName(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSetName(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetName_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_SetName_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Provider_SetIcon(KNSCore__Provider* self, const QUrl* icon) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setIcon(*icon);
    } else {
        ((VirtualKNSCoreProvider*)self)->setIcon(*icon);
    }
}

// Base class handler implementation
void KNSCore__Provider_QBaseSetIcon(KNSCore__Provider* self, const QUrl* icon) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetIcon_IsBase(true);
        vknscoreprovider->setIcon(*icon);
    } else {
        ((VirtualKNSCoreProvider*)self)->setIcon(*icon);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSetIcon(KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = dynamic_cast<VirtualKNSCoreProvider*>(self);
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SetIcon_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_SetIcon_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__Provider_Sender(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->sender();
    } else {
        return ((VirtualKNSCoreProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__Provider_QBaseSender(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Sender_IsBase(true);
        return vknscoreprovider->sender();
    } else {
        return ((VirtualKNSCoreProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSender(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Sender_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__Provider_SenderSignalIndex(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__Provider_QBaseSenderSignalIndex(const KNSCore__Provider* self) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SenderSignalIndex_IsBase(true);
        return vknscoreprovider->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnSenderSignalIndex(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__Provider_Receivers(const KNSCore__Provider* self, const char* signal) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->receivers(signal);
    } else {
        return ((VirtualKNSCoreProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__Provider_QBaseReceivers(const KNSCore__Provider* self, const char* signal) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Receivers_IsBase(true);
        return vknscoreprovider->receivers(signal);
    } else {
        return ((VirtualKNSCoreProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnReceivers(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_Receivers_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Provider_IsSignalConnected(const KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        return vknscoreprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__Provider_QBaseIsSignalConnected(const KNSCore__Provider* self, const QMetaMethod* signal) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_IsSignalConnected_IsBase(true);
        return vknscoreprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Provider_OnIsSignalConnected(const KNSCore__Provider* self, intptr_t slot) {
    auto* vknscoreprovider = const_cast<VirtualKNSCoreProvider*>(dynamic_cast<const VirtualKNSCoreProvider*>(self));
    if (vknscoreprovider && vknscoreprovider->isVirtualKNSCoreProvider) {
        vknscoreprovider->setKNSCore__Provider_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreProvider::KNSCore__Provider_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__Provider_Delete(KNSCore__Provider* self) {
    delete self;
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new() {
    return new KNSCore::Provider::SearchRequest();
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new2(const KNSCore__Provider__SearchRequest* param1) {
    return new KNSCore::Provider::SearchRequest(*param1);
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new3(int sortMode_) {
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_));
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new4(int sortMode_, int filter_) {
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_), static_cast<KNSCore::Provider::Filter>(filter_));
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new5(int sortMode_, int filter_, const libqt_string searchTerm_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_), static_cast<KNSCore::Provider::Filter>(filter_), searchTerm__QString);
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new6(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_), static_cast<KNSCore::Provider::Filter>(filter_), searchTerm__QString, categories__QList);
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new7(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_), static_cast<KNSCore::Provider::Filter>(filter_), searchTerm__QString, categories__QList, static_cast<int>(page_));
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchRequest_new8(int sortMode_, int filter_, const libqt_string searchTerm_, const libqt_list /* of libqt_string */ categories_, int page_, int pageSize_) {
    QString searchTerm__QString = QString::fromUtf8(searchTerm_.data, searchTerm_.len);
    QList<QString> categories__QList;
    categories__QList.reserve(categories_.len);
    libqt_string* categories__arr = static_cast<libqt_string*>(categories_.data);
    for (size_t i = 0; i < categories_.len; ++i) {
        QString categories__arr_i_QString = QString::fromUtf8(categories__arr[i].data, categories__arr[i].len);
        categories__QList.push_back(categories__arr_i_QString);
    }
    return new KNSCore::Provider::SearchRequest(static_cast<KNSCore::Provider::SortMode>(sortMode_), static_cast<KNSCore::Provider::Filter>(filter_), searchTerm__QString, categories__QList, static_cast<int>(page_), static_cast<int>(pageSize_));
}

int KNSCore__Provider__SearchRequest_SortMode(const KNSCore__Provider__SearchRequest* self) {
    return static_cast<int>(self->sortMode);
}

void KNSCore__Provider__SearchRequest_SetSortMode(KNSCore__Provider__SearchRequest* self, int sortMode) {
    self->sortMode = static_cast<KNSCore::Provider::SortMode>(sortMode);
}

int KNSCore__Provider__SearchRequest_Filter(const KNSCore__Provider__SearchRequest* self) {
    return static_cast<int>(self->filter);
}

void KNSCore__Provider__SearchRequest_SetFilter(KNSCore__Provider__SearchRequest* self, int filter) {
    self->filter = static_cast<KNSCore::Provider::Filter>(filter);
}

libqt_string KNSCore__Provider__SearchRequest_SearchTerm(const KNSCore__Provider__SearchRequest* self) {
    QString searchTerm_ret = self->searchTerm;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray searchTerm_b = searchTerm_ret.toUtf8();
    libqt_string searchTerm_str;
    searchTerm_str.len = searchTerm_b.length();
    searchTerm_str.data = static_cast<const char*>(malloc(searchTerm_str.len + 1));
    memcpy((void*)searchTerm_str.data, searchTerm_b.data(), searchTerm_str.len);
    ((char*)searchTerm_str.data)[searchTerm_str.len] = '\0';
    return searchTerm_str;
}

void KNSCore__Provider__SearchRequest_SetSearchTerm(KNSCore__Provider__SearchRequest* self, libqt_string searchTerm) {
    QString searchTerm_QString = QString::fromUtf8(searchTerm.data, searchTerm.len);
    self->searchTerm = searchTerm_QString;
}

libqt_list /* of libqt_string */ KNSCore__Provider__SearchRequest_Categories(const KNSCore__Provider__SearchRequest* self) {
    QList<QString> categories_ret = self->categories;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* categories_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (categories_ret.size() + 1)));
    for (qsizetype i = 0; i < categories_ret.size(); ++i) {
        QString categories_lv_ret = categories_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray categories_lv_b = categories_lv_ret.toUtf8();
        libqt_string categories_lv_str;
        categories_lv_str.len = categories_lv_b.length();
        categories_lv_str.data = static_cast<const char*>(malloc(categories_lv_str.len + 1));
        memcpy((void*)categories_lv_str.data, categories_lv_b.data(), categories_lv_str.len);
        ((char*)categories_lv_str.data)[categories_lv_str.len] = '\0';
        categories_arr[i] = categories_lv_str;
    }
    libqt_list categories_out;
    categories_out.len = categories_ret.size();
    categories_out.data = static_cast<void*>(categories_arr);
    return categories_out;
}

void KNSCore__Provider__SearchRequest_SetCategories(KNSCore__Provider__SearchRequest* self, libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->categories = categories_QList;
}

int KNSCore__Provider__SearchRequest_Page(const KNSCore__Provider__SearchRequest* self) {
    return self->page;
}

void KNSCore__Provider__SearchRequest_SetPage(KNSCore__Provider__SearchRequest* self, int page) {
    self->page = static_cast<int>(page);
}

int KNSCore__Provider__SearchRequest_PageSize(const KNSCore__Provider__SearchRequest* self) {
    return self->pageSize;
}

void KNSCore__Provider__SearchRequest_SetPageSize(KNSCore__Provider__SearchRequest* self, int pageSize) {
    self->pageSize = static_cast<int>(pageSize);
}

libqt_string KNSCore__Provider__SearchRequest_HashForRequest(const KNSCore__Provider__SearchRequest* self) {
    QString _ret = self->hashForRequest();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KNSCore__Provider__SearchRequest_OperatorEqual(const KNSCore__Provider__SearchRequest* self, const KNSCore__Provider__SearchRequest* other) {
    return (*self == *other);
}

void KNSCore__Provider__SearchRequest_OperatorAssign(KNSCore__Provider__SearchRequest* self, const KNSCore__Provider__SearchRequest* param1) {
    self->operator=(*param1);
}

void KNSCore__Provider__SearchRequest_Delete(KNSCore__Provider__SearchRequest* self) {
    delete self;
}

KNSCore__Provider__CategoryMetadata* KNSCore__Provider__CategoryMetadata_new(const KNSCore__Provider__CategoryMetadata* param1) {
    return new KNSCore::Provider::CategoryMetadata(*param1);
}

libqt_string KNSCore__Provider__CategoryMetadata_Id(const KNSCore__Provider__CategoryMetadata* self) {
    QString id_ret = self->id;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray id_b = id_ret.toUtf8();
    libqt_string id_str;
    id_str.len = id_b.length();
    id_str.data = static_cast<const char*>(malloc(id_str.len + 1));
    memcpy((void*)id_str.data, id_b.data(), id_str.len);
    ((char*)id_str.data)[id_str.len] = '\0';
    return id_str;
}

void KNSCore__Provider__CategoryMetadata_SetId(KNSCore__Provider__CategoryMetadata* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->id = id_QString;
}

libqt_string KNSCore__Provider__CategoryMetadata_Name(const KNSCore__Provider__CategoryMetadata* self) {
    QString name_ret = self->name;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray name_b = name_ret.toUtf8();
    libqt_string name_str;
    name_str.len = name_b.length();
    name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
    memcpy((void*)name_str.data, name_b.data(), name_str.len);
    ((char*)name_str.data)[name_str.len] = '\0';
    return name_str;
}

void KNSCore__Provider__CategoryMetadata_SetName(KNSCore__Provider__CategoryMetadata* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->name = name_QString;
}

libqt_string KNSCore__Provider__CategoryMetadata_DisplayName(const KNSCore__Provider__CategoryMetadata* self) {
    QString displayName_ret = self->displayName;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray displayName_b = displayName_ret.toUtf8();
    libqt_string displayName_str;
    displayName_str.len = displayName_b.length();
    displayName_str.data = static_cast<const char*>(malloc(displayName_str.len + 1));
    memcpy((void*)displayName_str.data, displayName_b.data(), displayName_str.len);
    ((char*)displayName_str.data)[displayName_str.len] = '\0';
    return displayName_str;
}

void KNSCore__Provider__CategoryMetadata_SetDisplayName(KNSCore__Provider__CategoryMetadata* self, libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->displayName = displayName_QString;
}

void KNSCore__Provider__CategoryMetadata_OperatorAssign(KNSCore__Provider__CategoryMetadata* self, const KNSCore__Provider__CategoryMetadata* param1) {
    self->operator=(*param1);
}

void KNSCore__Provider__CategoryMetadata_Delete(KNSCore__Provider__CategoryMetadata* self) {
    delete self;
}

KNSCore__Provider__SearchPreset* KNSCore__Provider__SearchPreset_new(const KNSCore__Provider__SearchPreset* param1) {
    return new KNSCore::Provider::SearchPreset(*param1);
}

KNSCore__Provider__SearchRequest* KNSCore__Provider__SearchPreset_Request(const KNSCore__Provider__SearchPreset* self) {
    return new KNSCore::Provider::SearchRequest(self->request);
}

void KNSCore__Provider__SearchPreset_SetRequest(KNSCore__Provider__SearchPreset* self, KNSCore__Provider__SearchRequest* request) {
    self->request = *request;
}

libqt_string KNSCore__Provider__SearchPreset_DisplayName(const KNSCore__Provider__SearchPreset* self) {
    QString displayName_ret = self->displayName;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray displayName_b = displayName_ret.toUtf8();
    libqt_string displayName_str;
    displayName_str.len = displayName_b.length();
    displayName_str.data = static_cast<const char*>(malloc(displayName_str.len + 1));
    memcpy((void*)displayName_str.data, displayName_b.data(), displayName_str.len);
    ((char*)displayName_str.data)[displayName_str.len] = '\0';
    return displayName_str;
}

void KNSCore__Provider__SearchPreset_SetDisplayName(KNSCore__Provider__SearchPreset* self, libqt_string displayName) {
    QString displayName_QString = QString::fromUtf8(displayName.data, displayName.len);
    self->displayName = displayName_QString;
}

libqt_string KNSCore__Provider__SearchPreset_IconName(const KNSCore__Provider__SearchPreset* self) {
    QString iconName_ret = self->iconName;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray iconName_b = iconName_ret.toUtf8();
    libqt_string iconName_str;
    iconName_str.len = iconName_b.length();
    iconName_str.data = static_cast<const char*>(malloc(iconName_str.len + 1));
    memcpy((void*)iconName_str.data, iconName_b.data(), iconName_str.len);
    ((char*)iconName_str.data)[iconName_str.len] = '\0';
    return iconName_str;
}

void KNSCore__Provider__SearchPreset_SetIconName(KNSCore__Provider__SearchPreset* self, libqt_string iconName) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    self->iconName = iconName_QString;
}

int KNSCore__Provider__SearchPreset_Type(const KNSCore__Provider__SearchPreset* self) {
    return static_cast<int>(self->type);
}

void KNSCore__Provider__SearchPreset_SetType(KNSCore__Provider__SearchPreset* self, int type) {
    self->type = static_cast<KNSCore::Provider::SearchPresetTypes>(type);
}

libqt_string KNSCore__Provider__SearchPreset_ProviderId(const KNSCore__Provider__SearchPreset* self) {
    QString providerId_ret = self->providerId;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray providerId_b = providerId_ret.toUtf8();
    libqt_string providerId_str;
    providerId_str.len = providerId_b.length();
    providerId_str.data = static_cast<const char*>(malloc(providerId_str.len + 1));
    memcpy((void*)providerId_str.data, providerId_b.data(), providerId_str.len);
    ((char*)providerId_str.data)[providerId_str.len] = '\0';
    return providerId_str;
}

void KNSCore__Provider__SearchPreset_SetProviderId(KNSCore__Provider__SearchPreset* self, libqt_string providerId) {
    QString providerId_QString = QString::fromUtf8(providerId.data, providerId.len);
    self->providerId = providerId_QString;
}

void KNSCore__Provider__SearchPreset_OperatorAssign(KNSCore__Provider__SearchPreset* self, const KNSCore__Provider__SearchPreset* param1) {
    self->operator=(*param1);
}

void KNSCore__Provider__SearchPreset_Delete(KNSCore__Provider__SearchPreset* self) {
    delete self;
}
