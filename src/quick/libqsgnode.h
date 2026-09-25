#pragma once
#ifndef QUICK_LIBQSGNODE_H
#define QUICK_LIBQSGNODE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QRectF QRectF;
typedef struct QSGBasicGeometryNode QSGBasicGeometryNode;
typedef struct QSGClipNode QSGClipNode;
typedef struct QSGGeometry QSGGeometry;
typedef struct QSGGeometryNode QSGGeometryNode;
typedef struct QSGMaterial QSGMaterial;
typedef struct QSGNode QSGNode;
typedef struct QSGNodeVisitor QSGNodeVisitor;
typedef struct QSGOpacityNode QSGOpacityNode;
typedef struct QSGRootNode QSGRootNode;
typedef struct QSGTransformNode QSGTransformNode;
#endif

QSGNode* QSGNode_new();
QSGNode* QSGNode_Parent(const QSGNode* self);
void QSGNode_RemoveChildNode(QSGNode* self, QSGNode* node);
void QSGNode_RemoveAllChildNodes(QSGNode* self);
void QSGNode_PrependChildNode(QSGNode* self, QSGNode* node);
void QSGNode_AppendChildNode(QSGNode* self, QSGNode* node);
void QSGNode_InsertChildNodeBefore(QSGNode* self, QSGNode* node, QSGNode* before);
void QSGNode_InsertChildNodeAfter(QSGNode* self, QSGNode* node, QSGNode* after);
void QSGNode_ReparentChildNodesTo(QSGNode* self, QSGNode* newParent);
int QSGNode_ChildCount(const QSGNode* self);
QSGNode* QSGNode_ChildAtIndex(const QSGNode* self, int i);
QSGNode* QSGNode_FirstChild(const QSGNode* self);
QSGNode* QSGNode_LastChild(const QSGNode* self);
QSGNode* QSGNode_NextSibling(const QSGNode* self);
QSGNode* QSGNode_PreviousSibling(const QSGNode* self);
int QSGNode_Type(const QSGNode* self);
void QSGNode_ClearDirty(QSGNode* self);
void QSGNode_MarkDirty(QSGNode* self, int bits);
int QSGNode_DirtyState(const QSGNode* self);
bool QSGNode_IsSubtreeBlocked(const QSGNode* self);
int QSGNode_Flags(const QSGNode* self);
void QSGNode_SetFlag(QSGNode* self, int param1);
void QSGNode_SetFlags(QSGNode* self, int param1);
void QSGNode_Preprocess(QSGNode* self);
void QSGNode_SetFlag2(QSGNode* self, int param1, bool param2);
void QSGNode_SetFlags2(QSGNode* self, int param1, bool param2);
void QSGNode_OnIsSubtreeBlocked(const QSGNode* self, intptr_t slot);
bool QSGNode_SuperIsSubtreeBlocked(const QSGNode* self);
void QSGNode_OnPreprocess(QSGNode* self, intptr_t slot);
void QSGNode_SuperPreprocess(QSGNode* self);
void QSGNode_Delete(QSGNode* self);

void qsgnode_h_QsgnodeSetDescription(QSGNode* node, const libqt_string description);

void QSGBasicGeometryNode_SetGeometry(QSGBasicGeometryNode* self, QSGGeometry* geometry);
QSGGeometry* QSGBasicGeometryNode_Geometry(const QSGBasicGeometryNode* self);
QSGGeometry* QSGBasicGeometryNode_Geometry2(QSGBasicGeometryNode* self);
QMatrix4x4* QSGBasicGeometryNode_Matrix(const QSGBasicGeometryNode* self);
QSGClipNode* QSGBasicGeometryNode_ClipList(const QSGBasicGeometryNode* self);
void QSGBasicGeometryNode_SetRendererMatrix(QSGBasicGeometryNode* self, const QMatrix4x4* m);
void QSGBasicGeometryNode_SetRendererClipList(QSGBasicGeometryNode* self, const QSGClipNode* c);
void QSGBasicGeometryNode_Delete(QSGBasicGeometryNode* self);

QSGGeometryNode* QSGGeometryNode_new();
void QSGGeometryNode_SetMaterial(QSGGeometryNode* self, QSGMaterial* material);
QSGMaterial* QSGGeometryNode_Material(const QSGGeometryNode* self);
void QSGGeometryNode_SetOpaqueMaterial(QSGGeometryNode* self, QSGMaterial* material);
QSGMaterial* QSGGeometryNode_OpaqueMaterial(const QSGGeometryNode* self);
QSGMaterial* QSGGeometryNode_ActiveMaterial(const QSGGeometryNode* self);
void QSGGeometryNode_SetRenderOrder(QSGGeometryNode* self, int order);
int QSGGeometryNode_RenderOrder(const QSGGeometryNode* self);
void QSGGeometryNode_SetInheritedOpacity(QSGGeometryNode* self, double opacity);
double QSGGeometryNode_InheritedOpacity(const QSGGeometryNode* self);
bool QSGGeometryNode_IsSubtreeBlocked(const QSGGeometryNode* self);
void QSGGeometryNode_OnIsSubtreeBlocked(const QSGGeometryNode* self, intptr_t slot);
bool QSGGeometryNode_SuperIsSubtreeBlocked(const QSGGeometryNode* self);
void QSGGeometryNode_Preprocess(QSGGeometryNode* self);
void QSGGeometryNode_OnPreprocess(QSGGeometryNode* self, intptr_t slot);
void QSGGeometryNode_SuperPreprocess(QSGGeometryNode* self);
void QSGGeometryNode_Delete(QSGGeometryNode* self);

