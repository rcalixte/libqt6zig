#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QDir>
#include <QIODevice>
#include <QLayout>
#include <QMetaEnum>
#include <QObject>
#include <QString>
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
    return self->load(dev, parentWidget);
}

void QAbstractFormBuilder_Save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
    self->save(dev, widget);
}

libqt_string QAbstractFormBuilder_ErrorString(const QAbstractFormBuilder* self) {
    auto _ret = self->errorString();
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
    if (vqabstractformbuilder) {
        vqabstractformbuilder->addMenuAction(action);
    }
}

QWidget* QAbstractFormBuilder_CreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder) {
        return vqabstractformbuilder->createWidget(widgetName_QString, parentWidget, name_QString);
    }
    qFatal("Error: Protected method QAbstractFormBuilder::createWidget called without a directly constructed type");
}

QLayout* QAbstractFormBuilder_CreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder) {
        return vqabstractformbuilder->createLayout(layoutName_QString, parent, name_QString);
    }
    qFatal("Error: Protected method QAbstractFormBuilder::createLayout called without a directly constructed type");
}

QAction* QAbstractFormBuilder_CreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder) {
        return vqabstractformbuilder->createAction(parent, name_QString);
    }
    qFatal("Error: Protected method QAbstractFormBuilder::createAction called without a directly constructed type");
}

QActionGroup* QAbstractFormBuilder_CreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder) {
        return vqabstractformbuilder->createActionGroup(parent, name_QString);
    }
    qFatal("Error: Protected method QAbstractFormBuilder::createActionGroup called without a directly constructed type");
}

bool QAbstractFormBuilder_CheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop) {
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    auto* vqabstractformbuilder = dynamic_cast<const VirtualQAbstractFormBuilder*>(self);
    if (vqabstractformbuilder) {
        return vqabstractformbuilder->checkProperty(obj, prop_QString);
    }
    qFatal("Error: Protected method QAbstractFormBuilder::checkProperty called without a directly constructed type");
}

// Base class handler implementation
QWidget* QAbstractFormBuilder_SuperLoad(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
    return self->QAbstractFormBuilder::load(dev, parentWidget);
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnLoad(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_load_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_Load_Callback>(slot);
}

// Base class handler implementation
void QAbstractFormBuilder_SuperSave(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
    self->QAbstractFormBuilder::save(dev, widget);
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnSave(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_save_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_Save_Callback>(slot);
}

// Base class handler implementation
void QAbstractFormBuilder_SuperAddMenuAction(QAbstractFormBuilder* self, QAction* action) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        vqabstractformbuilder->QAbstractFormBuilder::addMenuAction(action);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::addMenuAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnAddMenuAction(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_addmenuaction_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_AddMenuAction_Callback>(slot);
}

// Base class handler implementation
QWidget* QAbstractFormBuilder_SuperCreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name) {
    QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        return vqabstractformbuilder->QAbstractFormBuilder::createWidget(widgetName_QString, parentWidget, name_QString);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::createWidget called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateWidget(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_createwidget_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateWidget_Callback>(slot);
}

// Base class handler implementation
QLayout* QAbstractFormBuilder_SuperCreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name) {
    QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        return vqabstractformbuilder->QAbstractFormBuilder::createLayout(layoutName_QString, parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::createLayout called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateLayout(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_createlayout_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateLayout_Callback>(slot);
}

// Base class handler implementation
QAction* QAbstractFormBuilder_SuperCreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        return vqabstractformbuilder->QAbstractFormBuilder::createAction(parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::createAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateAction(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_createaction_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateAction_Callback>(slot);
}

// Base class handler implementation
QActionGroup* QAbstractFormBuilder_SuperCreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        return vqabstractformbuilder->QAbstractFormBuilder::createActionGroup(parent, name_QString);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::createActionGroup called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCreateActionGroup(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        vqabstractformbuilder->qabstractformbuilder_createactiongroup_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CreateActionGroup_Callback>(slot);
}

// Base class handler implementation
bool QAbstractFormBuilder_SuperCheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop) {
    QString prop_QString = QString::fromUtf8(prop.data, prop.len);
    if (auto* vqabstractformbuilder = const_cast<VirtualQAbstractFormBuilder*>(dynamic_cast<const VirtualQAbstractFormBuilder*>(self))) {
        return vqabstractformbuilder->QAbstractFormBuilder::checkProperty(obj, prop_QString);
    } else
        qFatal("Error: Protected virtual method QAbstractFormBuilder::checkProperty called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QAbstractFormBuilder_OnCheckProperty(QAbstractFormBuilder* self, intptr_t slot) {
    if (auto* vqabstractformbuilder = const_cast<VirtualQAbstractFormBuilder*>(dynamic_cast<const VirtualQAbstractFormBuilder*>(self)))
        vqabstractformbuilder->qabstractformbuilder_checkproperty_callback = reinterpret_cast<VirtualQAbstractFormBuilder::QAbstractFormBuilder_CheckProperty_Callback>(slot);
}

// Derived class protected handler implementation
bool QAbstractFormBuilder_ApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
        return vqabstractformbuilder->VirtualQAbstractFormBuilder::applyPropertyInternally(o, propertyName_QString, *value);
    } else
        qFatal("Error: Protected method QAbstractFormBuilder::applyPropertyInternally called without a directly constructed type");
}

// Derived class protected handler implementation
void QAbstractFormBuilder_Reset(QAbstractFormBuilder* self) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self)) {
        vqabstractformbuilder->VirtualQAbstractFormBuilder::reset();
    } else
        qFatal("Error: Protected method QAbstractFormBuilder::reset called without a directly constructed type");
}

// Derived class handler implementation
QMetaEnum* QAbstractFormBuilder_ToolBarAreaMetaEnum(QAbstractFormBuilder* self) {
    if (auto* vqabstractformbuilder = dynamic_cast<VirtualQAbstractFormBuilder*>(self))
        return new QMetaEnum(vqabstractformbuilder->toolBarAreaMetaEnum());
    qFatal("Error: Protected method QAbstractFormBuilder::toolBarAreaMetaEnum called without a directly constructed type");
}

void QAbstractFormBuilder_Delete(QAbstractFormBuilder* self) {
    delete self;
}
