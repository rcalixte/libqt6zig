#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKABSTRACTWIDGETJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKABSTRACTWIDGETJOBTRACKER_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QMetaObject* KAbstractWidgetJobTracker_MetaObject(const KAbstractWidgetJobTracker* self);
void* KAbstractWidgetJobTracker_Metacast(KAbstractWidgetJobTracker* self, const char* param1);
int KAbstractWidgetJobTracker_Metacall(KAbstractWidgetJobTracker* self, int param1, int param2, void** param3);
libqt_string KAbstractWidgetJobTracker_Tr(const char* s);
void KAbstractWidgetJobTracker_RegisterJob(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_UnregisterJob(KAbstractWidgetJobTracker* self, KJob* job);
QWidget* KAbstractWidgetJobTracker_Widget(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SetStopOnClose(KAbstractWidgetJobTracker* self, KJob* job, bool stopOnClose);
bool KAbstractWidgetJobTracker_StopOnClose(const KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_SetAutoDelete(KAbstractWidgetJobTracker* self, KJob* job, bool autoDelete);
bool KAbstractWidgetJobTracker_AutoDelete(const KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Stopped(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Stopped(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_Suspend(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Suspend(KAbstractWidgetJobTracker* self, intptr_t slot);
void KAbstractWidgetJobTracker_Resume(KAbstractWidgetJobTracker* self, KJob* job);
void KAbstractWidgetJobTracker_Connect_Resume(KAbstractWidgetJobTracker* self, intptr_t slot);
libqt_string KAbstractWidgetJobTracker_Tr2(const char* s, const char* c);
libqt_string KAbstractWidgetJobTracker_Tr3(const char* s, const char* c, int n);
void KAbstractWidgetJobTracker_Delete(KAbstractWidgetJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
