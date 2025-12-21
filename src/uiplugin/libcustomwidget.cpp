#include <QDesignerCustomWidgetCollectionInterface>
#include <QDesignerCustomWidgetInterface>
#include <QDesignerFormEditorInterface>
#include <QIcon>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <customwidget.h>
#include "libcustomwidget.h"
#include "libcustomwidget.hxx"

libqt_string QDesignerCustomWidgetInterface_Name(const QDesignerCustomWidgetInterface* self) {
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

libqt_string QDesignerCustomWidgetInterface_Group(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerCustomWidgetInterface_ToolTip(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerCustomWidgetInterface_WhatsThis(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerCustomWidgetInterface_IncludeFile(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->includeFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* QDesignerCustomWidgetInterface_Icon(const QDesignerCustomWidgetInterface* self) {
    return new QIcon(self->icon());
}

bool QDesignerCustomWidgetInterface_IsContainer(const QDesignerCustomWidgetInterface* self) {
    return self->isContainer();
}

QWidget* QDesignerCustomWidgetInterface_CreateWidget(QDesignerCustomWidgetInterface* self, QWidget* parent) {
    return self->createWidget(parent);
}

bool QDesignerCustomWidgetInterface_IsInitialized(const QDesignerCustomWidgetInterface* self) {
    return self->isInitialized();
}

void QDesignerCustomWidgetInterface_Initialize(QDesignerCustomWidgetInterface* self, QDesignerFormEditorInterface* core) {
    self->initialize(core);
}

libqt_string QDesignerCustomWidgetInterface_DomXml(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->domXml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QDesignerCustomWidgetInterface_CodeTemplate(const QDesignerCustomWidgetInterface* self) {
    QString _ret = self->codeTemplate();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QDesignerCustomWidgetInterface_OperatorAssign(QDesignerCustomWidgetInterface* self, const QDesignerCustomWidgetInterface* param1) {
    self->operator=(*param1);
}

void QDesignerCustomWidgetInterface_Delete(QDesignerCustomWidgetInterface* self) {
    delete self;
}

libqt_list /* of QDesignerCustomWidgetInterface* */ QDesignerCustomWidgetCollectionInterface_CustomWidgets(const QDesignerCustomWidgetCollectionInterface* self) {
    QList<QDesignerCustomWidgetInterface*> _ret = self->customWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDesignerCustomWidgetInterface** _arr = static_cast<QDesignerCustomWidgetInterface**>(malloc(sizeof(QDesignerCustomWidgetInterface*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerCustomWidgetCollectionInterface_OperatorAssign(QDesignerCustomWidgetCollectionInterface* self, const QDesignerCustomWidgetCollectionInterface* param1) {
    self->operator=(*param1);
}

void QDesignerCustomWidgetCollectionInterface_Delete(QDesignerCustomWidgetCollectionInterface* self) {
    delete self;
}
