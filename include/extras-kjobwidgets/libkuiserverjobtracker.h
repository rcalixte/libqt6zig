#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERJOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERJOBTRACKER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KJob KJob;
typedef struct KJobTrackerInterface KJobTrackerInterface;
typedef struct KUiServerJobTracker KUiServerJobTracker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

KUiServerJobTracker* KUiServerJobTracker_new();
KUiServerJobTracker* KUiServerJobTracker_new2(QObject* parent);
QMetaObject* KUiServerJobTracker_MetaObject(const KUiServerJobTracker* self);
void* KUiServerJobTracker_Metacast(KUiServerJobTracker* self, const char* param1);
int KUiServerJobTracker_Metacall(KUiServerJobTracker* self, int param1, int param2, void** param3);
libqt_string KUiServerJobTracker_Tr(const char* s);
void KUiServerJobTracker_RegisterJob(KUiServerJobTracker* self, KJob* job);
void KUiServerJobTracker_UnregisterJob(KUiServerJobTracker* self, KJob* job);
libqt_string KUiServerJobTracker_Tr2(const char* s, const char* c);
libqt_string KUiServerJobTracker_Tr3(const char* s, const char* c, int n);
void KUiServerJobTracker_Delete(KUiServerJobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
