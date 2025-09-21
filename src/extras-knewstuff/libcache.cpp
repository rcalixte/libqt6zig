#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Cache
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Provider__SearchRequest
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <cache.h>
#include "libcache.h"
#include "libcache.hxx"

QMetaObject* KNSCore__Cache_MetaObject(const KNSCore__Cache* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__Cache_Metacast(KNSCore__Cache* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__Cache_Metacall(KNSCore__Cache* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__Cache_Tr(const char* s) {
    QString _ret = KNSCore::Cache::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Cache_ReadRegistry(KNSCore__Cache* self) {
    self->readRegistry();
}

libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_RegistryForProvider(KNSCore__Cache* self, const libqt_string providerId) {
    QString providerId_QString = QString::fromUtf8(providerId.data, providerId.len);
    QList<KNSCore::Entry> _ret = self->registryForProvider(providerId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry** _arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_Registry(const KNSCore__Cache* self) {
    QList<KNSCore::Entry> _ret = self->registry();
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry** _arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSCore__Cache_WriteRegistry(KNSCore__Cache* self) {
    self->writeRegistry();
}

void KNSCore__Cache_InsertRequest(KNSCore__Cache* self, const KNSCore__Provider__SearchRequest* param1, const libqt_list /* of KNSCore__Entry* */ entries) {
    QList<KNSCore::Entry> entries_QList;
    entries_QList.reserve(entries.len);
    KNSCore__Entry** entries_arr = static_cast<KNSCore__Entry**>(entries.data);
    for (size_t i = 0; i < entries.len; ++i) {
        entries_QList.push_back(*(entries_arr[i]));
    }
    self->insertRequest(*param1, entries_QList);
}

libqt_list /* of KNSCore__Entry* */ KNSCore__Cache_RequestFromCache(KNSCore__Cache* self, const KNSCore__Provider__SearchRequest* param1) {
    QList<KNSCore::Entry> _ret = self->requestFromCache(*param1);
    // Convert QList<> from C++ memory to manually-managed C memory
    KNSCore__Entry** _arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KNSCore::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KNSCore__Cache_RemoveDeletedEntries(KNSCore__Cache* self) {
    self->removeDeletedEntries();
}

KNSCore__Entry* KNSCore__Cache_EntryFromInstalledFile(const KNSCore__Cache* self, const libqt_string installedFile) {
    QString installedFile_QString = QString::fromUtf8(installedFile.data, installedFile.len);
    return new KNSCore::Entry(self->entryFromInstalledFile(installedFile_QString));
}

void KNSCore__Cache_EntryChanged(KNSCore__Cache* self, const KNSCore__Entry* entry) {
    self->entryChanged(*entry);
}

void KNSCore__Cache_RegisterChangedEntry(KNSCore__Cache* self, const KNSCore__Entry* entry) {
    self->registerChangedEntry(*entry);
}

libqt_string KNSCore__Cache_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::Cache::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Cache_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::Cache::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Cache_Delete(KNSCore__Cache* self) {
    delete self;
}
