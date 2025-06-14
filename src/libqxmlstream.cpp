#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamAttribute>
#include <QXmlStreamEntityDeclaration>
#include <QXmlStreamEntityResolver>
#include <QXmlStreamNamespaceDeclaration>
#include <QXmlStreamNotationDeclaration>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <qxmlstream.h>
#include "libqxmlstream.h"
#include "libqxmlstream.hxx"

QXmlStreamAttribute* QXmlStreamAttribute_new() {
    return new QXmlStreamAttribute();
}

QXmlStreamAttribute* QXmlStreamAttribute_new2(const libqt_string qualifiedName, const libqt_string value) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new QXmlStreamAttribute(qualifiedName_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new3(const libqt_string namespaceUri, const libqt_string name, const libqt_string value) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    return new QXmlStreamAttribute(namespaceUri_QString, name_QString, value_QString);
}

QXmlStreamAttribute* QXmlStreamAttribute_new4(const QXmlStreamAttribute* param1) {
    return new QXmlStreamAttribute(*param1);
}

bool QXmlStreamAttribute_IsDefault(const QXmlStreamAttribute* self) {
    return self->isDefault();
}

bool QXmlStreamAttribute_OperatorEqual(const QXmlStreamAttribute* self, const QXmlStreamAttribute* other) {
    return (*self == *other);
}

bool QXmlStreamAttribute_OperatorNotEqual(const QXmlStreamAttribute* self, const QXmlStreamAttribute* other) {
    return (*self != *other);
}

void QXmlStreamAttribute_OperatorAssign(QXmlStreamAttribute* self, const QXmlStreamAttribute* param1) {
    self->operator=(*param1);
}

void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self) {
    delete self;
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new() {
    return new QXmlStreamNamespaceDeclaration();
}

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new2(const libqt_string prefix, const libqt_string namespaceUri) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    return new QXmlStreamNamespaceDeclaration(prefix_QString, namespaceUri_QString);
}

bool QXmlStreamNamespaceDeclaration_OperatorEqual(const QXmlStreamNamespaceDeclaration* self, const QXmlStreamNamespaceDeclaration* other) {
    return (*self == *other);
}

bool QXmlStreamNamespaceDeclaration_OperatorNotEqual(const QXmlStreamNamespaceDeclaration* self, const QXmlStreamNamespaceDeclaration* other) {
    return (*self != *other);
}

void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self) {
    delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
    return new QXmlStreamNotationDeclaration();
}

bool QXmlStreamNotationDeclaration_OperatorEqual(const QXmlStreamNotationDeclaration* self, const QXmlStreamNotationDeclaration* other) {
    return (*self == *other);
}

bool QXmlStreamNotationDeclaration_OperatorNotEqual(const QXmlStreamNotationDeclaration* self, const QXmlStreamNotationDeclaration* other) {
    return (*self != *other);
}

void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self) {
    delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
    return new QXmlStreamEntityDeclaration();
}

bool QXmlStreamEntityDeclaration_OperatorEqual(const QXmlStreamEntityDeclaration* self, const QXmlStreamEntityDeclaration* other) {
    return (*self == *other);
}

bool QXmlStreamEntityDeclaration_OperatorNotEqual(const QXmlStreamEntityDeclaration* self, const QXmlStreamEntityDeclaration* other) {
    return (*self != *other);
}

void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self) {
    delete self;
}

libqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId) {
    QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
    QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
    QString _ret = self->resolveEntity(publicId_QString, systemId_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->resolveUndeclaredEntity(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXmlStreamEntityResolver_Delete(QXmlStreamEntityResolver* self) {
    delete self;
}

QXmlStreamReader* QXmlStreamReader_new() {
    return new QXmlStreamReader();
}

QXmlStreamReader* QXmlStreamReader_new2(QIODevice* device) {
    return new QXmlStreamReader(device);
}

QXmlStreamReader* QXmlStreamReader_new3(const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    return new QXmlStreamReader(data_QByteArray);
}

QXmlStreamReader* QXmlStreamReader_new4(const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    return new QXmlStreamReader(data_QString);
}

QXmlStreamReader* QXmlStreamReader_new5(const char* data) {
    return new QXmlStreamReader(data);
}

void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self) {
    return self->device();
}

void QXmlStreamReader_AddData(QXmlStreamReader* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->addData(data_QByteArray);
}

void QXmlStreamReader_AddDataWithData(QXmlStreamReader* self, const libqt_string data) {
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->addData(data_QString);
}

void QXmlStreamReader_AddData2(QXmlStreamReader* self, const char* data) {
    self->addData(data);
}

void QXmlStreamReader_Clear(QXmlStreamReader* self) {
    self->clear();
}

bool QXmlStreamReader_AtEnd(const QXmlStreamReader* self) {
    return self->atEnd();
}

int QXmlStreamReader_ReadNext(QXmlStreamReader* self) {
    return static_cast<int>(self->readNext());
}

bool QXmlStreamReader_ReadNextStartElement(QXmlStreamReader* self) {
    return self->readNextStartElement();
}

void QXmlStreamReader_SkipCurrentElement(QXmlStreamReader* self) {
    self->skipCurrentElement();
}

int QXmlStreamReader_TokenType(const QXmlStreamReader* self) {
    return static_cast<int>(self->tokenType());
}

libqt_string QXmlStreamReader_TokenString(const QXmlStreamReader* self) {
    QString _ret = self->tokenString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXmlStreamReader_SetNamespaceProcessing(QXmlStreamReader* self, bool namespaceProcessing) {
    self->setNamespaceProcessing(namespaceProcessing);
}

bool QXmlStreamReader_NamespaceProcessing(const QXmlStreamReader* self) {
    return self->namespaceProcessing();
}

bool QXmlStreamReader_IsStartDocument(const QXmlStreamReader* self) {
    return self->isStartDocument();
}

bool QXmlStreamReader_IsEndDocument(const QXmlStreamReader* self) {
    return self->isEndDocument();
}

bool QXmlStreamReader_IsStartElement(const QXmlStreamReader* self) {
    return self->isStartElement();
}

bool QXmlStreamReader_IsEndElement(const QXmlStreamReader* self) {
    return self->isEndElement();
}

bool QXmlStreamReader_IsCharacters(const QXmlStreamReader* self) {
    return self->isCharacters();
}

bool QXmlStreamReader_IsWhitespace(const QXmlStreamReader* self) {
    return self->isWhitespace();
}

bool QXmlStreamReader_IsCDATA(const QXmlStreamReader* self) {
    return self->isCDATA();
}

bool QXmlStreamReader_IsComment(const QXmlStreamReader* self) {
    return self->isComment();
}

bool QXmlStreamReader_IsDTD(const QXmlStreamReader* self) {
    return self->isDTD();
}

bool QXmlStreamReader_IsEntityReference(const QXmlStreamReader* self) {
    return self->isEntityReference();
}

bool QXmlStreamReader_IsProcessingInstruction(const QXmlStreamReader* self) {
    return self->isProcessingInstruction();
}

bool QXmlStreamReader_IsStandaloneDocument(const QXmlStreamReader* self) {
    return self->isStandaloneDocument();
}

long long QXmlStreamReader_LineNumber(const QXmlStreamReader* self) {
    return static_cast<long long>(self->lineNumber());
}

long long QXmlStreamReader_ColumnNumber(const QXmlStreamReader* self) {
    return static_cast<long long>(self->columnNumber());
}

long long QXmlStreamReader_CharacterOffset(const QXmlStreamReader* self) {
    return static_cast<long long>(self->characterOffset());
}

libqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self) {
    QString _ret = self->readElementText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QXmlStreamNamespaceDeclaration* */ QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self) {
    QXmlStreamNamespaceDeclarations _ret = self->namespaceDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamNamespaceDeclaration** _arr = static_cast<QXmlStreamNamespaceDeclaration**>(malloc(sizeof(QXmlStreamNamespaceDeclaration*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QXmlStreamNamespaceDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, const QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
    self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, const libqt_list /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions) {
    QXmlStreamNamespaceDeclarations extraNamespaceDeclaractions_QList;
    extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions.len);
    QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = static_cast<QXmlStreamNamespaceDeclaration**>(extraNamespaceDeclaractions.data);
    for (size_t i = 0; i < extraNamespaceDeclaractions.len; ++i) {
        extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions_arr[i]));
    }
    self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

libqt_list /* of QXmlStreamNotationDeclaration* */ QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self) {
    QXmlStreamNotationDeclarations _ret = self->notationDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamNotationDeclaration** _arr = static_cast<QXmlStreamNotationDeclaration**>(malloc(sizeof(QXmlStreamNotationDeclaration*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QXmlStreamNotationDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QXmlStreamEntityDeclaration* */ QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self) {
    QXmlStreamEntityDeclarations _ret = self->entityDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamEntityDeclaration** _arr = static_cast<QXmlStreamEntityDeclaration**>(malloc(sizeof(QXmlStreamEntityDeclaration*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QXmlStreamEntityDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QXmlStreamReader_EntityExpansionLimit(const QXmlStreamReader* self) {
    return self->entityExpansionLimit();
}

void QXmlStreamReader_SetEntityExpansionLimit(QXmlStreamReader* self, int limit) {
    self->setEntityExpansionLimit(static_cast<int>(limit));
}

void QXmlStreamReader_RaiseError(QXmlStreamReader* self) {
    self->raiseError();
}

libqt_string QXmlStreamReader_ErrorString(const QXmlStreamReader* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QXmlStreamReader_Error(const QXmlStreamReader* self) {
    return static_cast<int>(self->error());
}

bool QXmlStreamReader_HasError(const QXmlStreamReader* self) {
    return self->hasError();
}

void QXmlStreamReader_SetEntityResolver(QXmlStreamReader* self, QXmlStreamEntityResolver* resolver) {
    self->setEntityResolver(resolver);
}

QXmlStreamEntityResolver* QXmlStreamReader_EntityResolver(const QXmlStreamReader* self) {
    return self->entityResolver();
}

libqt_string QXmlStreamReader_ReadElementText1(QXmlStreamReader* self, int behaviour) {
    QString _ret = self->readElementText(static_cast<QXmlStreamReader::ReadElementTextBehaviour>(behaviour));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QXmlStreamReader_RaiseError1(QXmlStreamReader* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->raiseError(message_QString);
}

void QXmlStreamReader_Delete(QXmlStreamReader* self) {
    delete self;
}

QXmlStreamWriter* QXmlStreamWriter_new() {
    return new QXmlStreamWriter();
}

QXmlStreamWriter* QXmlStreamWriter_new2(QIODevice* device) {
    return new QXmlStreamWriter(device);
}

void QXmlStreamWriter_SetDevice(QXmlStreamWriter* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QXmlStreamWriter_Device(const QXmlStreamWriter* self) {
    return self->device();
}

void QXmlStreamWriter_SetAutoFormatting(QXmlStreamWriter* self, bool autoFormatting) {
    self->setAutoFormatting(autoFormatting);
}

bool QXmlStreamWriter_AutoFormatting(const QXmlStreamWriter* self) {
    return self->autoFormatting();
}

void QXmlStreamWriter_SetAutoFormattingIndent(QXmlStreamWriter* self, int spacesOrTabs) {
    self->setAutoFormattingIndent(static_cast<int>(spacesOrTabs));
}

int QXmlStreamWriter_AutoFormattingIndent(const QXmlStreamWriter* self) {
    return self->autoFormattingIndent();
}

void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, const libqt_string qualifiedName, const libqt_string value) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeAttribute(qualifiedName_QString, value_QString);
}

void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, const libqt_string namespaceUri, const libqt_string name, const libqt_string value) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->writeAttribute(namespaceUri_QString, name_QString, value_QString);
}

void QXmlStreamWriter_WriteAttributeWithAttribute(QXmlStreamWriter* self, const QXmlStreamAttribute* attribute) {
    self->writeAttribute(*attribute);
}

void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->writeCDATA(text_QString);
}

void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->writeCharacters(text_QString);
}

void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->writeComment(text_QString);
}

void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, const libqt_string dtd) {
    QString dtd_QString = QString::fromUtf8(dtd.data, dtd.len);
    self->writeDTD(dtd_QString);
}

void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, const libqt_string qualifiedName) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    self->writeEmptyElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, const libqt_string namespaceUri, const libqt_string name) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->writeEmptyElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, const libqt_string qualifiedName, const libqt_string text) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->writeTextElement(qualifiedName_QString, text_QString);
}

