#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINECONTEXTMENUREQUEST_H
#define SRC_WEBENGINEC_LIBQWEBENGINECONTEXTMENUREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QUrl QUrl;
typedef struct QWebEngineContextMenuRequest QWebEngineContextMenuRequest;
#endif

QMetaObject* QWebEngineContextMenuRequest_MetaObject(const QWebEngineContextMenuRequest* self);
void* QWebEngineContextMenuRequest_Metacast(QWebEngineContextMenuRequest* self, const char* param1);
int QWebEngineContextMenuRequest_Metacall(QWebEngineContextMenuRequest* self, int param1, int param2, void** param3);
libqt_string QWebEngineContextMenuRequest_Tr(const char* s);
QPoint* QWebEngineContextMenuRequest_Position(const QWebEngineContextMenuRequest* self);
libqt_string QWebEngineContextMenuRequest_SelectedText(const QWebEngineContextMenuRequest* self);
libqt_string QWebEngineContextMenuRequest_LinkText(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_LinkUrl(const QWebEngineContextMenuRequest* self);
QUrl* QWebEngineContextMenuRequest_MediaUrl(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_MediaType(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_IsContentEditable(const QWebEngineContextMenuRequest* self);
libqt_string QWebEngineContextMenuRequest_MisspelledWord(const QWebEngineContextMenuRequest* self);
libqt_list /* of libqt_string */ QWebEngineContextMenuRequest_SpellCheckerSuggestions(const QWebEngineContextMenuRequest* self);
bool QWebEngineContextMenuRequest_IsAccepted(const QWebEngineContextMenuRequest* self);
void QWebEngineContextMenuRequest_SetAccepted(QWebEngineContextMenuRequest* self, bool accepted);
int QWebEngineContextMenuRequest_MediaFlags(const QWebEngineContextMenuRequest* self);
int QWebEngineContextMenuRequest_EditFlags(const QWebEngineContextMenuRequest* self);
libqt_string QWebEngineContextMenuRequest_Tr2(const char* s, const char* c);
libqt_string QWebEngineContextMenuRequest_Tr3(const char* s, const char* c, int n);
void QWebEngineContextMenuRequest_Delete(QWebEngineContextMenuRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
