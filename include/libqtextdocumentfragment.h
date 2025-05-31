#pragma once
#ifndef SRCC_LIBQTEXTDOCUMENTFRAGMENT_H
#define SRCC_LIBQTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
#endif

QTextDocumentFragment* QTextDocumentFragment_new();
QTextDocumentFragment* QTextDocumentFragment_new2(const QTextDocument* document);
QTextDocumentFragment* QTextDocumentFragment_new3(const QTextCursor* range);
QTextDocumentFragment* QTextDocumentFragment_new4(const QTextDocumentFragment* rhs);
void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, const QTextDocumentFragment* rhs);
bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToRawText(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToMarkdown(const QTextDocumentFragment* self);
QTextDocumentFragment* QTextDocumentFragment_FromPlainText(const libqt_string plainText);
QTextDocumentFragment* QTextDocumentFragment_FromHtml(const libqt_string html);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown(const libqt_string markdown);
libqt_string QTextDocumentFragment_ToMarkdown1(const QTextDocumentFragment* self, int features);
QTextDocumentFragment* QTextDocumentFragment_FromHtml2(const libqt_string html, const QTextDocument* resourceProvider);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown2(const libqt_string markdown, int features);
void QTextDocumentFragment_Delete(QTextDocumentFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
