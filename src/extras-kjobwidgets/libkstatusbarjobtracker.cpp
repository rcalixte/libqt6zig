#include <KAbstractWidgetJobTracker>
#include <KJob>
#include <KJobTrackerInterface>
#include <KStatusBarJobTracker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <kstatusbarjobtracker.h>
#include "libkstatusbarjobtracker.h"
#include "libkstatusbarjobtracker.hxx"

KStatusBarJobTracker* KStatusBarJobTracker_new(QWidget* parent) {
    return new KStatusBarJobTracker(parent);
}

KStatusBarJobTracker* KStatusBarJobTracker_new2() {
    return new KStatusBarJobTracker();
}

KStatusBarJobTracker* KStatusBarJobTracker_new3(QWidget* parent, bool button) {
    return new KStatusBarJobTracker(parent, button);
}

QMetaObject* KStatusBarJobTracker_MetaObject(const KStatusBarJobTracker* self) {
    return (QMetaObject*)self->metaObject();
}

void* KStatusBarJobTracker_Metacast(KStatusBarJobTracker* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KStatusBarJobTracker_Metacall(KStatusBarJobTracker* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KStatusBarJobTracker_Tr(const char* s) {
    QString _ret = KStatusBarJobTracker::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusBarJobTracker_RegisterJob(KStatusBarJobTracker* self, KJob* job) {
    self->registerJob(job);
}

void KStatusBarJobTracker_UnregisterJob(KStatusBarJobTracker* self, KJob* job) {
    self->unregisterJob(job);
}

QWidget* KStatusBarJobTracker_Widget(KStatusBarJobTracker* self, KJob* job) {
    return self->widget(job);
}

void KStatusBarJobTracker_SetStatusBarMode(KStatusBarJobTracker* self, int statusBarMode) {
    self->setStatusBarMode(static_cast<KStatusBarJobTracker::StatusBarModes>(statusBarMode));
}

void KStatusBarJobTracker_Description(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QPair<QString, QString> field1_QPair;
    libqt_string* field1_first = static_cast<libqt_string*>(field1.first);
    libqt_string* field1_second = static_cast<libqt_string*>(field1.second);
    QString field1_first_0_QString = QString::fromUtf8(field1_first[0].data, field1_first[0].len);
    QString field1_second_0_QString = QString::fromUtf8(field1_second[0].data, field1_second[0].len);
    field1_QPair.first = field1_first_0_QString;
    field1_QPair.second = field1_second_0_QString;
    QPair<QString, QString> field2_QPair;
    libqt_string* field2_first = static_cast<libqt_string*>(field2.first);
    libqt_string* field2_second = static_cast<libqt_string*>(field2.second);
    QString field2_first_0_QString = QString::fromUtf8(field2_first[0].data, field2_first[0].len);
    QString field2_second_0_QString = QString::fromUtf8(field2_second[0].data, field2_second[0].len);
    field2_QPair.first = field2_first_0_QString;
    field2_QPair.second = field2_second_0_QString;
    self->description(job, title_QString, field1_QPair, field2_QPair);
}

void KStatusBarJobTracker_TotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount) {
    self->totalAmount(job, static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
}

void KStatusBarJobTracker_Percent(KStatusBarJobTracker* self, KJob* job, unsigned long percent) {
    self->percent(job, static_cast<unsigned long>(percent));
}

void KStatusBarJobTracker_Speed(KStatusBarJobTracker* self, KJob* job, unsigned long value) {
    self->speed(job, static_cast<unsigned long>(value));
}

void KStatusBarJobTracker_SlotClean(KStatusBarJobTracker* self, KJob* job) {
    self->slotClean(job);
}

libqt_string KStatusBarJobTracker_Tr2(const char* s, const char* c) {
    QString _ret = KStatusBarJobTracker::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KStatusBarJobTracker_Tr3(const char* s, const char* c, int n) {
    QString _ret = KStatusBarJobTracker::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KStatusBarJobTracker_Delete(KStatusBarJobTracker* self) {
    delete self;
}
