#include <QTileRules>
#include <qdrawutil.h>
#include "libqdrawutil.h"
#include "libqdrawutil.hxx"

QTileRules* QTileRules_new(const QTileRules* other) {
    return new QTileRules(*other);
}

QTileRules* QTileRules_new2(QTileRules* other) {
    return new QTileRules(std::move(*other));
}

QTileRules* QTileRules_new3(int horizontalRule, int verticalRule) {
    return new QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new4() {
    return new QTileRules();
}

QTileRules* QTileRules_new5(const QTileRules* param1) {
    return new QTileRules(*param1);
}

QTileRules* QTileRules_new6(int rule) {
    return new QTileRules(static_cast<Qt::TileRule>(rule));
}

void QTileRules_CopyAssign(QTileRules* self, QTileRules* other) {
    *self = *other;
}

void QTileRules_MoveAssign(QTileRules* self, QTileRules* other) {
    *self = std::move(*other);
}

int QTileRules_Horizontal(const QTileRules* self) {
    return static_cast<int>(self->horizontal);
}

void QTileRules_SetHorizontal(QTileRules* self, int horizontal) {
    self->horizontal = static_cast<Qt::TileRule>(horizontal);
}

int QTileRules_Vertical(const QTileRules* self) {
    return static_cast<int>(self->vertical);
}

void QTileRules_SetVertical(QTileRules* self, int vertical) {
    self->vertical = static_cast<Qt::TileRule>(vertical);
}

void QTileRules_Delete(QTileRules* self) {
    delete self;
}
