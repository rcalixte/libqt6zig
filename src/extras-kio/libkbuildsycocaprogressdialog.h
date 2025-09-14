#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKBUILDSYCOCAPROGRESSDIALOG_H
#define SRC_EXTRAS_KIOC_LIBKBUILDSYCOCAPROGRESSDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KBuildSycocaProgressDialog KBuildSycocaProgressDialog;
typedef struct QDialog QDialog;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QProgressDialog QProgressDialog;
typedef struct QWidget QWidget;
#endif

QMetaObject* KBuildSycocaProgressDialog_MetaObject(const KBuildSycocaProgressDialog* self);
void* KBuildSycocaProgressDialog_Metacast(KBuildSycocaProgressDialog* self, const char* param1);
int KBuildSycocaProgressDialog_Metacall(KBuildSycocaProgressDialog* self, int param1, int param2, void** param3);
libqt_string KBuildSycocaProgressDialog_Tr(const char* s);
void KBuildSycocaProgressDialog_RebuildKSycoca(QWidget* parent);
libqt_string KBuildSycocaProgressDialog_Tr2(const char* s, const char* c);
libqt_string KBuildSycocaProgressDialog_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
