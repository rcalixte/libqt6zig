#include <KAuthorized>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kauthorized.h>
#include "libkauthorized.h"
#include "libkauthorized.hxx"

QMetaObject* KAuthorized_MetaObject(const KAuthorized* self) {
    return (QMetaObject*)self->metaObject();
}

void* KAuthorized_Metacast(KAuthorized* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KAuthorized_Metacall(KAuthorized* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KAuthorized_Tr(const char* s) {
    QString _ret = KAuthorized::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KAuthorized_Authorize(const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    return KAuthorized::authorize(action_QString);
}

bool KAuthorized_Authorize2(int action) {
    return KAuthorized::authorize(static_cast<KAuthorized::GenericRestriction>(action));
}

bool KAuthorized_AuthorizeAction(const libqt_string action) {
    QString action_QString = QString::fromUtf8(action.data, action.len);
    return KAuthorized::authorizeAction(action_QString);
}

bool KAuthorized_AuthorizeAction2(int action) {
    return KAuthorized::authorizeAction(static_cast<KAuthorized::GenericAction>(action));
}

bool KAuthorized_AuthorizeControlModule(const libqt_string pluginId) {
    QString pluginId_QString = QString::fromUtf8(pluginId.data, pluginId.len);
    return KAuthorized::authorizeControlModule(pluginId_QString);
}

libqt_string KAuthorized_Tr2(const char* s, const char* c) {
    QString _ret = KAuthorized::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KAuthorized_Tr3(const char* s, const char* c, int n) {
    QString _ret = KAuthorized::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KAuthorized_Delete(KAuthorized* self) {
    delete self;
}
