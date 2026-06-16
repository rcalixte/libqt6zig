#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKSTRINGHANDLER_H
#define SRC_EXTRAS_KCOREADDONSC_LIBKSTRINGHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KStringHandler KStringHandler;
typedef struct QChar QChar;
typedef struct QRegularExpression QRegularExpression;
#endif

libqt_string KStringHandler_Capwords(const libqt_string text);
libqt_list /* of libqt_string */ KStringHandler_Capwords2(const libqt_list /* of libqt_string */ list);
libqt_string KStringHandler_Lsqueeze(const libqt_string str, int maxlen);
libqt_string KStringHandler_Csqueeze(const libqt_string str, int maxlen);
libqt_string KStringHandler_Rsqueeze(const libqt_string str, int maxlen);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit(const libqt_string sep, const libqt_string str, int max);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit2(const libqt_string sep, const libqt_string s, int max);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit3(const QChar* sep, const libqt_string s, int max);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit4(const QRegularExpression* sep, const libqt_string s, int max);
libqt_string KStringHandler_TagUrls(const libqt_string text);
libqt_string KStringHandler_Obscure(const libqt_string str);
libqt_string KStringHandler_PreProcessWrap(const libqt_string text);
int KStringHandler_LogicalLength(const libqt_string text);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
