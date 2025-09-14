#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBNETWM_DEF_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMC_LIBNETWM_DEF_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct NET NET;
typedef struct NETExtendedStrut NETExtendedStrut;
typedef struct NETFullscreenMonitors NETFullscreenMonitors;
typedef struct NETIcon NETIcon;
typedef struct NETPoint NETPoint;
typedef struct NETRect NETRect;
typedef struct NETSize NETSize;
typedef struct NETStrut NETStrut;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

NETPoint* NETPoint_new(const NETPoint* other);
NETPoint* NETPoint_new2(NETPoint* other);
NETPoint* NETPoint_new3();
NETPoint* NETPoint_new4(const QPoint* p);
NETPoint* NETPoint_new5(const NETPoint* param1);
void NETPoint_CopyAssign(NETPoint* self, NETPoint* other);
void NETPoint_MoveAssign(NETPoint* self, NETPoint* other);
QPoint* NETPoint_ToPoint(const NETPoint* self);
int NETPoint_X(const NETPoint* self);
void NETPoint_SetX(NETPoint* self, int x);
int NETPoint_Y(const NETPoint* self);
void NETPoint_SetY(NETPoint* self, int y);
void NETPoint_Delete(NETPoint* self);

NETSize* NETSize_new(const NETSize* other);
NETSize* NETSize_new2(NETSize* other);
NETSize* NETSize_new3();
NETSize* NETSize_new4(const QSize* size);
NETSize* NETSize_new5(const NETSize* param1);
void NETSize_CopyAssign(NETSize* self, NETSize* other);
void NETSize_MoveAssign(NETSize* self, NETSize* other);
QSize* NETSize_ToSize(const NETSize* self);
int NETSize_Width(const NETSize* self);
void NETSize_SetWidth(NETSize* self, int width);
int NETSize_Height(const NETSize* self);
void NETSize_SetHeight(NETSize* self, int height);
void NETSize_Delete(NETSize* self);

NETRect* NETRect_new(const NETRect* other);
NETRect* NETRect_new2(NETRect* other);
NETRect* NETRect_new3();
NETRect* NETRect_new4(const QRect* rect);
void NETRect_CopyAssign(NETRect* self, NETRect* other);
void NETRect_MoveAssign(NETRect* self, NETRect* other);
QRect* NETRect_ToRect(const NETRect* self);
NETPoint* NETRect_Pos(const NETRect* self);
void NETRect_SetPos(NETRect* self, NETPoint* pos);
NETSize* NETRect_Size(const NETRect* self);
void NETRect_SetSize(NETRect* self, NETSize* size);
void NETRect_Delete(NETRect* self);

NETIcon* NETIcon_new(const NETIcon* other);
NETIcon* NETIcon_new2(NETIcon* other);
NETIcon* NETIcon_new3();
void NETIcon_CopyAssign(NETIcon* self, NETIcon* other);
void NETIcon_MoveAssign(NETIcon* self, NETIcon* other);
NETSize* NETIcon_Size(const NETIcon* self);
void NETIcon_SetSize(NETIcon* self, NETSize* size);
unsigned char* NETIcon_Data(const NETIcon* self);
void NETIcon_SetData(NETIcon* self, unsigned char* data);
void NETIcon_Delete(NETIcon* self);