QSGClipNode* QSGClipNode_new();
void QSGClipNode_SetIsRectangular(QSGClipNode* self, bool rectHint);
bool QSGClipNode_IsRectangular(const QSGClipNode* self);
void QSGClipNode_SetClipRect(QSGClipNode* self, const QRectF* clipRect);
QRectF* QSGClipNode_ClipRect(const QSGClipNode* self);
bool QSGClipNode_IsSubtreeBlocked(const QSGClipNode* self);
void QSGClipNode_OnIsSubtreeBlocked(const QSGClipNode* self, intptr_t slot);
bool QSGClipNode_SuperIsSubtreeBlocked(const QSGClipNode* self);
void QSGClipNode_Preprocess(QSGClipNode* self);
void QSGClipNode_OnPreprocess(QSGClipNode* self, intptr_t slot);
void QSGClipNode_SuperPreprocess(QSGClipNode* self);
void QSGClipNode_Delete(QSGClipNode* self);

QSGTransformNode* QSGTransformNode_new();
void QSGTransformNode_SetMatrix(QSGTransformNode* self, const QMatrix4x4* matrix);
QMatrix4x4* QSGTransformNode_Matrix(const QSGTransformNode* self);
void QSGTransformNode_SetCombinedMatrix(QSGTransformNode* self, const QMatrix4x4* matrix);
QMatrix4x4* QSGTransformNode_CombinedMatrix(const QSGTransformNode* self);
bool QSGTransformNode_IsSubtreeBlocked(const QSGTransformNode* self);
void QSGTransformNode_OnIsSubtreeBlocked(const QSGTransformNode* self, intptr_t slot);
bool QSGTransformNode_SuperIsSubtreeBlocked(const QSGTransformNode* self);
void QSGTransformNode_Preprocess(QSGTransformNode* self);
void QSGTransformNode_OnPreprocess(QSGTransformNode* self, intptr_t slot);
void QSGTransformNode_SuperPreprocess(QSGTransformNode* self);
void QSGTransformNode_Delete(QSGTransformNode* self);

QSGRootNode* QSGRootNode_new();
bool QSGRootNode_IsSubtreeBlocked(const QSGRootNode* self);
void QSGRootNode_OnIsSubtreeBlocked(const QSGRootNode* self, intptr_t slot);
bool QSGRootNode_SuperIsSubtreeBlocked(const QSGRootNode* self);
void QSGRootNode_Preprocess(QSGRootNode* self);
void QSGRootNode_OnPreprocess(QSGRootNode* self, intptr_t slot);
void QSGRootNode_SuperPreprocess(QSGRootNode* self);
void QSGRootNode_Delete(QSGRootNode* self);

QSGOpacityNode* QSGOpacityNode_new();
void QSGOpacityNode_SetOpacity(QSGOpacityNode* self, double opacity);
double QSGOpacityNode_Opacity(const QSGOpacityNode* self);
void QSGOpacityNode_SetCombinedOpacity(QSGOpacityNode* self, double opacity);
double QSGOpacityNode_CombinedOpacity(const QSGOpacityNode* self);
bool QSGOpacityNode_IsSubtreeBlocked(const QSGOpacityNode* self);
void QSGOpacityNode_OnIsSubtreeBlocked(const QSGOpacityNode* self, intptr_t slot);
bool QSGOpacityNode_SuperIsSubtreeBlocked(const QSGOpacityNode* self);
void QSGOpacityNode_Preprocess(QSGOpacityNode* self);
void QSGOpacityNode_OnPreprocess(QSGOpacityNode* self, intptr_t slot);
void QSGOpacityNode_SuperPreprocess(QSGOpacityNode* self);
void QSGOpacityNode_Delete(QSGOpacityNode* self);

QSGNodeVisitor* QSGNodeVisitor_new();
void QSGNodeVisitor_EnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
void QSGNodeVisitor_LeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
void QSGNodeVisitor_EnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
void QSGNodeVisitor_LeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
void QSGNodeVisitor_EnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
void QSGNodeVisitor_LeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
void QSGNodeVisitor_EnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
void QSGNodeVisitor_LeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
void QSGNodeVisitor_VisitNode(QSGNodeVisitor* self, QSGNode* n);
void QSGNodeVisitor_VisitChildren(QSGNodeVisitor* self, QSGNode* n);
void QSGNodeVisitor_OperatorAssign(QSGNodeVisitor* self, const QSGNodeVisitor* param1);
void QSGNodeVisitor_OnEnterTransformNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperEnterTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
void QSGNodeVisitor_OnLeaveTransformNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperLeaveTransformNode(QSGNodeVisitor* self, QSGTransformNode* param1);
void QSGNodeVisitor_OnEnterClipNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperEnterClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
void QSGNodeVisitor_OnLeaveClipNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperLeaveClipNode(QSGNodeVisitor* self, QSGClipNode* param1);
void QSGNodeVisitor_OnEnterGeometryNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperEnterGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
void QSGNodeVisitor_OnLeaveGeometryNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperLeaveGeometryNode(QSGNodeVisitor* self, QSGGeometryNode* param1);
void QSGNodeVisitor_OnEnterOpacityNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperEnterOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
void QSGNodeVisitor_OnLeaveOpacityNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperLeaveOpacityNode(QSGNodeVisitor* self, QSGOpacityNode* param1);
void QSGNodeVisitor_OnVisitNode(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperVisitNode(QSGNodeVisitor* self, QSGNode* n);
void QSGNodeVisitor_OnVisitChildren(QSGNodeVisitor* self, intptr_t slot);
void QSGNodeVisitor_SuperVisitChildren(QSGNodeVisitor* self, QSGNode* n);
void QSGNodeVisitor_Delete(QSGNodeVisitor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
