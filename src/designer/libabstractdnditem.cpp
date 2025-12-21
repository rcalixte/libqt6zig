#include <QDesignerDnDItemInterface>
#include <QPoint>
#include <QWidget>
#include <abstractdnditem.h>
#include "libabstractdnditem.h"
#include "libabstractdnditem.hxx"

QWidget* QDesignerDnDItemInterface_Widget(const QDesignerDnDItemInterface* self) {
    return self->widget();
}

QWidget* QDesignerDnDItemInterface_Decoration(const QDesignerDnDItemInterface* self) {
    return self->decoration();
}

QPoint* QDesignerDnDItemInterface_HotSpot(const QDesignerDnDItemInterface* self) {
    return new QPoint(self->hotSpot());
}

int QDesignerDnDItemInterface_Type(const QDesignerDnDItemInterface* self) {
    return static_cast<int>(self->type());
}

QWidget* QDesignerDnDItemInterface_Source(const QDesignerDnDItemInterface* self) {
    return self->source();
}

void QDesignerDnDItemInterface_Delete(QDesignerDnDItemInterface* self) {
    delete self;
}
