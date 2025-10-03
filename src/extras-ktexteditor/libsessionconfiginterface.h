#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBSESSIONCONFIGINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBSESSIONCONFIGINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__SessionConfigInterface)
typedef KTextEditor::SessionConfigInterface KTextEditor__SessionConfigInterface;
#endif
#else
typedef struct KConfigGroup KConfigGroup;
typedef struct KTextEditor__SessionConfigInterface KTextEditor__SessionConfigInterface;
#endif

KTextEditor__SessionConfigInterface* KTextEditor__SessionConfigInterface_new();
void KTextEditor__SessionConfigInterface_ReadSessionConfig(KTextEditor__SessionConfigInterface* self, const KConfigGroup* config);
void KTextEditor__SessionConfigInterface_WriteSessionConfig(KTextEditor__SessionConfigInterface* self, KConfigGroup* config);
void KTextEditor__SessionConfigInterface_OnReadSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot);
void KTextEditor__SessionConfigInterface_QBaseReadSessionConfig(KTextEditor__SessionConfigInterface* self, const KConfigGroup* config);
void KTextEditor__SessionConfigInterface_OnWriteSessionConfig(KTextEditor__SessionConfigInterface* self, intptr_t slot);
void KTextEditor__SessionConfigInterface_QBaseWriteSessionConfig(KTextEditor__SessionConfigInterface* self, KConfigGroup* config);
void KTextEditor__SessionConfigInterface_Delete(KTextEditor__SessionConfigInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
