#include <KBuildSycocaProgressDialog>
#include <QDialog>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QProgressDialog>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kbuildsycocaprogressdialog.h>
#include "libkbuildsycocaprogressdialog.h"
#include "libkbuildsycocaprogressdialog.hxx"

QMetaObject* KBuildSycocaProgressDialog_MetaObject(const KBuildSycocaProgressDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBuildSycocaProgressDialog_Metacast(KBuildSycocaProgressDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBuildSycocaProgressDialog_Metacall(KBuildSycocaProgressDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KBuildSycocaProgressDialog_Tr(const char* s) {
    QString _ret = KBuildSycocaProgressDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBuildSycocaProgressDialog_RebuildKSycoca(QWidget* parent) {
    KBuildSycocaProgressDialog::rebuildKSycoca(parent);
}

libqt_string KBuildSycocaProgressDialog_Tr2(const char* s, const char* c) {
    QString _ret = KBuildSycocaProgressDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBuildSycocaProgressDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBuildSycocaProgressDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
