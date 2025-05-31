#pragma once
#ifndef SRC_PDFC_LIBQPDFDOCUMENTRENDEROPTIONS_H
#define SRC_PDFC_LIBQPDFDOCUMENTRENDEROPTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

#ifdef __cplusplus
typedef QPdfDocumentRenderOptions::RenderFlag RenderFlag;   // C++ enum
typedef QPdfDocumentRenderOptions::RenderFlags RenderFlags; // C++ QFlags
typedef QPdfDocumentRenderOptions::Rotation Rotation;       // C++ enum
#else
typedef int RenderFlag;  // C ABI enum
typedef int RenderFlags; // C ABI QFlags
typedef int Rotation;    // C ABI enum
#endif

QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new(const QPdfDocumentRenderOptions* other);
QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new2(QPdfDocumentRenderOptions* other);
QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new3();
QPdfDocumentRenderOptions* QPdfDocumentRenderOptions_new4(const QPdfDocumentRenderOptions* param1);
void QPdfDocumentRenderOptions_CopyAssign(QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other);
void QPdfDocumentRenderOptions_MoveAssign(QPdfDocumentRenderOptions* self, QPdfDocumentRenderOptions* other);
int QPdfDocumentRenderOptions_Rotation(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_SetRotation(QPdfDocumentRenderOptions* self, int r);
int QPdfDocumentRenderOptions_RenderFlags(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_SetRenderFlags(QPdfDocumentRenderOptions* self, int r);
QRect* QPdfDocumentRenderOptions_ScaledClipRect(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_SetScaledClipRect(QPdfDocumentRenderOptions* self, const QRect* r);
QSize* QPdfDocumentRenderOptions_ScaledSize(const QPdfDocumentRenderOptions* self);
void QPdfDocumentRenderOptions_SetScaledSize(QPdfDocumentRenderOptions* self, const QSize* s);
void QPdfDocumentRenderOptions_Delete(QPdfDocumentRenderOptions* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
