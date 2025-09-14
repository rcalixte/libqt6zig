#include <KSycocaEntry>
#include <QSharedData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ksycocaentry.h>
#include "libksycocaentry.h"
#include "libksycocaentry.hxx"

KSycocaEntry* KSycocaEntry_new() {
    return new KSycocaEntry();
}

bool KSycocaEntry_IsType(const KSycocaEntry* self, int t) {
    return self->isType(static_cast<KSycocaType>(t));
}

int KSycocaEntry_SycocaType(const KSycocaEntry* self) {
    return static_cast<int>(self->sycocaType());
}

libqt_string KSycocaEntry_Name(const KSycocaEntry* self) {
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

libqt_string KSycocaEntry_EntryPath(const KSycocaEntry* self) {
    QString _ret = self->entryPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSycocaEntry_StorageId(const KSycocaEntry* self) {
    QString _ret = self->storageId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSycocaEntry_IsValid(const KSycocaEntry* self) {
    return self->isValid();
}

bool KSycocaEntry_IsDeleted(const KSycocaEntry* self) {
    return self->isDeleted();
}

void KSycocaEntry_SetDeleted(KSycocaEntry* self, bool deleted) {
    self->setDeleted(deleted);
}

bool KSycocaEntry_IsSeparator(const KSycocaEntry* self) {
    return self->isSeparator();
}

void KSycocaEntry_Delete(KSycocaEntry* self) {
    delete self;
}
