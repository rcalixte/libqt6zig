#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBKENCODINGFILEDIALOG_H
#define SRC_EXTRAS_KIOC_LIBKENCODINGFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_KEncodingFileDialog__Result)
typedef KEncodingFileDialog::Result KEncodingFileDialog__Result;
#endif
#else
typedef struct KEncodingFileDialog KEncodingFileDialog;
typedef struct KEncodingFileDialog__Result KEncodingFileDialog__Result;
typedef struct QDialog QDialog;
typedef struct QHideEvent QHideEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
#endif

QMetaObject* KEncodingFileDialog_MetaObject(const KEncodingFileDialog* self);
void* KEncodingFileDialog_Metacast(KEncodingFileDialog* self, const char* param1);
int KEncodingFileDialog_Metacall(KEncodingFileDialog* self, int param1, int param2, void** param3);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding();
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding();
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding();
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding();
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding();
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding();
QSize* KEncodingFileDialog_SizeHint(const KEncodingFileDialog* self);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding1(const libqt_string encoding);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding2(const libqt_string encoding, const QUrl* startDir);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent);
KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title);

KEncodingFileDialog__Result* KEncodingFileDialog__Result_new(const KEncodingFileDialog__Result* param1);
libqt_list /* of libqt_string */ KEncodingFileDialog__Result_FileNames(const KEncodingFileDialog__Result* self);
void KEncodingFileDialog__Result_SetFileNames(KEncodingFileDialog__Result* self, libqt_list /* of libqt_string */ fileNames);
libqt_list /* of QUrl* */ KEncodingFileDialog__Result_URLs(const KEncodingFileDialog__Result* self);
void KEncodingFileDialog__Result_SetURLs(KEncodingFileDialog__Result* self, libqt_list /* of QUrl* */ URLs);
libqt_string KEncodingFileDialog__Result_Encoding(const KEncodingFileDialog__Result* self);
void KEncodingFileDialog__Result_SetEncoding(KEncodingFileDialog__Result* self, libqt_string encoding);
void KEncodingFileDialog__Result_OperatorAssign(KEncodingFileDialog__Result* self, const KEncodingFileDialog__Result* param1);
void KEncodingFileDialog__Result_Delete(KEncodingFileDialog__Result* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
