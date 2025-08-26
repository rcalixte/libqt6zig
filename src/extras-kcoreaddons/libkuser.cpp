#include <KUser>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <kuser.h>
#include "libkuser.h"
#include "libkuser.hxx"

KUser* KUser_new() {
    return new KUser();
}

KUser* KUser_new2(uid_t uid) {
    return new KUser(uid);
}

KUser* KUser_new3(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KUser(name_QString);
}

KUser* KUser_new4(const char* name) {
    return new KUser(name);
}

KUser* KUser_new5(const KUser* user) {
    return new KUser(*user);
}

KUser* KUser_new6(int mode) {
    return new KUser(static_cast<KUser::UIDMode>(mode));
}

void KUser_OperatorAssign(KUser* self, const KUser* user) {
    self->operator=(*user);
}

bool KUser_OperatorEqual(const KUser* self, const KUser* user) {
    return (*self == *user);
}

bool KUser_OperatorNotEqual(const KUser* self, const KUser* user) {
    return (*self != *user);
}

bool KUser_IsValid(const KUser* self) {
    return self->isValid();
}

bool KUser_IsSuperUser(const KUser* self) {
    return self->isSuperUser();
}

libqt_string KUser_LoginName(const KUser* self) {
    QString _ret = self->loginName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUser_HomeDir(const KUser* self) {
    QString _ret = self->homeDir();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUser_FaceIconPath(const KUser* self) {
    QString _ret = self->faceIconPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUser_Shell(const KUser* self) {
    QString _ret = self->shell();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KUserGroup* */ KUser_Groups(const KUser* self) {
    QList<KUserGroup> _ret = self->groups();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUserGroup** _arr = static_cast<KUserGroup**>(malloc(sizeof(KUserGroup*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUserGroup(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUser_GroupNames(const KUser* self) {
    QList<QString> _ret = self->groupNames();
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

QVariant* KUser_Property(const KUser* self, int which) {
    return new QVariant(self->property(static_cast<KUser::UserProperty>(which)));
}

libqt_list /* of KUser* */ KUser_AllUsers() {
    QList<KUser> _ret = KUser::allUsers();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUser** _arr = static_cast<KUser**>(malloc(sizeof(KUser*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUser(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUser_AllUserNames() {
    QList<QString> _ret = KUser::allUserNames();
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

libqt_list /* of KUserGroup* */ KUser_Groups1(const KUser* self, unsigned int maxCount) {
    QList<KUserGroup> _ret = self->groups(static_cast<uint>(maxCount));
    // Convert QList<> from C++ memory to manually-managed C memory
    KUserGroup** _arr = static_cast<KUserGroup**>(malloc(sizeof(KUserGroup*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUserGroup(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUser_GroupNames1(const KUser* self, unsigned int maxCount) {
    QList<QString> _ret = self->groupNames(static_cast<uint>(maxCount));
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

libqt_list /* of KUser* */ KUser_AllUsers1(unsigned int maxCount) {
    QList<KUser> _ret = KUser::allUsers(static_cast<uint>(maxCount));
    // Convert QList<> from C++ memory to manually-managed C memory
    KUser** _arr = static_cast<KUser**>(malloc(sizeof(KUser*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUser(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUser_AllUserNames1(unsigned int maxCount) {
    QList<QString> _ret = KUser::allUserNames(static_cast<uint>(maxCount));
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

void KUser_Delete(KUser* self) {
    delete self;
}

KUserGroup* KUserGroup_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KUserGroup(name_QString);
}

KUserGroup* KUserGroup_new2(const char* name) {
    return new KUserGroup(name);
}

KUserGroup* KUserGroup_new3() {
    return new KUserGroup();
}

KUserGroup* KUserGroup_new4(gid_t gid) {
    return new KUserGroup(gid);
}

KUserGroup* KUserGroup_new5(const KUserGroup* group) {
    return new KUserGroup(*group);
}

KUserGroup* KUserGroup_new6(int mode) {
    return new KUserGroup(static_cast<KUser::UIDMode>(mode));
}

void KUserGroup_OperatorAssign(KUserGroup* self, const KUserGroup* group) {
    self->operator=(*group);
}

bool KUserGroup_OperatorEqual(const KUserGroup* self, const KUserGroup* group) {
    return (*self == *group);
}

bool KUserGroup_OperatorNotEqual(const KUserGroup* self, const KUserGroup* group) {
    return (*self != *group);
}

bool KUserGroup_IsValid(const KUserGroup* self) {
    return self->isValid();
}

libqt_string KUserGroup_Name(const KUserGroup* self) {
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

libqt_list /* of KUser* */ KUserGroup_Users(const KUserGroup* self) {
    QList<KUser> _ret = self->users();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUser** _arr = static_cast<KUser**>(malloc(sizeof(KUser*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUser(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUserGroup_UserNames(const KUserGroup* self) {
    QList<QString> _ret = self->userNames();
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

libqt_list /* of KUserGroup* */ KUserGroup_AllGroups() {
    QList<KUserGroup> _ret = KUserGroup::allGroups();
    // Convert QList<> from C++ memory to manually-managed C memory
    KUserGroup** _arr = static_cast<KUserGroup**>(malloc(sizeof(KUserGroup*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUserGroup(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUserGroup_AllGroupNames() {
    QList<QString> _ret = KUserGroup::allGroupNames();
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

libqt_list /* of KUser* */ KUserGroup_Users1(const KUserGroup* self, unsigned int maxCount) {
    QList<KUser> _ret = self->users(static_cast<uint>(maxCount));
    // Convert QList<> from C++ memory to manually-managed C memory
    KUser** _arr = static_cast<KUser**>(malloc(sizeof(KUser*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUser(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUserGroup_UserNames1(const KUserGroup* self, unsigned int maxCount) {
    QList<QString> _ret = self->userNames(static_cast<uint>(maxCount));
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

libqt_list /* of KUserGroup* */ KUserGroup_AllGroups1(unsigned int maxCount) {
    QList<KUserGroup> _ret = KUserGroup::allGroups(static_cast<uint>(maxCount));
    // Convert QList<> from C++ memory to manually-managed C memory
    KUserGroup** _arr = static_cast<KUserGroup**>(malloc(sizeof(KUserGroup*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KUserGroup(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KUserGroup_AllGroupNames1(unsigned int maxCount) {
    QList<QString> _ret = KUserGroup::allGroupNames(static_cast<uint>(maxCount));
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

void KUserGroup_Delete(KUserGroup* self) {
    delete self;
}
