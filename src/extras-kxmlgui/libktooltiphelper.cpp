#include <KToolTipHelper>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ktooltiphelper.h>
#include "libktooltiphelper.h"
#include "libktooltiphelper.hxx"

QMetaObject* KToolTipHelper_MetaObject(const KToolTipHelper* self) {
    return (QMetaObject*)self->metaObject();
}

void* KToolTipHelper_Metacast(KToolTipHelper* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KToolTipHelper_Metacall(KToolTipHelper* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KToolTipHelper_Tr(const char* s) {
    QString _ret = KToolTipHelper::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KToolTipHelper* KToolTipHelper_Instance() {
    return KToolTipHelper::instance();
}

bool KToolTipHelper_EventFilter(KToolTipHelper* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

libqt_string KToolTipHelper_WhatsThisHintOnly() {
    const QString _ret = KToolTipHelper::whatsThisHintOnly();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolTipHelper_Tr2(const char* s, const char* c) {
    QString _ret = KToolTipHelper::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KToolTipHelper_Tr3(const char* s, const char* c, int n) {
    QString _ret = KToolTipHelper::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}
