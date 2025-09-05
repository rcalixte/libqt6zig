#pragma once
#ifndef SRC_XMLC_LIBQDOM_H
#define SRC_XMLC_LIBQDOM_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QDomDocument__ParseResult)
typedef QDomDocument::ParseResult QDomDocument__ParseResult;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QDomAttr QDomAttr;
typedef struct QDomCDATASection QDomCDATASection;
typedef struct QDomCharacterData QDomCharacterData;
typedef struct QDomComment QDomComment;
typedef struct QDomDocument QDomDocument;
typedef struct QDomDocumentFragment QDomDocumentFragment;
typedef struct QDomDocumentType QDomDocumentType;
typedef struct QDomDocument__ParseResult QDomDocument__ParseResult;
typedef struct QDomElement QDomElement;
typedef struct QDomEntity QDomEntity;
typedef struct QDomEntityReference QDomEntityReference;
typedef struct QDomImplementation QDomImplementation;
typedef struct QDomNamedNodeMap QDomNamedNodeMap;
typedef struct QDomNode QDomNode;
typedef struct QDomNodeList QDomNodeList;
typedef struct QDomNotation QDomNotation;
typedef struct QDomProcessingInstruction QDomProcessingInstruction;
typedef struct QDomText QDomText;
typedef struct QIODevice QIODevice;
typedef struct QTextStream QTextStream;
typedef struct QXmlStreamReader QXmlStreamReader;
#endif

QDomImplementation* QDomImplementation_new();
QDomImplementation* QDomImplementation_new2(const QDomImplementation* implementation);
void QDomImplementation_OperatorAssign(QDomImplementation* self, const QDomImplementation* other);
bool QDomImplementation_OperatorEqual(const QDomImplementation* self, const QDomImplementation* other);
bool QDomImplementation_OperatorNotEqual(const QDomImplementation* self, const QDomImplementation* other);
bool QDomImplementation_HasFeature(const QDomImplementation* self, const libqt_string feature, const libqt_string version);
QDomDocumentType* QDomImplementation_CreateDocumentType(QDomImplementation* self, const libqt_string qName, const libqt_string publicId, const libqt_string systemId);
QDomDocument* QDomImplementation_CreateDocument(QDomImplementation* self, const libqt_string nsURI, const libqt_string qName, const QDomDocumentType* doctype);
int QDomImplementation_InvalidDataPolicy();
void QDomImplementation_SetInvalidDataPolicy(int policy);
bool QDomImplementation_IsNull(QDomImplementation* self);
void QDomImplementation_Delete(QDomImplementation* self);

