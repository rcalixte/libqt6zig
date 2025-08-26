#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKSANDBOX_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKSANDBOX_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KSandbox__ProcessContext)
typedef KSandbox::ProcessContext KSandbox__ProcessContext;
#endif
#else
typedef struct KSandbox KSandbox;
typedef struct KSandbox__ProcessContext KSandbox__ProcessContext;
typedef struct QProcess QProcess;
#endif

bool KSandbox_IsInside();
bool KSandbox_IsFlatpak();
bool KSandbox_IsSnap();
KSandbox__ProcessContext* KSandbox_MakeHostContext(const QProcess* param1);
void KSandbox_StartHostProcess(QProcess* param1, int param2);

KSandbox__ProcessContext* KSandbox__ProcessContext_new(const KSandbox__ProcessContext* param1);
void KSandbox__ProcessContext_Delete(KSandbox__ProcessContext* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
