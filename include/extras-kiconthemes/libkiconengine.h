#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESC_LIBKICONENGINE_H
#define SRC_EXTRAS_KICONTHEMESC_LIBKICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KIconColors KIconColors;
typedef struct KIconEngine KIconEngine;
typedef struct KIconLoader KIconLoader;
typedef struct QDataStream QDataStream;
typedef struct QIconEngine QIconEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

KIconEngine* KIconEngine_new(const libqt_string iconName, KIconLoader* iconLoader, const libqt_list /* of libqt_string */ overlays);
KIconEngine* KIconEngine_new2(const libqt_string iconName, KIconLoader* iconLoader);
KIconEngine* KIconEngine_new3(const libqt_string iconName, const KIconColors* colors, KIconLoader* iconLoader);
KIconEngine* KIconEngine_new4(const libqt_string iconName, const KIconColors* colors, KIconLoader* iconLoader, const libqt_list /* of libqt_string */ overlays);
KIconEngine* KIconEngine_new5(const KIconEngine* param1);
QSize* KIconEngine_ActualSize(KIconEngine* self, const QSize* size, int mode, int state);
void KIconEngine_Paint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
QPixmap* KIconEngine_Pixmap(KIconEngine* self, const QSize* size, int mode, int state);
QPixmap* KIconEngine_ScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale);
libqt_string KIconEngine_IconName(KIconEngine* self);
libqt_list /* of QSize* */ KIconEngine_AvailableSizes(KIconEngine* self, int mode, int state);
bool KIconEngine_IsNull(KIconEngine* self);
libqt_string KIconEngine_Key(const KIconEngine* self);
QIconEngine* KIconEngine_Clone(const KIconEngine* self);
bool KIconEngine_Read(KIconEngine* self, QDataStream* in);
bool KIconEngine_Write(const KIconEngine* self, QDataStream* out);
void KIconEngine_OnActualSize(KIconEngine* self, intptr_t slot);
QSize* KIconEngine_QBaseActualSize(KIconEngine* self, const QSize* size, int mode, int state);
void KIconEngine_OnPaint(KIconEngine* self, intptr_t slot);
void KIconEngine_QBasePaint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
void KIconEngine_OnPixmap(KIconEngine* self, intptr_t slot);
QPixmap* KIconEngine_QBasePixmap(KIconEngine* self, const QSize* size, int mode, int state);
void KIconEngine_OnScaledPixmap(KIconEngine* self, intptr_t slot);
QPixmap* KIconEngine_QBaseScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale);
void KIconEngine_OnIconName(KIconEngine* self, intptr_t slot);
libqt_string KIconEngine_QBaseIconName(KIconEngine* self);
void KIconEngine_OnAvailableSizes(KIconEngine* self, intptr_t slot);
libqt_list /* of QSize* */ KIconEngine_QBaseAvailableSizes(KIconEngine* self, int mode, int state);
void KIconEngine_OnIsNull(KIconEngine* self, intptr_t slot);
bool KIconEngine_QBaseIsNull(KIconEngine* self);
void KIconEngine_OnKey(const KIconEngine* self, intptr_t slot);
libqt_string KIconEngine_QBaseKey(const KIconEngine* self);
void KIconEngine_OnClone(const KIconEngine* self, intptr_t slot);
QIconEngine* KIconEngine_QBaseClone(const KIconEngine* self);
void KIconEngine_OnRead(KIconEngine* self, intptr_t slot);
bool KIconEngine_QBaseRead(KIconEngine* self, QDataStream* in);
void KIconEngine_OnWrite(const KIconEngine* self, intptr_t slot);
bool KIconEngine_QBaseWrite(const KIconEngine* self, QDataStream* out);
void KIconEngine_AddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state);
void KIconEngine_OnAddPixmap(KIconEngine* self, intptr_t slot);
void KIconEngine_QBaseAddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state);
void KIconEngine_AddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
void KIconEngine_OnAddFile(KIconEngine* self, intptr_t slot);
void KIconEngine_QBaseAddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
void KIconEngine_VirtualHook(KIconEngine* self, int id, void* data);
void KIconEngine_OnVirtualHook(KIconEngine* self, intptr_t slot);
void KIconEngine_QBaseVirtualHook(KIconEngine* self, int id, void* data);
void KIconEngine_Delete(KIconEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
