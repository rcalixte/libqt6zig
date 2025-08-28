#pragma once
#ifndef SRCC_LIBQXMLSTREAM_H
#define SRCC_LIBQXMLSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QIODevice QIODevice;
typedef struct QXmlStreamAttribute QXmlStreamAttribute;
typedef struct QXmlStreamAttributes QXmlStreamAttributes;
typedef struct QXmlStreamEntityDeclaration QXmlStreamEntityDeclaration;
typedef struct QXmlStreamEntityResolver QXmlStreamEntityResolver;
typedef struct QXmlStreamNamespaceDeclaration QXmlStreamNamespaceDeclaration;
typedef struct QXmlStreamNotationDeclaration QXmlStreamNotationDeclaration;
typedef struct QXmlStreamReader QXmlStreamReader;
typedef struct QXmlStreamWriter QXmlStreamWriter;
#endif

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(const libqt_string qualifiedName, const libqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new3(const libqt_string namespaceUri, const libqt_string name, const libqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new4(const QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self);
void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self);

QXmlStreamAttributes* QXmlStreamAttributes_new();
void QXmlStreamAttributes_Append(QXmlStreamAttributes* self, const libqt_string namespaceUri, const libqt_string name, const libqt_string value);
void QXmlStreamAttributes_Append2(QXmlStreamAttributes* self, const libqt_string qualifiedName, const libqt_string value);
bool QXmlStreamAttributes_HasAttribute(const QXmlStreamAttributes* self, libqt_string qualifiedName);
bool QXmlStreamAttributes_HasAttribute2(const QXmlStreamAttributes* self, libqt_string namespaceUri, libqt_string name);
void QXmlStreamAttributes_Delete(QXmlStreamAttributes* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(const libqt_string prefix, const libqt_string namespaceUri);
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(const QXmlStreamNamespaceDeclaration* param1);
void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(const QXmlStreamNotationDeclaration* param1);
void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(const QXmlStreamEntityDeclaration* param1);
void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self);

QXmlStreamEntityResolver* QXmlStreamEntityResolver_new();
libqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId);
libqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name);
void QXmlStreamEntityResolver_OnResolveEntity(QXmlStreamEntityResolver* self, intptr_t slot);
libqt_string QXmlStreamEntityResolver_QBaseResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId);
void QXmlStreamEntityResolver_OnResolveUndeclaredEntity(QXmlStreamEntityResolver* self, intptr_t slot);
libqt_string QXmlStreamEntityResolver_QBaseResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name);
void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(libqt_string data);
void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self);
void QXmlStreamReader_AddData(QXmlStreamReader* self, libqt_string data);
void QXmlStreamReader_Clear(QXmlStreamReader* self);
bool QXmlStreamReader_AtEnd(const QXmlStreamReader* self);
int QXmlStreamReader_ReadNext(QXmlStreamReader* self);
bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self);
void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self);
int QXmlStreamReader_TokenType(const QXmlStreamReader* self);
libqt_string QXmlStreamReader_TokenString(const QXmlStreamReader* self);
void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing);
bool QXmlStreamReader_NamespaceProcessing(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStartDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEndDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStartElement(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEndElement(const QXmlStreamReader* self);
bool QXmlStreamReader_IsCharacters(const QXmlStreamReader* self);
bool QXmlStreamReader_IsWhitespace(const QXmlStreamReader* self);
bool QXmlStreamReader_IsCDATA(const QXmlStreamReader* self);
bool QXmlStreamReader_IsComment(const QXmlStreamReader* self);
bool QXmlStreamReader_IsDTD(const QXmlStreamReader* self);
bool QXmlStreamReader_IsEntityReference(const QXmlStreamReader* self);
bool QXmlStreamReader_IsProcessingInstruction(const QXmlStreamReader* self);
bool QXmlStreamReader_IsStandaloneDocument(const QXmlStreamReader* self);
bool QXmlStreamReader_HasStandaloneDeclaration(const QXmlStreamReader* self);
long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self);
QXmlStreamAttributes* QXmlStreamReader_Attributes(const QXmlStreamReader* self);
libqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self);
libqt_list /* of QXmlStreamNamespaceDeclaration* */ QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self);
void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, const QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, const libqt_list /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions);
libqt_list /* of QXmlStreamNotationDeclaration* */ QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self);
libqt_list /* of QXmlStreamEntityDeclaration* */ QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self);
int QXmlStreamReader_EntityExpansionLimit(const QXmlStreamReader* self);
void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit);
void QXmlStreamReader_RaiseError(QXmlStreamReader* self);
libqt_string QXmlStreamReader_ErrorString(const QXmlStreamReader* self);
int QXmlStreamReader_Error(const QXmlStreamReader* self);
bool QXmlStreamReader_HasError(const QXmlStreamReader* self);
void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver);
QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(const QXmlStreamReader* self);
libqt_string QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, int behaviour);
void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, const libqt_string message);
void QXmlStreamReader_Delete(QXmlStreamReader* self);

QXmlStreamWriter* QXmlStreamWriter_new();
QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device);
void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device);
QIODevice* QXmlStreamWriter_Device(const QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting);
bool QXmlStreamWriter_AutoFormatting(const QXmlStreamWriter* self);
void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs);
int QXmlStreamWriter_AutoFormattingIndent(const QXmlStreamWriter* self);
void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, libqt_string qualifiedName, libqt_string value);
void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string name, libqt_string value);
void QXmlStreamWriter_WriteAttribute3(QXmlStreamWriter* self, const QXmlStreamAttribute* attribute);
void QXmlStreamWriter_WriteAttributes(QXmlStreamWriter* self, const QXmlStreamAttributes* attributes);
void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, libqt_string text);
void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, libqt_string text);
void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, libqt_string text);
void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, libqt_string dtd);
void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, libqt_string qualifiedName);
void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string name);
void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, libqt_string qualifiedName, libqt_string text);
void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string name, libqt_string text);
void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, libqt_string name);
void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, libqt_string namespaceUri);
void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, libqt_string namespaceUri);
void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, libqt_string target);
void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self);
void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, libqt_string version);
void QXmlStreamWriter_WriteStartDocument3(QXmlStreamWriter* self, libqt_string version, bool standalone);
void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, libqt_string qualifiedName);
void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string name);
void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, const QXmlStreamReader* reader);
bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self);
void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string prefix);
void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, libqt_string target, libqt_string data);
void QXmlStreamWriter_Delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
