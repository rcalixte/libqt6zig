#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__ResultsStream
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <resultsstream.h>
#include "libresultsstream.h"
#include "libresultsstream.hxx"

QMetaObject* KNSCore__ResultsStream_MetaObject(const KNSCore__ResultsStream* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__ResultsStream_Metacast(KNSCore__ResultsStream* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__ResultsStream_Metacall(KNSCore__ResultsStream* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__ResultsStream_Tr(const char* s) {
    QString _ret = KNSCore::ResultsStream::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__ResultsStream_Fetch(KNSCore__ResultsStream* self) {
    self->fetch();
}

void KNSCore__ResultsStream_FetchMore(KNSCore__ResultsStream* self) {
    self->fetchMore();
}

void KNSCore__ResultsStream_EntriesFound(KNSCore__ResultsStream* self, const libqt_list /* of KNSCore__Entry* */ entries) {
    QList<KNSCore::Entry> entries_QList;
    entries_QList.reserve(entries.len);
    KNSCore__Entry** entries_arr = static_cast<KNSCore__Entry**>(entries.data);
    for (size_t i = 0; i < entries.len; ++i) {
        entries_QList.push_back(*(entries_arr[i]));
    }
    self->entriesFound(entries_QList);
}

void KNSCore__ResultsStream_Connect_EntriesFound(KNSCore__ResultsStream* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__ResultsStream*, KNSCore__Entry**) = reinterpret_cast<void (*)(KNSCore__ResultsStream*, KNSCore__Entry**)>(slot);
    KNSCore::ResultsStream::connect(self, &KNSCore::ResultsStream::entriesFound, [self, slotFunc](const QList<KNSCore::Entry>& entries) {
        const QList<KNSCore::Entry>& entries_ret = entries;
        // Convert QList<> from C++ memory to manually-managed C memory
        KNSCore__Entry** entries_arr = static_cast<KNSCore__Entry**>(malloc(sizeof(KNSCore__Entry*) * (entries_ret.size() + 1)));
        for (qsizetype i = 0; i < entries_ret.size(); ++i) {
            entries_arr[i] = new KNSCore::Entry(entries_ret[i]);
        }
        // Append sentinel value to the list
        entries_arr[entries_ret.size()] = nullptr;
        KNSCore__Entry** sigval1 = entries_arr;
        slotFunc(self, sigval1);
        free(entries_arr);
    });
}

void KNSCore__ResultsStream_Finished(KNSCore__ResultsStream* self) {
    self->finished();
}

void KNSCore__ResultsStream_Connect_Finished(KNSCore__ResultsStream* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__ResultsStream*) = reinterpret_cast<void (*)(KNSCore__ResultsStream*)>(slot);
    KNSCore::ResultsStream::connect(self, &KNSCore::ResultsStream::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KNSCore__ResultsStream_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::ResultsStream::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__ResultsStream_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::ResultsStream::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__ResultsStream_Delete(KNSCore__ResultsStream* self) {
    delete self;
}
