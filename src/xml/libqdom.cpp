#include <QAnyStringView>
#include <QByteArray>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDomDocument__ParseResult
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomImplementation>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextStream>
#include <QXmlStreamReader>
#include <qdom.h>
#include "libqdom.h"
#include "libqdom.hxx"

QDomImplementation* QDomImplementation_new() {
    return new QDomImplementation();
}

QDomImplementation* QDomImplementation_new2(const QDomImplementation* implementation) {
    return new QDomImplementation(*implementation);
}

void QDomImplementation_OperatorAssign(QDomImplementation* self, const QDomImplementation* other) {
    self->operator=(*other);
}

bool QDomImplementation_OperatorEqual(const QDomImplementation* self, const QDomImplementation* other) {
    return (*self == *other);
}

bool QDomImplementation_OperatorNotEqual(const QDomImplementation* self, const QDomImplementation* other) {
    return (*self != *other);
}

bool QDomImplementation_HasFeature(const QDomImplementation* self, const libqt_string feature, const libqt_string version) {
    QString feature_QString = QString::fromUtf8(feature.data, feature.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return self->hasFeature(feature_QString, version_QString);
}

QDomDocumentType* QDomImplementation_CreateDocumentType(QDomImplementation* self, const libqt_string qName, const libqt_string publicId, const libqt_string systemId) {
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
    QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
    return new QDomDocumentType(self->createDocumentType(qName_QString, publicId_QString, systemId_QString));
}

QDomDocument* QDomImplementation_CreateDocument(QDomImplementation* self, const libqt_string nsURI, const libqt_string qName, const QDomDocumentType* doctype) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    return new QDomDocument(self->createDocument(nsURI_QString, qName_QString, *doctype));
}

int QDomImplementation_InvalidDataPolicy() {
    return static_cast<int>(QDomImplementation::invalidDataPolicy());
}

void QDomImplementation_SetInvalidDataPolicy(int policy) {
    QDomImplementation::setInvalidDataPolicy(static_cast<QDomImplementation::InvalidDataPolicy>(policy));
}

bool QDomImplementation_IsNull(QDomImplementation* self) {
    return self->isNull();
}

void QDomImplementation_Delete(QDomImplementation* self) {
    delete self;
}

QDomNode* QDomNode_new() {
    return new QDomNode();
}

QDomNode* QDomNode_new2(const QDomNode* node) {
    return new QDomNode(*node);
}

void QDomNode_OperatorAssign(QDomNode* self, const QDomNode* other) {
    self->operator=(*other);
}

bool QDomNode_OperatorEqual(const QDomNode* self, const QDomNode* other) {
    return (*self == *other);
}

bool QDomNode_OperatorNotEqual(const QDomNode* self, const QDomNode* other) {
    return (*self != *other);
}

QDomNode* QDomNode_InsertBefore(QDomNode* self, const QDomNode* newChild, const QDomNode* refChild) {
    return new QDomNode(self->insertBefore(*newChild, *refChild));
}

QDomNode* QDomNode_InsertAfter(QDomNode* self, const QDomNode* newChild, const QDomNode* refChild) {
    return new QDomNode(self->insertAfter(*newChild, *refChild));
}

QDomNode* QDomNode_ReplaceChild(QDomNode* self, const QDomNode* newChild, const QDomNode* oldChild) {
    return new QDomNode(self->replaceChild(*newChild, *oldChild));
}

QDomNode* QDomNode_RemoveChild(QDomNode* self, const QDomNode* oldChild) {
    return new QDomNode(self->removeChild(*oldChild));
}

QDomNode* QDomNode_AppendChild(QDomNode* self, const QDomNode* newChild) {
    return new QDomNode(self->appendChild(*newChild));
}

bool QDomNode_HasChildNodes(const QDomNode* self) {
    return self->hasChildNodes();
}

QDomNode* QDomNode_CloneNode(const QDomNode* self) {
    return new QDomNode(self->cloneNode());
}

void QDomNode_Normalize(QDomNode* self) {
    self->normalize();
}

