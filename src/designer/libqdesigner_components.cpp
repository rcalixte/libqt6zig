#include <QDesignerActionEditorInterface>
#include <QDesignerComponents>
#include <QDesignerFormEditorInterface>
#include <QDesignerObjectInspectorInterface>
#include <QDesignerPropertyEditorInterface>
#include <QDesignerWidgetBoxInterface>
#include <QList>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qdesigner_components.h>
#include "libqdesigner_components.h"
#include "libqdesigner_components.hxx"

QDesignerComponents* QDesignerComponents_new(const QDesignerComponents* other) {
    return new QDesignerComponents(*other);
}

QDesignerComponents* QDesignerComponents_new2(QDesignerComponents* other) {
    return new QDesignerComponents(std::move(*other));
}

void QDesignerComponents_CopyAssign(QDesignerComponents* self, QDesignerComponents* other) {
    *self = *other;
}

void QDesignerComponents_MoveAssign(QDesignerComponents* self, QDesignerComponents* other) {
    *self = std::move(*other);
}

void QDesignerComponents_InitializeResources() {
    QDesignerComponents::initializeResources();
}

void QDesignerComponents_InitializePlugins(QDesignerFormEditorInterface* core) {
    QDesignerComponents::initializePlugins(core);
}

QDesignerFormEditorInterface* QDesignerComponents_CreateFormEditor(QObject* parent) {
    return QDesignerComponents::createFormEditor(parent);
}

QDesignerFormEditorInterface* QDesignerComponents_CreateFormEditorWithPluginPaths(const libqt_list /* of libqt_string */ pluginPaths, QObject* parent) {
    QList<QString> pluginPaths_QList;
    pluginPaths_QList.reserve(pluginPaths.len);
    libqt_string* pluginPaths_arr = static_cast<libqt_string*>(pluginPaths.data);
    for (size_t i = 0; i < pluginPaths.len; ++i) {
        QString pluginPaths_arr_i_QString = QString::fromUtf8(pluginPaths_arr[i].data, pluginPaths_arr[i].len);
        pluginPaths_QList.push_back(pluginPaths_arr_i_QString);
    }
    return QDesignerComponents::createFormEditorWithPluginPaths(pluginPaths_QList, parent);
}

QDesignerWidgetBoxInterface* QDesignerComponents_CreateWidgetBox(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createWidgetBox(core, parent);
}

QDesignerPropertyEditorInterface* QDesignerComponents_CreatePropertyEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createPropertyEditor(core, parent);
}

QDesignerObjectInspectorInterface* QDesignerComponents_CreateObjectInspector(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createObjectInspector(core, parent);
}

QDesignerActionEditorInterface* QDesignerComponents_CreateActionEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createActionEditor(core, parent);
}

QObject* QDesignerComponents_CreateTaskMenu(QDesignerFormEditorInterface* core, QObject* parent) {
    return QDesignerComponents::createTaskMenu(core, parent);
}

QWidget* QDesignerComponents_CreateResourceEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createResourceEditor(core, parent);
}

QWidget* QDesignerComponents_CreateSignalSlotEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
    return QDesignerComponents::createSignalSlotEditor(core, parent);
}

libqt_list /* of libqt_string */ QDesignerComponents_DefaultPluginPaths() {
    QList<QString> _ret = QDesignerComponents::defaultPluginPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QDesignerComponents_Delete(QDesignerComponents* self) {
    delete self;
}
