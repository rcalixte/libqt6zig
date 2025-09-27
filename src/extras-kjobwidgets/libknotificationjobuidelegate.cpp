#include <KJob>
#include <KJobUiDelegate>
#include <KNotificationJobUiDelegate>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <knotificationjobuidelegate.h>
#include "libknotificationjobuidelegate.h"
#include "libknotificationjobuidelegate.hxx"

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new() {
    return new KNotificationJobUiDelegate();
}

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new2(int flags) {
    return new KNotificationJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags));
}

QMetaObject* KNotificationJobUiDelegate_MetaObject(const KNotificationJobUiDelegate* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNotificationJobUiDelegate_Metacast(KNotificationJobUiDelegate* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNotificationJobUiDelegate_Metacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KNotificationJobUiDelegate_Tr(const char* s) {
    QString _ret = KNotificationJobUiDelegate::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationJobUiDelegate_ShowErrorMessage(KNotificationJobUiDelegate* self) {
    self->showErrorMessage();
}

libqt_string KNotificationJobUiDelegate_Tr2(const char* s, const char* c) {
    QString _ret = KNotificationJobUiDelegate::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNotificationJobUiDelegate_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNotificationJobUiDelegate::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNotificationJobUiDelegate_Delete(KNotificationJobUiDelegate* self) {
    delete self;
}
