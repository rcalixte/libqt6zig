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

libqt_string KStringHandler_Capwords(const libqt_string param1);
libqt_list /* of libqt_string */ KStringHandler_Capwords2(const libqt_list /* of libqt_string */ param1);
libqt_string KStringHandler_Lsqueeze(const libqt_string param1, int param2);
libqt_string KStringHandler_Csqueeze(const libqt_string param1, int param2);
libqt_string KStringHandler_Rsqueeze(const libqt_string param1, int param2);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit2(const libqt_string param1, const libqt_string param2, int param3);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit3(const QChar* param1, const libqt_string param2, int param3);
libqt_list /* of libqt_string */ KStringHandler_PerlSplit4(const QRegularExpression* param1, const libqt_string param2, int param3);
libqt_string KStringHandler_TagUrls(const libqt_string param1);
libqt_string KStringHandler_Obscure(const libqt_string param1);
libqt_string KStringHandler_PreProcessWrap(const libqt_string param1);
int KStringHandler_LogicalLength(const libqt_string param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
