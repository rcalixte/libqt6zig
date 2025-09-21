#include <KNSCore/EngineBase>
#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Transaction
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <transaction.h>
#include "libtransaction.h"
#include "libtransaction.hxx"

QMetaObject* KNSCore__Transaction_MetaObject(const KNSCore__Transaction* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__Transaction_Metacast(KNSCore__Transaction* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__Transaction_Metacall(KNSCore__Transaction* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNSCore__Transaction_Tr(const char* s) {
    QString _ret = KNSCore::Transaction::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNSCore__Transaction* KNSCore__Transaction_Install(KNSCore__EngineBase* engine, const KNSCore__Entry* entry) {
    return KNSCore::Transaction::install(engine, *entry);
}

KNSCore__Transaction* KNSCore__Transaction_InstallLinkId(KNSCore__EngineBase* engine, const KNSCore__Entry* entry, unsigned char linkId) {
    return KNSCore::Transaction::installLinkId(engine, *entry, static_cast<quint8>(linkId));
}

KNSCore__Transaction* KNSCore__Transaction_InstallLatest(KNSCore__EngineBase* engine, const KNSCore__Entry* entry) {
    return KNSCore::Transaction::installLatest(engine, *entry);
}

KNSCore__Transaction* KNSCore__Transaction_Uninstall(KNSCore__EngineBase* engine, const KNSCore__Entry* entry) {
    return KNSCore::Transaction::uninstall(engine, *entry);
}

KNSCore__Transaction* KNSCore__Transaction_Adopt(KNSCore__EngineBase* engine, const KNSCore__Entry* entry) {
    return KNSCore::Transaction::adopt(engine, *entry);
}

bool KNSCore__Transaction_IsFinished(const KNSCore__Transaction* self) {
    return self->isFinished();
}

void KNSCore__Transaction_Finished(KNSCore__Transaction* self) {
    self->finished();
}

void KNSCore__Transaction_Connect_Finished(KNSCore__Transaction* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Transaction*) = reinterpret_cast<void (*)(KNSCore__Transaction*)>(slot);
    KNSCore::Transaction::connect(self, &KNSCore::Transaction::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KNSCore__Transaction_SignalMessage(KNSCore__Transaction* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->signalMessage(message_QString);
}

void KNSCore__Transaction_Connect_SignalMessage(KNSCore__Transaction* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Transaction*, const char*) = reinterpret_cast<void (*)(KNSCore__Transaction*, const char*)>(slot);
    KNSCore::Transaction::connect(self, &KNSCore::Transaction::signalMessage, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

void KNSCore__Transaction_SignalEntryEvent(KNSCore__Transaction* self, const KNSCore__Entry* entry, int event) {
    self->signalEntryEvent(*entry, static_cast<KNSCore::Entry::EntryEvent>(event));
}

void KNSCore__Transaction_Connect_SignalEntryEvent(KNSCore__Transaction* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Transaction*, KNSCore__Entry*, int) = reinterpret_cast<void (*)(KNSCore__Transaction*, KNSCore__Entry*, int)>(slot);
    KNSCore::Transaction::connect(self, &KNSCore::Transaction::signalEntryEvent, [self, slotFunc](const KNSCore::Entry& entry, KNSCore::Entry::EntryEvent event) {
        const KNSCore::Entry& entry_ret = entry;
        // Cast returned reference into pointer
        KNSCore__Entry* sigval1 = const_cast<KNSCore::Entry*>(&entry_ret);
        int sigval2 = static_cast<int>(event);
        slotFunc(self, sigval1, sigval2);
    });
}

void KNSCore__Transaction_SignalErrorCode(KNSCore__Transaction* self, int errorCode, const libqt_string message, const QVariant* metadata) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->signalErrorCode(static_cast<KNSCore::ErrorCode::ErrorCode>(errorCode), message_QString, *metadata);
}

void KNSCore__Transaction_Connect_SignalErrorCode(KNSCore__Transaction* self, intptr_t slot) {
    void (*slotFunc)(KNSCore__Transaction*, int, const char*, QVariant*) = reinterpret_cast<void (*)(KNSCore__Transaction*, int, const char*, QVariant*)>(slot);
    KNSCore::Transaction::connect(self, &KNSCore::Transaction::signalErrorCode, [self, slotFunc](KNSCore::ErrorCode::ErrorCode errorCode, const QString& message, const QVariant& metadata) {
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

libqt_string KNSCore__Transaction_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::Transaction::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Transaction_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::Transaction::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KNSCore__Transaction* KNSCore__Transaction_Install3(KNSCore__EngineBase* engine, const KNSCore__Entry* entry, int linkId) {
    return KNSCore::Transaction::install(engine, *entry, static_cast<int>(linkId));
}

void KNSCore__Transaction_Delete(KNSCore__Transaction* self) {
    delete self;
}
