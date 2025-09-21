#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Provider
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__CategoryMetadata
#include <KNSCore/EngineBase>
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__CategoryMetadata
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchPreset
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ProviderCore
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ResultsStream
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__SearchPreset
#include <KNSCore/SearchRequest>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <enginebase.h>
#include "libenginebase.h"
#include "libenginebase.hxx"

KNSCore__EngineBase* KNSCore__EngineBase_new() {
    return new VirtualKNSCoreEngineBase();
}

KNSCore__EngineBase* KNSCore__EngineBase_new2(QObject* parent) {
    return new VirtualKNSCoreEngineBase(parent);
}

QMetaObject* KNSCore__EngineBase_MetaObject(const KNSCore__EngineBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__EngineBase_Metacast(KNSCore__EngineBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__EngineBase_Metacall(KNSCore__EngineBase* self, int param1, int param2, void** param3) {
    auto* vknscore__enginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscore__enginebase && vknscore__enginebase->isVirtualKNSCoreEngineBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__EngineBase_Tr(const char* s) {
    QString _ret = KNSCore::EngineBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KNSCore__EngineBase_AvailableConfigFiles() {
    QList<QString> _ret = KNSCore::EngineBase::availableConfigFiles();
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

bool KNSCore__EngineBase_Init(KNSCore__EngineBase* self, const libqt_string configfile) {
    QString configfile_QString = QString::fromUtf8(configfile.data, configfile.len);
    auto* vknscore__enginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscore__enginebase && vknscore__enginebase->isVirtualKNSCoreEngineBase) {
        return self->init(configfile_QString);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->init(configfile_QString);
    }
}

libqt_string KNSCore__EngineBase_Name(const KNSCore__EngineBase* self) {
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

libqt_string KNSCore__EngineBase_UseLabel(const KNSCore__EngineBase* self) {
    QString _ret = self->useLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__EngineBase_UseLabelChanged(KNSCore__EngineBase* self) {
    self->useLabelChanged();
}

bool KNSCore__EngineBase_UploadEnabled(const KNSCore__EngineBase* self) {
    return self->uploadEnabled();
}

void KNSCore__EngineBase_UploadEnabledChanged(KNSCore__EngineBase* self) {
    self->uploadEnabledChanged();
}

libqt_list /* of libqt_string */ KNSCore__EngineBase_Categories(const KNSCore__EngineBase* self) {
    QList<QString> _ret = self->categories();
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

libqt_list /* of KNSCore__Provider__CategoryMetadata* */ KNSCore__EngineBase_CategoriesMetadata(KNSCore__EngineBase* self) {
    QList<KNSCore::Provider::CategoryMetadata> _ret = self->categoriesMetadata();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Provider__CategoryMetadata** _arr = static_cast<KNSCore__Provider__CategoryMetadata**>(malloc(sizeof(KNSCore__Provider__CategoryMetadata*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Provider::CategoryMetadata(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KNSCore__CategoryMetadata* */ KNSCore__EngineBase_CategoriesMetadata2(KNSCore__EngineBase* self) {
    QList<KNSCore::CategoryMetadata> _ret = self->categoriesMetadata2();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__CategoryMetadata** _arr = static_cast<KNSCore__CategoryMetadata**>(malloc(sizeof(KNSCore__CategoryMetadata*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::CategoryMetadata(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KNSCore__Provider__SearchPreset* */ KNSCore__EngineBase_SearchPresets(KNSCore__EngineBase* self) {
    QList<KNSCore::Provider::SearchPreset> _ret = self->searchPresets();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Provider__SearchPreset** _arr = static_cast<KNSCore__Provider__SearchPreset**>(malloc(sizeof(KNSCore__Provider__SearchPreset*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Provider::SearchPreset(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KNSCore__SearchPreset* */ KNSCore__EngineBase_SearchPresets2(KNSCore__EngineBase* self) {
    QList<KNSCore::SearchPreset> _ret = self->searchPresets2();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__SearchPreset** _arr = static_cast<KNSCore__SearchPreset**>(malloc(sizeof(KNSCore__SearchPreset*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::SearchPreset(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of Attica__Provider* */ KNSCore__EngineBase_AtticaProviders(const KNSCore__EngineBase* self) {
    QList<Attica::Provider*> _ret = self->atticaProviders();
    // Convert QList<> from C++ memory to manually-managed C memory
    Attica__Provider** _arr = static_cast<Attica__Provider**>(malloc(sizeof(Attica__Provider*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSCore__EngineBase_SetTagFilter(KNSCore__EngineBase* self, const libqt_list /* of libqt_string */ filter) {
    QList<QString> filter_QList;
    filter_QList.reserve(filter.len);
    libqt_string* filter_arr = static_cast<libqt_string*>(filter.data);
    for (size_t i = 0; i < filter.len; ++i) {
        QString filter_arr_i_QString = QString::fromUtf8(filter_arr[i].data, filter_arr[i].len);
        filter_QList.push_back(filter_arr_i_QString);
    }
    self->setTagFilter(filter_QList);
}

libqt_list /* of libqt_string */ KNSCore__EngineBase_TagFilter(const KNSCore__EngineBase* self) {
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

void KNSCore__EngineBase_AddTagFilter(KNSCore__EngineBase* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->addTagFilter(filter_QString);
}

void KNSCore__EngineBase_SetDownloadTagFilter(KNSCore__EngineBase* self, const libqt_list /* of libqt_string */ filter) {
    QList<QString> filter_QList;
    filter_QList.reserve(filter.len);
    libqt_string* filter_arr = static_cast<libqt_string*>(filter.data);
    for (size_t i = 0; i < filter.len; ++i) {
        QString filter_arr_i_QString = QString::fromUtf8(filter_arr[i].data, filter_arr[i].len);
        filter_QList.push_back(filter_arr_i_QString);
    }
    self->setDownloadTagFilter(filter_QList);
}

libqt_list /* of libqt_string */ KNSCore__EngineBase_DownloadTagFilter(const KNSCore__EngineBase* self) {
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

void KNSCore__EngineBase_AddDownloadTagFilter(KNSCore__EngineBase* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->addDownloadTagFilter(filter_QString);
}

bool KNSCore__EngineBase_UserCanVote(KNSCore__EngineBase* self, const KNSCore__Entry* entry) {
    return self->userCanVote(*entry);
}

void KNSCore__EngineBase_Vote(KNSCore__EngineBase* self, const KNSCore__Entry* entry, unsigned int rating) {
    self->vote(*entry, static_cast<uint>(rating));
}

bool KNSCore__EngineBase_UserCanBecomeFan(KNSCore__EngineBase* self, const KNSCore__Entry* entry) {
    return self->userCanBecomeFan(*entry);
}

void KNSCore__EngineBase_BecomeFan(KNSCore__EngineBase* self, const KNSCore__Entry* entry) {
    self->becomeFan(*entry);
}

libqt_list /* of libqt_string */ KNSCore__EngineBase_ProviderIDs(const KNSCore__EngineBase* self) {
    QList<QString> _ret = self->providerIDs();
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

bool KNSCore__EngineBase_HasAdoptionCommand(const KNSCore__EngineBase* self) {
    return self->hasAdoptionCommand();
}

KNSCore__ResultsStream* KNSCore__EngineBase_Search(KNSCore__EngineBase* self, const KNSCore__Provider__SearchRequest* request) {
    return self->search(*request);
}

KNSCore__ResultsStream* KNSCore__EngineBase_Search2(KNSCore__EngineBase* self, const KNSCore__SearchRequest* request) {
    return self->search(*request);
}

int KNSCore__EngineBase_ContentWarningType(const KNSCore__EngineBase* self) {
    return static_cast<int>(self->contentWarningType());
}

void KNSCore__EngineBase_ContentWarningTypeChanged(KNSCore__EngineBase* self) {
    self->contentWarningTypeChanged();
}

void KNSCore__EngineBase_SignalMessage(KNSCore__EngineBase* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->signalMessage(message_QString);
}

void KNSCore__EngineBase_SignalProvidersLoaded(KNSCore__EngineBase* self) {
    self->signalProvidersLoaded();
}

void KNSCore__EngineBase_SignalErrorCode(KNSCore__EngineBase* self, int errorCode, const libqt_string message, const QVariant* metadata) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->signalErrorCode(static_cast<KNSCore::ErrorCode::ErrorCode>(errorCode), message_QString, *metadata);
}

void KNSCore__EngineBase_SignalCategoriesMetadataLoded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__Provider__CategoryMetadata* */ categories) {
    QList<KNSCore::Provider::CategoryMetadata> categories_QList;
    categories_QList.reserve(categories.len);
    KNSCore__Provider__CategoryMetadata** categories_arr = static_cast<KNSCore__Provider__CategoryMetadata**>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        categories_QList.push_back(*(categories_arr[i]));
    }
    self->signalCategoriesMetadataLoded(categories_QList);
}

void KNSCore__EngineBase_SignalCategoriesMetadataLoaded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__CategoryMetadata* */ categories) {
    QList<KNSCore::CategoryMetadata> categories_QList;
    categories_QList.reserve(categories.len);
    KNSCore__CategoryMetadata** categories_arr = static_cast<KNSCore__CategoryMetadata**>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        categories_QList.push_back(*(categories_arr[i]));
    }
    self->signalCategoriesMetadataLoaded(categories_QList);
}

void KNSCore__EngineBase_SignalSearchPresetsLoaded(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__Provider__SearchPreset* */ presets) {
    QList<KNSCore::Provider::SearchPreset> presets_QList;
    presets_QList.reserve(presets.len);
    KNSCore__Provider__SearchPreset** presets_arr = static_cast<KNSCore__Provider__SearchPreset**>(presets.data);
    for (size_t i = 0; i < presets.len; ++i) {
        presets_QList.push_back(*(presets_arr[i]));
    }
    self->signalSearchPresetsLoaded(presets_QList);
}

void KNSCore__EngineBase_SignalSearchPresetsLoaded2(KNSCore__EngineBase* self, const libqt_list /* of KNSCore__SearchPreset* */ presets) {
    QList<KNSCore::SearchPreset> presets_QList;
    presets_QList.reserve(presets.len);
    KNSCore__SearchPreset** presets_arr = static_cast<KNSCore__SearchPreset**>(presets.data);
    for (size_t i = 0; i < presets.len; ++i) {
        presets_QList.push_back(*(presets_arr[i]));
    }
    self->signalSearchPresetsLoaded(presets_QList);
}

void KNSCore__EngineBase_ProvidersChanged(KNSCore__EngineBase* self) {
    self->providersChanged();
}

void KNSCore__EngineBase_LoadingProvider(KNSCore__EngineBase* self) {
    self->loadingProvider();
}

void KNSCore__EngineBase_ProviderAdded(KNSCore__EngineBase* self, KNSCore__ProviderCore* provider) {
    self->providerAdded(provider);
}

void KNSCore__EngineBase_UpdateStatus(KNSCore__EngineBase* self) {
    auto* vknscore__enginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscore__enginebase && vknscore__enginebase->isVirtualKNSCoreEngineBase) {
        vknscore__enginebase->updateStatus();
    }
}

libqt_string KNSCore__EngineBase_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::EngineBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__EngineBase_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::EngineBase::tr(s, c, static_cast<int>(n));
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
int KNSCore__EngineBase_QBaseMetacall(KNSCore__EngineBase* self, int param1, int param2, void** param3) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Metacall_IsBase(true);
        return vknscoreenginebase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::EngineBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnMetacall(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Metacall_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KNSCore__EngineBase_QBaseInit(KNSCore__EngineBase* self, const libqt_string configfile) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    QString configfile_QString = QString::fromUtf8(configfile.data, configfile.len);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Init_IsBase(true);
        return vknscoreenginebase->init(configfile_QString);
    } else {
        return self->KNSCore::EngineBase::init(configfile_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnInit(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Init_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_Init_Callback>(slot));
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseUpdateStatus(KNSCore__EngineBase* self) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_UpdateStatus_IsBase(true);
        vknscoreenginebase->updateStatus();
    } else {
        ((VirtualKNSCoreEngineBase*)self)->updateStatus();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnUpdateStatus(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_UpdateStatus_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_UpdateStatus_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__EngineBase_Event(KNSCore__EngineBase* self, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->event(event);
    } else {
        return self->KNSCore::EngineBase::event(event);
    }
}

// Base class handler implementation
bool KNSCore__EngineBase_QBaseEvent(KNSCore__EngineBase* self, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Event_IsBase(true);
        return vknscoreenginebase->event(event);
    } else {
        return self->KNSCore::EngineBase::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnEvent(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Event_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__EngineBase_EventFilter(KNSCore__EngineBase* self, QObject* watched, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->eventFilter(watched, event);
    } else {
        return self->KNSCore::EngineBase::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__EngineBase_QBaseEventFilter(KNSCore__EngineBase* self, QObject* watched, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_EventFilter_IsBase(true);
        return vknscoreenginebase->eventFilter(watched, event);
    } else {
        return self->KNSCore::EngineBase::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnEventFilter(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__EngineBase_TimerEvent(KNSCore__EngineBase* self, QTimerEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->timerEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseTimerEvent(KNSCore__EngineBase* self, QTimerEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_TimerEvent_IsBase(true);
        vknscoreenginebase->timerEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnTimerEvent(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__EngineBase_ChildEvent(KNSCore__EngineBase* self, QChildEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->childEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseChildEvent(KNSCore__EngineBase* self, QChildEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_ChildEvent_IsBase(true);
        vknscoreenginebase->childEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnChildEvent(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__EngineBase_CustomEvent(KNSCore__EngineBase* self, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->customEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseCustomEvent(KNSCore__EngineBase* self, QEvent* event) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_CustomEvent_IsBase(true);
        vknscoreenginebase->customEvent(event);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnCustomEvent(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__EngineBase_ConnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseConnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_ConnectNotify_IsBase(true);
        vknscoreenginebase->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnConnectNotify(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__EngineBase_DisconnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__EngineBase_QBaseDisconnectNotify(KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_DisconnectNotify_IsBase(true);
        vknscoreenginebase->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreEngineBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnDisconnectNotify(KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = dynamic_cast<VirtualKNSCoreEngineBase*>(self);
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__EngineBase_Sender(const KNSCore__EngineBase* self) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->sender();
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__EngineBase_QBaseSender(const KNSCore__EngineBase* self) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Sender_IsBase(true);
        return vknscoreenginebase->sender();
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnSender(const KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Sender_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__EngineBase_SenderSignalIndex(const KNSCore__EngineBase* self) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__EngineBase_QBaseSenderSignalIndex(const KNSCore__EngineBase* self) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_SenderSignalIndex_IsBase(true);
        return vknscoreenginebase->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnSenderSignalIndex(const KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__EngineBase_Receivers(const KNSCore__EngineBase* self, const char* signal) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->receivers(signal);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__EngineBase_QBaseReceivers(const KNSCore__EngineBase* self, const char* signal) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Receivers_IsBase(true);
        return vknscoreenginebase->receivers(signal);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnReceivers(const KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_Receivers_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__EngineBase_IsSignalConnected(const KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        return vknscoreenginebase->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__EngineBase_QBaseIsSignalConnected(const KNSCore__EngineBase* self, const QMetaMethod* signal) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_IsSignalConnected_IsBase(true);
        return vknscoreenginebase->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreEngineBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__EngineBase_OnIsSignalConnected(const KNSCore__EngineBase* self, intptr_t slot) {
    auto* vknscoreenginebase = const_cast<VirtualKNSCoreEngineBase*>(dynamic_cast<const VirtualKNSCoreEngineBase*>(self));
    if (vknscoreenginebase && vknscoreenginebase->isVirtualKNSCoreEngineBase) {
        vknscoreenginebase->setKNSCore__EngineBase_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreEngineBase::KNSCore__EngineBase_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__EngineBase_Delete(KNSCore__EngineBase* self) {
    delete self;
}
