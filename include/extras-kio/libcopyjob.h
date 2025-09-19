#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBCOPYJOB_H
#define SRC_EXTRAS_KIOC_LIBCOPYJOB_H

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
typedef KIO::Job KIO__Job;
#else
typedef struct KCompositeJob KCompositeJob;
typedef struct KIO KIO;
typedef struct KIO__CopyJob KIO__CopyJob;
typedef struct KIO__Job KIO__Job;
typedef struct KJob KJob;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* KIO__CopyJob_MetaObject(const KIO__CopyJob* self);
void* KIO__CopyJob_Metacast(KIO__CopyJob* self, const char* param1);
int KIO__CopyJob_Metacall(KIO__CopyJob* self, int param1, int param2, void** param3);
libqt_string KIO__CopyJob_Tr(const char* s);
int KIO__CopyJob_OperationMode(const KIO__CopyJob* self);
libqt_list /* of QUrl* */ KIO__CopyJob_SrcUrls(const KIO__CopyJob* self);
QUrl* KIO__CopyJob_DestUrl(const KIO__CopyJob* self);
void KIO__CopyJob_SetDefaultPermissions(KIO__CopyJob* self, bool b);
void KIO__CopyJob_SetAutoSkip(KIO__CopyJob* self, bool autoSkip);
void KIO__CopyJob_SetAutoRename(KIO__CopyJob* self, bool autoRename);
void KIO__CopyJob_SetWriteIntoExistingDirectories(KIO__CopyJob* self, bool overwriteAllDirs);
bool KIO__CopyJob_DoSuspend(KIO__CopyJob* self);
bool KIO__CopyJob_DoResume(KIO__CopyJob* self);
void KIO__CopyJob_ProcessedFiles(KIO__CopyJob* self, KIO__Job* job, unsigned long files);
void KIO__CopyJob_Connect_ProcessedFiles(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_ProcessedDirs(KIO__CopyJob* self, KIO__Job* job, unsigned long dirs);
void KIO__CopyJob_Connect_ProcessedDirs(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_Copying(KIO__CopyJob* self, KIO__Job* job, const QUrl* src, const QUrl* dest);
void KIO__CopyJob_Connect_Copying(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_Linking(KIO__CopyJob* self, KIO__Job* job, const libqt_string target, const QUrl* to);
void KIO__CopyJob_Connect_Linking(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_Moving(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to);
void KIO__CopyJob_Connect_Moving(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_CreatingDir(KIO__CopyJob* self, KIO__Job* job, const QUrl* dir);
void KIO__CopyJob_Connect_CreatingDir(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_Renamed(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to);
void KIO__CopyJob_Connect_Renamed(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_CopyingDone(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const QUrl* to, const QDateTime* mtime, bool directory, bool renamed);
void KIO__CopyJob_Connect_CopyingDone(KIO__CopyJob* self, intptr_t slot);
void KIO__CopyJob_CopyingLinkDone(KIO__CopyJob* self, KIO__Job* job, const QUrl* from, const libqt_string target, const QUrl* to);
void KIO__CopyJob_Connect_CopyingLinkDone(KIO__CopyJob* self, intptr_t slot);
libqt_string KIO__CopyJob_Tr2(const char* s, const char* c);
libqt_string KIO__CopyJob_Tr3(const char* s, const char* c, int n);
void KIO__CopyJob_Delete(KIO__CopyJob* self);

KIO__CopyJob* KIO_Copy(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_CopyAs(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Copy2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Move(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_MoveAs(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Move2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Link(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Link2(const libqt_list /* of QUrl* */ param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_LinkAs(const QUrl* param1, const QUrl* param2, int param3);
KIO__CopyJob* KIO_Trash(const QUrl* param1, int param2);
KIO__CopyJob* KIO_Trash2(const libqt_list /* of QUrl* */ param1, int param2);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
