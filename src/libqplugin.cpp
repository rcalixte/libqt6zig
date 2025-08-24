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

size_t QPluginMetaData_Size(const QPluginMetaData* self) {
    return self->size;
}

void QPluginMetaData_SetSize(QPluginMetaData* self, size_t size) {
    self->size = static_cast<size_t>(size);
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

unsigned char QPluginMetaData__Header_Version(const QPluginMetaData__Header* self) {
    return static_cast<unsigned char>(self->version);
}

void QPluginMetaData__Header_SetVersion(QPluginMetaData__Header* self, unsigned char version) {
    self->version = static_cast<quint8>(version);
}

unsigned char QPluginMetaData__Header_MajorVersion(const QPluginMetaData__Header* self) {
    return static_cast<unsigned char>(self->qt_major_version);
}

void QPluginMetaData__Header_SetQtMajorVersion(QPluginMetaData__Header* self, unsigned char qt_major_version) {
    self->qt_major_version = static_cast<quint8>(qt_major_version);
}

unsigned char QPluginMetaData__Header_MinorVersion(const QPluginMetaData__Header* self) {
    return static_cast<unsigned char>(self->qt_minor_version);
}

void QPluginMetaData__Header_SetQtMinorVersion(QPluginMetaData__Header* self, unsigned char qt_minor_version) {
    self->qt_minor_version = static_cast<quint8>(qt_minor_version);
}

unsigned char QPluginMetaData__Header_PluginArchRequirements(const QPluginMetaData__Header* self) {
    return static_cast<unsigned char>(self->plugin_arch_requirements);
}

void QPluginMetaData__Header_SetPluginArchRequirements(QPluginMetaData__Header* self, unsigned char plugin_arch_requirements) {
    self->plugin_arch_requirements = static_cast<quint8>(plugin_arch_requirements);
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

QPluginMetaData__Header* QPluginMetaData__MagicHeader_Header(const QPluginMetaData__MagicHeader* self) {
    return new QPluginMetaData::Header(self->header);
}

void QPluginMetaData__MagicHeader_SetHeader(QPluginMetaData__MagicHeader* self, QPluginMetaData__Header* header) {
    self->header = *header;
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

unsigned int QPluginMetaData__ElfNoteHeader_NNamesz(const QPluginMetaData__ElfNoteHeader* self) {
    return static_cast<unsigned int>(self->n_namesz);
}

void QPluginMetaData__ElfNoteHeader_SetNNamesz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_namesz) {
    self->n_namesz = static_cast<quint32>(n_namesz);
}

unsigned int QPluginMetaData__ElfNoteHeader_NDescsz(const QPluginMetaData__ElfNoteHeader* self) {
    return static_cast<unsigned int>(self->n_descsz);
}

void QPluginMetaData__ElfNoteHeader_SetNDescsz(QPluginMetaData__ElfNoteHeader* self, unsigned int n_descsz) {
    self->n_descsz = static_cast<quint32>(n_descsz);
}

unsigned int QPluginMetaData__ElfNoteHeader_NType(const QPluginMetaData__ElfNoteHeader* self) {
    return static_cast<unsigned int>(self->n_type);
}

void QPluginMetaData__ElfNoteHeader_SetNType(QPluginMetaData__ElfNoteHeader* self, unsigned int n_type) {
    self->n_type = static_cast<quint32>(n_type);
}

QPluginMetaData__Header* QPluginMetaData__ElfNoteHeader_Header(const QPluginMetaData__ElfNoteHeader* self) {
    return new QPluginMetaData::Header(self->header);
}

void QPluginMetaData__ElfNoteHeader_SetHeader(QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__Header* header) {
    self->header = *header;
}

void QPluginMetaData__ElfNoteHeader_Delete(QPluginMetaData__ElfNoteHeader* self) {
    delete self;
}