bool QDomNode_IsSupported(const QDomNode* self, const libqt_string feature, const libqt_string version) {
    QString feature_QString = QString::fromUtf8(feature.data, feature.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return self->isSupported(feature_QString, version_QString);
}

libqt_string QDomNode_NodeName(const QDomNode* self) {
    QString _ret = self->nodeName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDomNode_NodeType(const QDomNode* self) {
    return static_cast<int>(self->nodeType());
}

QDomNode* QDomNode_ParentNode(const QDomNode* self) {
    return new QDomNode(self->parentNode());
}

QDomNodeList* QDomNode_ChildNodes(const QDomNode* self) {
    return new QDomNodeList(self->childNodes());
}

QDomNode* QDomNode_FirstChild(const QDomNode* self) {
    return new QDomNode(self->firstChild());
}

QDomNode* QDomNode_LastChild(const QDomNode* self) {
    return new QDomNode(self->lastChild());
}

QDomNode* QDomNode_PreviousSibling(const QDomNode* self) {
    return new QDomNode(self->previousSibling());
}

QDomNode* QDomNode_NextSibling(const QDomNode* self) {
    return new QDomNode(self->nextSibling());
}

QDomNamedNodeMap* QDomNode_Attributes(const QDomNode* self) {
    return new QDomNamedNodeMap(self->attributes());
}

QDomDocument* QDomNode_OwnerDocument(const QDomNode* self) {
    return new QDomDocument(self->ownerDocument());
}

libqt_string QDomNode_NamespaceURI(const QDomNode* self) {
    QString _ret = self->namespaceURI();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomNode_LocalName(const QDomNode* self) {
    QString _ret = self->localName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDomNode_HasAttributes(const QDomNode* self) {
    return self->hasAttributes();
}

libqt_string QDomNode_NodeValue(const QDomNode* self) {
    QString _ret = self->nodeValue();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomNode_SetNodeValue(QDomNode* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setNodeValue(value_QString);
}

libqt_string QDomNode_Prefix(const QDomNode* self) {
    QString _ret = self->prefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomNode_SetPrefix(QDomNode* self, const libqt_string pre) {
    QString pre_QString = QString::fromUtf8(pre.data, pre.len);
    self->setPrefix(pre_QString);
}

bool QDomNode_IsAttr(const QDomNode* self) {
    return self->isAttr();
}

bool QDomNode_IsCDATASection(const QDomNode* self) {
    return self->isCDATASection();
}

bool QDomNode_IsDocumentFragment(const QDomNode* self) {
    return self->isDocumentFragment();
}

bool QDomNode_IsDocument(const QDomNode* self) {
    return self->isDocument();
}

bool QDomNode_IsDocumentType(const QDomNode* self) {
    return self->isDocumentType();
}

bool QDomNode_IsElement(const QDomNode* self) {
    return self->isElement();
}

bool QDomNode_IsEntityReference(const QDomNode* self) {
    return self->isEntityReference();
}

bool QDomNode_IsText(const QDomNode* self) {
    return self->isText();
}

bool QDomNode_IsEntity(const QDomNode* self) {
    return self->isEntity();
}

bool QDomNode_IsNotation(const QDomNode* self) {
    return self->isNotation();
}

bool QDomNode_IsProcessingInstruction(const QDomNode* self) {
    return self->isProcessingInstruction();
}

bool QDomNode_IsCharacterData(const QDomNode* self) {
    return self->isCharacterData();
}

bool QDomNode_IsComment(const QDomNode* self) {
    return self->isComment();
}

QDomNode* QDomNode_NamedItem(const QDomNode* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomNode(self->namedItem(name_QString));
}

bool QDomNode_IsNull(const QDomNode* self) {
    return self->isNull();
}

void QDomNode_Clear(QDomNode* self) {
    self->clear();
}

QDomAttr* QDomNode_ToAttr(const QDomNode* self) {
    return new QDomAttr(self->toAttr());
}

QDomCDATASection* QDomNode_ToCDATASection(const QDomNode* self) {
    return new QDomCDATASection(self->toCDATASection());
}

QDomDocumentFragment* QDomNode_ToDocumentFragment(const QDomNode* self) {
    return new QDomDocumentFragment(self->toDocumentFragment());
}

QDomDocument* QDomNode_ToDocument(const QDomNode* self) {
    return new QDomDocument(self->toDocument());
}

QDomDocumentType* QDomNode_ToDocumentType(const QDomNode* self) {
    return new QDomDocumentType(self->toDocumentType());
}

QDomElement* QDomNode_ToElement(const QDomNode* self) {
    return new QDomElement(self->toElement());
}

QDomEntityReference* QDomNode_ToEntityReference(const QDomNode* self) {
    return new QDomEntityReference(self->toEntityReference());
}

QDomText* QDomNode_ToText(const QDomNode* self) {
    return new QDomText(self->toText());
}

QDomEntity* QDomNode_ToEntity(const QDomNode* self) {
    return new QDomEntity(self->toEntity());
}

QDomNotation* QDomNode_ToNotation(const QDomNode* self) {
    return new QDomNotation(self->toNotation());
}

QDomProcessingInstruction* QDomNode_ToProcessingInstruction(const QDomNode* self) {
    return new QDomProcessingInstruction(self->toProcessingInstruction());
}

QDomCharacterData* QDomNode_ToCharacterData(const QDomNode* self) {
    return new QDomCharacterData(self->toCharacterData());
}

QDomComment* QDomNode_ToComment(const QDomNode* self) {
    return new QDomComment(self->toComment());
}

void QDomNode_Save(const QDomNode* self, QTextStream* param1, int param2) {
    self->save(*param1, static_cast<int>(param2));
}

QDomElement* QDomNode_FirstChildElement(const QDomNode* self) {
    return new QDomElement(self->firstChildElement());
}

QDomElement* QDomNode_LastChildElement(const QDomNode* self) {
    return new QDomElement(self->lastChildElement());
}

QDomElement* QDomNode_PreviousSiblingElement(const QDomNode* self) {
    return new QDomElement(self->previousSiblingElement());
}

QDomElement* QDomNode_NextSiblingElement(const QDomNode* self) {
    return new QDomElement(self->nextSiblingElement());
}

int QDomNode_LineNumber(const QDomNode* self) {
    return self->lineNumber();
}

int QDomNode_ColumnNumber(const QDomNode* self) {
    return self->columnNumber();
}

QDomNode* QDomNode_CloneNode1(const QDomNode* self, bool deep) {
    return new QDomNode(self->cloneNode(deep));
}

void QDomNode_Save3(const QDomNode* self, QTextStream* param1, int param2, int param3) {
    self->save(*param1, static_cast<int>(param2), static_cast<QDomNode::EncodingPolicy>(param3));
}

QDomElement* QDomNode_FirstChildElement1(const QDomNode* self, const libqt_string tagName) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    return new QDomElement(self->firstChildElement(tagName_QString));
}

QDomElement* QDomNode_FirstChildElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    QString namespaceURI_QString = QString::fromUtf8(namespaceURI.data, namespaceURI.len);
    return new QDomElement(self->firstChildElement(tagName_QString, namespaceURI_QString));
}

QDomElement* QDomNode_LastChildElement1(const QDomNode* self, const libqt_string tagName) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    return new QDomElement(self->lastChildElement(tagName_QString));
}

QDomElement* QDomNode_LastChildElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    QString namespaceURI_QString = QString::fromUtf8(namespaceURI.data, namespaceURI.len);
    return new QDomElement(self->lastChildElement(tagName_QString, namespaceURI_QString));
}

QDomElement* QDomNode_PreviousSiblingElement1(const QDomNode* self, const libqt_string tagName) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    return new QDomElement(self->previousSiblingElement(tagName_QString));
}

QDomElement* QDomNode_PreviousSiblingElement2(const QDomNode* self, const libqt_string tagName, const libqt_string namespaceURI) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    QString namespaceURI_QString = QString::fromUtf8(namespaceURI.data, namespaceURI.len);
    return new QDomElement(self->previousSiblingElement(tagName_QString, namespaceURI_QString));
}

