#pragma once
#ifndef SRCC_LIBQSESSIONMANAGER_H
#define SRCC_LIBQSESSIONMANAGER_H

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
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSessionManager QSessionManager;
#endif

#ifdef __cplusplus
typedef QSessionManager::RestartHint RestartHint; // C++ enum
#else
typedef int RestartHint; // C ABI enum
#endif

QMetaObject* QSessionManager_MetaObject(const QSessionManager* self);
void* QSessionManager_Metacast(QSessionManager* self, const char* param1);
int QSessionManager_Metacall(QSessionManager* self, int param1, int param2, void** param3);
libqt_string QSessionManager_Tr(const char* s);
libqt_string QSessionManager_SessionId(const QSessionManager* self);
libqt_string QSessionManager_SessionKey(const QSessionManager* self);
bool QSessionManager_AllowsInteraction(QSessionManager* self);
bool QSessionManager_AllowsErrorInteraction(QSessionManager* self);
void QSessionManager_Release(QSessionManager* self);
void QSessionManager_Cancel(QSessionManager* self);
void QSessionManager_SetRestartHint(QSessionManager* self, int restartHint);
int QSessionManager_RestartHint(const QSessionManager* self);
void QSessionManager_SetRestartCommand(QSessionManager* self, const libqt_list /* of libqt_string */ restartCommand);
libqt_list /* of libqt_string */ QSessionManager_RestartCommand(const QSessionManager* self);
void QSessionManager_SetDiscardCommand(QSessionManager* self, const libqt_list /* of libqt_string */ discardCommand);
libqt_list /* of libqt_string */ QSessionManager_DiscardCommand(const QSessionManager* self);
void QSessionManager_SetManagerProperty(QSessionManager* self, const libqt_string name, const libqt_string value);
void QSessionManager_SetManagerProperty2(QSessionManager* self, const libqt_string name, const libqt_list /* of libqt_string */ value);
bool QSessionManager_IsPhase2(const QSessionManager* self);
void QSessionManager_RequestPhase2(QSessionManager* self);
libqt_string QSessionManager_Tr2(const char* s, const char* c);
libqt_string QSessionManager_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
