#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKJOBTRACKERINTERFACE_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKJOBTRACKERINTERFACE_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

KJobTrackerInterface* KJobTrackerInterface_new();
KJobTrackerInterface* KJobTrackerInterface_new2(QObject* parent);
QMetaObject* KJobTrackerInterface_MetaObject(const KJobTrackerInterface* self);
void* KJobTrackerInterface_Metacast(KJobTrackerInterface* self, const char* param1);
int KJobTrackerInterface_Metacall(KJobTrackerInterface* self, int param1, int param2, void** param3);
libqt_string KJobTrackerInterface_Tr(const char* s);
void KJobTrackerInterface_RegisterJob(KJobTrackerInterface* self, KJob* job);
void KJobTrackerInterface_UnregisterJob(KJobTrackerInterface* self, KJob* job);
libqt_string KJobTrackerInterface_Tr2(const char* s, const char* c);
libqt_string KJobTrackerInterface_Tr3(const char* s, const char* c, int n);
void KJobTrackerInterface_Delete(KJobTrackerInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
