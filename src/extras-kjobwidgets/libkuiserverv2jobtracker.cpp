#include <KJob>
#include <KJobTrackerInterface>
#include <KUiServerV2JobTracker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kuiserverv2jobtracker.h>
#include "libkuiserverv2jobtracker.h"
#include "libkuiserverv2jobtracker.hxx"

KUiServerV2JobTracker* KUiServerV2JobTracker_new() {
    return new KUiServerV2JobTracker();
}

KUiServerV2JobTracker* KUiServerV2JobTracker_new2(QObject* parent) {
    return new KUiServerV2JobTracker(parent);
}

QMetaObject* KUiServerV2JobTracker_MetaObject(const KUiServerV2JobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUiServerV2JobTracker_Metacast(KUiServerV2JobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUiServerV2JobTracker_Metacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUiServerV2JobTracker_Tr(const char* s) {
    QString _ret = KUiServerV2JobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerV2JobTracker_RegisterJob(KUiServerV2JobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KUiServerV2JobTracker_UnregisterJob(KUiServerV2JobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

libqt_string KUiServerV2JobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KUiServerV2JobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUiServerV2JobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUiServerV2JobTracker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUiServerV2JobTracker_Delete(KUiServerV2JobTracker* self) {
    delete self;
}
