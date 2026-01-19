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
#include <QByteArray>
#include <cstring>
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
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    }
    return {};
}

QLayout* QFormBuilder_CreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->createLayout(layoutName_QString, parent, name_QString);
    }
    return {};
}

void QFormBuilder_UpdateCustomWidgets(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->updateCustomWidgets();
    }
}

// Base class handler implementation
QWidget* QFormBuilder_QBaseCreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateWidget_IsBase(true);
        return vqformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createWidget(widgetName_QString, parentWidget, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateWidget(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateWidget_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateWidget_Callback>(slot));
    }
}

// Base class handler implementation
QLayout* QFormBuilder_QBaseCreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateLayout_IsBase(true);
        return vqformbuilder->createLayout(layoutName_QString, parent, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createLayout(layoutName_QString, parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateLayout(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateLayout_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateLayout_Callback>(slot));
    }
}

// Base class handler implementation
void QFormBuilder_QBaseUpdateCustomWidgets(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_UpdateCustomWidgets_IsBase(true);
        vqformbuilder->updateCustomWidgets();
    } else {
        ((VirtualQFormBuilder*)self)->updateCustomWidgets();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnUpdateCustomWidgets(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_UpdateCustomWidgets_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_UpdateCustomWidgets_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QFormBuilder_Load(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->load(dev, parentWidget);
    } else {
        return self->QFormBuilder::load(dev, parentWidget);
    }
}

// Base class handler implementation
QWidget* QFormBuilder_QBaseLoad(QFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Load_IsBase(true);
        return vqformbuilder->load(dev, parentWidget);
    } else {
        return self->QFormBuilder::load(dev, parentWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnLoad(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Load_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_Load_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormBuilder_Save(QFormBuilder* self, QIODevice* dev, QWidget* widget) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->save(dev, widget);
    } else {
        self->QFormBuilder::save(dev, widget);
    }
}

// Base class handler implementation
void QFormBuilder_QBaseSave(QFormBuilder* self, QIODevice* dev, QWidget* widget) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Save_IsBase(true);
        vqformbuilder->save(dev, widget);
    } else {
        self->QFormBuilder::save(dev, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnSave(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Save_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_Save_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormBuilder_AddMenuAction(QFormBuilder* self, QAction* action) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->addMenuAction(action);
    } else {
        ((VirtualQFormBuilder*)self)->addMenuAction(action);
    }
}

// Base class handler implementation
void QFormBuilder_QBaseAddMenuAction(QFormBuilder* self, QAction* action) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_AddMenuAction_IsBase(true);
        vqformbuilder->addMenuAction(action);
    } else {
        ((VirtualQFormBuilder*)self)->addMenuAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnAddMenuAction(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_AddMenuAction_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_AddMenuAction_Callback>(slot));
    }
}

// Derived class handler implementation
QAction* QFormBuilder_CreateAction(QFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->createAction(parent, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createAction(parent, name_QString);
    }
}

// Base class handler implementation
QAction* QFormBuilder_QBaseCreateAction(QFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateAction_IsBase(true);
        return vqformbuilder->createAction(parent, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createAction(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateAction(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateAction_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateAction_Callback>(slot));
    }
}

// Derived class handler implementation
QActionGroup* QFormBuilder_CreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->createActionGroup(parent, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createActionGroup(parent, name_QString);
    }
}

// Base class handler implementation
QActionGroup* QFormBuilder_QBaseCreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateActionGroup_IsBase(true);
        return vqformbuilder->createActionGroup(parent, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->createActionGroup(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCreateActionGroup(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CreateActionGroup_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CreateActionGroup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormBuilder_CheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop) {
    auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self));
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->checkProperty(obj, prop_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->checkProperty(obj, prop_QString);
    }
}

// Base class handler implementation
bool QFormBuilder_QBaseCheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop) {
    auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self));
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CheckProperty_IsBase(true);
        return vqformbuilder->checkProperty(obj, prop_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->checkProperty(obj, prop_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnCheckProperty(const QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = const_cast<VirtualQFormBuilder*>(dynamic_cast<const VirtualQFormBuilder*>(self));
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_CheckProperty_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_CheckProperty_Callback>(slot));
    }
}

// Derived class handler implementation
QWidget* QFormBuilder_WidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->widgetByName(topLevel, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->widgetByName(topLevel, name_QString);
    }
}

// Base class handler implementation
QWidget* QFormBuilder_QBaseWidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_WidgetByName_IsBase(true);
        return vqformbuilder->widgetByName(topLevel, name_QString);
    } else {
        return ((VirtualQFormBuilder*)self)->widgetByName(topLevel, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnWidgetByName(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_WidgetByName_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_WidgetByName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFormBuilder_ApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return vqformbuilder->applyPropertyInternally(o, propertyName_QString, *value);
    } else {
        return ((VirtualQFormBuilder*)self)->applyPropertyInternally(o, propertyName_QString, *value);
    }
}

// Base class handler implementation
bool QFormBuilder_QBaseApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_ApplyPropertyInternally_IsBase(true);
        return vqformbuilder->applyPropertyInternally(o, propertyName_QString, *value);
    } else {
        return ((VirtualQFormBuilder*)self)->applyPropertyInternally(o, propertyName_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnApplyPropertyInternally(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_ApplyPropertyInternally_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_ApplyPropertyInternally_Callback>(slot));
    }
}

// Derived class handler implementation
void QFormBuilder_Reset(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->reset();
    } else {
        ((VirtualQFormBuilder*)self)->reset();
    }
}

// Base class handler implementation
void QFormBuilder_QBaseReset(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Reset_IsBase(true);
        vqformbuilder->reset();
    } else {
        ((VirtualQFormBuilder*)self)->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnReset(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_Reset_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
QMetaEnum* QFormBuilder_ToolBarAreaMetaEnum(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        return new QMetaEnum(vqformbuilder->toolBarAreaMetaEnum());
    }
    return {};
}

// Base class handler implementation
QMetaEnum* QFormBuilder_QBaseToolBarAreaMetaEnum(QFormBuilder* self) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_ToolBarAreaMetaEnum_IsBase(true);
        return new QMetaEnum(vqformbuilder->toolBarAreaMetaEnum());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QFormBuilder_OnToolBarAreaMetaEnum(QFormBuilder* self, intptr_t slot) {
    auto* vqformbuilder = dynamic_cast<VirtualQFormBuilder*>(self);
    if (vqformbuilder && vqformbuilder->isVirtualQFormBuilder) {
        vqformbuilder->setQFormBuilder_ToolBarAreaMetaEnum_Callback(reinterpret_cast<VirtualQFormBuilder::QFormBuilder_ToolBarAreaMetaEnum_Callback>(slot));
    }
}

void QFormBuilder_Delete(QFormBuilder* self) {
    delete self;
}
