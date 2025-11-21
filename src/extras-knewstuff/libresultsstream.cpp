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

void KNSCore__ResultsStream_Delete(KNSCore__ResultsStream* self) {
    delete self;
}
