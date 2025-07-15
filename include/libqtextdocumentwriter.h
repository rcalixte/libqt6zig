#pragma once
#ifndef SRCC_LIBQTEXTDOCUMENTWRITER_H
#define SRCC_LIBQTEXTDOCUMENTWRITER_H

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
typedef struct QIODevice QIODevice;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
typedef struct QTextDocumentWriter QTextDocumentWriter;
#endif

QTextDocumentWriter* QTextDocumentWriter_new();
QTextDocumentWriter* QTextDocumentWriter_new2(QIODevice* device, const libqt_string format);
QTextDocumentWriter* QTextDocumentWriter_new3(const libqt_string fileName);
QTextDocumentWriter* QTextDocumentWriter_new4(const libqt_string fileName, const libqt_string format);
void QTextDocumentWriter_SetFormat(QTextDocumentWriter* self, const libqt_string format);
libqt_string QTextDocumentWriter_Format(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetDevice(QTextDocumentWriter* self, QIODevice* device);
QIODevice* QTextDocumentWriter_Device(const QTextDocumentWriter* self);
void QTextDocumentWriter_SetFileName(QTextDocumentWriter* self, const libqt_string fileName);
libqt_string QTextDocumentWriter_FileName(const QTextDocumentWriter* self);
bool QTextDocumentWriter_Write(QTextDocumentWriter* self, const QTextDocument* document);
bool QTextDocumentWriter_Write2(QTextDocumentWriter* self, const QTextDocumentFragment* fragment);
libqt_list /* of libqt_string */ QTextDocumentWriter_SupportedDocumentFormats();
void QTextDocumentWriter_Delete(QTextDocumentWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
