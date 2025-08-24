#include <KDesktopFileAction>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kdesktopfileaction.h>
#include "libkdesktopfileaction.h"
#include "libkdesktopfileaction.hxx"

KDesktopFileAction* KDesktopFileAction_new() {
    return new KDesktopFileAction();
}

KDesktopFileAction* KDesktopFileAction_new2(const libqt_string name, const libqt_string text, const libqt_string icon, const libqt_string exec, const libqt_string desktopFilePath) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString icon_QString = QString::fromUtf8(icon.data, icon.len);
    QString exec_QString = QString::fromUtf8(exec.data, exec.len);
    QString desktopFilePath_QString = QString::fromUtf8(desktopFilePath.data, desktopFilePath.len);
    return new KDesktopFileAction(name_QString, text_QString, icon_QString, exec_QString, desktopFilePath_QString);
}

KDesktopFileAction* KDesktopFileAction_new3(const KDesktopFileAction* other) {
    return new KDesktopFileAction(*other);
}

void KDesktopFileAction_OperatorAssign(KDesktopFileAction* self, const KDesktopFileAction* other) {
    self->operator=(*other);
}

libqt_string KDesktopFileAction_ActionsKey(const KDesktopFileAction* self) {
    QString _ret = self->actionsKey();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFileAction_DesktopFilePath(const KDesktopFileAction* self) {
    QString _ret = self->desktopFilePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFileAction_Name(const KDesktopFileAction* self) {
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

libqt_string KDesktopFileAction_Icon(const KDesktopFileAction* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KDesktopFileAction_Exec(const KDesktopFileAction* self) {
    QString _ret = self->exec();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KDesktopFileAction_IsSeparator(const KDesktopFileAction* self) {
    return self->isSeparator();
}

void KDesktopFileAction_Delete(KDesktopFileAction* self) {
    delete self;
}
