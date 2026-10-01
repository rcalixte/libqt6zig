#pragma once
#ifndef DESIGNER_LIBFORMBUILDER_HXX
#define DESIGNER_LIBFORMBUILDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QFormBuilder
class VirtualQFormBuilder final : public QFormBuilder {
  public:
    // Virtual class public types (including callbacks and access types)
    using QFormBuilder_CreateWidget_Callback = QWidget* (*)(QFormBuilder*, const char*, QWidget*, const char*);
    using QFormBuilder_CreateLayout_Callback = QLayout* (*)(QFormBuilder*, const char*, QObject*, const char*);
    using QFormBuilder_UpdateCustomWidgets_Callback = void (*)(QFormBuilder*);
    using QFormBuilder_Load_Callback = QWidget* (*)(QFormBuilder*, QIODevice*, QWidget*);
    using QFormBuilder_Save_Callback = void (*)(QFormBuilder*, QIODevice*, QWidget*);
    using QFormBuilder_AddMenuAction_Callback = void (*)(QFormBuilder*, QAction*);
    using QFormBuilder_CreateAction_Callback = QAction* (*)(QFormBuilder*, QObject*, const char*);
    using QFormBuilder_CreateActionGroup_Callback = QActionGroup* (*)(QFormBuilder*, QObject*, const char*);
    using QFormBuilder_CheckProperty_Callback = bool (*)(const QFormBuilder*, QObject*, const char*);
    using QFormBuilder::applyPropertyInternally;
    using QFormBuilder::reset;
    using QFormBuilder::toolBarAreaMetaEnum;
    using QFormBuilder::widgetByName;

    // Instance callback storage
    QFormBuilder_CreateWidget_Callback qformbuilder_createwidget_callback = nullptr;
    QFormBuilder_CreateLayout_Callback qformbuilder_createlayout_callback = nullptr;
    QFormBuilder_UpdateCustomWidgets_Callback qformbuilder_updatecustomwidgets_callback = nullptr;
    QFormBuilder_Load_Callback qformbuilder_load_callback = nullptr;
    QFormBuilder_Save_Callback qformbuilder_save_callback = nullptr;
    QFormBuilder_AddMenuAction_Callback qformbuilder_addmenuaction_callback = nullptr;
    QFormBuilder_CreateAction_Callback qformbuilder_createaction_callback = nullptr;
    QFormBuilder_CreateActionGroup_Callback qformbuilder_createactiongroup_callback = nullptr;
    QFormBuilder_CheckProperty_Callback qformbuilder_checkproperty_callback = nullptr;

    // Access struct
    struct Base : QFormBuilder {
        using QFormBuilder::addMenuAction;
        using QFormBuilder::checkProperty;
        using QFormBuilder::createAction;
        using QFormBuilder::createActionGroup;
        using QFormBuilder::createLayout;
        using QFormBuilder::createWidget;
        using QFormBuilder::updateCustomWidgets;
    };

    VirtualQFormBuilder() : QFormBuilder() {};

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
        if (qformbuilder_createwidget_callback) {
            const auto widgetName_ret = widgetName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray widgetName_b = widgetName_ret.toUtf8();
            auto widgetName_str_len = widgetName_b.length();
            const char* widgetName_str = static_cast<const char*>(malloc(widgetName_str_len + 1));
            memcpy((void*)widgetName_str, widgetName_b.data(), widgetName_str_len);
            ((char*)widgetName_str)[widgetName_str_len] = '\0';
            const char* cbval1 = widgetName_str;
            QWidget* cbval2 = parentWidget;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval3 = name_str;
            QWidget* callback_ret = qformbuilder_createwidget_callback(this, cbval1, cbval2, cbval3);
            libqt_free(widgetName_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QFormBuilder::createWidget(widgetName, parentWidget, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
        if (qformbuilder_createlayout_callback) {
            const auto layoutName_ret = layoutName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray layoutName_b = layoutName_ret.toUtf8();
            auto layoutName_str_len = layoutName_b.length();
            const char* layoutName_str = static_cast<const char*>(malloc(layoutName_str_len + 1));
            memcpy((void*)layoutName_str, layoutName_b.data(), layoutName_str_len);
            ((char*)layoutName_str)[layoutName_str_len] = '\0';
            const char* cbval1 = layoutName_str;
            QObject* cbval2 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval3 = name_str;
            QLayout* callback_ret = qformbuilder_createlayout_callback(this, cbval1, cbval2, cbval3);
            libqt_free(layoutName_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QFormBuilder::createLayout(layoutName, parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgets() override {
        if (qformbuilder_updatecustomwidgets_callback) {
            qformbuilder_updatecustomwidgets_callback(this);
            return;
        }
        QFormBuilder::updateCustomWidgets();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
        if (qformbuilder_load_callback) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = parentWidget;
            QWidget* callback_ret = qformbuilder_load_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QFormBuilder::load(dev, parentWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void save(QIODevice* dev, QWidget* widget) override {
        if (qformbuilder_save_callback) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = widget;
            qformbuilder_save_callback(this, cbval1, cbval2);
            return;
        }
        QFormBuilder::save(dev, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addMenuAction(QAction* action) override {
        if (qformbuilder_addmenuaction_callback) {
            QAction* cbval1 = action;
            qformbuilder_addmenuaction_callback(this, cbval1);
            return;
        }
        QFormBuilder::addMenuAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (qformbuilder_createaction_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QAction* callback_ret = qformbuilder_createaction_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QFormBuilder::createAction(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (qformbuilder_createactiongroup_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QActionGroup* callback_ret = qformbuilder_createactiongroup_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QFormBuilder::createActionGroup(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkProperty(QObject* obj, const QString& prop) const override {
        if (qformbuilder_checkproperty_callback) {
            QObject* cbval1 = obj;
            const auto prop_ret = prop;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prop_b = prop_ret.toUtf8();
            auto prop_str_len = prop_b.length();
            const char* prop_str = static_cast<const char*>(malloc(prop_str_len + 1));
            memcpy((void*)prop_str, prop_b.data(), prop_str_len);
            ((char*)prop_str)[prop_str_len] = '\0';
            const char* cbval2 = prop_str;
            bool callback_ret = qformbuilder_checkproperty_callback(this, cbval1, cbval2);
            libqt_free(prop_str);
            return callback_ret;
        }
        return QFormBuilder::checkProperty(obj, prop);
    }

    // Friend functions
    friend QWidget* QFormBuilder_SuperCreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QLayout* QFormBuilder_SuperCreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend void QFormBuilder_SuperUpdateCustomWidgets(QFormBuilder* self);
    friend void QFormBuilder_SuperAddMenuAction(QFormBuilder* self, QAction* action);
    friend QAction* QFormBuilder_SuperCreateAction(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QFormBuilder_SuperCreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend bool QFormBuilder_SuperCheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop);
};

#endif