void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, const libqt_string namespaceUri, const libqt_string name, const libqt_string text) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->writeTextElement(namespaceUri_QString, name_QString, text_QString);
}

void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self) {
    self->writeEndDocument();
}

void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self) {
    self->writeEndElement();
}

void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->writeEntityReference(name_QString);
}

void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, const libqt_string namespaceUri) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    self->writeNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, const libqt_string namespaceUri) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    self->writeDefaultNamespace(namespaceUri_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, const libqt_string target) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    self->writeProcessingInstruction(target_QString);
}

void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self) {
    self->writeStartDocument();
}

void QXmlStreamWriter_WriteStartDocumentWithVersion(QXmlStreamWriter* self, const libqt_string version) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->writeStartDocument(version_QString);
}

void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, const libqt_string version, bool standalone) {
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->writeStartDocument(version_QString, standalone);
}

void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, const libqt_string qualifiedName) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    self->writeStartElement(qualifiedName_QString);
}

void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, const libqt_string namespaceUri, const libqt_string name) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->writeStartElement(namespaceUri_QString, name_QString);
}

void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, const QXmlStreamReader* reader) {
    self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self) {
    return self->hasError();
}

void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, const libqt_string namespaceUri, const libqt_string prefix) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->writeNamespace(namespaceUri_QString, prefix_QString);
}

void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, const libqt_string target, const libqt_string data) {
    QString target_QString = QString::fromUtf8(target.data, target.len);
    QString data_QString = QString::fromUtf8(data.data, data.len);
    self->writeProcessingInstruction(target_QString, data_QString);
}

void QXmlStreamWriter_Delete(QXmlStreamWriter* self) {
    delete self;
}
