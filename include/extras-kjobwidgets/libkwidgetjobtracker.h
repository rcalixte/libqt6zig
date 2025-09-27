#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKWIDGETJOBTRACKER_H

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
typedef struct KWidgetJobTracker KWidgetJobTracker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

KWidgetJobTracker* KWidgetJobTracker_new(QWidget* parent);
KWidgetJobTracker* KWidgetJobTracker_new2();
QMetaObject* KWidgetJobTracker_MetaObject(const KWidgetJobTracker* self);
void* KWidgetJobTracker_Metacast(KWidgetJobTracker* self, const char* param1);
int KWidgetJobTracker_Metacall(KWidgetJobTracker* self, int param1, int param2, void** param3);
libqt_string KWidgetJobTracker_Tr(const char* s);
QWidget* KWidgetJobTracker_Widget(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_RegisterJob(KWidgetJobTracker* self, KJob* job);
void KWidgetJobTracker_UnregisterJob(KWidgetJobTracker* self, KJob* job);
bool KWidgetJobTracker_KeepOpen(const KWidgetJobTracker* self, KJob* job);
libqt_string KWidgetJobTracker_Tr2(const char* s, const char* c);
libqt_string KWidgetJobTracker_Tr3(const char* s, const char* c, int n);
void KWidgetJobTracker_Delete(KWidgetJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
