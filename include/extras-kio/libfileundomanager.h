#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBFILEUNDOMANAGER_H
#define SRC_EXTRAS_KIOC_LIBFILEUNDOMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob)
typedef KIO::CopyJob KIO__CopyJob;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileUndoManager)
typedef KIO::FileUndoManager KIO__FileUndoManager;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileUndoManager__UiInterface)
typedef KIO::FileUndoManager::UiInterface KIO__FileUndoManager__UiInterface;
#endif
typedef KIO::Job KIO__Job;
#else
typedef struct KIO__CopyJob KIO__CopyJob;
typedef struct KIO__FileUndoManager KIO__FileUndoManager;
typedef struct KIO__FileUndoManager__UiInterface KIO__FileUndoManager__UiInterface;
typedef struct KIO__Job KIO__Job;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

QMetaObject* KIO__FileUndoManager_MetaObject(const KIO__FileUndoManager* self);
void* KIO__FileUndoManager_Metacast(KIO__FileUndoManager* self, const char* param1);
int KIO__FileUndoManager_Metacall(KIO__FileUndoManager* self, int param1, int param2, void** param3);
libqt_string KIO__FileUndoManager_Tr(const char* s);
KIO__FileUndoManager* KIO__FileUndoManager_Self();
void KIO__FileUndoManager_SetUiInterface(KIO__FileUndoManager* self, KIO__FileUndoManager__UiInterface* ui);
KIO__FileUndoManager__UiInterface* KIO__FileUndoManager_UiInterface(const KIO__FileUndoManager* self);
void KIO__FileUndoManager_RecordJob(KIO__FileUndoManager* self, int op, const libqt_list /* of QUrl* */ src, const QUrl* dst, KIO__Job* job);
void KIO__FileUndoManager_RecordCopyJob(KIO__FileUndoManager* self, KIO__CopyJob* copyJob);
bool KIO__FileUndoManager_IsUndoAvailable(const KIO__FileUndoManager* self);
libqt_string KIO__FileUndoManager_UndoText(const KIO__FileUndoManager* self);
unsigned long long KIO__FileUndoManager_NewCommandSerialNumber(KIO__FileUndoManager* self);
unsigned long long KIO__FileUndoManager_CurrentCommandSerialNumber(const KIO__FileUndoManager* self);
void KIO__FileUndoManager_Undo(KIO__FileUndoManager* self);
void KIO__FileUndoManager_UndoAvailable(KIO__FileUndoManager* self, bool avail);
void KIO__FileUndoManager_Connect_UndoAvailable(KIO__FileUndoManager* self, intptr_t slot);
void KIO__FileUndoManager_UndoTextChanged(KIO__FileUndoManager* self, const libqt_string text);
void KIO__FileUndoManager_Connect_UndoTextChanged(KIO__FileUndoManager* self, intptr_t slot);
void KIO__FileUndoManager_UndoJobFinished(KIO__FileUndoManager* self);
void KIO__FileUndoManager_Connect_UndoJobFinished(KIO__FileUndoManager* self, intptr_t slot);
void KIO__FileUndoManager_JobRecordingStarted(KIO__FileUndoManager* self, int op);
void KIO__FileUndoManager_Connect_JobRecordingStarted(KIO__FileUndoManager* self, intptr_t slot);
void KIO__FileUndoManager_JobRecordingFinished(KIO__FileUndoManager* self, int op);
void KIO__FileUndoManager_Connect_JobRecordingFinished(KIO__FileUndoManager* self, intptr_t slot);
libqt_string KIO__FileUndoManager_Tr2(const char* s, const char* c);
libqt_string KIO__FileUndoManager_Tr3(const char* s, const char* c, int n);

KIO__FileUndoManager__UiInterface* KIO__FileUndoManager__UiInterface_new();
void KIO__FileUndoManager__UiInterface_SetShowProgressInfo(KIO__FileUndoManager__UiInterface* self, bool b);
bool KIO__FileUndoManager__UiInterface_ShowProgressInfo(const KIO__FileUndoManager__UiInterface* self);
void KIO__FileUndoManager__UiInterface_SetParentWidget(KIO__FileUndoManager__UiInterface* self, QWidget* parentWidget);
QWidget* KIO__FileUndoManager__UiInterface_ParentWidget(const KIO__FileUndoManager__UiInterface* self);
void KIO__FileUndoManager__UiInterface_JobError(KIO__FileUndoManager__UiInterface* self, KIO__Job* job);
bool KIO__FileUndoManager__UiInterface_CopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, const QUrl* src, const QUrl* dest, const QDateTime* srcTime, const QDateTime* destTime);
void KIO__FileUndoManager__UiInterface_VirtualHook(KIO__FileUndoManager__UiInterface* self, int id, void* data);
void KIO__FileUndoManager__UiInterface_OnJobError(KIO__FileUndoManager__UiInterface* self, intptr_t slot);
void KIO__FileUndoManager__UiInterface_QBaseJobError(KIO__FileUndoManager__UiInterface* self, KIO__Job* job);
void KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, intptr_t slot);
bool KIO__FileUndoManager__UiInterface_QBaseCopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, const QUrl* src, const QUrl* dest, const QDateTime* srcTime, const QDateTime* destTime);
void KIO__FileUndoManager__UiInterface_OnVirtualHook(KIO__FileUndoManager__UiInterface* self, intptr_t slot);
void KIO__FileUndoManager__UiInterface_QBaseVirtualHook(KIO__FileUndoManager__UiInterface* self, int id, void* data);
void KIO__FileUndoManager__UiInterface_Delete(KIO__FileUndoManager__UiInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