QDomNode* QDomNode_new();
QDomNode* QDomNode_new2(const QDomNode* node);
void QDomNode_OperatorAssign(QDomNode* self, const QDomNode* other);
bool QDomNode_OperatorEqual(const QDomNode* self, const QDomNode* other);
bool QDomNode_OperatorNotEqual(const QDomNode* self, const QDomNode* other);
QDomNode* QDomNode_InsertBefore(QDomNode* self, const QDomNode* newChild, const QDomNode* refChild);
QDomNode* QDomNode_InsertAfter(QDomNode* self, const QDomNode* newChild, const QDomNode* refChild);
QDomNode* QDomNode_ReplaceChild(QDomNode* self, const QDomNode* newChild, const QDomNode* oldChild);
QDomNode* QDomNode_RemoveChild(QDomNode* self, const QDomNode* oldChild);
QDomNode* QDomNode_AppendChild(QDomNode* self, const QDomNode* newChild);
bool QDomNode_HasChildNodes(const QDomNode* self);
QDomNode* QDomNode_CloneNode(const QDomNode* self);
void QDomNode_Normalize(QDomNode* self);
bool QDomNode_IsSupported(const QDomNode* self, const libqt_string feature, const libqt_string version);
libqt_string QDomNode_NodeName(const QDomNode* self);
int QDomNode_NodeType(const QDomNode* self);
QDomNode* QDomNode_ParentNode(const QDomNode* self);
QDomNodeList* QDomNode_ChildNodes(const QDomNode* self);
QDomNode* QDomNode_FirstChild(const QDomNode* self);
QDomNode* QDomNode_LastChild(const QDomNode* self);
QDomNode* QDomNode_PreviousSibling(const QDomNode* self);
QDomNode* QDomNode_NextSibling(const QDomNode* self);
QDomNamedNodeMap* QDomNode_Attributes(const QDomNode* self);
QDomDocument* QDomNode_OwnerDocument(const QDomNode* self);
libqt_string QDomNode_NamespaceURI(const QDomNode* self);
libqt_string QDomNode_LocalName(const QDomNode* self);
bool QDomNode_HasAttributes(const QDomNode* self);
libqt_string QDomNode_NodeValue(const QDomNode* self);
void QDomNode_SetNodeValue(QDomNode* self, const libqt_string value);
libqt_string QDomNode_Prefix(const QDomNode* self);
void QDomNode_SetPrefix(QDomNode* self, const libqt_string pre);
bool QDomNode_IsAttr(const QDomNode* self);
bool QDomNode_IsCDATASection(const QDomNode* self);
bool QDomNode_IsDocumentFragment(const QDomNode* self);
bool QDomNode_IsDocument(const QDomNode* self);
bool QDomNode_IsDocumentType(const QDomNode* self);
bool QDomNode_IsElement(const QDomNode* self);
bool QDomNode_IsEntityReference(const QDomNode* self);
bool QDomNode_IsText(const QDomNode* self);
bool QDomNode_IsEntity(const QDomNode* self);
bool QDomNode_IsNotation(const QDomNode* self);
bool QDomNode_IsProcessingInstruction(const QDomNode* self);
bool QDomNode_IsCharacterData(const QDomNode* self);
bool QDomNode_IsComment(const QDomNode* self);
QDomNode* QDomNode_NamedItem(const QDomNode* self, const libqt_string name);
bool QDomNode_IsNull(const QDomNode* self);
void QDomNode_Clear(QDomNode* self);
QDomAttr* QDomNode_ToAttr(const QDomNode* self);
QDomCDATASection* QDomNode_ToCDATASection(const QDomNode* self);
QDomDocumentFragment* QDomNode_ToDocumentFragment(const QDomNode* self);
QDomDocument* QDomNode_ToDocument(const QDomNode* self);
QDomDocumentType* QDomNode_ToDocumentType(const QDomNode* self);
QDomElement* QDomNode_ToElement(const QDomNode* self);
QDomEntityReference* QDomNode_ToEntityReference(const QDomNode* self);
QDomText* QDomNode_ToText(const QDomNode* self);
QDomEntity* QDomNode_ToEntity(const QDomNode* self);
QDomNotation* QDomNode_ToNotation(const QDomNode* self);
QDomProcessingInstruction* QDomNode_ToProcessingInstruction(const QDomNode* self);
QDomCharacterData* QDomNode_ToCharacterData(const QDomNode* self);
QDomComment* QDomNode_ToComment(const QDomNode* self);
void QDomNode_Save(const QDomNode* self, QTextStream* param1, int param2);
QDomElement* QDomNode_FirstChildElement(const QDomNode* self);
QDomElement* QDomNode_LastChildElement(const QDomNode* self);
QDomElement* QDomNode_PreviousSiblingElement(const QDomNode* self);
QDomElement* QDomNode_NextSiblingElement(const QDomNode* self);
int QDomNode_LineNumber(const QDomNode* self);
int QDomNode_ColumnNumber(const QDomNode* self);
QDomNode* QDomNode_CloneNode1(const QDomNode* self, bool deep);
void QDomNode_Save3(const QDomNode* self, QTextStream* param1, int param2, int param3);
QDomElement* QDomNode_FirstChildElement1(const QDomNode* self, const libqt_string tagName);
QDomElement* QDomNode_FirstChildElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI);
QDomElement* QDomNode_LastChildElement1(const QDomNode* self, const libqt_string tagName);
QDomElement* QDomNode_LastChildElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI);
QDomElement* QDomNode_PreviousSiblingElement1(const QDomNode* self, const libqt_string tagName);
QDomElement* QDomNode_PreviousSiblingElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI);
QDomElement* QDomNode_NextSiblingElement1(const QDomNode* self, const libqt_string taName);
QDomElement* QDomNode_NextSiblingElement2(const QDomNode* self, const libqt_string taName, const libqt_string namespaceURI);
void QDomNode_Delete(QDomNode* self);

