#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_OPTCONTENT_H
#define SRC_RESTRICTED_EXTRAS_POPPLERC_LIBPOPPLER_OPTCONTENT_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkOCGState)
typedef Poppler::LinkOCGState Poppler__LinkOCGState;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OptContentModel)
typedef Poppler::OptContentModel Poppler__OptContentModel;
#endif
#else
typedef struct Poppler__LinkOCGState Poppler__LinkOCGState;
typedef struct Poppler__OptContentModel Poppler__OptContentModel;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QDataStream QDataStream;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* Poppler__OptContentModel_MetaObject(const Poppler__OptContentModel* self);
void* Poppler__OptContentModel_Metacast(Poppler__OptContentModel* self, const char* param1);
int Poppler__OptContentModel_Metacall(Poppler__OptContentModel* self, int param1, int param2, void** param3);
QModelIndex* Poppler__OptContentModel_Index(const Poppler__OptContentModel* self, int row, int column, const QModelIndex* parent);
QModelIndex* Poppler__OptContentModel_Parent(const Poppler__OptContentModel* self, const QModelIndex* child);
int Poppler__OptContentModel_RowCount(const Poppler__OptContentModel* self, const QModelIndex* parent);
int Poppler__OptContentModel_ColumnCount(const Poppler__OptContentModel* self, const QModelIndex* parent);
QVariant* Poppler__OptContentModel_Data(const Poppler__OptContentModel* self, const QModelIndex* index, int role);
bool Poppler__OptContentModel_SetData(Poppler__OptContentModel* self, const QModelIndex* index, const QVariant* value, int role);
int Poppler__OptContentModel_Flags(const Poppler__OptContentModel* self, const QModelIndex* index);
QVariant* Poppler__OptContentModel_HeaderData(const Poppler__OptContentModel* self, int section, int orientation, int role);
void Poppler__OptContentModel_ApplyLink(Poppler__OptContentModel* self, Poppler__LinkOCGState* link);
void Poppler__OptContentModel_Delete(Poppler__OptContentModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
