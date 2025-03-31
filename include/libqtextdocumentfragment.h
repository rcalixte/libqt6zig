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
QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document);
QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* range);
QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs);
void QTextDocumentFragment_OperatorAssign(QTextDocumentFragment* self, QTextDocumentFragment* rhs);
bool QTextDocumentFragment_IsEmpty(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToPlainText(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToRawText(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToHtml(const QTextDocumentFragment* self);
libqt_string QTextDocumentFragment_ToMarkdown(const QTextDocumentFragment* self);
QTextDocumentFragment* QTextDocumentFragment_FromPlainText(libqt_string plainText);
QTextDocumentFragment* QTextDocumentFragment_FromHtml(libqt_string html);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown(libqt_string markdown);
libqt_string QTextDocumentFragment_ToMarkdown1(const QTextDocumentFragment* self, int features);
QTextDocumentFragment* QTextDocumentFragment_FromHtml2(libqt_string html, QTextDocument* resourceProvider);
QTextDocumentFragment* QTextDocumentFragment_FromMarkdown2(libqt_string markdown, int features);
void QTextDocumentFragment_Delete(QTextDocumentFragment* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
