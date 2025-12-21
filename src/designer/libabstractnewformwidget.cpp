#include <QDesignerFormEditorInterface>
#include <QDesignerNewFormWidgetInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractnewformwidget.h>
#include "libabstractnewformwidget.h"
#include "libabstractnewformwidget.hxx"

QMetaObject* QDesignerNewFormWidgetInterface_MetaObject(const QDesignerNewFormWidgetInterface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDesignerNewFormWidgetInterface_Metacast(QDesignerNewFormWidgetInterface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDesignerNewFormWidgetInterface_Metacall(QDesignerNewFormWidgetInterface* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool QDesignerNewFormWidgetInterface_HasCurrentTemplate(const QDesignerNewFormWidgetInterface* self) {
    return self->hasCurrentTemplate();
}

QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_CreateNewFormWidget(QDesignerFormEditorInterface* core) {
    return QDesignerNewFormWidgetInterface::createNewFormWidget(core);
}

void QDesignerNewFormWidgetInterface_TemplateActivated(QDesignerNewFormWidgetInterface* self) {
    self->templateActivated();
}

void QDesignerNewFormWidgetInterface_Connect_TemplateActivated(QDesignerNewFormWidgetInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerNewFormWidgetInterface*) = reinterpret_cast<void (*)(QDesignerNewFormWidgetInterface*)>(slot);
    QDesignerNewFormWidgetInterface::connect(self, &QDesignerNewFormWidgetInterface::templateActivated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDesignerNewFormWidgetInterface_CurrentTemplateChanged(QDesignerNewFormWidgetInterface* self, bool templateSelected) {
    self->currentTemplateChanged(templateSelected);
}

void QDesignerNewFormWidgetInterface_Connect_CurrentTemplateChanged(QDesignerNewFormWidgetInterface* self, intptr_t slot) {
    void (*slotFunc)(QDesignerNewFormWidgetInterface*, bool) = reinterpret_cast<void (*)(QDesignerNewFormWidgetInterface*, bool)>(slot);
    QDesignerNewFormWidgetInterface::connect(self, &QDesignerNewFormWidgetInterface::currentTemplateChanged, [self, slotFunc](bool templateSelected) {
        bool sigval1 = templateSelected;
        slotFunc(self, sigval1);
    });
}

QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_CreateNewFormWidget2(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerNewFormWidgetInterface::createNewFormWidget(core, parent);
}

void QDesignerNewFormWidgetInterface_Delete(QDesignerNewFormWidgetInterface* self) {
    delete self;
}
