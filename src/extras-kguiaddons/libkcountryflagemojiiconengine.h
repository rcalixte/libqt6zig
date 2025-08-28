#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKCOUNTRYFLAGEMOJIICONENGINE_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKCOUNTRYFLAGEMOJIICONENGINE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KCountryFlagEmojiIconEngine KCountryFlagEmojiIconEngine;
typedef struct QDataStream QDataStream;
typedef struct QFont QFont;
typedef struct QIconEngine QIconEngine;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

KCountryFlagEmojiIconEngine* KCountryFlagEmojiIconEngine_new(const libqt_string regionOrCountry);
QIconEngine* KCountryFlagEmojiIconEngine_Clone(const KCountryFlagEmojiIconEngine* self);
libqt_string KCountryFlagEmojiIconEngine_Key(const KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_Paint(KCountryFlagEmojiIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
QPixmap* KCountryFlagEmojiIconEngine_Pixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state);
QPixmap* KCountryFlagEmojiIconEngine_ScaledPixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state, double scale);
bool KCountryFlagEmojiIconEngine_IsNull(KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_SetGlobalDefaultFont(const QFont* font);
void KCountryFlagEmojiIconEngine_OnClone(const KCountryFlagEmojiIconEngine* self, intptr_t slot);
QIconEngine* KCountryFlagEmojiIconEngine_QBaseClone(const KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_OnKey(const KCountryFlagEmojiIconEngine* self, intptr_t slot);
libqt_string KCountryFlagEmojiIconEngine_QBaseKey(const KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_OnPaint(KCountryFlagEmojiIconEngine* self, intptr_t slot);
void KCountryFlagEmojiIconEngine_QBasePaint(KCountryFlagEmojiIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state);
void KCountryFlagEmojiIconEngine_OnPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot);
QPixmap* KCountryFlagEmojiIconEngine_QBasePixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state);
void KCountryFlagEmojiIconEngine_OnScaledPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot);
QPixmap* KCountryFlagEmojiIconEngine_QBaseScaledPixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state, double scale);
void KCountryFlagEmojiIconEngine_OnIsNull(KCountryFlagEmojiIconEngine* self, intptr_t slot);
bool KCountryFlagEmojiIconEngine_QBaseIsNull(KCountryFlagEmojiIconEngine* self);
QSize* KCountryFlagEmojiIconEngine_ActualSize(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state);
void KCountryFlagEmojiIconEngine_OnActualSize(KCountryFlagEmojiIconEngine* self, intptr_t slot);
QSize* KCountryFlagEmojiIconEngine_QBaseActualSize(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state);
void KCountryFlagEmojiIconEngine_AddPixmap(KCountryFlagEmojiIconEngine* self, const QPixmap* pixmap, int mode, int state);
void KCountryFlagEmojiIconEngine_OnAddPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot);
void KCountryFlagEmojiIconEngine_QBaseAddPixmap(KCountryFlagEmojiIconEngine* self, const QPixmap* pixmap, int mode, int state);
void KCountryFlagEmojiIconEngine_AddFile(KCountryFlagEmojiIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
void KCountryFlagEmojiIconEngine_OnAddFile(KCountryFlagEmojiIconEngine* self, intptr_t slot);
void KCountryFlagEmojiIconEngine_QBaseAddFile(KCountryFlagEmojiIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state);
bool KCountryFlagEmojiIconEngine_Read(KCountryFlagEmojiIconEngine* self, QDataStream* in);
void KCountryFlagEmojiIconEngine_OnRead(KCountryFlagEmojiIconEngine* self, intptr_t slot);
bool KCountryFlagEmojiIconEngine_QBaseRead(KCountryFlagEmojiIconEngine* self, QDataStream* in);
bool KCountryFlagEmojiIconEngine_Write(const KCountryFlagEmojiIconEngine* self, QDataStream* out);
void KCountryFlagEmojiIconEngine_OnWrite(const KCountryFlagEmojiIconEngine* self, intptr_t slot);
bool KCountryFlagEmojiIconEngine_QBaseWrite(const KCountryFlagEmojiIconEngine* self, QDataStream* out);
libqt_list /* of QSize* */ KCountryFlagEmojiIconEngine_AvailableSizes(KCountryFlagEmojiIconEngine* self, int mode, int state);
void KCountryFlagEmojiIconEngine_OnAvailableSizes(KCountryFlagEmojiIconEngine* self, intptr_t slot);
libqt_list /* of QSize* */ KCountryFlagEmojiIconEngine_QBaseAvailableSizes(KCountryFlagEmojiIconEngine* self, int mode, int state);
libqt_string KCountryFlagEmojiIconEngine_IconName(KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_OnIconName(KCountryFlagEmojiIconEngine* self, intptr_t slot);
libqt_string KCountryFlagEmojiIconEngine_QBaseIconName(KCountryFlagEmojiIconEngine* self);
void KCountryFlagEmojiIconEngine_VirtualHook(KCountryFlagEmojiIconEngine* self, int id, void* data);
void KCountryFlagEmojiIconEngine_OnVirtualHook(KCountryFlagEmojiIconEngine* self, intptr_t slot);
void KCountryFlagEmojiIconEngine_QBaseVirtualHook(KCountryFlagEmojiIconEngine* self, int id, void* data);
void KCountryFlagEmojiIconEngine_Delete(KCountryFlagEmojiIconEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
