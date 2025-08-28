#include <KConfig>
#include <KConfigBase>
#include <KConfigGroup>
#include <QByteArray>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <kconfiggroup.h>
#include "libkconfiggroup.h"
#include "libkconfiggroup.hxx"

KConfigGroup* KConfigGroup_new() {
    return new VirtualKConfigGroup();
}

KConfigGroup* KConfigGroup_new2(KConfigBase* master, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new VirtualKConfigGroup(master, group_QString);
}

KConfigGroup* KConfigGroup_new3(const KConfigBase* master, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new VirtualKConfigGroup(master, group_QString);
}

KConfigGroup* KConfigGroup_new4(const KConfigGroup* param1) {
    return new VirtualKConfigGroup(*param1);
}

void KConfigGroup_OperatorAssign(KConfigGroup* self, const KConfigGroup* param1) {
    self->operator=(*param1);
}

bool KConfigGroup_IsValid(const KConfigGroup* self) {
    return self->isValid();
}

libqt_string KConfigGroup_Name(const KConfigGroup* self) {
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

bool KConfigGroup_Exists(const KConfigGroup* self) {
    return self->exists();
}

bool KConfigGroup_Sync(KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return self->sync();
    } else {
        return ((VirtualKConfigGroup*)self)->sync();
    }
}

void KConfigGroup_MarkAsClean(KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        self->markAsClean();
    } else {
        ((VirtualKConfigGroup*)self)->markAsClean();
    }
}

int KConfigGroup_AccessMode(const KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return static_cast<int>(self->accessMode());
    } else {
        return static_cast<int>(((VirtualKConfigGroup*)self)->accessMode());
    }
}

KConfig* KConfigGroup_Config(KConfigGroup* self) {
    return self->config();
}

KConfig* KConfigGroup_Config2(const KConfigGroup* self) {
    return (KConfig*)self->config();
}

void KConfigGroup_CopyTo(const KConfigGroup* self, KConfigBase* other) {
    self->copyTo(other);
}

void KConfigGroup_Reparent(KConfigGroup* self, KConfigBase* parent) {
    self->reparent(parent);
}

void KConfigGroup_MoveValuesTo(KConfigGroup* self, const libqt_list /* of const char* */ keys, KConfigGroup* other) {
    QList<const char*> keys_QList;
    keys_QList.reserve(keys.len);
    const char** keys_arr = static_cast<const char**>(keys.data);
    for (size_t i = 0; i < keys.len; ++i) {
        keys_QList.push_back(keys_arr[i]);
    }
    self->moveValuesTo(keys_QList, *other);
}

void KConfigGroup_MoveValuesTo2(KConfigGroup* self, KConfigGroup* other) {
    self->moveValuesTo(*other);
}

KConfigGroup* KConfigGroup_Parent(const KConfigGroup* self) {
    return new KConfigGroup(self->parent());
}

libqt_list /* of libqt_string */ KConfigGroup_GroupList(const KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
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
    } else {
        QList<QString> _ret = ((VirtualKConfigGroup*)self)->groupList();
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
}

libqt_list /* of libqt_string */ KConfigGroup_KeyList(const KConfigGroup* self) {
    QList<QString> _ret = self->keyList();
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

void KConfigGroup_DeleteGroup(KConfigGroup* self) {
    self->deleteGroup();
}

QVariant* KConfigGroup_ReadEntry(const KConfigGroup* self, const libqt_string key, const QVariant* aDefault) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new QVariant(self->readEntry(key_QString, *aDefault));
}

QVariant* KConfigGroup_ReadEntry2(const KConfigGroup* self, const char* key, const QVariant* aDefault) {
    return new QVariant(self->readEntry(key, *aDefault));
}

