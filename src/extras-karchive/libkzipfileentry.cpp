#include <KArchive>
#include <KArchiveEntry>
#include <KArchiveFile>
#include <KZip>
#include <KZipFileEntry>
#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QString>
#include <kzipfileentry.h>
#include "libkzipfileentry.h"
#include "libkzipfileentry.hxx"

KZipFileEntry* KZipFileEntry_new(KZip* zip, const libqt_string name, int access, const QDateTime* date, const libqt_string user, const libqt_string group, const libqt_string symlink, const libqt_string path, long long start, long long uncompressedSize, int encoding, long long compressedSize) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    QString group_QString = QString::fromUtf8(group.data, group.len);
    QString symlink_QString = QString::fromUtf8(symlink.data, symlink.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return new VirtualKZipFileEntry(zip, name_QString, static_cast<int>(access), *date, user_QString, group_QString, symlink_QString, path_QString, static_cast<qint64>(start), static_cast<qint64>(uncompressedSize), static_cast<int>(encoding), static_cast<qint64>(compressedSize));
}

KZipFileEntry* KZipFileEntry_new2(const KZipFileEntry* param1) {
    return new VirtualKZipFileEntry(*param1);
}

int KZipFileEntry_Encoding(const KZipFileEntry* self) {
    return self->encoding();
}

long long KZipFileEntry_CompressedSize(const KZipFileEntry* self) {
    return static_cast<long long>(self->compressedSize());
}

void KZipFileEntry_SetCompressedSize(KZipFileEntry* self, long long compressedSize) {
    self->setCompressedSize(static_cast<qint64>(compressedSize));
}

void KZipFileEntry_SetHeaderStart(KZipFileEntry* self, long long headerstart) {
    self->setHeaderStart(static_cast<qint64>(headerstart));
}

long long KZipFileEntry_HeaderStart(const KZipFileEntry* self) {
    return static_cast<long long>(self->headerStart());
}

unsigned long KZipFileEntry_Crc32(const KZipFileEntry* self) {
    return self->crc32();
}

void KZipFileEntry_SetCRC32(KZipFileEntry* self, unsigned long crc32) {
    self->setCRC32(static_cast<unsigned long>(crc32));
}

libqt_string KZipFileEntry_Path(const KZipFileEntry* self) {
    const auto _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KZipFileEntry_Data(const KZipFileEntry* self) {
    QByteArray _qb = self->data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

QIODevice* KZipFileEntry_CreateDevice(const KZipFileEntry* self) {
    return self->createDevice();
}

// Base class handler implementation
libqt_string KZipFileEntry_SuperData(const KZipFileEntry* self) {
    QByteArray _qb = self->KZipFileEntry::data();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KZipFileEntry_OnData(KZipFileEntry* self, intptr_t slot) {
    if (auto* vkzipfileentry = const_cast<VirtualKZipFileEntry*>(dynamic_cast<const VirtualKZipFileEntry*>(self)))
        vkzipfileentry->kzipfileentry_data_callback = reinterpret_cast<VirtualKZipFileEntry::KZipFileEntry_Data_Callback>(slot);
}

// Base class handler implementation
QIODevice* KZipFileEntry_SuperCreateDevice(const KZipFileEntry* self) {
    return self->KZipFileEntry::createDevice();
}

// Auxiliary method to allow providing re-implementation
void KZipFileEntry_OnCreateDevice(KZipFileEntry* self, intptr_t slot) {
    if (auto* vkzipfileentry = const_cast<VirtualKZipFileEntry*>(dynamic_cast<const VirtualKZipFileEntry*>(self)))
        vkzipfileentry->kzipfileentry_createdevice_callback = reinterpret_cast<VirtualKZipFileEntry::KZipFileEntry_CreateDevice_Callback>(slot);
}

// Derived class handler implementation
bool KZipFileEntry_IsFile(const KZipFileEntry* self) {
    return self->isFile();
}

// Base class handler implementation
bool KZipFileEntry_SuperIsFile(const KZipFileEntry* self) {
    return self->KZipFileEntry::isFile();
}

// Auxiliary method to allow providing re-implementation
void KZipFileEntry_OnIsFile(KZipFileEntry* self, intptr_t slot) {
    if (auto* vkzipfileentry = const_cast<VirtualKZipFileEntry*>(dynamic_cast<const VirtualKZipFileEntry*>(self)))
        vkzipfileentry->kzipfileentry_isfile_callback = reinterpret_cast<VirtualKZipFileEntry::KZipFileEntry_IsFile_Callback>(slot);
}

// Derived class handler implementation
void KZipFileEntry_VirtualHook(KZipFileEntry* self, int id, void* data) {
    auto* vkzipfileentry = dynamic_cast<VirtualKZipFileEntry*>(self);
    if (vkzipfileentry) {
        vkzipfileentry->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KZipFileEntry::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KZipFileEntry_SuperVirtualHook(KZipFileEntry* self, int id, void* data) {
    if (auto* vkzipfileentry = dynamic_cast<VirtualKZipFileEntry*>(self)) {
        vkzipfileentry->KZipFileEntry::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KZipFileEntry::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KZipFileEntry_OnVirtualHook(KZipFileEntry* self, intptr_t slot) {
    if (auto* vkzipfileentry = dynamic_cast<VirtualKZipFileEntry*>(self))
        vkzipfileentry->kzipfileentry_virtualhook_callback = reinterpret_cast<VirtualKZipFileEntry::KZipFileEntry_VirtualHook_Callback>(slot);
}

// Derived class handler implementation
bool KZipFileEntry_IsDirectory(const KZipFileEntry* self) {
    return self->isDirectory();
}

// Base class handler implementation
bool KZipFileEntry_SuperIsDirectory(const KZipFileEntry* self) {
    return self->KZipFileEntry::isDirectory();
}

// Auxiliary method to allow providing re-implementation
void KZipFileEntry_OnIsDirectory(KZipFileEntry* self, intptr_t slot) {
    if (auto* vkzipfileentry = const_cast<VirtualKZipFileEntry*>(dynamic_cast<const VirtualKZipFileEntry*>(self)))
        vkzipfileentry->kzipfileentry_isdirectory_callback = reinterpret_cast<VirtualKZipFileEntry::KZipFileEntry_IsDirectory_Callback>(slot);
}

// Derived class protected handler implementation
KArchive* KZipFileEntry_Archive(const KZipFileEntry* self) {
    if (auto* vkzipfileentry = const_cast<VirtualKZipFileEntry*>(dynamic_cast<const VirtualKZipFileEntry*>(self))) {
        return vkzipfileentry->VirtualKZipFileEntry::archive();
    } else
        qFatal("Error: Protected method KZipFileEntry::archive called without a directly constructed type");
}

void KZipFileEntry_Delete(KZipFileEntry* self) {
    delete self;
}