NETExtendedStrut* NETExtendedStrut_new(const NETExtendedStrut* other);
NETExtendedStrut* NETExtendedStrut_new2(NETExtendedStrut* other);
NETExtendedStrut* NETExtendedStrut_new3();
void NETExtendedStrut_CopyAssign(NETExtendedStrut* self, NETExtendedStrut* other);
void NETExtendedStrut_MoveAssign(NETExtendedStrut* self, NETExtendedStrut* other);
int NETExtendedStrut_LeftWidth(const NETExtendedStrut* self);
void NETExtendedStrut_SetLeftWidth(NETExtendedStrut* self, int left_width);
int NETExtendedStrut_LeftStart(const NETExtendedStrut* self);
void NETExtendedStrut_SetLeftStart(NETExtendedStrut* self, int left_start);
int NETExtendedStrut_LeftEnd(const NETExtendedStrut* self);
void NETExtendedStrut_SetLeftEnd(NETExtendedStrut* self, int left_end);
int NETExtendedStrut_RightWidth(const NETExtendedStrut* self);
void NETExtendedStrut_SetRightWidth(NETExtendedStrut* self, int right_width);
int NETExtendedStrut_RightStart(const NETExtendedStrut* self);
void NETExtendedStrut_SetRightStart(NETExtendedStrut* self, int right_start);
int NETExtendedStrut_RightEnd(const NETExtendedStrut* self);
void NETExtendedStrut_SetRightEnd(NETExtendedStrut* self, int right_end);
int NETExtendedStrut_TopWidth(const NETExtendedStrut* self);
void NETExtendedStrut_SetTopWidth(NETExtendedStrut* self, int top_width);
int NETExtendedStrut_TopStart(const NETExtendedStrut* self);
void NETExtendedStrut_SetTopStart(NETExtendedStrut* self, int top_start);
int NETExtendedStrut_TopEnd(const NETExtendedStrut* self);
void NETExtendedStrut_SetTopEnd(NETExtendedStrut* self, int top_end);
int NETExtendedStrut_BottomWidth(const NETExtendedStrut* self);
void NETExtendedStrut_SetBottomWidth(NETExtendedStrut* self, int bottom_width);
int NETExtendedStrut_BottomStart(const NETExtendedStrut* self);
void NETExtendedStrut_SetBottomStart(NETExtendedStrut* self, int bottom_start);
int NETExtendedStrut_BottomEnd(const NETExtendedStrut* self);
void NETExtendedStrut_SetBottomEnd(NETExtendedStrut* self, int bottom_end);
void NETExtendedStrut_Delete(NETExtendedStrut* self);

NETStrut* NETStrut_new(const NETStrut* other);
NETStrut* NETStrut_new2(NETStrut* other);
NETStrut* NETStrut_new3();
void NETStrut_CopyAssign(NETStrut* self, NETStrut* other);
void NETStrut_MoveAssign(NETStrut* self, NETStrut* other);
int NETStrut_Left(const NETStrut* self);
void NETStrut_SetLeft(NETStrut* self, int left);
int NETStrut_Right(const NETStrut* self);
void NETStrut_SetRight(NETStrut* self, int right);
int NETStrut_Top(const NETStrut* self);
void NETStrut_SetTop(NETStrut* self, int top);
int NETStrut_Bottom(const NETStrut* self);
void NETStrut_SetBottom(NETStrut* self, int bottom);
void NETStrut_Delete(NETStrut* self);

NETFullscreenMonitors* NETFullscreenMonitors_new(const NETFullscreenMonitors* other);
NETFullscreenMonitors* NETFullscreenMonitors_new2(NETFullscreenMonitors* other);
NETFullscreenMonitors* NETFullscreenMonitors_new3();
void NETFullscreenMonitors_CopyAssign(NETFullscreenMonitors* self, NETFullscreenMonitors* other);
void NETFullscreenMonitors_MoveAssign(NETFullscreenMonitors* self, NETFullscreenMonitors* other);
int NETFullscreenMonitors_Top(const NETFullscreenMonitors* self);
void NETFullscreenMonitors_SetTop(NETFullscreenMonitors* self, int top);
int NETFullscreenMonitors_Bottom(const NETFullscreenMonitors* self);
void NETFullscreenMonitors_SetBottom(NETFullscreenMonitors* self, int bottom);
int NETFullscreenMonitors_Left(const NETFullscreenMonitors* self);
void NETFullscreenMonitors_SetLeft(NETFullscreenMonitors* self, int left);
int NETFullscreenMonitors_Right(const NETFullscreenMonitors* self);
void NETFullscreenMonitors_SetRight(NETFullscreenMonitors* self, int right);
bool NETFullscreenMonitors_IsSet(const NETFullscreenMonitors* self);
void NETFullscreenMonitors_Delete(NETFullscreenMonitors* self);

NET* NET_new(const NET* other);
NET* NET_new2(NET* other);
void NET_CopyAssign(NET* self, NET* other);
void NET_MoveAssign(NET* self, NET* other);
int NET_TimestampCompare(unsigned long time1, unsigned long time2);
int NET_TimestampDiff(unsigned long time1, unsigned long time2);
void NET_Delete(NET* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