libqt_string KConfigGroup_ReadEntry3(const KConfigGroup* self, const libqt_string key, const libqt_string aDefault) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readEntry(key_QString, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntry4(const KConfigGroup* self, const char* key, const libqt_string aDefault) {
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readEntry(key, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntry5(const KConfigGroup* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->readEntry(key_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntry6(const KConfigGroup* self, const char* key) {
    QString _ret = self->readEntry(key);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QVariant* */ KConfigGroup_ReadEntry7(const KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ aDefault) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QVariant> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    QVariant** aDefault_arr = static_cast<QVariant**>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        aDefault_QList.push_back(*(aDefault_arr[i]));
    }
    QList<QVariant> _ret = self->readEntry(key_QString, aDefault_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QVariant* */ KConfigGroup_ReadEntry8(const KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ aDefault) {
    QList<QVariant> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    QVariant** aDefault_arr = static_cast<QVariant**>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        aDefault_QList.push_back(*(aDefault_arr[i]));
    }
    QList<QVariant> _ret = self->readEntry(key, aDefault_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVariant(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KConfigGroup_ReadEntry9(const KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ aDefault) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readEntry(key_QString, aDefault_QList);
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

libqt_list /* of libqt_string */ KConfigGroup_ReadEntry10(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault) {
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readEntry(key, aDefault_QList);
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

libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry(const KConfigGroup* self, const libqt_string pKey) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> _ret = self->readXdgListEntry(pKey_QString);
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

libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry2(const KConfigGroup* self, const char* key) {
    QList<QString> _ret = self->readXdgListEntry(key);
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

libqt_string KConfigGroup_ReadPathEntry(const KConfigGroup* self, const libqt_string pKey, const libqt_string aDefault) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readPathEntry(pKey_QString, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadPathEntry2(const KConfigGroup* self, const char* key, const libqt_string aDefault) {
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readPathEntry(key, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KConfigGroup_ReadPathEntry3(const KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ aDefault) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readPathEntry(pKey_QString, aDefault_QList);
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

libqt_list /* of libqt_string */ KConfigGroup_ReadPathEntry4(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault) {
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readPathEntry(key, aDefault_QList);
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

libqt_string KConfigGroup_ReadEntryUntranslated(const KConfigGroup* self, const libqt_string pKey) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QString _ret = self->readEntryUntranslated(pKey_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntryUntranslated2(const KConfigGroup* self, const char* key) {
    QString _ret = self->readEntryUntranslated(key);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigGroup_WriteEntry(KConfigGroup* self, const libqt_string key, const QVariant* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->writeEntry(key_QString, *value);
}

void KConfigGroup_WriteEntry2(KConfigGroup* self, const char* key, const QVariant* value) {
    self->writeEntry(key, *value);
}

void KConfigGroup_WriteEntry3(KConfigGroup* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeEntry(key_QString, value_QString);
}

void KConfigGroup_WriteEntry4(KConfigGroup* self, const char* key, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeEntry(key, value_QString);
}

void KConfigGroup_WriteEntry5(KConfigGroup* self, const libqt_string key, const libqt_string value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->writeEntry(key_QString, value_QByteArray);
}

void KConfigGroup_WriteEntry6(KConfigGroup* self, const char* key, const libqt_string value) {
    QByteArray value_QByteArray(value.data, value.len);
    self->writeEntry(key, value_QByteArray);
}

void KConfigGroup_WriteEntry7(KConfigGroup* self, const libqt_string key, const char* value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->writeEntry(key_QString, value);
}

void KConfigGroup_WriteEntry8(KConfigGroup* self, const char* key, const char* value) {
    self->writeEntry(key, value);
}

void KConfigGroup_WriteEntry9(KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeEntry(key_QString, value_QList);
}

void KConfigGroup_WriteEntry10(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeEntry(key, value_QList);
}

void KConfigGroup_WriteEntry11(KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ value) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QVariant> value_QList;
    value_QList.reserve(value.len);
    QVariant** value_arr = static_cast<QVariant**>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        value_QList.push_back(*(value_arr[i]));
    }
    self->writeEntry(key_QString, value_QList);
}

void KConfigGroup_WriteEntry12(KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ value) {
    QList<QVariant> value_QList;
    value_QList.reserve(value.len);
    QVariant** value_arr = static_cast<QVariant**>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        value_QList.push_back(*(value_arr[i]));
    }
    self->writeEntry(key, value_QList);
}

void KConfigGroup_WriteXdgListEntry(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeXdgListEntry(pKey_QString, value_QList);
}

void KConfigGroup_WriteXdgListEntry2(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeXdgListEntry(key, value_QList);
}

void KConfigGroup_WritePathEntry(KConfigGroup* self, const libqt_string pKey, const libqt_string path) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->writePathEntry(pKey_QString, path_QString);
}

void KConfigGroup_WritePathEntry2(KConfigGroup* self, const char* Key, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->writePathEntry(Key, path_QString);
}

void KConfigGroup_WritePathEntry3(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writePathEntry(pKey_QString, value_QList);
}

void KConfigGroup_WritePathEntry4(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writePathEntry(key, value_QList);
}

void KConfigGroup_DeleteEntry(KConfigGroup* self, const libqt_string pKey) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    self->deleteEntry(pKey_QString);
}

void KConfigGroup_DeleteEntry2(KConfigGroup* self, const char* key) {
    self->deleteEntry(key);
}

bool KConfigGroup_HasKey(const KConfigGroup* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->hasKey(key_QString);
}

bool KConfigGroup_HasKey2(const KConfigGroup* self, const char* key) {
    return self->hasKey(key);
}

bool KConfigGroup_IsImmutable(const KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return self->isImmutable();
    } else {
        return ((VirtualKConfigGroup*)self)->isImmutable();
    }
}

bool KConfigGroup_IsEntryImmutable(const KConfigGroup* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->isEntryImmutable(key_QString);
}

bool KConfigGroup_IsEntryImmutable2(const KConfigGroup* self, const char* key) {
    return self->isEntryImmutable(key);
}

void KConfigGroup_RevertToDefault(KConfigGroup* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->revertToDefault(key_QString);
}

void KConfigGroup_RevertToDefault2(KConfigGroup* self, const char* key) {
    self->revertToDefault(key);
}

bool KConfigGroup_HasDefault(const KConfigGroup* self, const libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return self->hasDefault(key_QString);
}

bool KConfigGroup_HasDefault2(const KConfigGroup* self, const char* key) {
    return self->hasDefault(key);
}

libqt_map /* of libqt_string to libqt_string */ KConfigGroup_EntryMap(const KConfigGroup* self) {
    QMap<QString, QString> _ret = self->entryMap();
    // Convert QMap<> from C++ memory to manually-managed C memory
    libqt_string* _karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    libqt_string* _varr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        QString _mapkey_ret = _itr->first;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapkey_b = _mapkey_ret.toUtf8();
        libqt_string _mapkey_str;
        _mapkey_str.len = _mapkey_b.length();
        _mapkey_str.data = static_cast<const char*>(malloc(_mapkey_str.len + 1));
        memcpy((void*)_mapkey_str.data, _mapkey_b.data(), _mapkey_str.len);
        ((char*)_mapkey_str.data)[_mapkey_str.len] = '\0';
        _karr[_ctr] = _mapkey_str;
        QString _mapval_ret = _itr->second;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _mapval_b = _mapval_ret.toUtf8();
        libqt_string _mapval_str;
        _mapval_str.len = _mapval_b.length();
        _mapval_str.data = static_cast<const char*>(malloc(_mapval_str.len + 1));
        memcpy((void*)_mapval_str.data, _mapval_b.data(), _mapval_str.len);
        ((char*)_mapval_str.data)[_mapval_str.len] = '\0';
        _varr[_ctr] = _mapval_str;
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

bool KConfigGroup_HasGroupImpl(const KConfigGroup* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return vkconfiggroup->hasGroupImpl(groupName_QString);
    }
    return {};
}

KConfigGroup* KConfigGroup_GroupImpl(KConfigGroup* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return new KConfigGroup(vkconfiggroup->groupImpl(groupName_QString));
    }
    return {};
}

KConfigGroup* KConfigGroup_GroupImpl2(const KConfigGroup* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return new KConfigGroup(vkconfiggroup->groupImpl(groupName_QString));
    }
    return {};
}

void KConfigGroup_DeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

bool KConfigGroup_IsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName) {
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    auto* vkconfiggroup = dynamic_cast<const VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        return vkconfiggroup->isGroupImmutableImpl(groupName_QString);
    }
    return {};
}

void KConfigGroup_CopyTo2(const KConfigGroup* self, KConfigBase* other, int pFlags) {
    self->copyTo(other, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_Reparent2(KConfigGroup* self, KConfigBase* parent, int pFlags) {
    self->reparent(parent, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_MoveValuesTo3(KConfigGroup* self, const libqt_list /* of const char* */ keys, KConfigGroup* other, int pFlags) {
    QList<const char*> keys_QList;
    keys_QList.reserve(keys.len);
    const char** keys_arr = static_cast<const char**>(keys.data);
    for (size_t i = 0; i < keys.len; ++i) {
        keys_QList.push_back(keys_arr[i]);
    }
    self->moveValuesTo(keys_QList, *other, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_MoveValuesTo22(KConfigGroup* self, KConfigGroup* other, int pFlags) {
    self->moveValuesTo(*other, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_DeleteGroup1(KConfigGroup* self, int pFlags) {
    self->deleteGroup(static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

libqt_string KConfigGroup_ReadEntry22(const KConfigGroup* self, const libqt_string key, const char* aDefault) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString _ret = self->readEntry(key_QString, aDefault);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntry23(const KConfigGroup* self, const char* key, const char* aDefault) {
    QString _ret = self->readEntry(key, aDefault);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry22(const KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ aDefault) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readXdgListEntry(pKey_QString, aDefault_QList);
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

libqt_list /* of libqt_string */ KConfigGroup_ReadXdgListEntry23(const KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ aDefault) {
    QList<QString> aDefault_QList;
    aDefault_QList.reserve(aDefault.len);
    libqt_string* aDefault_arr = static_cast<libqt_string*>(aDefault.data);
    for (size_t i = 0; i < aDefault.len; ++i) {
        QString aDefault_arr_i_QString = QString::fromUtf8(aDefault_arr[i].data, aDefault_arr[i].len);
        aDefault_QList.push_back(aDefault_arr_i_QString);
    }
    QList<QString> _ret = self->readXdgListEntry(key, aDefault_QList);
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

libqt_string KConfigGroup_ReadEntryUntranslated22(const KConfigGroup* self, const libqt_string pKey, const libqt_string aDefault) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readEntryUntranslated(pKey_QString, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KConfigGroup_ReadEntryUntranslated23(const KConfigGroup* self, const char* key, const libqt_string aDefault) {
    QString aDefault_QString = QString::fromUtf8(aDefault.data, aDefault.len);
    QString _ret = self->readEntryUntranslated(key, aDefault_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KConfigGroup_WriteEntry32(KConfigGroup* self, const libqt_string key, const QVariant* value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->writeEntry(key_QString, *value, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry33(KConfigGroup* self, const char* key, const QVariant* value, int pFlags) {
    self->writeEntry(key, *value, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry34(KConfigGroup* self, const libqt_string key, const libqt_string value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeEntry(key_QString, value_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry35(KConfigGroup* self, const char* key, const libqt_string value, int pFlags) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeEntry(key, value_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry36(KConfigGroup* self, const libqt_string key, const libqt_string value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QByteArray value_QByteArray(value.data, value.len);
    self->writeEntry(key_QString, value_QByteArray, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry37(KConfigGroup* self, const char* key, const libqt_string value, int pFlags) {
    QByteArray value_QByteArray(value.data, value.len);
    self->writeEntry(key, value_QByteArray, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry38(KConfigGroup* self, const libqt_string key, const char* value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->writeEntry(key_QString, value, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry39(KConfigGroup* self, const char* key, const char* value, int pFlags) {
    self->writeEntry(key, value, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry310(KConfigGroup* self, const libqt_string key, const libqt_list /* of libqt_string */ value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeEntry(key_QString, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry311(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeEntry(key, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry312(KConfigGroup* self, const libqt_string key, const libqt_list /* of QVariant* */ value, int pFlags) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    QList<QVariant> value_QList;
    value_QList.reserve(value.len);
    QVariant** value_arr = static_cast<QVariant**>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        value_QList.push_back(*(value_arr[i]));
    }
    self->writeEntry(key_QString, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteEntry313(KConfigGroup* self, const char* key, const libqt_list /* of QVariant* */ value, int pFlags) {
    QList<QVariant> value_QList;
    value_QList.reserve(value.len);
    QVariant** value_arr = static_cast<QVariant**>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        value_QList.push_back(*(value_arr[i]));
    }
    self->writeEntry(key, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteXdgListEntry3(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value, int pFlags) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeXdgListEntry(pKey_QString, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WriteXdgListEntry32(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writeXdgListEntry(key, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WritePathEntry32(KConfigGroup* self, const libqt_string pKey, const libqt_string path, int pFlags) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->writePathEntry(pKey_QString, path_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WritePathEntry33(KConfigGroup* self, const char* Key, const libqt_string path, int pFlags) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->writePathEntry(Key, path_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WritePathEntry34(KConfigGroup* self, const libqt_string pKey, const libqt_list /* of libqt_string */ value, int pFlags) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writePathEntry(pKey_QString, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_WritePathEntry35(KConfigGroup* self, const char* key, const libqt_list /* of libqt_string */ value, int pFlags) {
    QList<QString> value_QList;
    value_QList.reserve(value.len);
    libqt_string* value_arr = static_cast<libqt_string*>(value.data);
    for (size_t i = 0; i < value.len; ++i) {
        QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
        value_QList.push_back(value_arr_i_QString);
    }
    self->writePathEntry(key, value_QList, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_DeleteEntry22(KConfigGroup* self, const libqt_string pKey, int pFlags) {
    QString pKey_QString = QString::fromUtf8(pKey.data, pKey.len);
    self->deleteEntry(pKey_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_DeleteEntry23(KConfigGroup* self, const char* key, int pFlags) {
    self->deleteEntry(key, static_cast<KConfigBase::WriteConfigFlags>(pFlags));
}

void KConfigGroup_RevertToDefault22(KConfigGroup* self, const libqt_string key, int pFlag) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    self->revertToDefault(key_QString, static_cast<KConfigBase::WriteConfigFlags>(pFlag));
}

void KConfigGroup_RevertToDefault23(KConfigGroup* self, const char* key, int pFlag) {
    self->revertToDefault(key, static_cast<KConfigBase::WriteConfigFlags>(pFlag));
}

// Base class handler implementation
bool KConfigGroup_QBaseSync(KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_Sync_IsBase(true);
        return vkconfiggroup->sync();
    } else {
        return self->KConfigGroup::sync();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnSync(KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_Sync_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_Sync_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigGroup_QBaseMarkAsClean(KConfigGroup* self) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_MarkAsClean_IsBase(true);
        vkconfiggroup->markAsClean();
    } else {
        self->KConfigGroup::markAsClean();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnMarkAsClean(KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_MarkAsClean_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_MarkAsClean_Callback>(slot));
    }
}

// Base class handler implementation
int KConfigGroup_QBaseAccessMode(const KConfigGroup* self) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_AccessMode_IsBase(true);
        return static_cast<int>(vkconfiggroup->accessMode());
    } else {
        return static_cast<int>(self->KConfigGroup::accessMode());
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnAccessMode(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_AccessMode_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_AccessMode_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ KConfigGroup_QBaseGroupList(const KConfigGroup* self) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupList_IsBase(true);
        QList<QString> _ret = vkconfiggroup->groupList();
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
    } else {
        QList<QString> _ret = self->KConfigGroup::groupList();
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
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnGroupList(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupList_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_GroupList_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigGroup_QBaseIsImmutable(const KConfigGroup* self) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_IsImmutable_IsBase(true);
        return vkconfiggroup->isImmutable();
    } else {
        return self->KConfigGroup::isImmutable();
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnIsImmutable(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_IsImmutable_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_IsImmutable_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigGroup_QBaseHasGroupImpl(const KConfigGroup* self, const libqt_string groupName) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_HasGroupImpl_IsBase(true);
        return vkconfiggroup->hasGroupImpl(groupName_QString);
    } else {
        return ((VirtualKConfigGroup*)self)->hasGroupImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnHasGroupImpl(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_HasGroupImpl_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_HasGroupImpl_Callback>(slot));
    }
}

// Base class handler implementation
KConfigGroup* KConfigGroup_QBaseGroupImpl(KConfigGroup* self, const libqt_string groupName) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupImpl_IsBase(true);
        return new KConfigGroup(vkconfiggroup->groupImpl(groupName_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnGroupImpl(KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupImpl_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_GroupImpl_Callback>(slot));
    }
}

// Base class handler implementation
KConfigGroup* KConfigGroup_QBaseGroupImpl2(const KConfigGroup* self, const libqt_string groupName) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupImpl2_IsBase(true);
        return new KConfigGroup(vkconfiggroup->groupImpl(groupName_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnGroupImpl2(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_GroupImpl2_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_GroupImpl2_Callback>(slot));
    }
}

// Base class handler implementation
void KConfigGroup_QBaseDeleteGroupImpl(KConfigGroup* self, const libqt_string groupName, int flags) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_DeleteGroupImpl_IsBase(true);
        vkconfiggroup->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else {
        ((VirtualKConfigGroup*)self)->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnDeleteGroupImpl(KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_DeleteGroupImpl_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_DeleteGroupImpl_Callback>(slot));
    }
}

// Base class handler implementation
bool KConfigGroup_QBaseIsGroupImmutableImpl(const KConfigGroup* self, const libqt_string groupName) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_IsGroupImmutableImpl_IsBase(true);
        return vkconfiggroup->isGroupImmutableImpl(groupName_QString);
    } else {
        return ((VirtualKConfigGroup*)self)->isGroupImmutableImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnIsGroupImmutableImpl(const KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = const_cast<VirtualKConfigGroup*>(dynamic_cast<const VirtualKConfigGroup*>(self));
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_IsGroupImmutableImpl_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_IsGroupImmutableImpl_Callback>(slot));
    }
}

// Derived class handler implementation
void KConfigGroup_VirtualHook(KConfigGroup* self, int id, void* data) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKConfigGroup*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KConfigGroup_QBaseVirtualHook(KConfigGroup* self, int id, void* data) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_VirtualHook_IsBase(true);
        vkconfiggroup->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKConfigGroup*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KConfigGroup_OnVirtualHook(KConfigGroup* self, intptr_t slot) {
    auto* vkconfiggroup = dynamic_cast<VirtualKConfigGroup*>(self);
    if (vkconfiggroup && vkconfiggroup->isVirtualKConfigGroup) {
        vkconfiggroup->setKConfigGroup_VirtualHook_Callback(reinterpret_cast<VirtualKConfigGroup::KConfigGroup_VirtualHook_Callback>(slot));
    }
}

void KConfigGroup_Delete(KConfigGroup* self) {
    delete self;
}
