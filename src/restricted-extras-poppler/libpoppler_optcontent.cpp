#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__LinkOCGState
#define WORKAROUND_INNER_CLASS_DEFINITION_Poppler__OptContentModel
#include <QAbstractItemModel>
#include <QDataStream>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <poppler-optcontent.h>
#include "libpoppler_optcontent.h"
#include "libpoppler_optcontent.hxx"

QMetaObject* Poppler__OptContentModel_MetaObject(const Poppler__OptContentModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* Poppler__OptContentModel_Metacast(Poppler__OptContentModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Poppler__OptContentModel_Metacall(Poppler__OptContentModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

QModelIndex* Poppler__OptContentModel_Index(const Poppler__OptContentModel* self, int row, int column, const QModelIndex* parent) {
    return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* Poppler__OptContentModel_Parent(const Poppler__OptContentModel* self, const QModelIndex* child) {
    return new QModelIndex(self->parent(*child));
}

int Poppler__OptContentModel_RowCount(const Poppler__OptContentModel* self, const QModelIndex* parent) {
    return self->rowCount(*parent);
}

int Poppler__OptContentModel_ColumnCount(const Poppler__OptContentModel* self, const QModelIndex* parent) {
    return self->columnCount(*parent);
}

QVariant* Poppler__OptContentModel_Data(const Poppler__OptContentModel* self, const QModelIndex* index, int role) {
    return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool Poppler__OptContentModel_SetData(Poppler__OptContentModel* self, const QModelIndex* index, const QVariant* value, int role) {
    return self->setData(*index, *value, static_cast<int>(role));
}

int Poppler__OptContentModel_Flags(const Poppler__OptContentModel* self, const QModelIndex* index) {
    return static_cast<int>(self->flags(*index));
}

QVariant* Poppler__OptContentModel_HeaderData(const Poppler__OptContentModel* self, int section, int orientation, int role) {
    return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

void Poppler__OptContentModel_ApplyLink(Poppler__OptContentModel* self, Poppler__LinkOCGState* link) {
    self->applyLink(link);
}

void Poppler__OptContentModel_Delete(Poppler__OptContentModel* self) {
    delete self;
}
