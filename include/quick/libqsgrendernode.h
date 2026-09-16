#pragma once
#ifndef QUICK_LIBQSGRENDERNODE_H
#define QUICK_LIBQSGRENDERNODE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QSGRenderNode__RenderState)
typedef QSGRenderNode::RenderState QSGRenderNode__RenderState;
#endif
#else
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QSGClipNode QSGClipNode;
typedef struct QSGNode QSGNode;
typedef struct QSGRenderNode QSGRenderNode;
typedef struct QSGRenderNode__RenderState QSGRenderNode__RenderState;
#endif

QSGRenderNode* QSGRenderNode_new();
int QSGRenderNode_ChangedStates(const QSGRenderNode* self);
void QSGRenderNode_Prepare(QSGRenderNode* self);
void QSGRenderNode_Render(QSGRenderNode* self, const QSGRenderNode__RenderState* state);
void QSGRenderNode_ReleaseResources(QSGRenderNode* self);
int QSGRenderNode_Flags(const QSGRenderNode* self);
QRectF* QSGRenderNode_Rect(const QSGRenderNode* self);
QMatrix4x4* QSGRenderNode_ProjectionMatrix(const QSGRenderNode* self);
QMatrix4x4* QSGRenderNode_ProjectionMatrix2(const QSGRenderNode* self, ptrdiff_t index);
QMatrix4x4* QSGRenderNode_Matrix(const QSGRenderNode* self);
QSGClipNode* QSGRenderNode_ClipList(const QSGRenderNode* self);
double QSGRenderNode_InheritedOpacity(const QSGRenderNode* self);
void QSGRenderNode_OnChangedStates(const QSGRenderNode* self, intptr_t slot);
int QSGRenderNode_SuperChangedStates(const QSGRenderNode* self);
void QSGRenderNode_OnPrepare(QSGRenderNode* self, intptr_t slot);
void QSGRenderNode_SuperPrepare(QSGRenderNode* self);
void QSGRenderNode_OnRender(QSGRenderNode* self, intptr_t slot);
void QSGRenderNode_SuperRender(QSGRenderNode* self, const QSGRenderNode__RenderState* state);
void QSGRenderNode_OnReleaseResources(QSGRenderNode* self, intptr_t slot);
void QSGRenderNode_SuperReleaseResources(QSGRenderNode* self);
void QSGRenderNode_OnFlags(const QSGRenderNode* self, intptr_t slot);
int QSGRenderNode_SuperFlags(const QSGRenderNode* self);
void QSGRenderNode_OnRect(const QSGRenderNode* self, intptr_t slot);
QRectF* QSGRenderNode_SuperRect(const QSGRenderNode* self);
bool QSGRenderNode_IsSubtreeBlocked(const QSGRenderNode* self);
void QSGRenderNode_OnIsSubtreeBlocked(const QSGRenderNode* self, intptr_t slot);
bool QSGRenderNode_SuperIsSubtreeBlocked(const QSGRenderNode* self);
void QSGRenderNode_Preprocess(QSGRenderNode* self);
void QSGRenderNode_OnPreprocess(QSGRenderNode* self, intptr_t slot);
void QSGRenderNode_SuperPreprocess(QSGRenderNode* self);
void QSGRenderNode_Delete(QSGRenderNode* self);

QMatrix4x4* QSGRenderNode__RenderState_ProjectionMatrix(const QSGRenderNode__RenderState* self);
QRect* QSGRenderNode__RenderState_ScissorRect(const QSGRenderNode__RenderState* self);
bool QSGRenderNode__RenderState_ScissorEnabled(const QSGRenderNode__RenderState* self);
int QSGRenderNode__RenderState_StencilValue(const QSGRenderNode__RenderState* self);
bool QSGRenderNode__RenderState_StencilEnabled(const QSGRenderNode__RenderState* self);
QRegion* QSGRenderNode__RenderState_ClipRegion(const QSGRenderNode__RenderState* self);
void* QSGRenderNode__RenderState_Get(const QSGRenderNode__RenderState* self, const char* state);
void QSGRenderNode__RenderState_OperatorAssign(QSGRenderNode__RenderState* self, const QSGRenderNode__RenderState* param1);
void QSGRenderNode__RenderState_Delete(QSGRenderNode__RenderState* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
