#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBASKUSERACTIONINTERFACE_H
#define SRC_EXTRAS_KIOC_LIBASKUSERACTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KIO__AskUserActionInterface)
typedef KIO::AskUserActionInterface KIO__AskUserActionInterface;
#endif
#else
typedef struct KIO__AskUserActionInterface KIO__AskUserActionInterface;
typedef struct KJob KJob;
typedef struct QDateTime QDateTime;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QMetaObject* KIO__AskUserActionInterface_MetaObject(const KIO__AskUserActionInterface* self);
void* KIO__AskUserActionInterface_Metacast(KIO__AskUserActionInterface* self, const char* param1);
int KIO__AskUserActionInterface_Metacall(KIO__AskUserActionInterface* self, int param1, int param2, void** param3);
libqt_string KIO__AskUserActionInterface_Tr(const char* s);
void KIO__AskUserActionInterface_AskUserRename(KIO__AskUserActionInterface* self, KJob* job, const libqt_string title, const QUrl* src, const QUrl* dest, int options, unsigned long long sizeSrc, unsigned long long sizeDest, const QDateTime* ctimeSrc, const QDateTime* ctimeDest, const QDateTime* mtimeSrc, const QDateTime* mtimeDest);
void KIO__AskUserActionInterface_AskUserSkip(KIO__AskUserActionInterface* self, KJob* job, int options, const libqt_string errorText);
void KIO__AskUserActionInterface_AskUserDelete(KIO__AskUserActionInterface* self, const libqt_list /* of QUrl* */ urls, int deletionType, int confirmationType, QWidget* parent);
void KIO__AskUserActionInterface_RequestUserMessageBox(KIO__AskUserActionInterface* self, int typeVal, const libqt_string text, const libqt_string title, const libqt_string primaryActionText, const libqt_string secondatyActionText, const libqt_string primaryActionIconName, const libqt_string secondatyActionIconName, const libqt_string dontAskAgainName, const libqt_string details, QWidget* parent);
void KIO__AskUserActionInterface_AskIgnoreSslErrors(KIO__AskUserActionInterface* self, const libqt_map /* of libqt_string to QVariant* */ sslErrorData, QWidget* parent);
void KIO__AskUserActionInterface_AskUserRenameResult(KIO__AskUserActionInterface* self, int result, const QUrl* newUrl, KJob* parentJob);
void KIO__AskUserActionInterface_Connect_AskUserRenameResult(KIO__AskUserActionInterface* self, intptr_t slot);
void KIO__AskUserActionInterface_AskUserSkipResult(KIO__AskUserActionInterface* self, int result, KJob* parentJob);
void KIO__AskUserActionInterface_Connect_AskUserSkipResult(KIO__AskUserActionInterface* self, intptr_t slot);
void KIO__AskUserActionInterface_AskUserDeleteResult(KIO__AskUserActionInterface* self, bool allowDelete, const libqt_list /* of QUrl* */ urls, int deletionType, QWidget* parent);
void KIO__AskUserActionInterface_Connect_AskUserDeleteResult(KIO__AskUserActionInterface* self, intptr_t slot);
void KIO__AskUserActionInterface_MessageBoxResult(KIO__AskUserActionInterface* self, int result);
void KIO__AskUserActionInterface_Connect_MessageBoxResult(KIO__AskUserActionInterface* self, intptr_t slot);
void KIO__AskUserActionInterface_AskIgnoreSslErrorsResult(KIO__AskUserActionInterface* self, int result);
void KIO__AskUserActionInterface_Connect_AskIgnoreSslErrorsResult(KIO__AskUserActionInterface* self, intptr_t slot);
libqt_string KIO__AskUserActionInterface_Tr2(const char* s, const char* c);
libqt_string KIO__AskUserActionInterface_Tr3(const char* s, const char* c, int n);
void KIO__AskUserActionInterface_Delete(KIO__AskUserActionInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
