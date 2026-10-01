#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QDesignerCustomWidgetInterface>
#include <QFormBuilder>
#include <QIODevice>
#include <QLayout>
#include <QList>
#include <QMetaEnum>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QWidget>
#include <formbuilder.h>
#include "libformbuilder.h"
#include "libformbuilder.hxx"

QFormBuilder* QFormBuilder_new() {
    return new VirtualQFormBuilder();
}

libqt_list /* of libqt_string */ QFormBuilder_PluginPaths(const QFormBuilder* self) {
    QList<QString> _ret = self->pluginPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

void QFormBuilder_ClearPluginPaths(QFormBuilder* self) {
    self->clearPluginPaths();
}

void QFormBuilder_AddPluginPath(QFormBuilder* self, const libqt_string pluginPath) {
    QString pluginPath_QString = QString::fromUtf8(pluginPath.data, pluginPath.len);
    self->addPluginPath(pluginPath_QString);
}

void QFormBuilder_SetPluginPath(QFormBuilder* self, const libqt_list /* of libqt_string */ pluginPaths) {
    QList<QString> pluginPaths_QList;
    pluginPaths_QList.reserve(pluginPaths.len);
    libqt_string* pluginPaths_arr = static_cast<libqt_string*>(pluginPaths.data);
    for (size_t i = 0; i < pluginPaths.len; ++i) {
        QString pluginPaths_arr_i_QString = QString::fromUtf8(pluginPaths_arr[i].data, pluginPaths_arr[i].len);
        pluginPaths_QList.push_back(pluginPaths_arr_i_QString);
    }
    self->setPluginPath(pluginPaths_QList);
}

libqt_list /* of QDesignerCustomWidgetInterface* */ QFormBuilder_CustomWidgets(const QFormBuilder* self) {
    QList<QDesignerCustomWidgetInterface*> _ret = self->customWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDesignerCustomWidgetInterface** _arr = static_cast<QDesignerCustomWidgetInterface**>(malloc(sizeof(QDesignerCustomWidgetInterface*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* QFormBuilder_CreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        return vqformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    }
    qFatal("Error: Protected method QFormBuilder::createWidget called without a directly constructed type");
}

QLayout* QFormBuilder_CreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        return vqformbuilder->createLayout(layoutName_QString, parent, name_QString);
    }
    qFatal("Error: Protected method QFormBuilder::createLayout called without a directly constructed type");
}

void QFormBuilder_UpdateCustomWidgets(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        vqformbuilder->updateCustomWidgets();
    }
}

// Base class handler implementation
QWidget* QFormBuilder_SuperCreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        return vqformbuilder->QFormBuilder::createWidget(widgetName_QString, parentWidget, name_QString);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateWidget(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_createwidget_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateWidget_Callback>(slot);
}

// Base class handler implementation
QLayout* QFormBuilder_SuperCreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        return vqformbuilder->QFormBuilder::createLayout(layoutName_QString, parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::createLayout called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateLayout(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_createlayout_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateLayout_Callback>(slot);
}

// Base class handler implementation
void QFormBuilder_SuperUpdateCustomWidgets(QFormBuilder* self) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        vqformbuilder->QFormBuilder::updateCustomWidgets();
    } else
        qFatal("Error: Protected virtual method QFormBuilder::updateCustomWidgets called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnUpdateCustomWidgets(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_updatecustomwidgets_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_UpdateCustomWidgets_Callback>(slot);
}

// Derived class handler implementation
QWidget* QFormBuilder_Load(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    return self->load(dev, parentWidget);
}

// Base class handler implementation
QWidget* QFormBuilder_SuperLoad(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    return self->QFormBuilder::load(dev, parentWidget);
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnLoad(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_load_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_Load_Callback>(slot);
}

// Derived class handler implementation
void QFormBuilder_Save(QFormBuilder* self, QIODevice* dev, QWidget* widget) {
    self->save(dev, widget);
}

// Base class handler implementation
void QFormBuilder_SuperSave(QFormBuilder* self, QIODevice* dev, QWidget* widget) {
    self->QFormBuilder::save(dev, widget);
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnSave(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_save_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_Save_Callback>(slot);
}

// Derived class handler implementation
void QFormBuilder_AddMenuAction(QFormBuilder* self, QAction* action) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        vqformbuilder->addMenuAction(action);
    } else {
        qFatal("Error: Protected virtual method QFormBuilder::addMenuAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QFormBuilder_SuperAddMenuAction(QFormBuilder* self, QAction* action) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        vqformbuilder->QFormBuilder::addMenuAction(action);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::addMenuAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnAddMenuAction(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_addmenuaction_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_AddMenuAction_Callback>(slot);
}

// Derived class handler implementation
QAction* QFormBuilder_CreateAction(QFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        return vqformbuilder->createAction(parent, name_QString);
    } else {
        qFatal("Error: Protected virtual method QFormBuilder::createAction called without a directly constructed type");
    }
}

// Base class handler implementation
QAction* QFormBuilder_SuperCreateAction(QFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        return vqformbuilder->QFormBuilder::createAction(parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::createAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateAction(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_createaction_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateAction_Callback>(slot);
}

// Derived class handler implementation
QActionGroup* QFormBuilder_CreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder) {
        return vqformbuilder->createActionGroup(parent, name_QString);
    } else {
        qFatal("Error: Protected virtual method QFormBuilder::createActionGroup called without a directly constructed type");
    }
}

// Base class handler implementation
QActionGroup* QFormBuilder_SuperCreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        return vqformbuilder->QFormBuilder::createActionGroup(parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::createActionGroup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateActionGroup(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        vqformbuilder->qformbuilder_createactiongroup_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateActionGroup_Callback>(slot);
}

// Derived class handler implementation
bool QFormBuilder_CheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop) {
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self));
    if (vqformbuilder) {
        return vqformbuilder->checkProperty(obj, prop_QString);
    } else {
        qFatal("Error: Protected virtual method QFormBuilder::checkProperty called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFormBuilder_SuperCheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop) {
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    if (auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self))) {
        return vqformbuilder->QFormBuilder::checkProperty(obj, prop_QString);
    } else
        qFatal("Error: Protected virtual method QFormBuilder::checkProperty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCheckProperty(QFormBuilder* self, intptr_t slot) {
    if (auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self)))
        vqformbuilder->qformbuilder_checkproperty_callback = reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CheckProperty_Callback>(slot);
}

// Derived class protected handler implementation
QWidget* QFormBuilder_WidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        return vqformbuilder->VirtualQFormBuilder::widgetByName(topLevel, name_QString);
    } else
        qFatal("Error: Protected method QFormBuilder::widgetByName called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFormBuilder_ApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
        return vqformbuilder->VirtualQFormBuilder::applyPropertyInternally(o, propertyName_QString, *value);
    } else
        qFatal("Error: Protected method QFormBuilder::applyPropertyInternally called without a directly constructed type");
}

// Derived class protected handler implementation
void QFormBuilder_Reset(QFormBuilder* self) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self)) {
        vqformbuilder->VirtualQFormBuilder::reset();
    } else
        qFatal("Error: Protected method QFormBuilder::reset called without a directly constructed type");
}

// Derived class handler implementation
QMetaEnum* QFormBuilder_ToolBarAreaMetaEnum(QFormBuilder* self) {
    if (auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self))
        return new QMetaEnum(vqformbuilder->toolBarAreaMetaEnum());
    qFatal("Error: Protected method QFormBuilder::toolBarAreaMetaEnum called without a directly constructed type");
}

void QFormBuilder_Delete(QFormBuilder* self) {
    delete self;
}
