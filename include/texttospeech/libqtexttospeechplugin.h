#pragma once
#ifndef SRC_TEXTTOSPEECHC_LIBQTEXTTOSPEECHPLUGIN_H
#define SRC_TEXTTOSPEECHC_LIBQTEXTTOSPEECHPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTextToSpeechPlugin QTextToSpeechPlugin;
#endif

void QTextToSpeechPlugin_OperatorAssign(QTextToSpeechPlugin* self, const QTextToSpeechPlugin* param1);
void QTextToSpeechPlugin_Delete(QTextToSpeechPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
