#pragma once
#ifndef SRC_EXTRAS_KXMLGUIC_LIBKTOOLTIPHELPER_H
#define SRC_EXTRAS_KXMLGUIC_LIBKTOOLTIPHELPER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KToolTipHelper KToolTipHelper;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KToolTipHelper_MetaObject(const KToolTipHelper* self);
void* KToolTipHelper_Metacast(KToolTipHelper* self, const char* param1);
int KToolTipHelper_Metacall(KToolTipHelper* self, int param1, int param2, void** param3);
KToolTipHelper* KToolTipHelper_Instance();
bool KToolTipHelper_EventFilter(KToolTipHelper* self, QObject* watched, QEvent* event);
libqt_string KToolTipHelper_WhatsThisHintOnly();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