QDomNodeList* QDomNodeList_new();
QDomNodeList* QDomNodeList_new2(const QDomNodeList* nodeList);
void QDomNodeList_OperatorAssign(QDomNodeList* self, const QDomNodeList* other);
bool QDomNodeList_OperatorEqual(const QDomNodeList* self, const QDomNodeList* other);
bool QDomNodeList_OperatorNotEqual(const QDomNodeList* self, const QDomNodeList* other);
QDomNode* QDomNodeList_Item(const QDomNodeList* self, int index);
QDomNode* QDomNodeList_At(const QDomNodeList* self, int index);
int QDomNodeList_Length(const QDomNodeList* self);
int QDomNodeList_Count(const QDomNodeList* self);
int QDomNodeList_Size(const QDomNodeList* self);
bool QDomNodeList_IsEmpty(const QDomNodeList* self);
void QDomNodeList_Delete(QDomNodeList* self);

QDomDocumentType* QDomDocumentType_new();
QDomDocumentType* QDomDocumentType_new2(const QDomDocumentType* documentType);
void QDomDocumentType_OperatorAssign(QDomDocumentType* self, const QDomDocumentType* other);
libqt_string QDomDocumentType_Name(const QDomDocumentType* self);
QDomNamedNodeMap* QDomDocumentType_Entities(const QDomDocumentType* self);
QDomNamedNodeMap* QDomDocumentType_Notations(const QDomDocumentType* self);
libqt_string QDomDocumentType_PublicId(const QDomDocumentType* self);
libqt_string QDomDocumentType_SystemId(const QDomDocumentType* self);
libqt_string QDomDocumentType_InternalSubset(const QDomDocumentType* self);
int QDomDocumentType_NodeType(const QDomDocumentType* self);
void QDomDocumentType_Delete(QDomDocumentType* self);

QDomDocument* QDomDocument_new();
QDomDocument* QDomDocument_new2(const libqt_string name);
QDomDocument* QDomDocument_new3(const QDomDocumentType* doctype);
QDomDocument* QDomDocument_new4(const QDomDocument* document);
void QDomDocument_OperatorAssign(QDomDocument* self, const QDomDocument* other);
QDomElement* QDomDocument_CreateElement(QDomDocument* self, const libqt_string tagName);
QDomDocumentFragment* QDomDocument_CreateDocumentFragment(QDomDocument* self);
QDomText* QDomDocument_CreateTextNode(QDomDocument* self, const libqt_string data);
QDomComment* QDomDocument_CreateComment(QDomDocument* self, const libqt_string data);
QDomCDATASection* QDomDocument_CreateCDATASection(QDomDocument* self, const libqt_string data);
QDomProcessingInstruction* QDomDocument_CreateProcessingInstruction(QDomDocument* self, const libqt_string target, const libqt_string data);
QDomAttr* QDomDocument_CreateAttribute(QDomDocument* self, const libqt_string name);
QDomEntityReference* QDomDocument_CreateEntityReference(QDomDocument* self, const libqt_string name);
QDomNodeList* QDomDocument_ElementsByTagName(const QDomDocument* self, const libqt_string tagname);
QDomNode* QDomDocument_ImportNode(QDomDocument* self, const QDomNode* importedNode, bool deep);
QDomElement* QDomDocument_CreateElementNS(QDomDocument* self, const libqt_string nsURI, const libqt_string qName);
QDomAttr* QDomDocument_CreateAttributeNS(QDomDocument* self, const libqt_string nsURI, const libqt_string qName);
QDomNodeList* QDomDocument_ElementsByTagNameNS(QDomDocument* self, const libqt_string nsURI, const libqt_string localName);
QDomElement* QDomDocument_ElementById(QDomDocument* self, const libqt_string elementId);
QDomDocumentType* QDomDocument_Doctype(const QDomDocument* self);
QDomImplementation* QDomDocument_Implementation(const QDomDocument* self);
QDomElement* QDomDocument_DocumentElement(const QDomDocument* self);
int QDomDocument_NodeType(const QDomDocument* self);
bool QDomDocument_SetContent(QDomDocument* self, const libqt_string text, bool namespaceProcessing);
bool QDomDocument_SetContent2(QDomDocument* self, const libqt_string text, bool namespaceProcessing);
bool QDomDocument_SetContent3(QDomDocument* self, QIODevice* dev, bool namespaceProcessing);
bool QDomDocument_SetContent7(QDomDocument* self, QXmlStreamReader* reader, bool namespaceProcessing);
QDomDocument__ParseResult* QDomDocument_SetContent8(QDomDocument* self, libqt_string data);
QDomDocument__ParseResult* QDomDocument_SetContent9(QDomDocument* self, QIODevice* device);
QDomDocument__ParseResult* QDomDocument_SetContent10(QDomDocument* self, QXmlStreamReader* reader);
libqt_string QDomDocument_ToString(const QDomDocument* self);
libqt_string QDomDocument_ToByteArray(const QDomDocument* self);
QDomDocument__ParseResult* QDomDocument_SetContent22(QDomDocument* self, libqt_string data, int options);
QDomDocument__ParseResult* QDomDocument_SetContent23(QDomDocument* self, QIODevice* device, int options);
QDomDocument__ParseResult* QDomDocument_SetContent24(QDomDocument* self, QXmlStreamReader* reader, int options);
libqt_string QDomDocument_ToString1(const QDomDocument* self, int indent);
libqt_string QDomDocument_ToByteArray1(const QDomDocument* self, int indent);
void QDomDocument_Delete(QDomDocument* self);

