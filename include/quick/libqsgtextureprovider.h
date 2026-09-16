#pragma once
#ifndef QUICK_LIBQSGTEXTUREPROVIDER_H
#define QUICK_LIBQSGTEXTUREPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSGTexture QSGTexture;
typedef struct QSGTextureProvider QSGTextureProvider;
#endif

QMetaObject* QSGTextureProvider_MetaObject(const QSGTextureProvider* self);
void* QSGTextureProvider_Metacast(QSGTextureProvider* self, const char* param1);
int QSGTextureProvider_Metacall(QSGTextureProvider* self, int param1, int param2, void** param3);
libqt_string QSGTextureProvider_Tr(const char* s);
QSGTexture* QSGTextureProvider_Texture(const QSGTextureProvider* self);
void QSGTextureProvider_TextureChanged(QSGTextureProvider* self);
void QSGTextureProvider_Connect_TextureChanged(QSGTextureProvider* self, intptr_t slot);
libqt_string QSGTextureProvider_Tr2(const char* s, const char* c);
libqt_string QSGTextureProvider_Tr3(const char* s, const char* c, int n);
void QSGTextureProvider_Delete(QSGTextureProvider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
