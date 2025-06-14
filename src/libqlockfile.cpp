#include <QLockFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlockfile.h>
#include "libqlockfile.h"
#include "libqlockfile.hxx"

QLockFile* QLockFile_new(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QLockFile(fileName_QString);
}

libqt_string QLockFile_FileName(const QLockFile* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QLockFile_Lock(QLockFile* self) {
    return self->lock();
}

bool QLockFile_TryLock(QLockFile* self) {
    return self->tryLock();
}

void QLockFile_Unlock(QLockFile* self) {
    self->unlock();
}

void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime) {
    self->setStaleLockTime(static_cast<int>(staleLockTime));
}

int QLockFile_StaleLockTime(const QLockFile* self) {
    return self->staleLockTime();
}

bool QLockFile_IsLocked(const QLockFile* self) {
    return self->isLocked();
}

bool QLockFile_RemoveStaleLockFile(QLockFile* self) {
    return self->removeStaleLockFile();
}

int QLockFile_Error(const QLockFile* self) {
    return static_cast<int>(self->error());
}

bool QLockFile_TryLock1(QLockFile* self, int timeout) {
    return self->tryLock(static_cast<int>(timeout));
}

void QLockFile_Delete(QLockFile* self) {
    delete self;
}
