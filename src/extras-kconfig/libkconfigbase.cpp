#include <KConfigBase>
#include <KConfigGroup>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kconfigbase.h>
#include "libkconfigbase.h"
#include "libkconfigbase.hxx"

libqt_list /* of libqt_string */ KConfigBase_GroupList(const KConfigBase* self) {
    QList<QString> _ret = self->groupList();
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

bool KConfigBase_HasGroup(const KConfigBase* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->hasGroup(group_QString);
}

KConfigGroup* KConfigBase_Group(KConfigBase* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KConfigGroup(self->group(group_QString));
}

KConfigGroup* KConfigBase_Group2(const KConfigBase* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KConfigGroup(self->group(group_QString));
}

void KConfigBase_DeleteGroup(KConfigBase* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->deleteGroup(group_QString);
}

bool KConfigBase_Sync(KConfigBase* self) {
    return self->sync();
}

void KConfigBase_MarkAsClean(KConfigBase* self) {
    self->markAsClean();
}

int KConfigBase_AccessMode(const KConfigBase* self) {
    return static_cast<int>(self->accessMode());
}

bool KConfigBase_IsImmutable(const KConfigBase* self) {
    return self->isImmutable();
}

bool KConfigBase_IsGroupImmutable(const KConfigBase* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->isGroupImmutable(group_QString);
}

void KConfigBase_DeleteGroup2(KConfigBase* self, const libqt_string group, int flags) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    self->deleteGroup(group_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
}

void KConfigBase_Delete(KConfigBase* self) {
    delete self;
}