QDomElement* QDomNode_NextSiblingElement1(const QDomNode* self, const libqt_string taName) {
    QString taName_QString = QString::fromUtf8(taName.data, taName.len);
    return new QDomElement(self->nextSiblingElement(taName_QString));
}

QDomElement* QDomNode_NextSiblingElement2(const QDomNode* self, const libqt_string taName, const libqt_string namespaceURI) {
    QString taName_QString = QString::fromUtf8(taName.data, taName.len);
    QString namespaceURI_QString = QString::fromUtf8(namespaceURI.data, namespaceURI.len);
    return new QDomElement(self->nextSiblingElement(taName_QString, namespaceURI_QString));
}

void QDomNode_Delete(QDomNode* self) {
    delete self;
}

QDomNodeList* QDomNodeList_new() {
    return new QDomNodeList();
}

QDomNodeList* QDomNodeList_new2(const QDomNodeList* nodeList) {
    return new QDomNodeList(*nodeList);
}

void QDomNodeList_OperatorAssign(QDomNodeList* self, const QDomNodeList* other) {
    self->operator=(*other);
}

bool QDomNodeList_OperatorEqual(const QDomNodeList* self, const QDomNodeList* other) {
    return (*self == *other);
}

bool QDomNodeList_OperatorNotEqual(const QDomNodeList* self, const QDomNodeList* other) {
    return (*self != *other);
}

QDomNode* QDomNodeList_Item(const QDomNodeList* self, int index) {
    return new QDomNode(self->item(static_cast<int>(index)));
}

QDomNode* QDomNodeList_At(const QDomNodeList* self, int index) {
    return new QDomNode(self->at(static_cast<int>(index)));
}

int QDomNodeList_Length(const QDomNodeList* self) {
    return self->length();
}

int QDomNodeList_Count(const QDomNodeList* self) {
    return self->count();
}

int QDomNodeList_Size(const QDomNodeList* self) {
    return self->size();
}

bool QDomNodeList_IsEmpty(const QDomNodeList* self) {
    return self->isEmpty();
}

void QDomNodeList_Delete(QDomNodeList* self) {
    delete self;
}

QDomDocumentType* QDomDocumentType_new() {
    return new QDomDocumentType();
}

QDomDocumentType* QDomDocumentType_new2(const QDomDocumentType* documentType) {
    return new QDomDocumentType(*documentType);
}

void QDomDocumentType_OperatorAssign(QDomDocumentType* self, const QDomDocumentType* other) {
    self->operator=(*other);
}

