#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKSTATUSBARJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKSTATUSBARJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KAbstractWidgetJobTracker KAbstractWidgetJobTracker;
typedef struct KJob KJob;
typedef struct KJobTrackerInterface KJobTrackerInterface;
typedef struct KStatusBarJobTracker KStatusBarJobTracker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

KStatusBarJobTracker* KStatusBarJobTracker_new(QWidget* parent);
KStatusBarJobTracker* KStatusBarJobTracker_new2();
KStatusBarJobTracker* KStatusBarJobTracker_new3(QWidget* parent, bool button);
QMetaObject* KStatusBarJobTracker_MetaObject(const KStatusBarJobTracker* self);
void* KStatusBarJobTracker_Metacast(KStatusBarJobTracker* self, const char* param1);
int KStatusBarJobTracker_Metacall(KStatusBarJobTracker* self, int param1, int param2, void** param3);
libqt_string KStatusBarJobTracker_Tr(const char* s);
void KStatusBarJobTracker_RegisterJob(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_UnregisterJob(KStatusBarJobTracker* self, KJob* job);
QWidget* KStatusBarJobTracker_Widget(KStatusBarJobTracker* self, KJob* job);
void KStatusBarJobTracker_SetStatusBarMode(KStatusBarJobTracker* self, int statusBarMode);
void KStatusBarJobTracker_Description(KStatusBarJobTracker* self, KJob* job, const libqt_string title, const libqt_pair /* tuple of libqt_string and libqt_string */ field1, const libqt_pair /* tuple of libqt_string and libqt_string */ field2);
void KStatusBarJobTracker_TotalAmount(KStatusBarJobTracker* self, KJob* job, int unit, unsigned long long amount);
void KStatusBarJobTracker_Percent(KStatusBarJobTracker* self, KJob* job, unsigned long percent);
void KStatusBarJobTracker_Speed(KStatusBarJobTracker* self, KJob* job, unsigned long value);
void KStatusBarJobTracker_SlotClean(KStatusBarJobTracker* self, KJob* job);
libqt_string KStatusBarJobTracker_Tr2(const char* s, const char* c);
libqt_string KStatusBarJobTracker_Tr3(const char* s, const char* c, int n);
void KStatusBarJobTracker_Delete(KStatusBarJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
