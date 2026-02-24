#include <QAnyStringView>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QXmlStreamAttribute>
#include <QXmlStreamAttributes>
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

void QXmlStreamAttribute_Delete(QXmlStreamAttribute* self) {
    delete self;
}

QXmlStreamAttributes* QXmlStreamAttributes_new() {
    return new QXmlStreamAttributes();
}

void QXmlStreamAttributes_Append(QXmlStreamAttributes* self, const libqt_string namespaceUri, const libqt_string name, const libqt_string value) {
    QString namespaceUri_QString = QString::fromUtf8(namespaceUri.data, namespaceUri.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->append(namespaceUri_QString, name_QString, value_QString);
}

void QXmlStreamAttributes_Append2(QXmlStreamAttributes* self, const libqt_string qualifiedName, const libqt_string value) {
    QString qualifiedName_QString = QString::fromUtf8(qualifiedName.data, qualifiedName.len);
    QString value_QString = QString::fromUtf8(value.data, value.len);
    self->append(qualifiedName_QString, value_QString);
}

bool QXmlStreamAttributes_HasAttribute(const QXmlStreamAttributes* self, const char* qualifiedName) {
    return self->hasAttribute(QAnyStringView(qualifiedName));
}

bool QXmlStreamAttributes_HasAttribute2(const QXmlStreamAttributes* self, const char* namespaceUri, const char* name) {
    return self->hasAttribute(QAnyStringView(namespaceUri), QAnyStringView(name));
}

void QXmlStreamAttributes_Delete(QXmlStreamAttributes* self) {
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

QXmlStreamNamespaceDeclaration* QXmlStreamNamespaceDeclaration_new3(const QXmlStreamNamespaceDeclaration* param1) {
    return new QXmlStreamNamespaceDeclaration(*param1);
}

void QXmlStreamNamespaceDeclaration_Delete(QXmlStreamNamespaceDeclaration* self) {
    delete self;
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new() {
    return new QXmlStreamNotationDeclaration();
}

QXmlStreamNotationDeclaration* QXmlStreamNotationDeclaration_new2(const QXmlStreamNotationDeclaration* param1) {
    return new QXmlStreamNotationDeclaration(*param1);
}

void QXmlStreamNotationDeclaration_Delete(QXmlStreamNotationDeclaration* self) {
    delete self;
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new() {
    return new QXmlStreamEntityDeclaration();
}

QXmlStreamEntityDeclaration* QXmlStreamEntityDeclaration_new2(const QXmlStreamEntityDeclaration* param1) {
    return new QXmlStreamEntityDeclaration(*param1);
}

void QXmlStreamEntityDeclaration_Delete(QXmlStreamEntityDeclaration* self) {
    delete self;
}

QXmlStreamEntityResolver* QXmlStreamEntityResolver_new() {
    return new VirtualQXmlStreamEntityResolver();
}

libqt_string QXmlStreamEntityResolver_ResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId) {
    QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
    QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        QString _ret = self->resolveEntity(publicId_QString, systemId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQXmlStreamEntityResolver*)self)->resolveEntity(publicId_QString, systemId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_string QXmlStreamEntityResolver_ResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        QString _ret = self->resolveUndeclaredEntity(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQXmlStreamEntityResolver*)self)->resolveUndeclaredEntity(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QXmlStreamEntityResolver_SuperResolveEntity(QXmlStreamEntityResolver* self, const libqt_string publicId, const libqt_string systemId) {
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    QString publicId_QString = QString::fromUtf8(publicId.data, publicId.len);
    QString systemId_QString = QString::fromUtf8(systemId.data, systemId.len);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveEntity_IsBase(true);
        QString _ret = vqxmlstreamentityresolver->resolveEntity(publicId_QString, systemId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QXmlStreamEntityResolver::resolveEntity(publicId_QString, systemId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QXmlStreamEntityResolver_OnResolveEntity(QXmlStreamEntityResolver* self, intptr_t slot) {
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveEntity_Callback(reinterpret_cast<VirtualQXmlStreamEntityResolver::QXmlStreamEntityResolver_ResolveEntity_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QXmlStreamEntityResolver_SuperResolveUndeclaredEntity(QXmlStreamEntityResolver* self, const libqt_string name) {
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveUndeclaredEntity_IsBase(true);
        QString _ret = vqxmlstreamentityresolver->resolveUndeclaredEntity(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QXmlStreamEntityResolver::resolveUndeclaredEntity(name_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QXmlStreamEntityResolver_OnResolveUndeclaredEntity(QXmlStreamEntityResolver* self, intptr_t slot) {
    auto* vqxmlstreamentityresolver = dynamic_cast<VirtualQXmlStreamEntityResolver*>(self);
    if (vqxmlstreamentityresolver && vqxmlstreamentityresolver->isVirtualQXmlStreamEntityResolver) {
        vqxmlstreamentityresolver->setQXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback(reinterpret_cast<VirtualQXmlStreamEntityResolver::QXmlStreamEntityResolver_ResolveUndeclaredEntity_Callback>(slot));
    }
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

QXmlStreamReader* QXmlStreamReader_new3(const char* data) {
    return new QXmlStreamReader(QAnyStringView(data));
}

void QXmlStreamReader_SetDevice(QXmlStreamReader* self, QIODevice* device) {
    self->setDevice(device);
}

QIODevice* QXmlStreamReader_Device(const QXmlStreamReader* self) {
    return self->device();
}

void QXmlStreamReader_AddData(QXmlStreamReader* self, const char* data) {
    self->addData(QAnyStringView(data));
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

bool QXmlStreamReader_HasStandaloneDeclaration(const QXmlStreamReader* self) {
    return self->hasStandaloneDeclaration();
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

QXmlStreamAttributes* QXmlStreamReader_Attributes(const QXmlStreamReader* self) {
    return new QXmlStreamAttributes(self->attributes());
}

libqt_string QXmlStreamReader_ReadElementText(QXmlStreamReader* self) {
    QString _ret = self->readElementText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QXmlStreamNamespaceDeclaration* */ QXmlStreamReader_NamespaceDeclarations(const QXmlStreamReader* self) {
    QList<QXmlStreamNamespaceDeclaration> _ret = self->namespaceDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamNamespaceDeclaration** _arr = static_cast<QXmlStreamNamespaceDeclaration**>(malloc(sizeof(QXmlStreamNamespaceDeclaration*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QXmlStreamNamespaceDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QXmlStreamReader_AddExtraNamespaceDeclaration(QXmlStreamReader* self, const QXmlStreamNamespaceDeclaration* extraNamespaceDeclaraction) {
    self->addExtraNamespaceDeclaration(*extraNamespaceDeclaraction);
}

void QXmlStreamReader_AddExtraNamespaceDeclarations(QXmlStreamReader* self, const libqt_list /* of QXmlStreamNamespaceDeclaration* */ extraNamespaceDeclaractions) {
    QList<QXmlStreamNamespaceDeclaration> extraNamespaceDeclaractions_QList;
    extraNamespaceDeclaractions_QList.reserve(extraNamespaceDeclaractions.len);
    QXmlStreamNamespaceDeclaration** extraNamespaceDeclaractions_arr = static_cast<QXmlStreamNamespaceDeclaration**>(extraNamespaceDeclaractions.data);
    for (size_t i = 0; i < extraNamespaceDeclaractions.len; ++i) {
        extraNamespaceDeclaractions_QList.push_back(*(extraNamespaceDeclaractions_arr[i]));
    }
    self->addExtraNamespaceDeclarations(extraNamespaceDeclaractions_QList);
}

libqt_list /* of QXmlStreamNotationDeclaration* */ QXmlStreamReader_NotationDeclarations(const QXmlStreamReader* self) {
    QList<QXmlStreamNotationDeclaration> _ret = self->notationDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamNotationDeclaration** _arr = static_cast<QXmlStreamNotationDeclaration**>(malloc(sizeof(QXmlStreamNotationDeclaration*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QXmlStreamNotationDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QXmlStreamEntityDeclaration* */ QXmlStreamReader_EntityDeclarations(const QXmlStreamReader* self) {
    QList<QXmlStreamEntityDeclaration> _ret = self->entityDeclarations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QXmlStreamEntityDeclaration** _arr = static_cast<QXmlStreamEntityDeclaration**>(malloc(sizeof(QXmlStreamEntityDeclaration*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QXmlStreamEntityDeclaration(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QXmlStreamWriter_WriteAttribute(QXmlStreamWriter* self, const char* qualifiedName, const char* value) {
    self->writeAttribute(QAnyStringView(qualifiedName), QAnyStringView(value));
}

void QXmlStreamWriter_WriteAttribute2(QXmlStreamWriter* self, const char* namespaceUri, const char* name, const char* value) {
    self->writeAttribute(QAnyStringView(namespaceUri), QAnyStringView(name), QAnyStringView(value));
}

void QXmlStreamWriter_WriteAttribute3(QXmlStreamWriter* self, const QXmlStreamAttribute* attribute) {
    self->writeAttribute(*attribute);
}

void QXmlStreamWriter_WriteAttributes(QXmlStreamWriter* self, const QXmlStreamAttributes* attributes) {
    self->writeAttributes(*attributes);
}

void QXmlStreamWriter_WriteCDATA(QXmlStreamWriter* self, const char* text) {
    self->writeCDATA(QAnyStringView(text));
}

void QXmlStreamWriter_WriteCharacters(QXmlStreamWriter* self, const char* text) {
    self->writeCharacters(QAnyStringView(text));
}

void QXmlStreamWriter_WriteComment(QXmlStreamWriter* self, const char* text) {
    self->writeComment(QAnyStringView(text));
}

void QXmlStreamWriter_WriteDTD(QXmlStreamWriter* self, const char* dtd) {
    self->writeDTD(QAnyStringView(dtd));
}

void QXmlStreamWriter_WriteEmptyElement(QXmlStreamWriter* self, const char* qualifiedName) {
    self->writeEmptyElement(QAnyStringView(qualifiedName));
}

void QXmlStreamWriter_WriteEmptyElement2(QXmlStreamWriter* self, const char* namespaceUri, const char* name) {
    self->writeEmptyElement(QAnyStringView(namespaceUri), QAnyStringView(name));
}

void QXmlStreamWriter_WriteTextElement(QXmlStreamWriter* self, const char* qualifiedName, const char* text) {
    self->writeTextElement(QAnyStringView(qualifiedName), QAnyStringView(text));
}

void QXmlStreamWriter_WriteTextElement2(QXmlStreamWriter* self, const char* namespaceUri, const char* name, const char* text) {
    self->writeTextElement(QAnyStringView(namespaceUri), QAnyStringView(name), QAnyStringView(text));
}

void QXmlStreamWriter_WriteEndDocument(QXmlStreamWriter* self) {
    self->writeEndDocument();
}

void QXmlStreamWriter_WriteEndElement(QXmlStreamWriter* self) {
    self->writeEndElement();
}

void QXmlStreamWriter_WriteEntityReference(QXmlStreamWriter* self, const char* name) {
    self->writeEntityReference(QAnyStringView(name));
}

void QXmlStreamWriter_WriteNamespace(QXmlStreamWriter* self, const char* namespaceUri) {
    self->writeNamespace(QAnyStringView(namespaceUri));
}

void QXmlStreamWriter_WriteDefaultNamespace(QXmlStreamWriter* self, const char* namespaceUri) {
    self->writeDefaultNamespace(QAnyStringView(namespaceUri));
}

void QXmlStreamWriter_WriteProcessingInstruction(QXmlStreamWriter* self, const char* target) {
    self->writeProcessingInstruction(QAnyStringView(target));
}

void QXmlStreamWriter_WriteStartDocument(QXmlStreamWriter* self) {
    self->writeStartDocument();
}

void QXmlStreamWriter_WriteStartDocument2(QXmlStreamWriter* self, const char* version) {
    self->writeStartDocument(QAnyStringView(version));
}

void QXmlStreamWriter_WriteStartDocument3(QXmlStreamWriter* self, const char* version, bool standalone) {
    self->writeStartDocument(QAnyStringView(version), standalone);
}

void QXmlStreamWriter_WriteStartElement(QXmlStreamWriter* self, const char* qualifiedName) {
    self->writeStartElement(QAnyStringView(qualifiedName));
}

void QXmlStreamWriter_WriteStartElement2(QXmlStreamWriter* self, const char* namespaceUri, const char* name) {
    self->writeStartElement(QAnyStringView(namespaceUri), QAnyStringView(name));
}

void QXmlStreamWriter_WriteCurrentToken(QXmlStreamWriter* self, const QXmlStreamReader* reader) {
    self->writeCurrentToken(*reader);
}

bool QXmlStreamWriter_HasError(const QXmlStreamWriter* self) {
    return self->hasError();
}

void QXmlStreamWriter_WriteNamespace2(QXmlStreamWriter* self, const char* namespaceUri, const char* prefix) {
    self->writeNamespace(QAnyStringView(namespaceUri), QAnyStringView(prefix));
}

void QXmlStreamWriter_WriteProcessingInstruction2(QXmlStreamWriter* self, const char* target, const char* data) {
    self->writeProcessingInstruction(QAnyStringView(target), QAnyStringView(data));
}

void QXmlStreamWriter_Delete(QXmlStreamWriter* self) {
    delete self;
}
