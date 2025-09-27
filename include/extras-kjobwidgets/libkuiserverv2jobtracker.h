#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERV2JOBTRACKER_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKUISERVERV2JOBTRACKER_H

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
typedef struct KUiServerV2JobTracker KUiServerV2JobTracker;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

KUiServerV2JobTracker* KUiServerV2JobTracker_new();
KUiServerV2JobTracker* KUiServerV2JobTracker_new2(QObject* parent);
QMetaObject* KUiServerV2JobTracker_MetaObject(const KUiServerV2JobTracker* self);
void* KUiServerV2JobTracker_Metacast(KUiServerV2JobTracker* self, const char* param1);
int KUiServerV2JobTracker_Metacall(KUiServerV2JobTracker* self, int param1, int param2, void** param3);
libqt_string KUiServerV2JobTracker_Tr(const char* s);
void KUiServerV2JobTracker_RegisterJob(KUiServerV2JobTracker* self, KJob* job);
void KUiServerV2JobTracker_UnregisterJob(KUiServerV2JobTracker* self, KJob* job);
libqt_string KUiServerV2JobTracker_Tr2(const char* s, const char* c);
libqt_string KUiServerV2JobTracker_Tr3(const char* s, const char* c, int n);
void KUiServerV2JobTracker_Delete(KUiServerV2JobTracker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