QDomNamedNodeMap* QDomNamedNodeMap_new();
QDomNamedNodeMap* QDomNamedNodeMap_new2(const QDomNamedNodeMap* namedNodeMap);
void QDomNamedNodeMap_OperatorAssign(QDomNamedNodeMap* self, const QDomNamedNodeMap* other);
bool QDomNamedNodeMap_OperatorEqual(const QDomNamedNodeMap* self, const QDomNamedNodeMap* other);
bool QDomNamedNodeMap_OperatorNotEqual(const QDomNamedNodeMap* self, const QDomNamedNodeMap* other);
QDomNode* QDomNamedNodeMap_NamedItem(const QDomNamedNodeMap* self, const libqt_string name);
QDomNode* QDomNamedNodeMap_SetNamedItem(QDomNamedNodeMap* self, const QDomNode* newNode);
QDomNode* QDomNamedNodeMap_RemoveNamedItem(QDomNamedNodeMap* self, const libqt_string name);
QDomNode* QDomNamedNodeMap_Item(const QDomNamedNodeMap* self, int index);
QDomNode* QDomNamedNodeMap_NamedItemNS(const QDomNamedNodeMap* self, const libqt_string nsURI, const libqt_string localName);
QDomNode* QDomNamedNodeMap_SetNamedItemNS(QDomNamedNodeMap* self, const QDomNode* newNode);
QDomNode* QDomNamedNodeMap_RemoveNamedItemNS(QDomNamedNodeMap* self, const libqt_string nsURI, const libqt_string localName);
int QDomNamedNodeMap_Length(const QDomNamedNodeMap* self);
int QDomNamedNodeMap_Count(const QDomNamedNodeMap* self);
int QDomNamedNodeMap_Size(const QDomNamedNodeMap* self);
bool QDomNamedNodeMap_IsEmpty(const QDomNamedNodeMap* self);
bool QDomNamedNodeMap_Contains(const QDomNamedNodeMap* self, const libqt_string name);
void QDomNamedNodeMap_Delete(QDomNamedNodeMap* self);

QDomDocumentFragment* QDomDocumentFragment_new();
QDomDocumentFragment* QDomDocumentFragment_new2(const QDomDocumentFragment* documentFragment);
void QDomDocumentFragment_OperatorAssign(QDomDocumentFragment* self, const QDomDocumentFragment* other);
int QDomDocumentFragment_NodeType(const QDomDocumentFragment* self);
void QDomDocumentFragment_Delete(QDomDocumentFragment* self);

QDomCharacterData* QDomCharacterData_new();
QDomCharacterData* QDomCharacterData_new2(const QDomCharacterData* characterData);
void QDomCharacterData_OperatorAssign(QDomCharacterData* self, const QDomCharacterData* other);
libqt_string QDomCharacterData_SubstringData(QDomCharacterData* self, unsigned long offset, unsigned long count);
void QDomCharacterData_AppendData(QDomCharacterData* self, const libqt_string arg);
void QDomCharacterData_InsertData(QDomCharacterData* self, unsigned long offset, const libqt_string arg);
void QDomCharacterData_DeleteData(QDomCharacterData* self, unsigned long offset, unsigned long count);
void QDomCharacterData_ReplaceData(QDomCharacterData* self, unsigned long offset, unsigned long count, const libqt_string arg);
int QDomCharacterData_Length(const QDomCharacterData* self);
libqt_string QDomCharacterData_Data(const QDomCharacterData* self);
void QDomCharacterData_SetData(QDomCharacterData* self, const libqt_string data);
int QDomCharacterData_NodeType(const QDomCharacterData* self);
void QDomCharacterData_Delete(QDomCharacterData* self);

