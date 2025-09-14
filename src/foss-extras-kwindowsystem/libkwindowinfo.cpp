#include <KWindowInfo>
#include <QByteArray>
#include <QList>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kwindowinfo.h>
#include "libkwindowinfo.h"
#include "libkwindowinfo.hxx"

KWindowInfo* KWindowInfo_new(const KWindowInfo* param1) {
    return new KWindowInfo(*param1);
}

bool KWindowInfo_Valid(const KWindowInfo* self) {
    return self->valid();
}

uintptr_t KWindowInfo_Win(const KWindowInfo* self) {
    return static_cast<uintptr_t>(self->win());
}

bool KWindowInfo_IsMinimized(const KWindowInfo* self) {
    return self->isMinimized();
}

NETExtendedStrut* KWindowInfo_ExtendedStrut(const KWindowInfo* self) {
    return new NETExtendedStrut(self->extendedStrut());
}

libqt_string KWindowInfo_VisibleName(const KWindowInfo* self) {
    QString _ret = self->visibleName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_VisibleNameWithState(const KWindowInfo* self) {
    QString _ret = self->visibleNameWithState();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_Name(const KWindowInfo* self) {
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

libqt_string KWindowInfo_VisibleIconName(const KWindowInfo* self) {
    QString _ret = self->visibleIconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_VisibleIconNameWithState(const KWindowInfo* self) {
    QString _ret = self->visibleIconNameWithState();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_IconName(const KWindowInfo* self) {
    QString _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KWindowInfo_IsOnCurrentDesktop(const KWindowInfo* self) {
    return self->isOnCurrentDesktop();
}

bool KWindowInfo_IsOnDesktop(const KWindowInfo* self, int desktop) {
    return self->isOnDesktop(static_cast<int>(desktop));
}

bool KWindowInfo_OnAllDesktops(const KWindowInfo* self) {
    return self->onAllDesktops();
}

int KWindowInfo_Desktop(const KWindowInfo* self) {
    return self->desktop();
}

libqt_list /* of libqt_string */ KWindowInfo_Activities(const KWindowInfo* self) {
    QList<QString> _ret = self->activities();
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

QRect* KWindowInfo_Geometry(const KWindowInfo* self) {
    return new QRect(self->geometry());
}

QRect* KWindowInfo_FrameGeometry(const KWindowInfo* self) {
    return new QRect(self->frameGeometry());
}

uintptr_t KWindowInfo_TransientFor(const KWindowInfo* self) {
    return static_cast<uintptr_t>(self->transientFor());
}

uintptr_t KWindowInfo_GroupLeader(const KWindowInfo* self) {
    return static_cast<uintptr_t>(self->groupLeader());
}

libqt_string KWindowInfo_WindowClassClass(const KWindowInfo* self) {
    QByteArray _qb = self->windowClassClass();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_WindowClassName(const KWindowInfo* self) {
    QByteArray _qb = self->windowClassName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_WindowRole(const KWindowInfo* self) {
    QByteArray _qb = self->windowRole();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_ClientMachine(const KWindowInfo* self) {
    QByteArray _qb = self->clientMachine();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_DesktopFileName(const KWindowInfo* self) {
    QByteArray _qb = self->desktopFileName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_GtkApplicationId(const KWindowInfo* self) {
    QByteArray _qb = self->gtkApplicationId();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KWindowInfo_Pid(const KWindowInfo* self) {
    return self->pid();
}

libqt_string KWindowInfo_ApplicationMenuServiceName(const KWindowInfo* self) {
    QByteArray _qb = self->applicationMenuServiceName();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KWindowInfo_ApplicationMenuObjectPath(const KWindowInfo* self) {
    QByteArray _qb = self->applicationMenuObjectPath();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KWindowInfo_OperatorAssign(KWindowInfo* self, const KWindowInfo* param1) {
    self->operator=(*param1);
}

bool KWindowInfo_Valid1(const KWindowInfo* self, bool withdrawn_is_valid) {
    return self->valid(withdrawn_is_valid);
}

void KWindowInfo_Delete(KWindowInfo* self) {
    delete self;
}
