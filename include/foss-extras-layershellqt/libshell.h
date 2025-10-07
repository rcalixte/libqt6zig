#pragma once
#ifndef SRC_FOSS_EXTRAS_LAYERSHELLQTC_LIBSHELL_H
#define SRC_FOSS_EXTRAS_LAYERSHELLQTC_LIBSHELL_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_LayerShellQt__Shell)
typedef LayerShellQt::Shell LayerShellQt__Shell;
#endif
#else
typedef struct LayerShellQt__Shell LayerShellQt__Shell;
#endif

LayerShellQt__Shell* LayerShellQt__Shell_new(const LayerShellQt__Shell* other);
LayerShellQt__Shell* LayerShellQt__Shell_new2(LayerShellQt__Shell* other);
void LayerShellQt__Shell_CopyAssign(LayerShellQt__Shell* self, LayerShellQt__Shell* other);
void LayerShellQt__Shell_MoveAssign(LayerShellQt__Shell* self, LayerShellQt__Shell* other);
void LayerShellQt__Shell_UseLayerShell();
void LayerShellQt__Shell_Delete(LayerShellQt__Shell* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
