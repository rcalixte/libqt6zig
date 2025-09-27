#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKNOTIFICATIONJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKNOTIFICATIONJOBUIDELEGATE_H

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
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct KNotificationJobUiDelegate KNotificationJobUiDelegate;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

KNotificationJobUiDelegate* KNotificationJobUiDelegate_new();
KNotificationJobUiDelegate* KNotificationJobUiDelegate_new2(int flags);
QMetaObject* KNotificationJobUiDelegate_MetaObject(const KNotificationJobUiDelegate* self);
void* KNotificationJobUiDelegate_Metacast(KNotificationJobUiDelegate* self, const char* param1);
int KNotificationJobUiDelegate_Metacall(KNotificationJobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KNotificationJobUiDelegate_Tr(const char* s);
void KNotificationJobUiDelegate_ShowErrorMessage(KNotificationJobUiDelegate* self);
libqt_string KNotificationJobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KNotificationJobUiDelegate_Tr3(const char* s, const char* c, int n);
void KNotificationJobUiDelegate_Delete(KNotificationJobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
