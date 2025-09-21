#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFC_LIBQUESTIONMANAGER_H
#define SRC_EXTRAS_KNEWSTUFFC_LIBQUESTIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question)
typedef KNSCore::Question KNSCore__Question;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__QuestionManager)
typedef KNSCore::QuestionManager KNSCore__QuestionManager;
#endif
#else
typedef struct KNSCore__Question KNSCore__Question;
typedef struct KNSCore__QuestionManager KNSCore__QuestionManager;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* KNSCore__QuestionManager_MetaObject(const KNSCore__QuestionManager* self);
void* KNSCore__QuestionManager_Metacast(KNSCore__QuestionManager* self, const char* param1);
int KNSCore__QuestionManager_Metacall(KNSCore__QuestionManager* self, int param1, int param2, void** param3);
libqt_string KNSCore__QuestionManager_Tr(const char* s);
KNSCore__QuestionManager* KNSCore__QuestionManager_Instance();
void KNSCore__QuestionManager_AskQuestion(KNSCore__QuestionManager* self, KNSCore__Question* question);
void KNSCore__QuestionManager_Connect_AskQuestion(KNSCore__QuestionManager* self, intptr_t slot);
libqt_string KNSCore__QuestionManager_Tr2(const char* s, const char* c);
libqt_string KNSCore__QuestionManager_Tr3(const char* s, const char* c, int n);
void KNSCore__QuestionManager_Delete(KNSCore__QuestionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
