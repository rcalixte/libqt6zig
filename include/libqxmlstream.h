#pragma once
#ifndef SRCC_LIBQXMLSTREAM_H
#define SRCC_LIBQXMLSTREAM_H

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
typedef struct QXmlStreamAttribute QXmlStreamAttribute;
typedef struct QXmlStreamEntityDeclaration QXmlStreamEntityDeclaration;
typedef struct QXmlStreamEntityResolver QXmlStreamEntityResolver;
typedef struct QXmlStreamNamespaceDeclaration QXmlStreamNamespaceDeclaration;
typedef struct QXmlStreamNotationDeclaration QXmlStreamNotationDeclaration;
typedef struct QXmlStreamReader QXmlStreamReader;
typedef struct QXmlStreamWriter QXmlStreamWriter;
#endif

#ifdef __cplusplus
typedef QXmlStreamReader::Error Error;                                       // C++ enum
typedef QXmlStreamReader::ReadElementTextBehaviour ReadElementTextBehaviour; // C++ enum
typedef QXmlStreamReader::TokenType TokenType;                               // C++ enum
#else
typedef int Error;                    // C ABI enum
typedef int ReadElementTextBehaviour; // C ABI enum
typedef int TokenType;                // C ABI enum
#endif

QXmlStreamAttribute* QXmlStreamAttribute_new();
QXmlStreamAttribute* QXmlStreamAttribute_new2(libqt_string qualifiedName, libqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new3(libqt_string namespaceUri, libqt_string name, libqt_string value);
QXmlStreamAttribute* QXmlStreamAttribute_new4(QXmlStreamAttribute* param1);
bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self);
bool QXmlStreamAttribute_OperatorEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
bool QXmlStreamAttribute_OperatorNotEqual(const QXmlStreamAttribute* self, QXmlStreamAttribute* other);
void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, QXmlStreamAttribute* param1);
void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self);

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new();
QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(libqt_string prefix, libqt_string namespaceUri);
bool QXmlStreamNamespaceDeclaration_OperatorEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(const QXmlStreamNamespaceDeclaration* self, QXmlStreamNamespaceDeclaration* other);
void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self);

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new();
bool QXmlStreamNotationDeclaration_OperatorEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
bool QXmlStreamNotationDeclaration_OperatorNotEqual(const QXmlStreamNotationDeclaration* self, QXmlStreamNotationDeclaration* other);
void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self);

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new();
bool QXmlStreamEntityDeclaration_OperatorEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
bool QXmlStreamEntityDeclaration_OperatorNotEqual(const QXmlStreamEntityDeclaration* self, QXmlStreamEntityDeclaration* other);
void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self);

libqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, libqt_string publicId, libqt_string systemId);
libqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, libqt_string name);
void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self);

QXmlStreamReader* QXmlStreamReader_new();
QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device);
QXmlStreamReader* QXmlStreamReader_new3(libqt_string data);
QXmlStreamReader* QXmlStreamReader_new4(libqt_string data);
QXmlStreamReader* QXmlStreamReader_new5(const char* data);
void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device);
QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self);
void QXmlStreamReader_AddData(QXmlStreamReader* self, libqt_string data);
void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, libqt_string data);
void QXmlStreamReader_AddData2(QXmlStreamReader* self, const char* data);
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
long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self);
long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self);
libqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self);
libqt_list /* of QXmlStreamNamespaceDeclaration* */ QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self);
void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction);
void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, libqt_list /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions);
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
void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, libqt_string message);
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
void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, QXmlStreamAttribute* attribute);
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
void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, libqt_string version);
void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, libqt_string version, bool standalone);
void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, libqt_string qualifiedName);
void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string name);
void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, QXmlStreamReader* reader);
bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self);
void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, libqt_string namespaceUri, libqt_string prefix);
void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, libqt_string target, libqt_string data);
void QXmlStreamWriter_Delete(QXmlStreamWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
