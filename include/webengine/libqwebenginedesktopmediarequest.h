#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINEDESKTOPMEDIAREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractListModel QAbstractListModel;
typedef struct QModelIndex QModelIndex;
typedef struct QWebEngineDesktopMediaRequest QWebEngineDesktopMediaRequest;
#endif

QWebEngineDesktopMediaRequest* QWebEngineDesktopMediaRequest_new(const QWebEngineDesktopMediaRequest* other);
void QWebEngineDesktopMediaRequest_OperatorAssign(QWebEngineDesktopMediaRequest* self, const QWebEngineDesktopMediaRequest* other);
void QWebEngineDesktopMediaRequest_Swap(QWebEngineDesktopMediaRequest* self, QWebEngineDesktopMediaRequest* other);
QAbstractListModel* QWebEngineDesktopMediaRequest_ScreensModel(const QWebEngineDesktopMediaRequest* self);
QAbstractListModel* QWebEngineDesktopMediaRequest_WindowsModel(const QWebEngineDesktopMediaRequest* self);
void QWebEngineDesktopMediaRequest_SelectScreen(const QWebEngineDesktopMediaRequest* self, const QModelIndex* index);
void QWebEngineDesktopMediaRequest_SelectWindow(const QWebEngineDesktopMediaRequest* self, const QModelIndex* index);
void QWebEngineDesktopMediaRequest_Cancel(const QWebEngineDesktopMediaRequest* self);
void QWebEngineDesktopMediaRequest_Delete(QWebEngineDesktopMediaRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
