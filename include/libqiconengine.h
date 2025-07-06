#pragma once
#ifndef SRCC_LIBQICONENGINE_H
#define SRCC_LIBQICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument)
typedef QIconEngine::ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
#endif
#else
typedef struct QDataStream QDataStream;
typedef struct QIconEngine QIconEngine;
typedef struct QIconEngine__ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QIconEngine* QIconEngine_new();
void QIconEngine_Paint(QIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
void QIconEngine_OnPaint(QIconEngine* self, intptr_t slot);
void QIconEngine_QBasePaint(QIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
QSize* QIconEngine_ActualSize(QIconEngine* self, const QSize* size, int mode, int state);
void QIconEngine_OnActualSize(QIconEngine* self, intptr_t slot);
QSize* QIconEngine_QBaseActualSize(QIconEngine* self, const QSize* size, int mode, int state);
QPixmap* QIconEngine_Pixmap(QIconEngine* self, const QSize* size, int mode, int state);
void QIconEngine_OnPixmap(QIconEngine* self, intptr_t slot);
QPixmap* QIconEngine_QBasePixmap(QIconEngine* self, const QSize* size, int mode, int state);
void QIconEngine_AddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state);
void QIconEngine_OnAddPixmap(QIconEngine* self, intptr_t slot);
void QIconEngine_QBaseAddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state);
void QIconEngine_AddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
void QIconEngine_OnAddFile(QIconEngine* self, intptr_t slot);
void QIconEngine_QBaseAddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
libqt_string QIconEngine_Key(const QIconEngine* self);
void QIconEngine_OnKey(const QIconEngine* self, intptr_t slot);
libqt_string QIconEngine_QBaseKey(const QIconEngine* self);
QIconEngine* QIconEngine_Clone(const QIconEngine* self);
void QIconEngine_OnClone(const QIconEngine* self, intptr_t slot);
QIconEngine* QIconEngine_QBaseClone(const QIconEngine* self);
bool QIconEngine_Read(QIconEngine* self, QDataStream* in);
void QIconEngine_OnRead(QIconEngine* self, intptr_t slot);
bool QIconEngine_QBaseRead(QIconEngine* self, QDataStream* in);
bool QIconEngine_Write(const QIconEngine* self, QDataStream* out);
void QIconEngine_OnWrite(const QIconEngine* self, intptr_t slot);
bool QIconEngine_QBaseWrite(const QIconEngine* self, QDataStream* out);
libqt_list /* of QSize* */ QIconEngine_AvailableSizes(QIconEngine* self, int mode, int state);
void QIconEngine_OnAvailableSizes(QIconEngine* self, intptr_t slot);
libqt_list /* of QSize* */ QIconEngine_QBaseAvailableSizes(QIconEngine* self, int mode, int state);
libqt_string QIconEngine_IconName(QIconEngine* self);
void QIconEngine_OnIconName(QIconEngine* self, intptr_t slot);
libqt_string QIconEngine_QBaseIconName(QIconEngine* self);
bool QIconEngine_IsNull(QIconEngine* self);
void QIconEngine_OnIsNull(QIconEngine* self, intptr_t slot);
bool QIconEngine_QBaseIsNull(QIconEngine* self);
QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale);
void QIconEngine_OnScaledPixmap(QIconEngine* self, intptr_t slot);
QPixmap* QIconEngine_QBaseScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale);
void QIconEngine_VirtualHook(QIconEngine* self, int id, void* data);
void QIconEngine_OnVirtualHook(QIconEngine* self, intptr_t slot);
void QIconEngine_QBaseVirtualHook(QIconEngine* self, int id, void* data);
void QIconEngine_Delete(QIconEngine* self);

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(const QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_OperatorAssign(QIconEngine__ScaledPixmapArgument* self, const QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
