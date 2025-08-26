#include <KProcessList>
#define WORKAROUND_INNER_CLASS_DEFINITION_KProcessList__KProcessInfo
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kprocesslist.h>
#include "libkprocesslist.h"
#include "libkprocesslist.hxx"

KProcessList__KProcessInfo* KProcessList__KProcessInfo_new() {
    return new KProcessList::KProcessInfo();
}

KProcessList__KProcessInfo* KProcessList__KProcessInfo_new2(long long pid, const libqt_string command, const libqt_string user) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return new KProcessList::KProcessInfo(static_cast<qint64>(pid), command_QString, user_QString);
}

KProcessList__KProcessInfo* KProcessList__KProcessInfo_new3(long long pid, const libqt_string command, const libqt_string name, const libqt_string user) {
    QString command_QString = QString::fromUtf8(command.data, command.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString user_QString = QString::fromUtf8(user.data, user.len);
    return new KProcessList::KProcessInfo(static_cast<qint64>(pid), command_QString, name_QString, user_QString);
}

KProcessList__KProcessInfo* KProcessList__KProcessInfo_new4(const KProcessList__KProcessInfo* other) {
    return new KProcessList::KProcessInfo(*other);
}

void KProcessList__KProcessInfo_OperatorAssign(KProcessList__KProcessInfo* self, const KProcessList__KProcessInfo* other) {
    self->operator=(*other);
}

bool KProcessList__KProcessInfo_IsValid(const KProcessList__KProcessInfo* self) {
    return self->isValid();
}

long long KProcessList__KProcessInfo_Pid(const KProcessList__KProcessInfo* self) {
    return static_cast<long long>(self->pid());
}

libqt_string KProcessList__KProcessInfo_Name(const KProcessList__KProcessInfo* self) {
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

libqt_string KProcessList__KProcessInfo_User(const KProcessList__KProcessInfo* self) {
    QString _ret = self->user();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KProcessList__KProcessInfo_Command(const KProcessList__KProcessInfo* self) {
    QString _ret = self->command();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KProcessList__KProcessInfo_Delete(KProcessList__KProcessInfo* self) {
    delete self;
}

libqt_list /* of KProcessList__KProcessInfo* */ KProcessList_ProcessInfoList() {
    QList<KProcessList::KProcessInfo> _ret = KProcessList::processInfoList();
    // Convert QList<> from C++ memory to manually-managed C memory
    KProcessList__KProcessInfo** _arr = static_cast<KProcessList__KProcessInfo**>(malloc(sizeof(KProcessList__KProcessInfo*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KProcessList::KProcessInfo(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

KProcessList__KProcessInfo* KProcessList_ProcessInfo(long long param1) {
    return new KProcessList::KProcessInfo(KProcessList::processInfo(static_cast<qint64>(param1)));
}
