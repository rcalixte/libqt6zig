#include <QDesignerFormEditorInterface>
#include <QDesignerNewFormWidgetInterface>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QString>
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

libqt_string QDesignerNewFormWidgetInterface_Tr(const char* s) {
    auto _ret = QDesignerNewFormWidgetInterface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
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

libqt_string QDesignerNewFormWidgetInterface_Tr2(const char* s, const char* c) {
    auto _ret = QDesignerNewFormWidgetInterface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerNewFormWidgetInterface_Tr3(const char* s, const char* c, int n) {
    auto _ret = QDesignerNewFormWidgetInterface::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QDesignerNewFormWidgetInterface* QDesignerNewFormWidgetInterface_CreateNewFormWidget2(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerNewFormWidgetInterface::createNewFormWidget(core, parent);
}

void QDesignerNewFormWidgetInterface_Delete(QDesignerNewFormWidgetInterface* self) {
    delete self;
}
