#pragma once
#ifndef SRC_EXTRAS_KJOBWIDGETSC_LIBKDIALOGJOBUIDELEGATE_H
#define SRC_EXTRAS_KJOBWIDGETSC_LIBKDIALOGJOBUIDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDialogJobUiDelegate KDialogJobUiDelegate;
typedef struct KJob KJob;
typedef struct KJobUiDelegate KJobUiDelegate;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

KDialogJobUiDelegate* KDialogJobUiDelegate_new();
KDialogJobUiDelegate* KDialogJobUiDelegate_new2(int flags, QWidget* window);
QMetaObject* KDialogJobUiDelegate_MetaObject(const KDialogJobUiDelegate* self);
void* KDialogJobUiDelegate_Metacast(KDialogJobUiDelegate* self, const char* param1);
int KDialogJobUiDelegate_Metacall(KDialogJobUiDelegate* self, int param1, int param2, void** param3);
libqt_string KDialogJobUiDelegate_Tr(const char* s);
bool KDialogJobUiDelegate_SetJob(KDialogJobUiDelegate* self, KJob* job);
void KDialogJobUiDelegate_SetWindow(KDialogJobUiDelegate* self, QWidget* window);
QWidget* KDialogJobUiDelegate_Window(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_UpdateUserTimestamp(KDialogJobUiDelegate* self, unsigned long time);
unsigned long KDialogJobUiDelegate_UserTimestamp(const KDialogJobUiDelegate* self);
void KDialogJobUiDelegate_ShowErrorMessage(KDialogJobUiDelegate* self);
libqt_string KDialogJobUiDelegate_Tr2(const char* s, const char* c);
libqt_string KDialogJobUiDelegate_Tr3(const char* s, const char* c, int n);
void KDialogJobUiDelegate_Delete(KDialogJobUiDelegate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
