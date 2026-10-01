#pragma once
#ifndef EXTRAS_KARCHIVE_LIBKFILTERBASE_H
#define EXTRAS_KARCHIVE_LIBKFILTERBASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KFilterBase KFilterBase;
typedef struct QIODevice QIODevice;
#endif

KFilterBase* KFilterBase_new();
void KFilterBase_SetDevice(KFilterBase* self, QIODevice* dev);
QIODevice* KFilterBase_Device(KFilterBase* self);
bool KFilterBase_Init(KFilterBase* self, int mode);
int KFilterBase_Mode(const KFilterBase* self);
bool KFilterBase_Terminate(KFilterBase* self);
void KFilterBase_Reset(KFilterBase* self);
bool KFilterBase_ReadHeader(KFilterBase* self);
bool KFilterBase_WriteHeader(KFilterBase* self, const libqt_string filename);
void KFilterBase_SetOutBuffer(KFilterBase* self, char* data, unsigned int maxlen);
void KFilterBase_SetInBuffer(KFilterBase* self, const char* data, unsigned int size);
bool KFilterBase_InBufferEmpty(const KFilterBase* self);
int KFilterBase_InBufferAvailable(const KFilterBase* self);
bool KFilterBase_OutBufferFull(const KFilterBase* self);
int KFilterBase_OutBufferAvailable(const KFilterBase* self);
int KFilterBase_Uncompress(KFilterBase* self);
int KFilterBase_Compress(KFilterBase* self, bool finish);
void KFilterBase_SetFilterFlags(KFilterBase* self, int flags);
int KFilterBase_FilterFlags(const KFilterBase* self);
void KFilterBase_VirtualHook(KFilterBase* self, int id, void* data);
void KFilterBase_SetDevice2(KFilterBase* self, QIODevice* dev, bool autodelete);
void KFilterBase_OnInit(KFilterBase* self, intptr_t slot);
void KFilterBase_OnMode(KFilterBase* self, intptr_t slot);
void KFilterBase_OnTerminate(KFilterBase* self, intptr_t slot);
bool KFilterBase_SuperTerminate(KFilterBase* self);
void KFilterBase_OnReset(KFilterBase* self, intptr_t slot);
void KFilterBase_SuperReset(KFilterBase* self);
void KFilterBase_OnReadHeader(KFilterBase* self, intptr_t slot);
void KFilterBase_OnWriteHeader(KFilterBase* self, intptr_t slot);
void KFilterBase_OnSetOutBuffer(KFilterBase* self, intptr_t slot);
void KFilterBase_OnSetInBuffer(KFilterBase* self, intptr_t slot);
void KFilterBase_OnInBufferEmpty(KFilterBase* self, intptr_t slot);
bool KFilterBase_SuperInBufferEmpty(const KFilterBase* self);
void KFilterBase_OnInBufferAvailable(KFilterBase* self, intptr_t slot);
void KFilterBase_OnOutBufferFull(KFilterBase* self, intptr_t slot);
bool KFilterBase_SuperOutBufferFull(const KFilterBase* self);
void KFilterBase_OnOutBufferAvailable(KFilterBase* self, intptr_t slot);
void KFilterBase_OnUncompress(KFilterBase* self, intptr_t slot);
void KFilterBase_OnCompress(KFilterBase* self, intptr_t slot);
void KFilterBase_OnVirtualHook(KFilterBase* self, intptr_t slot);
void KFilterBase_SuperVirtualHook(KFilterBase* self, int id, void* data);
void KFilterBase_Delete(KFilterBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