libqt_string QDomDocumentType_Name(const QDomDocumentType* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDomNamedNodeMap* QDomDocumentType_Entities(const QDomDocumentType* self) {
    return new QDomNamedNodeMap(self->entities());
}

QDomNamedNodeMap* QDomDocumentType_Notations(const QDomDocumentType* self) {
    return new QDomNamedNodeMap(self->notations());
}

libqt_string QDomDocumentType_PublicId(const QDomDocumentType* self) {
    QString _ret = self->publicId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomDocumentType_SystemId(const QDomDocumentType* self) {
    QString _ret = self->systemId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomDocumentType_InternalSubset(const QDomDocumentType* self) {
    QString _ret = self->internalSubset();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDomDocumentType_NodeType(const QDomDocumentType* self) {
    return static_cast<int>(self->nodeType());
}

void QDomDocumentType_Delete(QDomDocumentType* self) {
    delete self;
}

QDomDocument* QDomDocument_new() {
    return new QDomDocument();
}

QDomDocument* QDomDocument_new2(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomDocument(name_QString);
}

QDomDocument* QDomDocument_new3(const QDomDocumentType* doctype) {
    return new QDomDocument(*doctype);
}

QDomDocument* QDomDocument_new4(const QDomDocument* document) {
    return new QDomDocument(*document);
}

void QDomDocument_OperatorAssign(QDomDocument* self, const QDomDocument* other) {
    self->operator=(*other);
}

QDomElement* QDomDocument_CreateElement(QDomDocument* self, const libqt_string tagName) {
    QString tagName_QString = QString::fromUtf8(tagName.data, tagName.len);
    return new QDomElement(self->createElement(tagName_QString));
}

QDomDocumentFragment* QDomDocument_CreateDocumentFragment(QDomDocument* self) {
    return new QDomDocumentFragment(self->createDocumentFragment());
}

QDomText* QDomDocument_CreateTextNode(QDomDocument* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomText(self->createTextNode(data_QString));
}

QDomComment* QDomDocument_CreateComment(QDomDocument* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomComment(self->createComment(data_QString));
}

QDomCDATASection* QDomDocument_CreateCDATASection(QDomDocument* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomCDATASection(self->createCDATASection(data_QString));
}

QDomProcessingInstruction* QDomDocument_CreateProcessingInstruction(QDomDocument* self, const libqt_string target, const libqt_string data) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomProcessingInstruction(self->createProcessingInstruction(target_QString, data_QString));
}

QDomAttr* QDomDocument_CreateAttribute(QDomDocument* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomAttr(self->createAttribute(name_QString));
}

QDomEntityReference* QDomDocument_CreateEntityReference(QDomDocument* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomEntityReference(self->createEntityReference(name_QString));
}

QDomNodeList* QDomDocument_ElementsByTagName(const QDomDocument* self, const libqt_string tagname) {
    QString tagname_QString = QString::fromUtf8(tagname.data, tagname.len);
    return new QDomNodeList(self->elementsByTagName(tagname_QString));
}

QDomNode* QDomDocument_ImportNode(QDomDocument* self, const QDomNode* importedNode, bool deep) {
    return new QDomNode(self->importNode(*importedNode, deep));
}

QDomElement* QDomDocument_CreateElementNS(QDomDocument* self, const libqt_string nsURI, const libqt_string qName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    return new QDomElement(self->createElementNS(nsURI_QString, qName_QString));
}

QDomAttr* QDomDocument_CreateAttributeNS(QDomDocument* self, const libqt_string nsURI, const libqt_string qName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    return new QDomAttr(self->createAttributeNS(nsURI_QString, qName_QString));
}

QDomNodeList* QDomDocument_ElementsByTagNameNS(QDomDocument* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return new QDomNodeList(self->elementsByTagNameNS(nsURI_QString, localName_QString));
}

QDomElement* QDomDocument_ElementById(QDomDocument* self, const libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    return new QDomElement(self->elementById(elementId_QString));
}

QDomDocumentType* QDomDocument_Doctype(const QDomDocument* self) {
    return new QDomDocumentType(self->doctype());
}

QDomImplementation* QDomDocument_Implementation(const QDomDocument* self) {
    return new QDomImplementation(self->implementation());
}

QDomElement* QDomDocument_DocumentElement(const QDomDocument* self) {
    return new QDomElement(self->documentElement());
}

int QDomDocument_NodeType(const QDomDocument* self) {
    return static_cast<int>(self->nodeType());
}

bool QDomDocument_SetContent(QDomDocument* self, const libqt_string text, bool namespaceProcessing) {
    QByteArray text_QByteArray(text.data, text.len);
    return self->setContent(text_QByteArray, namespaceProcessing);
}

bool QDomDocument_SetContent2(QDomDocument* self, const libqt_string text, bool namespaceProcessing) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->setContent(text_QString, namespaceProcessing);
}

bool QDomDocument_SetContent3(QDomDocument* self, QIODevice* dev, bool namespaceProcessing) {
    return self->setContent(dev, namespaceProcessing);
}

bool QDomDocument_SetContent7(QDomDocument* self, QXmlStreamReader* reader, bool namespaceProcessing) {
    return self->setContent(reader, namespaceProcessing);
}

QDomDocument__ParseResult* QDomDocument_SetContent8(QDomDocument* self, libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomDocument::ParseResult(self->setContent(QAnyStringView(data_QString)));
}

QDomDocument__ParseResult* QDomDocument_SetContent9(QDomDocument* self, QIODevice* device) {
    return new QDomDocument::ParseResult(self->setContent(device));
}

QDomDocument__ParseResult* QDomDocument_SetContent10(QDomDocument* self, QXmlStreamReader* reader) {
    return new QDomDocument::ParseResult(self->setContent(reader));
}

libqt_string QDomDocument_ToString(const QDomDocument* self) {
    QString _ret = self->toString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomDocument_ToByteArray(const QDomDocument* self) {
    QByteArray _qb = self->toByteArray();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDomDocument__ParseResult* QDomDocument_SetContent22(QDomDocument* self, libqt_string data, int options) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QDomDocument::ParseResult(self->setContent(QAnyStringView(data_QString), static_cast<QDomDocument::ParseOptions>(options)));
}

QDomDocument__ParseResult* QDomDocument_SetContent23(QDomDocument* self, QIODevice* device, int options) {
    return new QDomDocument::ParseResult(self->setContent(device, static_cast<QDomDocument::ParseOptions>(options)));
}

QDomDocument__ParseResult* QDomDocument_SetContent24(QDomDocument* self, QXmlStreamReader* reader, int options) {
    return new QDomDocument::ParseResult(self->setContent(reader, static_cast<QDomDocument::ParseOptions>(options)));
}

libqt_string QDomDocument_ToString1(const QDomDocument* self, int indent) {
    QString _ret = self->toString(static_cast<int>(indent));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomDocument_ToByteArray1(const QDomDocument* self, int indent) {
    QByteArray _qb = self->toByteArray(static_cast<int>(indent));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomDocument_Delete(QDomDocument* self) {
    delete self;
}

QDomNamedNodeMap* QDomNamedNodeMap_new() {
    return new QDomNamedNodeMap();
}

QDomNamedNodeMap* QDomNamedNodeMap_new2(const QDomNamedNodeMap* namedNodeMap) {
    return new QDomNamedNodeMap(*namedNodeMap);
}

void QDomNamedNodeMap_OperatorAssign(QDomNamedNodeMap* self, const QDomNamedNodeMap* other) {
    self->operator=(*other);
}

bool QDomNamedNodeMap_OperatorEqual(const QDomNamedNodeMap* self, const QDomNamedNodeMap* other) {
    return (*self == *other);
}

bool QDomNamedNodeMap_OperatorNotEqual(const QDomNamedNodeMap* self, const QDomNamedNodeMap* other) {
    return (*self != *other);
}

QDomNode* QDomNamedNodeMap_NamedItem(const QDomNamedNodeMap* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomNode(self->namedItem(name_QString));
}

QDomNode* QDomNamedNodeMap_SetNamedItem(QDomNamedNodeMap* self, const QDomNode* newNode) {
    return new QDomNode(self->setNamedItem(*newNode));
}

QDomNode* QDomNamedNodeMap_RemoveNamedItem(QDomNamedNodeMap* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomNode(self->removeNamedItem(name_QString));
}

QDomNode* QDomNamedNodeMap_Item(const QDomNamedNodeMap* self, int index) {
    return new QDomNode(self->item(static_cast<int>(index)));
}

QDomNode* QDomNamedNodeMap_NamedItemNS(const QDomNamedNodeMap* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return new QDomNode(self->namedItemNS(nsURI_QString, localName_QString));
}

QDomNode* QDomNamedNodeMap_SetNamedItemNS(QDomNamedNodeMap* self, const QDomNode* newNode) {
    return new QDomNode(self->setNamedItemNS(*newNode));
}

QDomNode* QDomNamedNodeMap_RemoveNamedItemNS(QDomNamedNodeMap* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return new QDomNode(self->removeNamedItemNS(nsURI_QString, localName_QString));
}

int QDomNamedNodeMap_Length(const QDomNamedNodeMap* self) {
    return self->length();
}

int QDomNamedNodeMap_Count(const QDomNamedNodeMap* self) {
    return self->count();
}

int QDomNamedNodeMap_Size(const QDomNamedNodeMap* self) {
    return self->size();
}

bool QDomNamedNodeMap_IsEmpty(const QDomNamedNodeMap* self) {
    return self->isEmpty();
}

bool QDomNamedNodeMap_Contains(const QDomNamedNodeMap* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->contains(name_QString);
}

void QDomNamedNodeMap_Delete(QDomNamedNodeMap* self) {
    delete self;
}

QDomDocumentFragment* QDomDocumentFragment_new() {
    return new QDomDocumentFragment();
}

QDomDocumentFragment* QDomDocumentFragment_new2(const QDomDocumentFragment* documentFragment) {
    return new QDomDocumentFragment(*documentFragment);
}

void QDomDocumentFragment_OperatorAssign(QDomDocumentFragment* self, const QDomDocumentFragment* other) {
    self->operator=(*other);
}

int QDomDocumentFragment_NodeType(const QDomDocumentFragment* self) {
    return static_cast<int>(self->nodeType());
}

void QDomDocumentFragment_Delete(QDomDocumentFragment* self) {
    delete self;
}

QDomCharacterData* QDomCharacterData_new() {
    return new QDomCharacterData();
}

QDomCharacterData* QDomCharacterData_new2(const QDomCharacterData* characterData) {
    return new QDomCharacterData(*characterData);
}

void QDomCharacterData_OperatorAssign(QDomCharacterData* self, const QDomCharacterData* other) {
    self->operator=(*other);
}

libqt_string QDomCharacterData_SubstringData(QDomCharacterData* self, unsigned long offset, unsigned long count) {
    QString _ret = self->substringData(static_cast<unsigned long>(offset), static_cast<unsigned long>(count));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomCharacterData_AppendData(QDomCharacterData* self, const libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    self->appendData(arg_QString);
}

void QDomCharacterData_InsertData(QDomCharacterData* self, unsigned long offset, const libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    self->insertData(static_cast<unsigned long>(offset), arg_QString);
}

void QDomCharacterData_DeleteData(QDomCharacterData* self, unsigned long offset, unsigned long count) {
    self->deleteData(static_cast<unsigned long>(offset), static_cast<unsigned long>(count));
}

void QDomCharacterData_ReplaceData(QDomCharacterData* self, unsigned long offset, unsigned long count, const libqt_string arg) {
    QString arg_QString = QString::fromUtf8(arg.data, arg.len);
    self->replaceData(static_cast<unsigned long>(offset), static_cast<unsigned long>(count), arg_QString);
}

int QDomCharacterData_Length(const QDomCharacterData* self) {
    return self->length();
}

libqt_string QDomCharacterData_Data(const QDomCharacterData* self) {
    QString _ret = self->data();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomCharacterData_SetData(QDomCharacterData* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(data_QString);
}

int QDomCharacterData_NodeType(const QDomCharacterData* self) {
    return static_cast<int>(self->nodeType());
}

void QDomCharacterData_Delete(QDomCharacterData* self) {
    delete self;
}

QDomAttr* QDomAttr_new() {
    return new QDomAttr();
}

QDomAttr* QDomAttr_new2(const QDomAttr* attr) {
    return new QDomAttr(*attr);
}

void QDomAttr_OperatorAssign(QDomAttr* self, const QDomAttr* other) {
    self->operator=(*other);
}

libqt_string QDomAttr_Name(const QDomAttr* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QDomAttr_Specified(const QDomAttr* self) {
    return self->specified();
}

QDomElement* QDomAttr_OwnerElement(const QDomAttr* self) {
    return new QDomElement(self->ownerElement());
}

libqt_string QDomAttr_Value(const QDomAttr* self) {
    QString _ret = self->value();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomAttr_SetValue(QDomAttr* self, const libqt_string value) {
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setValue(value_QString);
}

int QDomAttr_NodeType(const QDomAttr* self) {
    return static_cast<int>(self->nodeType());
}

void QDomAttr_Delete(QDomAttr* self) {
    delete self;
}

QDomElement* QDomElement_new() {
    return new QDomElement();
}

QDomElement* QDomElement_new2(const QDomElement* element) {
    return new QDomElement(*element);
}

void QDomElement_OperatorAssign(QDomElement* self, const QDomElement* other) {
    self->operator=(*other);
}

libqt_string QDomElement_Attribute(const QDomElement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->attribute(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomElement_SetAttribute(QDomElement* self, const libqt_string name, const libqt_string value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setAttribute(name_QString, value_QString);
}

void QDomElement_SetAttribute2(QDomElement* self, const libqt_string name, long long value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<qlonglong>(value));
}

void QDomElement_SetAttribute3(QDomElement* self, const libqt_string name, unsigned long long value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<qulonglong>(value));
}

void QDomElement_SetAttribute4(QDomElement* self, const libqt_string name, int value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<int>(value));
}

void QDomElement_SetAttribute5(QDomElement* self, const libqt_string name, unsigned int value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<uint>(value));
}

void QDomElement_SetAttribute6(QDomElement* self, const libqt_string name, float value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<float>(value));
}

void QDomElement_SetAttribute7(QDomElement* self, const libqt_string name, double value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setAttribute(name_QString, static_cast<double>(value));
}

void QDomElement_RemoveAttribute(QDomElement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->removeAttribute(name_QString);
}

QDomAttr* QDomElement_AttributeNode(QDomElement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QDomAttr(self->attributeNode(name_QString));
}

QDomAttr* QDomElement_SetAttributeNode(QDomElement* self, const QDomAttr* newAttr) {
    return new QDomAttr(self->setAttributeNode(*newAttr));
}

QDomAttr* QDomElement_RemoveAttributeNode(QDomElement* self, const QDomAttr* oldAttr) {
    return new QDomAttr(self->removeAttributeNode(*oldAttr));
}

QDomNodeList* QDomElement_ElementsByTagName(const QDomElement* self, const libqt_string tagname) {
    QString tagname_QString = QString::fromUtf8(tagname.data, tagname.len);
    return new QDomNodeList(self->elementsByTagName(tagname_QString));
}

bool QDomElement_HasAttribute(const QDomElement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->hasAttribute(name_QString);
}

libqt_string QDomElement_AttributeNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    QString _ret = self->attributeNS(nsURI_QString, localName_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomElement_SetAttributeNS(QDomElement* self, const libqt_string nsURI, const libqt_string qName, const libqt_string value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->setAttributeNS(nsURI_QString, qName_QString, value_QString);
}

void QDomElement_SetAttributeNS2(QDomElement* self, const libqt_string nsURI, const libqt_string qName, int value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    self->setAttributeNS(nsURI_QString, qName_QString, static_cast<int>(value));
}

void QDomElement_SetAttributeNS3(QDomElement* self, const libqt_string nsURI, const libqt_string qName, unsigned int value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    self->setAttributeNS(nsURI_QString, qName_QString, static_cast<uint>(value));
}

void QDomElement_SetAttributeNS4(QDomElement* self, const libqt_string nsURI, const libqt_string qName, long long value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    self->setAttributeNS(nsURI_QString, qName_QString, static_cast<qlonglong>(value));
}

void QDomElement_SetAttributeNS5(QDomElement* self, const libqt_string nsURI, const libqt_string qName, unsigned long long value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    self->setAttributeNS(nsURI_QString, qName_QString, static_cast<qulonglong>(value));
}

void QDomElement_SetAttributeNS6(QDomElement* self, const libqt_string nsURI, const libqt_string qName, double value) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString qName_QString = QString::fromUtf8(qName.data, qName.len);
    self->setAttributeNS(nsURI_QString, qName_QString, static_cast<double>(value));
}

void QDomElement_RemoveAttributeNS(QDomElement* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    self->removeAttributeNS(nsURI_QString, localName_QString);
}

QDomAttr* QDomElement_AttributeNodeNS(QDomElement* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return new QDomAttr(self->attributeNodeNS(nsURI_QString, localName_QString));
}

QDomAttr* QDomElement_SetAttributeNodeNS(QDomElement* self, const QDomAttr* newAttr) {
    return new QDomAttr(self->setAttributeNodeNS(*newAttr));
}

QDomNodeList* QDomElement_ElementsByTagNameNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return new QDomNodeList(self->elementsByTagNameNS(nsURI_QString, localName_QString));
}

bool QDomElement_HasAttributeNS(const QDomElement* self, const libqt_string nsURI, const libqt_string localName) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    return self->hasAttributeNS(nsURI_QString, localName_QString);
}

libqt_string QDomElement_TagName(const QDomElement* self) {
    QString _ret = self->tagName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomElement_SetTagName(QDomElement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setTagName(name_QString);
}

QDomNamedNodeMap* QDomElement_Attributes(const QDomElement* self) {
    return new QDomNamedNodeMap(self->attributes());
}

int QDomElement_NodeType(const QDomElement* self) {
    return static_cast<int>(self->nodeType());
}

libqt_string QDomElement_Text(const QDomElement* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomElement_Attribute2(const QDomElement* self, const libqt_string name, const libqt_string defValue) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString defValue_QString = QString::fromUtf8(defValue.data, defValue.len);
    QString _ret = self->attribute(name_QString, defValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomElement_AttributeNS3(const QDomElement* self, const libqt_string nsURI, const libqt_string localName, const libqt_string defValue) {
    QString nsURI_QString = QString::fromUtf8(nsURI.data, nsURI.len);
    QString localName_QString = QString::fromUtf8(localName.data, localName.len);
    QString defValue_QString = QString::fromUtf8(defValue.data, defValue.len);
    QString _ret = self->attributeNS(nsURI_QString, localName_QString, defValue_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomElement_Delete(QDomElement* self) {
    delete self;
}

QDomText* QDomText_new() {
    return new QDomText();
}

QDomText* QDomText_new2(const QDomText* text) {
    return new QDomText(*text);
}

void QDomText_OperatorAssign(QDomText* self, const QDomText* other) {
    self->operator=(*other);
}

QDomText* QDomText_SplitText(QDomText* self, int offset) {
    return new QDomText(self->splitText(static_cast<int>(offset)));
}

int QDomText_NodeType(const QDomText* self) {
    return static_cast<int>(self->nodeType());
}

void QDomText_Delete(QDomText* self) {
    delete self;
}

QDomComment* QDomComment_new() {
    return new QDomComment();
}

QDomComment* QDomComment_new2(const QDomComment* comment) {
    return new QDomComment(*comment);
}

void QDomComment_OperatorAssign(QDomComment* self, const QDomComment* other) {
    self->operator=(*other);
}

int QDomComment_NodeType(const QDomComment* self) {
    return static_cast<int>(self->nodeType());
}

void QDomComment_Delete(QDomComment* self) {
    delete self;
}

QDomCDATASection* QDomCDATASection_new() {
    return new QDomCDATASection();
}

QDomCDATASection* QDomCDATASection_new2(const QDomCDATASection* cdataSection) {
    return new QDomCDATASection(*cdataSection);
}

void QDomCDATASection_OperatorAssign(QDomCDATASection* self, const QDomCDATASection* other) {
    self->operator=(*other);
}

int QDomCDATASection_NodeType(const QDomCDATASection* self) {
    return static_cast<int>(self->nodeType());
}

void QDomCDATASection_Delete(QDomCDATASection* self) {
    delete self;
}

QDomNotation* QDomNotation_new() {
    return new QDomNotation();
}

QDomNotation* QDomNotation_new2(const QDomNotation* notation) {
    return new QDomNotation(*notation);
}

void QDomNotation_OperatorAssign(QDomNotation* self, const QDomNotation* other) {
    self->operator=(*other);
}

libqt_string QDomNotation_PublicId(const QDomNotation* self) {
    QString _ret = self->publicId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomNotation_SystemId(const QDomNotation* self) {
    QString _ret = self->systemId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDomNotation_NodeType(const QDomNotation* self) {
    return static_cast<int>(self->nodeType());
}

void QDomNotation_Delete(QDomNotation* self) {
    delete self;
}

QDomEntity* QDomEntity_new() {
    return new QDomEntity();
}

QDomEntity* QDomEntity_new2(const QDomEntity* entity) {
    return new QDomEntity(*entity);
}

void QDomEntity_OperatorAssign(QDomEntity* self, const QDomEntity* other) {
    self->operator=(*other);
}

libqt_string QDomEntity_PublicId(const QDomEntity* self) {
    QString _ret = self->publicId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomEntity_SystemId(const QDomEntity* self) {
    QString _ret = self->systemId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomEntity_NotationName(const QDomEntity* self) {
    QString _ret = self->notationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QDomEntity_NodeType(const QDomEntity* self) {
    return static_cast<int>(self->nodeType());
}

void QDomEntity_Delete(QDomEntity* self) {
    delete self;
}

QDomEntityReference* QDomEntityReference_new() {
    return new QDomEntityReference();
}

QDomEntityReference* QDomEntityReference_new2(const QDomEntityReference* entityReference) {
    return new QDomEntityReference(*entityReference);
}

void QDomEntityReference_OperatorAssign(QDomEntityReference* self, const QDomEntityReference* other) {
    self->operator=(*other);
}

int QDomEntityReference_NodeType(const QDomEntityReference* self) {
    return static_cast<int>(self->nodeType());
}

void QDomEntityReference_Delete(QDomEntityReference* self) {
    delete self;
}

QDomProcessingInstruction* QDomProcessingInstruction_new() {
    return new QDomProcessingInstruction();
}

QDomProcessingInstruction* QDomProcessingInstruction_new2(const QDomProcessingInstruction* processingInstruction) {
    return new QDomProcessingInstruction(*processingInstruction);
}

void QDomProcessingInstruction_OperatorAssign(QDomProcessingInstruction* self, const QDomProcessingInstruction* other) {
    self->operator=(*other);
}

libqt_string QDomProcessingInstruction_Target(const QDomProcessingInstruction* self) {
    QString _ret = self->target();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDomProcessingInstruction_Data(const QDomProcessingInstruction* self) {
    QString _ret = self->data();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDomProcessingInstruction_SetData(QDomProcessingInstruction* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->setData(data_QString);
}

int QDomProcessingInstruction_NodeType(const QDomProcessingInstruction* self) {
    return static_cast<int>(self->nodeType());
}

void QDomProcessingInstruction_Delete(QDomProcessingInstruction* self) {
    delete self;
}

QDomDocument__ParseResult* QDomDocument__ParseResult_new(const QDomDocument__ParseResult* param1) {
    return new QDomDocument::ParseResult(*param1);
}

libqt_string QDomDocument__ParseResult_ErrorMessage(const QDomDocument__ParseResult* self) {
    QString errorMessage_ret = self->errorMessage;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray errorMessage_b = errorMessage_ret.toUtf8();
    libqt_string errorMessage_str;
    errorMessage_str.len = errorMessage_b.length();
    errorMessage_str.data = static_cast<const char*>(malloc(errorMessage_str.len + 1));
    memcpy((void*)errorMessage_str.data, errorMessage_b.data(), errorMessage_str.len);
    ((char*)errorMessage_str.data)[errorMessage_str.len] = '\0';
    return errorMessage_str;
}

void QDomDocument__ParseResult_SetErrorMessage(QDomDocument__ParseResult* self, libqt_string errorMessage) {
    QString errorMessage_QString = QString::fromUtf8(errorMessage.data, errorMessage.len);
    self->errorMessage = errorMessage_QString;
}

ptrdiff_t QDomDocument__ParseResult_ErrorLine(const QDomDocument__ParseResult* self) {
    return static_cast<ptrdiff_t>(self->errorLine);
}

void QDomDocument__ParseResult_SetErrorLine(QDomDocument__ParseResult* self, ptrdiff_t errorLine) {
    self->errorLine = (qsizetype)(errorLine);
}

ptrdiff_t QDomDocument__ParseResult_ErrorColumn(const QDomDocument__ParseResult* self) {
    return static_cast<ptrdiff_t>(self->errorColumn);
}

void QDomDocument__ParseResult_SetErrorColumn(QDomDocument__ParseResult* self, ptrdiff_t errorColumn) {
    self->errorColumn = (qsizetype)(errorColumn);
}

bool QDomDocument__ParseResult_ToBool(const QDomDocument__ParseResult* self) {
    return self->operator bool();
}

void QDomDocument__ParseResult_OperatorAssign(QDomDocument__ParseResult* self, const QDomDocument__ParseResult* param1) {
    self->operator=(*param1);
}

void QDomDocument__ParseResult_Delete(QDomDocument__ParseResult* self) {
    delete self;
}