QDomAttr* QDomAttr_new();
QDomAttr* QDomAttr_new2(const QDomAttr* attr);
void QDomAttr_OperatorAssign(QDomAttr* self, const QDomAttr* other);
libqt_string QDomAttr_Name(const QDomAttr* self);
bool QDomAttr_Specified(const QDomAttr* self);
QDomElement* QDomAttr_OwnerElement(const QDomAttr* self);
libqt_string QDomAttr_Value(const QDomAttr* self);
void QDomAttr_SetValue(QDomAttr* self, const libqt_string value);
int QDomAttr_NodeType(const QDomAttr* self);
void QDomAttr_Delete(QDomAttr* self);

QDomElement* QDomElement_new();
QDomElement* QDomElement_new2(const QDomElement* element);
void QDomElement_OperatorAssign(QDomElement* self, const QDomElement* other);
libqt_string QDomElement_Attribute(const QDomElement* self, const libqt_string name);
void QDomElement_SetAttribute(QDomElement* self, const libqt_string name, const libqt_string value);
void QDomElement_SetAttribute2(QDomElement* self, const libqt_string name, long long value);
void QDomElement_SetAttribute3(QDomElement* self, const libqt_string name, unsigned long long value);
void QDomElement_SetAttribute4(QDomElement* self, const libqt_string name, int value);
void QDomElement_SetAttribute5(QDomElement* self, const libqt_string name, unsigned int value);
void QDomElement_SetAttribute6(QDomElement* self, const libqt_string name, float value);
void QDomElement_SetAttribute7(QDomElement* self, const libqt_string name, double value);
void QDomElement_RemoveAttribute(QDomElement* self, const libqt_string name);
QDomAttr* QDomElement_AttributeNode(QDomElement* self, const libqt_string name);
QDomAttr* QDomElement_SetAttributeNode(QDomElement* self, const QDomAttr* newAttr);
QDomAttr* QDomElement_RemoveAttributeNode(QDomElement* self, const QDomAttr* oldAttr);
QDomNodeList* QDomElement_ElementsByTagName(const QDomElement* self, const libqt_string tagname);
bool QDomElement_HasAttribute(const QDomElement* self, const libqt_string name);
libqt_string QDomElement_AttributeNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName);
void QDomElement_SetAttributeNS(QDomElement* self, const libqt_string nsURI, const libqt_string qName, const libqt_string value);
void QDomElement_SetAttributeNS2(QDomElement* self, const libqt_string nsURI, const libqt_string qName, int value);
void QDomElement_SetAttributeNS3(QDomElement* self, const libqt_string nsURI, const libqt_string qName, unsigned int value);
void QDomElement_SetAttributeNS4(QDomElement* self, const libqt_string nsURI, const libqt_string qName, long long value);
void QDomElement_SetAttributeNS5(QDomElement* self, const libqt_string nsURI, const libqt_string qName, unsigned long long value);
void QDomElement_SetAttributeNS6(QDomElement* self, const libqt_string nsURI, const libqt_string qName, double value);
void QDomElement_RemoveAttributeNS(QDomElement* self, const libqt_string nsURI, const libqt_string localName);
QDomAttr* QDomElement_AttributeNodeNS(QDomElement* self, const libqt_string nsURI, const libqt_string localName);
QDomAttr* QDomElement_SetAttributeNodeNS(QDomElement* self, const QDomAttr* newAttr);
QDomNodeList* QDomElement_ElementsByTagNameNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName);
bool QDomElement_HasAttributeNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName);
libqt_string QDomElement_TagName(const QDomElement* self);
void QDomElement_SetTagName(QDomElement* self, const libqt_string name);
QDomNamedNodeMap* QDomElement_Attributes(const QDomElement* self);
int QDomElement_NodeType(const QDomElement* self);
libqt_string QDomElement_Text(const QDomElement* self);
libqt_string QDomElement_Attribute2(const QDomElement* self, const libqt_string name, const libqt_string defValue);
libqt_string QDomElement_AttributeNS3(const QDomElement* self, const libqt_string nsURI, const libqt_string localName, const libqt_string defValue);
void QDomElement_Delete(QDomElement* self);

