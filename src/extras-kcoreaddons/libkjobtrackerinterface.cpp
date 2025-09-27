#include <KJob>
#include <KJobTrackerInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kjobtrackerinterface.h>
#include "libkjobtrackerinterface.h"
#include "libkjobtrackerinterface.hxx"

KJobTrackerInterface* KJobTrackerInterface_new() {
    return new KJobTrackerInterface();
}

KJobTrackerInterface* KJobTrackerInterface_new2(QObject* parent) {
    return new KJobTrackerInterface(parent);
}

QMetaObject* KJobTrackerInterface_MetaObject(const KJobTrackerInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* KJobTrackerInterface_Metacast(KJobTrackerInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KJobTrackerInterface_Metacall(KJobTrackerInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KJobTrackerInterface_Tr(const char* s) {
    QString _ret = KJobTrackerInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KJobTrackerInterface_RegisterJob(KJobTrackerInterface* self, KJob* job) {
    self->registerJob(job);
}

void KJobTrackerInterface_UnregisterJob(KJobTrackerInterface* self, KJob* job) {
    self->unregisterJob(job);
}

libqt_string KJobTrackerInterface_Tr2(const char* s, const char* c) {
    QString _ret = KJobTrackerInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KJobTrackerInterface_Tr3(const char* s, const char* c, int n) {
    QString _ret = KJobTrackerInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KJobTrackerInterface_Delete(KJobTrackerInterface* self) {
    delete self;
}
