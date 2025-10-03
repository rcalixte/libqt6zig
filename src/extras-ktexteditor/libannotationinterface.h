#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITORC_LIBANNOTATIONINTERFACE_H
#define SRC_EXTRAS_KTEXTEDITORC_LIBANNOTATIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel)
typedef KTextEditor::AnnotationModel KTextEditor__AnnotationModel;
#endif
#else
typedef struct KTextEditor__AnnotationModel KTextEditor__AnnotationModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* KTextEditor__AnnotationModel_MetaObject(const KTextEditor__AnnotationModel* self);
void* KTextEditor__AnnotationModel_Metacast(KTextEditor__AnnotationModel* self, const char* param1);
int KTextEditor__AnnotationModel_Metacall(KTextEditor__AnnotationModel* self, int param1, int param2, void** param3);
libqt_string KTextEditor__AnnotationModel_Tr(const char* s);
QVariant* KTextEditor__AnnotationModel_Data(const KTextEditor__AnnotationModel* self, int line, int role);
void KTextEditor__AnnotationModel_Reset(KTextEditor__AnnotationModel* self);
void KTextEditor__AnnotationModel_Connect_Reset(KTextEditor__AnnotationModel* self, intptr_t slot);
void KTextEditor__AnnotationModel_LineChanged(KTextEditor__AnnotationModel* self, int line);
void KTextEditor__AnnotationModel_Connect_LineChanged(KTextEditor__AnnotationModel* self, intptr_t slot);
libqt_string KTextEditor__AnnotationModel_Tr2(const char* s, const char* c);
libqt_string KTextEditor__AnnotationModel_Tr3(const char* s, const char* c, int n);
void KTextEditor__AnnotationModel_Delete(KTextEditor__AnnotationModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
