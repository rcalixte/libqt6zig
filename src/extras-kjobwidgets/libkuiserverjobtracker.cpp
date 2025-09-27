#include <KJob>
#include <KJobTrackerInterface>
#include <KUiServerJobTracker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kuiserverjobtracker.h>
#include "libkuiserverjobtracker.h"
#include "libkuiserverjobtracker.hxx"

KUiServerJobTracker* KUiServerJobTracker_new() {
    return new KUiServerJobTracker();
}

KUiServerJobTracker* KUiServerJobTracker_new2(QObject* parent) {
    return new KUiServerJobTracker(parent);
}

QMetaObject* KUiServerJobTracker_MetaObject(const KUiServerJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUiServerJobTracker_Metacast(KUiServerJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUiServerJobTracker_Metacall(KUiServerJobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUiServerJobTracker_Tr(const char* s) {
    QString _ret = KUiServerJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerJobTracker_RegisterJob(KUiServerJobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KUiServerJobTracker_UnregisterJob(KUiServerJobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

libqt_string KUiServerJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KUiServerJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUiServerJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUiServerJobTracker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerJobTracker_Delete(KUiServerJobTracker* self) {
    delete self;
}
