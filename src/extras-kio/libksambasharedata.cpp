#include <KSambaShareData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ksambasharedata.h>
#include "libksambasharedata.h"
#include "libksambasharedata.hxx"

KSambaShareData* KSambaShareData_new() {
    return new KSambaShareData();
}

KSambaShareData* KSambaShareData_new2(const KSambaShareData* other) {
    return new KSambaShareData(*other);
}

libqt_string KSambaShareData_Name(const KSambaShareData* self) {
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

libqt_string KSambaShareData_Path(const KSambaShareData* self) {
    QString _ret = self->path();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSambaShareData_Comment(const KSambaShareData* self) {
    QString _ret = self->comment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSambaShareData_Acl(const KSambaShareData* self) {
    QString _ret = self->acl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KSambaShareData_GuestPermission(const KSambaShareData* self) {
    return static_cast<int>(self->guestPermission());
}

int KSambaShareData_SetName(KSambaShareData* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return static_cast<int>(self->setName(name_QString));
}

int KSambaShareData_SetPath(KSambaShareData* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return static_cast<int>(self->setPath(path_QString));
}

int KSambaShareData_SetComment(KSambaShareData* self, const libqt_string comment) {
    QString comment_QString = QString::fromUtf8(comment.data, comment.len);
    return static_cast<int>(self->setComment(comment_QString));
}

int KSambaShareData_SetAcl(KSambaShareData* self, const libqt_string acl) {
    QString acl_QString = QString::fromUtf8(acl.data, acl.len);
    return static_cast<int>(self->setAcl(acl_QString));
}

int KSambaShareData_SetGuestPermission(KSambaShareData* self) {
    return static_cast<int>(self->setGuestPermission());
}

int KSambaShareData_Save(KSambaShareData* self) {
    return static_cast<int>(self->save());
}

int KSambaShareData_Remove(KSambaShareData* self) {
    return static_cast<int>(self->remove());
}

void KSambaShareData_OperatorAssign(KSambaShareData* self, const KSambaShareData* other) {
    self->operator=(*other);
}

bool KSambaShareData_OperatorEqual(const KSambaShareData* self, const KSambaShareData* other) {
    return (*self == *other);
}

bool KSambaShareData_OperatorNotEqual(const KSambaShareData* self, const KSambaShareData* other) {
    return (*self != *other);
}

int KSambaShareData_SetGuestPermission1(KSambaShareData* self, const int* permission) {
    return static_cast<int>(self->setGuestPermission((const KSambaShareData::GuestPermission&)(*permission)));
}

void KSambaShareData_Delete(KSambaShareData* self) {
    delete self;
}
