#pragma once
#ifndef SRCC_LIBQGRAPHICSSCENEEVENT_H
#define SRCC_LIBQGRAPHICSSCENEEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneEvent QGraphicsSceneEvent;
typedef struct QGraphicsSceneHelpEvent QGraphicsSceneHelpEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QMimeData QMimeData;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QSizeF QSizeF;
typedef struct QWidget QWidget;
#endif

#ifdef __cplusplus
typedef QGraphicsSceneContextMenuEvent::Reason Reason; // C++ enum
#else
typedef int Reason; // C ABI enum
#endif

QGraphicsSceneEvent* QGraphicsSceneEvent_new(int typeVal);
QWidget* QGraphicsSceneEvent_Widget(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_SetWidget(QGraphicsSceneEvent* self, QWidget* widget);
unsigned long long QGraphicsSceneEvent_Timestamp(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_SetTimestamp(QGraphicsSceneEvent* self, unsigned long long ts);
void QGraphicsSceneEvent_SetAccepted(QGraphicsSceneEvent* self, bool accepted);
void QGraphicsSceneEvent_OnSetAccepted(QGraphicsSceneEvent* self, intptr_t slot);
void QGraphicsSceneEvent_QBaseSetAccepted(QGraphicsSceneEvent* self, bool accepted);
QEvent* QGraphicsSceneEvent_Clone(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_OnClone(const QGraphicsSceneEvent* self, intptr_t slot);
QEvent* QGraphicsSceneEvent_QBaseClone(const QGraphicsSceneEvent* self);
void QGraphicsSceneEvent_Delete(QGraphicsSceneEvent* self);

QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new();
QGraphicsSceneMouseEvent* QGraphicsSceneMouseEvent_new2(int typeVal);
QPointF* QGraphicsSceneMouseEvent_Pos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetPos(QGraphicsSceneMouseEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_ScenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_ScreenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_ButtonDownPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownPos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_ButtonDownScenePos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownScenePos(QGraphicsSceneMouseEvent* self, int button, const QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_ButtonDownScreenPos(const QGraphicsSceneMouseEvent* self, int button);
void QGraphicsSceneMouseEvent_SetButtonDownScreenPos(QGraphicsSceneMouseEvent* self, int button, const QPoint* pos);
QPointF* QGraphicsSceneMouseEvent_LastPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastPos(QGraphicsSceneMouseEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneMouseEvent_LastScenePos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScenePos(QGraphicsSceneMouseEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneMouseEvent_LastScreenPos(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetLastScreenPos(QGraphicsSceneMouseEvent* self, const QPoint* pos);
int QGraphicsSceneMouseEvent_Buttons(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetButtons(QGraphicsSceneMouseEvent* self, int buttons);
int QGraphicsSceneMouseEvent_Button(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetButton(QGraphicsSceneMouseEvent* self, int button);
int QGraphicsSceneMouseEvent_Modifiers(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetModifiers(QGraphicsSceneMouseEvent* self, int modifiers);
int QGraphicsSceneMouseEvent_Source(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetSource(QGraphicsSceneMouseEvent* self, int source);
int QGraphicsSceneMouseEvent_Flags(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_SetFlags(QGraphicsSceneMouseEvent* self, int flags);
void QGraphicsSceneMouseEvent_SetAccepted(QGraphicsSceneMouseEvent* self, bool accepted);
void QGraphicsSceneMouseEvent_OnSetAccepted(QGraphicsSceneMouseEvent* self, intptr_t slot);
void QGraphicsSceneMouseEvent_QBaseSetAccepted(QGraphicsSceneMouseEvent* self, bool accepted);
QEvent* QGraphicsSceneMouseEvent_Clone(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_OnClone(const QGraphicsSceneMouseEvent* self, intptr_t slot);
QEvent* QGraphicsSceneMouseEvent_QBaseClone(const QGraphicsSceneMouseEvent* self);
void QGraphicsSceneMouseEvent_Delete(QGraphicsSceneMouseEvent* self);

QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new();
QGraphicsSceneWheelEvent* QGraphicsSceneWheelEvent_new2(int typeVal);
QPointF* QGraphicsSceneWheelEvent_Pos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetPos(QGraphicsSceneWheelEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneWheelEvent_ScenePos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScenePos(QGraphicsSceneWheelEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneWheelEvent_ScreenPos(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetScreenPos(QGraphicsSceneWheelEvent* self, const QPoint* pos);
int QGraphicsSceneWheelEvent_Buttons(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetButtons(QGraphicsSceneWheelEvent* self, int buttons);
int QGraphicsSceneWheelEvent_Modifiers(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetModifiers(QGraphicsSceneWheelEvent* self, int modifiers);
int QGraphicsSceneWheelEvent_Delta(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetDelta(QGraphicsSceneWheelEvent* self, int delta);
int QGraphicsSceneWheelEvent_Orientation(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetOrientation(QGraphicsSceneWheelEvent* self, int orientation);
int QGraphicsSceneWheelEvent_Phase(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetPhase(QGraphicsSceneWheelEvent* self, int scrollPhase);
QPoint* QGraphicsSceneWheelEvent_PixelDelta(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetPixelDelta(QGraphicsSceneWheelEvent* self, QPoint* delta);
bool QGraphicsSceneWheelEvent_IsInverted(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_SetInverted(QGraphicsSceneWheelEvent* self, bool inverted);
void QGraphicsSceneWheelEvent_SetAccepted(QGraphicsSceneWheelEvent* self, bool accepted);
void QGraphicsSceneWheelEvent_OnSetAccepted(QGraphicsSceneWheelEvent* self, intptr_t slot);
void QGraphicsSceneWheelEvent_QBaseSetAccepted(QGraphicsSceneWheelEvent* self, bool accepted);
QEvent* QGraphicsSceneWheelEvent_Clone(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_OnClone(const QGraphicsSceneWheelEvent* self, intptr_t slot);
QEvent* QGraphicsSceneWheelEvent_QBaseClone(const QGraphicsSceneWheelEvent* self);
void QGraphicsSceneWheelEvent_Delete(QGraphicsSceneWheelEvent* self);

QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new();
QGraphicsSceneContextMenuEvent* QGraphicsSceneContextMenuEvent_new2(int typeVal);
QPointF* QGraphicsSceneContextMenuEvent_Pos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetPos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneContextMenuEvent_ScenePos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScenePos(QGraphicsSceneContextMenuEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneContextMenuEvent_ScreenPos(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetScreenPos(QGraphicsSceneContextMenuEvent* self, const QPoint* pos);
int QGraphicsSceneContextMenuEvent_Modifiers(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetModifiers(QGraphicsSceneContextMenuEvent* self, int modifiers);
int QGraphicsSceneContextMenuEvent_Reason(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_SetReason(QGraphicsSceneContextMenuEvent* self, int reason);
void QGraphicsSceneContextMenuEvent_SetAccepted(QGraphicsSceneContextMenuEvent* self, bool accepted);
void QGraphicsSceneContextMenuEvent_OnSetAccepted(QGraphicsSceneContextMenuEvent* self, intptr_t slot);
void QGraphicsSceneContextMenuEvent_QBaseSetAccepted(QGraphicsSceneContextMenuEvent* self, bool accepted);
QEvent* QGraphicsSceneContextMenuEvent_Clone(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_OnClone(const QGraphicsSceneContextMenuEvent* self, intptr_t slot);
QEvent* QGraphicsSceneContextMenuEvent_QBaseClone(const QGraphicsSceneContextMenuEvent* self);
void QGraphicsSceneContextMenuEvent_Delete(QGraphicsSceneContextMenuEvent* self);

QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new();
QGraphicsSceneHoverEvent* QGraphicsSceneHoverEvent_new2(int typeVal);
QPointF* QGraphicsSceneHoverEvent_Pos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetPos(QGraphicsSceneHoverEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_ScenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_ScreenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos);
QPointF* QGraphicsSceneHoverEvent_LastPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastPos(QGraphicsSceneHoverEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneHoverEvent_LastScenePos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScenePos(QGraphicsSceneHoverEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneHoverEvent_LastScreenPos(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetLastScreenPos(QGraphicsSceneHoverEvent* self, const QPoint* pos);
int QGraphicsSceneHoverEvent_Modifiers(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_SetModifiers(QGraphicsSceneHoverEvent* self, int modifiers);
void QGraphicsSceneHoverEvent_SetAccepted(QGraphicsSceneHoverEvent* self, bool accepted);
void QGraphicsSceneHoverEvent_OnSetAccepted(QGraphicsSceneHoverEvent* self, intptr_t slot);
void QGraphicsSceneHoverEvent_QBaseSetAccepted(QGraphicsSceneHoverEvent* self, bool accepted);
QEvent* QGraphicsSceneHoverEvent_Clone(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_OnClone(const QGraphicsSceneHoverEvent* self, intptr_t slot);
QEvent* QGraphicsSceneHoverEvent_QBaseClone(const QGraphicsSceneHoverEvent* self);
void QGraphicsSceneHoverEvent_Delete(QGraphicsSceneHoverEvent* self);

QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new();
QGraphicsSceneHelpEvent* QGraphicsSceneHelpEvent_new2(int typeVal);
QPointF* QGraphicsSceneHelpEvent_ScenePos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScenePos(QGraphicsSceneHelpEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneHelpEvent_ScreenPos(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_SetScreenPos(QGraphicsSceneHelpEvent* self, const QPoint* pos);
void QGraphicsSceneHelpEvent_SetAccepted(QGraphicsSceneHelpEvent* self, bool accepted);
void QGraphicsSceneHelpEvent_OnSetAccepted(QGraphicsSceneHelpEvent* self, intptr_t slot);
void QGraphicsSceneHelpEvent_QBaseSetAccepted(QGraphicsSceneHelpEvent* self, bool accepted);
QEvent* QGraphicsSceneHelpEvent_Clone(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_OnClone(const QGraphicsSceneHelpEvent* self, intptr_t slot);
QEvent* QGraphicsSceneHelpEvent_QBaseClone(const QGraphicsSceneHelpEvent* self);
void QGraphicsSceneHelpEvent_Delete(QGraphicsSceneHelpEvent* self);

QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new();
QGraphicsSceneDragDropEvent* QGraphicsSceneDragDropEvent_new2(int typeVal);
QPointF* QGraphicsSceneDragDropEvent_Pos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetPos(QGraphicsSceneDragDropEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneDragDropEvent_ScenePos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScenePos(QGraphicsSceneDragDropEvent* self, const QPointF* pos);
QPoint* QGraphicsSceneDragDropEvent_ScreenPos(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetScreenPos(QGraphicsSceneDragDropEvent* self, const QPoint* pos);
int QGraphicsSceneDragDropEvent_Buttons(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetButtons(QGraphicsSceneDragDropEvent* self, int buttons);
int QGraphicsSceneDragDropEvent_Modifiers(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetModifiers(QGraphicsSceneDragDropEvent* self, int modifiers);
int QGraphicsSceneDragDropEvent_PossibleActions(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetPossibleActions(QGraphicsSceneDragDropEvent* self, int actions);
int QGraphicsSceneDragDropEvent_ProposedAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetProposedAction(QGraphicsSceneDragDropEvent* self, int action);
void QGraphicsSceneDragDropEvent_AcceptProposedAction(QGraphicsSceneDragDropEvent* self);
int QGraphicsSceneDragDropEvent_DropAction(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetDropAction(QGraphicsSceneDragDropEvent* self, int action);
QWidget* QGraphicsSceneDragDropEvent_Source(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetSource(QGraphicsSceneDragDropEvent* self, QWidget* source);
QMimeData* QGraphicsSceneDragDropEvent_MimeData(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_SetMimeData(QGraphicsSceneDragDropEvent* self, const QMimeData* data);
void QGraphicsSceneDragDropEvent_SetAccepted(QGraphicsSceneDragDropEvent* self, bool accepted);
void QGraphicsSceneDragDropEvent_OnSetAccepted(QGraphicsSceneDragDropEvent* self, intptr_t slot);
void QGraphicsSceneDragDropEvent_QBaseSetAccepted(QGraphicsSceneDragDropEvent* self, bool accepted);
QEvent* QGraphicsSceneDragDropEvent_Clone(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_OnClone(const QGraphicsSceneDragDropEvent* self, intptr_t slot);
QEvent* QGraphicsSceneDragDropEvent_QBaseClone(const QGraphicsSceneDragDropEvent* self);
void QGraphicsSceneDragDropEvent_Delete(QGraphicsSceneDragDropEvent* self);

QGraphicsSceneResizeEvent* QGraphicsSceneResizeEvent_new();
QSizeF* QGraphicsSceneResizeEvent_OldSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetOldSize(QGraphicsSceneResizeEvent* self, const QSizeF* size);
QSizeF* QGraphicsSceneResizeEvent_NewSize(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_SetNewSize(QGraphicsSceneResizeEvent* self, const QSizeF* size);
void QGraphicsSceneResizeEvent_SetAccepted(QGraphicsSceneResizeEvent* self, bool accepted);
void QGraphicsSceneResizeEvent_OnSetAccepted(QGraphicsSceneResizeEvent* self, intptr_t slot);
void QGraphicsSceneResizeEvent_QBaseSetAccepted(QGraphicsSceneResizeEvent* self, bool accepted);
QEvent* QGraphicsSceneResizeEvent_Clone(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_OnClone(const QGraphicsSceneResizeEvent* self, intptr_t slot);
QEvent* QGraphicsSceneResizeEvent_QBaseClone(const QGraphicsSceneResizeEvent* self);
void QGraphicsSceneResizeEvent_Delete(QGraphicsSceneResizeEvent* self);

QGraphicsSceneMoveEvent* QGraphicsSceneMoveEvent_new();
QPointF* QGraphicsSceneMoveEvent_OldPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetOldPos(QGraphicsSceneMoveEvent* self, const QPointF* pos);
QPointF* QGraphicsSceneMoveEvent_NewPos(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_SetNewPos(QGraphicsSceneMoveEvent* self, const QPointF* pos);
void QGraphicsSceneMoveEvent_SetAccepted(QGraphicsSceneMoveEvent* self, bool accepted);
void QGraphicsSceneMoveEvent_OnSetAccepted(QGraphicsSceneMoveEvent* self, intptr_t slot);
void QGraphicsSceneMoveEvent_QBaseSetAccepted(QGraphicsSceneMoveEvent* self, bool accepted);
QEvent* QGraphicsSceneMoveEvent_Clone(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_OnClone(const QGraphicsSceneMoveEvent* self, intptr_t slot);
QEvent* QGraphicsSceneMoveEvent_QBaseClone(const QGraphicsSceneMoveEvent* self);
void QGraphicsSceneMoveEvent_Delete(QGraphicsSceneMoveEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
