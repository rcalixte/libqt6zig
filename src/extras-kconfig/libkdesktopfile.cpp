#include <KConfig>
#include <KConfigBase>
#include <KConfigGroup>
#include <KDesktopFile>
#include <KDesktopFileAction>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kdesktopfile.h>
#include "libkdesktopfile.h"
#include "libkdesktopfile.hxx"

KDesktopFile* KDesktopFile_new(int resourceType, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKDesktopFile(static_cast<QStandardPaths::StandardLocation>(resourceType), fileName_QString);
}

KDesktopFile* KDesktopFile_new2(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualKDesktopFile(fileName_QString);
}

bool KDesktopFile_IsDesktopFile(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return KDesktopFile::isDesktopFile(path_QString);
}

bool KDesktopFile_IsAuthorizedDesktopFile(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return KDesktopFile::isAuthorizedDesktopFile(path_QString);
}

libqt_string KDesktopFile_LocateLocal(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QString _ret = KDesktopFile::locateLocal(path_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KConfigGroup* KDesktopFile_DesktopGroup(const KDesktopFile* self) {
    return new KConfigGroup(self->desktopGroup());
}

libqt_string KDesktopFile_ReadType(const KDesktopFile* self) {
    QString _ret = self->readType();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadIcon(const KDesktopFile* self) {
    QString _ret = self->readIcon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadName(const KDesktopFile* self) {
    QString _ret = self->readName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadComment(const KDesktopFile* self) {
    QString _ret = self->readComment();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadGenericName(const KDesktopFile* self) {
    QString _ret = self->readGenericName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadPath(const KDesktopFile* self) {
    QString _ret = self->readPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFile_ReadUrl(const KDesktopFile* self) {
    QString _ret = self->readUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KDesktopFile_ReadActions(const KDesktopFile* self) {
    QList<QString> _ret = self->readActions();
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

libqt_list /* of libqt_string */ KDesktopFile_ReadMimeTypes(const KDesktopFile* self) {
    QList<QString> _ret = self->readMimeTypes();
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

KConfigGroup* KDesktopFile_ActionGroup(KDesktopFile* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KConfigGroup(self->actionGroup(group_QString));
}

KConfigGroup* KDesktopFile_ActionGroup2(const KDesktopFile* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return new KConfigGroup(self->actionGroup(group_QString));
}

bool KDesktopFile_HasActionGroup(const KDesktopFile* self, const libqt_string group) {
    QString group_QString = QString::fromUtf8(group.data, group.len);
    return self->hasActionGroup(group_QString);
}

bool KDesktopFile_HasLinkType(const KDesktopFile* self) {
    return self->hasLinkType();
}

bool KDesktopFile_HasApplicationType(const KDesktopFile* self) {
    return self->hasApplicationType();
}

bool KDesktopFile_HasDeviceType(const KDesktopFile* self) {
    return self->hasDeviceType();
}

bool KDesktopFile_TryExec(const KDesktopFile* self) {
    return self->tryExec();
}

libqt_string KDesktopFile_ReadDocPath(const KDesktopFile* self) {
    QString _ret = self->readDocPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDesktopFile_NoDisplay(const KDesktopFile* self) {
    return self->noDisplay();
}

KDesktopFile* KDesktopFile_CopyTo(const KDesktopFile* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    return self->copyTo(file_QString);
}

libqt_string KDesktopFile_FileName(const KDesktopFile* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of KDesktopFileAction* */ KDesktopFile_Actions(const KDesktopFile* self) {
    QList<KDesktopFileAction> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    KDesktopFileAction** _arr = static_cast<KDesktopFileAction**>(malloc(sizeof(KDesktopFileAction*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KDesktopFileAction(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
bool KDesktopFile_Sync(KDesktopFile* self) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return vkdesktopfile->sync();
    } else {
        return self->KDesktopFile::sync();
    }
}

// Base class handler implementation
bool KDesktopFile_QBaseSync(KDesktopFile* self) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_Sync_IsBase(true);
        return vkdesktopfile->sync();
    } else {
        return self->KDesktopFile::sync();
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnSync(KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_Sync_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_Sync_Callback>(slot));
    }
}

// Derived class handler implementation
void KDesktopFile_MarkAsClean(KDesktopFile* self) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->markAsClean();
    } else {
        self->KDesktopFile::markAsClean();
    }
}

// Base class handler implementation
void KDesktopFile_QBaseMarkAsClean(KDesktopFile* self) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_MarkAsClean_IsBase(true);
        vkdesktopfile->markAsClean();
    } else {
        self->KDesktopFile::markAsClean();
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnMarkAsClean(KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_MarkAsClean_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_MarkAsClean_Callback>(slot));
    }
}

// Derived class handler implementation
int KDesktopFile_AccessMode(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return static_cast<int>(vkdesktopfile->accessMode());
    } else {
        return static_cast<int>(self->KDesktopFile::accessMode());
    }
}

// Base class handler implementation
int KDesktopFile_QBaseAccessMode(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_AccessMode_IsBase(true);
        return static_cast<int>(vkdesktopfile->accessMode());
    } else {
        return static_cast<int>(self->KDesktopFile::accessMode());
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnAccessMode(const KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_AccessMode_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_AccessMode_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDesktopFile_IsImmutable(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return vkdesktopfile->isImmutable();
    } else {
        return self->KDesktopFile::isImmutable();
    }
}

// Base class handler implementation
bool KDesktopFile_QBaseIsImmutable(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_IsImmutable_IsBase(true);
        return vkdesktopfile->isImmutable();
    } else {
        return self->KDesktopFile::isImmutable();
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnIsImmutable(const KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_IsImmutable_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_IsImmutable_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ KDesktopFile_GroupList(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        QList<QString> _ret = vkdesktopfile->groupList();
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
        QList<QString> _ret = self->KDesktopFile::groupList();
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

// Base class handler implementation
libqt_list /* of libqt_string */ KDesktopFile_QBaseGroupList(const KDesktopFile* self) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_GroupList_IsBase(true);
        QList<QString> _ret = vkdesktopfile->groupList();
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
        QList<QString> _ret = self->KDesktopFile::groupList();
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
void KDesktopFile_OnGroupList(const KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_GroupList_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_GroupList_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDesktopFile_HasGroupImpl(const KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return vkdesktopfile->hasGroupImpl(groupName_QString);
    } else {
        return ((VirtualKDesktopFile*)self)->hasGroupImpl(groupName_QString);
    }
}

// Base class handler implementation
bool KDesktopFile_QBaseHasGroupImpl(const KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_HasGroupImpl_IsBase(true);
        return vkdesktopfile->hasGroupImpl(groupName_QString);
    } else {
        return ((VirtualKDesktopFile*)self)->hasGroupImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnHasGroupImpl(const KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_HasGroupImpl_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_HasGroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
KConfigGroup* KDesktopFile_GroupImpl(KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return new KConfigGroup(vkdesktopfile->groupImpl(groupName_QString));
    }
    return {};
}

// Base class handler implementation
KConfigGroup* KDesktopFile_QBaseGroupImpl(KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_GroupImpl_IsBase(true);
        return new KConfigGroup(vkdesktopfile->groupImpl(groupName_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnGroupImpl(KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_GroupImpl_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_GroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
void KDesktopFile_DeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else {
        ((VirtualKDesktopFile*)self)->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

// Base class handler implementation
void KDesktopFile_QBaseDeleteGroupImpl(KDesktopFile* self, const libqt_string groupName, int flags) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_DeleteGroupImpl_IsBase(true);
        vkdesktopfile->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    } else {
        ((VirtualKDesktopFile*)self)->deleteGroupImpl(groupName_QString, static_cast<KConfigBase::WriteConfigFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnDeleteGroupImpl(KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_DeleteGroupImpl_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_DeleteGroupImpl_Callback>(slot));
    }
}

// Derived class handler implementation
bool KDesktopFile_IsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        return vkdesktopfile->isGroupImmutableImpl(groupName_QString);
    } else {
        return ((VirtualKDesktopFile*)self)->isGroupImmutableImpl(groupName_QString);
    }
}

// Base class handler implementation
bool KDesktopFile_QBaseIsGroupImmutableImpl(const KDesktopFile* self, const libqt_string groupName) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    QString groupName_QString = QString::fromUtf8(groupName.data, groupName.len);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_IsGroupImmutableImpl_IsBase(true);
        return vkdesktopfile->isGroupImmutableImpl(groupName_QString);
    } else {
        return ((VirtualKDesktopFile*)self)->isGroupImmutableImpl(groupName_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnIsGroupImmutableImpl(const KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = const_cast<VirtualKDesktopFile*>(dynamic_cast<const VirtualKDesktopFile*>(self));
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_IsGroupImmutableImpl_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_IsGroupImmutableImpl_Callback>(slot));
    }
}

// Derived class handler implementation
void KDesktopFile_VirtualHook(KDesktopFile* self, int id, void* data) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKDesktopFile*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KDesktopFile_QBaseVirtualHook(KDesktopFile* self, int id, void* data) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_VirtualHook_IsBase(true);
        vkdesktopfile->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKDesktopFile*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KDesktopFile_OnVirtualHook(KDesktopFile* self, intptr_t slot) {
    auto* vkdesktopfile = dynamic_cast<VirtualKDesktopFile*>(self);
    if (vkdesktopfile && vkdesktopfile->isVirtualKDesktopFile) {
        vkdesktopfile->setKDesktopFile_VirtualHook_Callback(reinterpret_cast<VirtualKDesktopFile::KDesktopFile_VirtualHook_Callback>(slot));
    }
}

void KDesktopFile_Delete(KDesktopFile* self) {
    delete self;
}
