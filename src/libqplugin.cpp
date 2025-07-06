#include <QJsonObject>
#include <QPluginMetaData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__ElfNoteHeader
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__Header
#define WORKAROUND_INNER_CLASS_DEFINITION_QPluginMetaData__MagicHeader
#include <QStaticPlugin>
#include <qplugin.h>
#include "libqplugin.h"
#include "libqplugin.hxx"

unsigned char QPluginMetaData_ArchRequirements() {
    return static_cast<unsigned char>(QPluginMetaData::archRequirements());
}

void QPluginMetaData_Delete(QPluginMetaData* self) {
    delete self;
}

QStaticPlugin* QStaticPlugin_new(const QStaticPlugin* other) {
    return new QStaticPlugin(*other);
}

QStaticPlugin* QStaticPlugin_new2(QStaticPlugin* other) {
    return new QStaticPlugin(std::move(*other));
}

QStaticPlugin* QStaticPlugin_new3(const QStaticPlugin* param1) {
    return new QStaticPlugin(*param1);
}

void QStaticPlugin_CopyAssign(QStaticPlugin* self, QStaticPlugin* other) {
    *self = *other;
}

void QStaticPlugin_MoveAssign(QStaticPlugin* self, QStaticPlugin* other) {
    *self = std::move(*other);
}

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self) {
    return new QJsonObject(self->metaData());
}

void QStaticPlugin_Delete(QStaticPlugin* self) {
    delete self;
}

QPluginMetaData__Header* QPluginMetaData__Header_new(const QPluginMetaData__Header* other) {
    return new QPluginMetaData::Header(*other);
}

QPluginMetaData__Header* QPluginMetaData__Header_new2(QPluginMetaData__Header* other) {
    return new QPluginMetaData::Header(std::move(*other));
}

QPluginMetaData__Header* QPluginMetaData__Header_new3(const QPluginMetaData__Header* param1) {
    return new QPluginMetaData::Header(*param1);
}

void QPluginMetaData__Header_CopyAssign(QPluginMetaData__Header* self, QPluginMetaData__Header* other) {
    *self = *other;
}

void QPluginMetaData__Header_MoveAssign(QPluginMetaData__Header* self, QPluginMetaData__Header* other) {
    *self = std::move(*other);
}

void QPluginMetaData__Header_Delete(QPluginMetaData__Header* self) {
    delete self;
}

QPluginMetaData__MagicHeader* QPluginMetaData__MagicHeader_new(const QPluginMetaData__MagicHeader* other) {
    return new QPluginMetaData::MagicHeader(*other);
}

QPluginMetaData__MagicHeader* QPluginMetaData__MagicHeader_new2(QPluginMetaData__MagicHeader* other) {
    return new QPluginMetaData::MagicHeader(std::move(*other));
}

QPluginMetaData__MagicHeader* QPluginMetaData__MagicHeader_new3() {
    return new QPluginMetaData::MagicHeader();
}

void QPluginMetaData__MagicHeader_CopyAssign(QPluginMetaData__MagicHeader* self, QPluginMetaData__MagicHeader* other) {
    *self = *other;
}

void QPluginMetaData__MagicHeader_MoveAssign(QPluginMetaData__MagicHeader* self, QPluginMetaData__MagicHeader* other) {
    *self = std::move(*other);
}

void QPluginMetaData__MagicHeader_Delete(QPluginMetaData__MagicHeader* self) {
    delete self;
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new(const QPluginMetaData__ElfNoteHeader* other) {
    return new QPluginMetaData::ElfNoteHeader(*other);
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new2(QPluginMetaData__ElfNoteHeader* other) {
    return new QPluginMetaData::ElfNoteHeader(std::move(*other));
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new3(unsigned int payloadSize) {
    return new QPluginMetaData::ElfNoteHeader(static_cast<quint32>(payloadSize));
}

QPluginMetaData__ElfNoteHeader* QPluginMetaData__ElfNoteHeader_new4(const QPluginMetaData__ElfNoteHeader* param1) {
    return new QPluginMetaData::ElfNoteHeader(*param1);
}

void QPluginMetaData__ElfNoteHeader_CopyAssign(QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__ElfNoteHeader* other) {
    *self = *other;
}

void QPluginMetaData__ElfNoteHeader_MoveAssign(QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__ElfNoteHeader* other) {
    *self = std::move(*other);
}

void QPluginMetaData__ElfNoteHeader_Delete(QPluginMetaData__ElfNoteHeader* self) {
    delete self;
}