QDomText* QDomText_new();
QDomText* QDomText_new2(const QDomText* text);
void QDomText_OperatorAssign(QDomText* self, const QDomText* other);
QDomText* QDomText_SplitText(QDomText* self, int offset);
int QDomText_NodeType(const QDomText* self);
void QDomText_Delete(QDomText* self);

QDomComment* QDomComment_new();
QDomComment* QDomComment_new2(const QDomComment* comment);
void QDomComment_OperatorAssign(QDomComment* self, const QDomComment* other);
int QDomComment_NodeType(const QDomComment* self);
void QDomComment_Delete(QDomComment* self);

QDomCDATASection* QDomCDATASection_new();
QDomCDATASection* QDomCDATASection_new2(const QDomCDATASection* cdataSection);
void QDomCDATASection_OperatorAssign(QDomCDATASection* self, const QDomCDATASection* other);
int QDomCDATASection_NodeType(const QDomCDATASection* self);
void QDomCDATASection_Delete(QDomCDATASection* self);

QDomNotation* QDomNotation_new();
QDomNotation* QDomNotation_new2(const QDomNotation* notation);
void QDomNotation_OperatorAssign(QDomNotation* self, const QDomNotation* other);
libqt_string QDomNotation_PublicId(const QDomNotation* self);
libqt_string QDomNotation_SystemId(const QDomNotation* self);
int QDomNotation_NodeType(const QDomNotation* self);
void QDomNotation_Delete(QDomNotation* self);

QDomEntity* QDomEntity_new();
QDomEntity* QDomEntity_new2(const QDomEntity* entity);
void QDomEntity_OperatorAssign(QDomEntity* self, const QDomEntity* other);
libqt_string QDomEntity_PublicId(const QDomEntity* self);
libqt_string QDomEntity_SystemId(const QDomEntity* self);
libqt_string QDomEntity_NotationName(const QDomEntity* self);
int QDomEntity_NodeType(const QDomEntity* self);
void QDomEntity_Delete(QDomEntity* self);

QDomEntityReference* QDomEntityReference_new();
QDomEntityReference* QDomEntityReference_new2(const QDomEntityReference* entityReference);
void QDomEntityReference_OperatorAssign(QDomEntityReference* self, const QDomEntityReference* other);
int QDomEntityReference_NodeType(const QDomEntityReference* self);
void QDomEntityReference_Delete(QDomEntityReference* self);

QDomProcessingInstruction* QDomProcessingInstruction_new();
QDomProcessingInstruction* QDomProcessingInstruction_new2(const QDomProcessingInstruction* processingInstruction);
void QDomProcessingInstruction_OperatorAssign(QDomProcessingInstruction* self, const QDomProcessingInstruction* other);
libqt_string QDomProcessingInstruction_Target(const QDomProcessingInstruction* self);
libqt_string QDomProcessingInstruction_Data(const QDomProcessingInstruction* self);
void QDomProcessingInstruction_SetData(QDomProcessingInstruction* self, const libqt_string data);
int QDomProcessingInstruction_NodeType(const QDomProcessingInstruction* self);
void QDomProcessingInstruction_Delete(QDomProcessingInstruction* self);

QDomDocument__ParseResult* QDomDocument__ParseResult_new(const QDomDocument__ParseResult* param1);
libqt_string QDomDocument__ParseResult_ErrorMessage(const QDomDocument__ParseResult* self);
void QDomDocument__ParseResult_SetErrorMessage(QDomDocument__ParseResult* self, libqt_string errorMessage);
ptrdiff_t QDomDocument__ParseResult_ErrorLine(const QDomDocument__ParseResult* self);
void QDomDocument__ParseResult_SetErrorLine(QDomDocument__ParseResult* self, ptrdiff_t errorLine);
ptrdiff_t QDomDocument__ParseResult_ErrorColumn(const QDomDocument__ParseResult* self);
void QDomDocument__ParseResult_SetErrorColumn(QDomDocument__ParseResult* self, ptrdiff_t errorColumn);
bool QDomDocument__ParseResult_ToBool(const QDomDocument__ParseResult* self);
void QDomDocument__ParseResult_OperatorAssign(QDomDocument__ParseResult* self, const QDomDocument__ParseResult* param1);
void QDomDocument__ParseResult_Delete(QDomDocument__ParseResult* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
