#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QDir>
#include <QIODevice>
#include <QLayout>
#include <QMetaEnum>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformbuilder.h>
#include "libabstractformbuilder.h"
#include "libabstractformbuilder.hxx"

QAbstractFormBuilder* QAbstractFormBuilder_new() {
    return new VirtualQAbstractFormBuilder();
}

QDir* QAbstractFormBuilder_WorkingDirectory(const QAbstractFormBuilder* self) {
    return new QDir(self->workingDirectory());
}

void QAbstractFormBuilder_SetWorkingDirectory(QAbstractFormBuilder* self, const QDir* directory) {
    self->setWorkingDirectory(*directory);
}

QWidget* QAbstractFormBuilder_Load(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return self->load(dev, parentWidget);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->load(dev, parentWidget);
    }
}

void QAbstractFormBuilder_Save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        self->save(dev, widget);
    } else {
        ((VirtualQAbstractFormBuilder*)self)->save(dev, widget);
    }
}

libqt_string QAbstractFormBuilder_ErrorString(const QAbstractFormBuilder* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstractFormBuilder_AddMenuAction(QAbstractFormBuilder* self, QAction* action) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->addMenuAction(action);
    }
}

QWidget* QAbstractFormBuilder_CreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    }
    return {};
}

QLayout* QAbstractFormBuilder_CreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->createLayout(layoutName_QString, parent, name_QString);
    }
    return {};
}

QAction* QAbstractFormBuilder_CreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->createAction(parent, name_QString);
    }
    return {};
}

QActionGroup* QAbstractFormBuilder_CreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->createActionGroup(parent, name_QString);
    }
    return {};
}

bool QAbstractFormBuilder_CheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop) {
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    auto* vqabstractformbuilder = dynamic_cast<const VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->checkProperty(obj, prop_QString);
    }
    return {};
}

// Base class handler implementation
QWidget* QAbstractFormBuilder_QBaseLoad(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Load_IsBase(true);
        return vqabstractformbuilder->load(dev, parentWidget);
    } else {
        return self->QAbstractFormBuilder::load(dev, parentWidget);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnLoad(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Load_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_Load_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractFormBuilder_QBaseSave(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Save_IsBase(true);
        vqabstractformbuilder->save(dev, widget);
    } else {
        self->QAbstractFormBuilder::save(dev, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnSave(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Save_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_Save_Callback>(slot));
    }
}

// Base class handler implementation
void QAbstractFormBuilder_QBaseAddMenuAction(QAbstractFormBuilder* self, QAction* action) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_AddMenuAction_IsBase(true);
        vqabstractformbuilder->addMenuAction(action);
    } else {
        ((VirtualQAbstractFormBuilder*)self)->addMenuAction(action);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnAddMenuAction(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_AddMenuAction_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_AddMenuAction_Callback>(slot));
    }
}

// Base class handler implementation
QWidget* QAbstractFormBuilder_QBaseCreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateWidget_IsBase(true);
        return vqabstractformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->createWidget(widgetName_QString, parentWidget, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateWidget(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateWidget_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateWidget_Callback>(slot));
    }
}

// Base class handler implementation
QLayout* QAbstractFormBuilder_QBaseCreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateLayout_IsBase(true);
        return vqabstractformbuilder->createLayout(layoutName_QString, parent, name_QString);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->createLayout(layoutName_QString, parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateLayout(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateLayout_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateLayout_Callback>(slot));
    }
}

// Base class handler implementation
QAction* QAbstractFormBuilder_QBaseCreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateAction_IsBase(true);
        return vqabstractformbuilder->createAction(parent, name_QString);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->createAction(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateAction(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateAction_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateAction_Callback>(slot));
    }
}

// Base class handler implementation
QActionGroup* QAbstractFormBuilder_QBaseCreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateActionGroup_IsBase(true);
        return vqabstractformbuilder->createActionGroup(parent, name_QString);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->createActionGroup(parent, name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateActionGroup(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CreateActionGroup_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateActionGroup_Callback>(slot));
    }
}

// Base class handler implementation
bool QAbstractFormBuilder_QBaseCheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop) {
    auto* vqabstractformbuilder = const_cast<VirtualQAbstractFormBuilder*>(dynamic_cast<const VirtualQAbstractFormBuilder*>(self));
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CheckProperty_IsBase(true);
        return vqabstractformbuilder->checkProperty(obj, prop_QString);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->checkProperty(obj, prop_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCheckProperty(const QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = const_cast<VirtualQAbstractFormBuilder*>(dynamic_cast<const VirtualQAbstractFormBuilder*>(self));
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_CheckProperty_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CheckProperty_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractFormBuilder_ApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return vqabstractformbuilder->applyPropertyInternally(o, propertyName_QString, *value);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->applyPropertyInternally(o, propertyName_QString, *value);
    }
}

// Base class handler implementation
bool QAbstractFormBuilder_QBaseApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_ApplyPropertyInternally_IsBase(true);
        return vqabstractformbuilder->applyPropertyInternally(o, propertyName_QString, *value);
    } else {
        return ((VirtualQAbstractFormBuilder*)self)->applyPropertyInternally(o, propertyName_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnApplyPropertyInternally(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_ApplyPropertyInternally_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_ApplyPropertyInternally_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractFormBuilder_Reset(QAbstractFormBuilder* self) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->reset();
    } else {
        ((VirtualQAbstractFormBuilder*)self)->reset();
    }
}

// Base class handler implementation
void QAbstractFormBuilder_QBaseReset(QAbstractFormBuilder* self) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Reset_IsBase(true);
        vqabstractformbuilder->reset();
    } else {
        ((VirtualQAbstractFormBuilder*)self)->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnReset(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_Reset_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
QMetaEnum* QAbstractFormBuilder_ToolBarAreaMetaEnum(QAbstractFormBuilder* self) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        return new QMetaEnum(vqabstractformbuilder->toolBarAreaMetaEnum());
    }
    return {};
}

// Base class handler implementation
QMetaEnum* QAbstractFormBuilder_QBaseToolBarAreaMetaEnum(QAbstractFormBuilder* self) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_ToolBarAreaMetaEnum_IsBase(true);
        return new QMetaEnum(vqabstractformbuilder->toolBarAreaMetaEnum());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnToolBarAreaMetaEnum(QAbstractFormBuilder* self, intptr_t slot) {
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder && vqabstractformbuilder->isVirtualQAbstractFormBuilder) {
        vqabstractformbuilder->setQAbstractFormBuilder_ToolBarAreaMetaEnum_Callback(reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_ToolBarAreaMetaEnum_Callback>(slot));
    }
}

void QAbstractFormBuilder_Delete(QAbstractFormBuilder* self) {
    delete self;
}
