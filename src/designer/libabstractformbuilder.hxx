#pragma once
#ifndef DESIGNER_LIBABSTRACTFORMBUILDER_HXX
#define DESIGNER_LIBABSTRACTFORMBUILDER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractFormBuilder
class VirtualQAbstractFormBuilder final : public QAbstractFormBuilder {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAbstractFormBuilder_Load_Callback = QWidget* (*)(QAbstractFormBuilder*, QIODevice*, QWidget*);
    using QAbstractFormBuilder_Save_Callback = void (*)(QAbstractFormBuilder*, QIODevice*, QWidget*);
    using QAbstractFormBuilder_AddMenuAction_Callback = void (*)(QAbstractFormBuilder*, QAction*);
    using QAbstractFormBuilder_CreateWidget_Callback = QWidget* (*)(QAbstractFormBuilder*, const char*, QWidget*, const char*);
    using QAbstractFormBuilder_CreateLayout_Callback = QLayout* (*)(QAbstractFormBuilder*, const char*, QObject*, const char*);
    using QAbstractFormBuilder_CreateAction_Callback = QAction* (*)(QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder_CreateActionGroup_Callback = QActionGroup* (*)(QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder_CheckProperty_Callback = bool (*)(const QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder::applyPropertyInternally;
    using QAbstractFormBuilder::reset;
    using QAbstractFormBuilder::toolBarAreaMetaEnum;

    // Instance callback storage
    QAbstractFormBuilder_Load_Callback qabstractformbuilder_load_callback = nullptr;
    QAbstractFormBuilder_Save_Callback qabstractformbuilder_save_callback = nullptr;
    QAbstractFormBuilder_AddMenuAction_Callback qabstractformbuilder_addmenuaction_callback = nullptr;
    QAbstractFormBuilder_CreateWidget_Callback qabstractformbuilder_createwidget_callback = nullptr;
    QAbstractFormBuilder_CreateLayout_Callback qabstractformbuilder_createlayout_callback = nullptr;
    QAbstractFormBuilder_CreateAction_Callback qabstractformbuilder_createaction_callback = nullptr;
    QAbstractFormBuilder_CreateActionGroup_Callback qabstractformbuilder_createactiongroup_callback = nullptr;
    QAbstractFormBuilder_CheckProperty_Callback qabstractformbuilder_checkproperty_callback = nullptr;

    // Access struct
    struct Base : QAbstractFormBuilder {
        using QAbstractFormBuilder::addMenuAction;
        using QAbstractFormBuilder::checkProperty;
        using QAbstractFormBuilder::createAction;
        using QAbstractFormBuilder::createActionGroup;
        using QAbstractFormBuilder::createLayout;
        using QAbstractFormBuilder::createWidget;
    };

    VirtualQAbstractFormBuilder() : QAbstractFormBuilder() {};

    // Virtual method for C ABI access and custom callback
    virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
        if (qabstractformbuilder_load_callback) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = parentWidget;
            QWidget* callback_ret = qabstractformbuilder_load_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractFormBuilder::load(dev, parentWidget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void save(QIODevice* dev, QWidget* widget) override {
        if (qabstractformbuilder_save_callback) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = widget;
            qabstractformbuilder_save_callback(this, cbval1, cbval2);
            return;
        }
        QAbstractFormBuilder::save(dev, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void addMenuAction(QAction* action) override {
        if (qabstractformbuilder_addmenuaction_callback) {
            QAction* cbval1 = action;
            qabstractformbuilder_addmenuaction_callback(this, cbval1);
            return;
        }
        QAbstractFormBuilder::addMenuAction(action);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
        if (qabstractformbuilder_createwidget_callback) {
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
            QWidget* callback_ret = qabstractformbuilder_createwidget_callback(this, cbval1, cbval2, cbval3);
            libqt_free(widgetName_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QAbstractFormBuilder::createWidget(widgetName, parentWidget, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createlayout_callback) {
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
            QLayout* callback_ret = qabstractformbuilder_createlayout_callback(this, cbval1, cbval2, cbval3);
            libqt_free(layoutName_str);
            libqt_free(name_str);
            return callback_ret;
        }
        return QAbstractFormBuilder::createLayout(layoutName, parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createaction_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QAction* callback_ret = qabstractformbuilder_createaction_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QAbstractFormBuilder::createAction(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createactiongroup_callback) {
            QObject* cbval1 = parent;
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval2 = name_str;
            QActionGroup* callback_ret = qabstractformbuilder_createactiongroup_callback(this, cbval1, cbval2);
            libqt_free(name_str);
            return callback_ret;
        }
        return QAbstractFormBuilder::createActionGroup(parent, name);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkProperty(QObject* obj, const QString& prop) const override {
        if (qabstractformbuilder_checkproperty_callback) {
            QObject* cbval1 = obj;
            const auto prop_ret = prop;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray prop_b = prop_ret.toUtf8();
            auto prop_str_len = prop_b.length();
            const char* prop_str = static_cast<const char*>(malloc(prop_str_len + 1));
            memcpy((void*)prop_str, prop_b.data(), prop_str_len);
            ((char*)prop_str)[prop_str_len] = '\0';
            const char* cbval2 = prop_str;
            bool callback_ret = qabstractformbuilder_checkproperty_callback(this, cbval1, cbval2);
            libqt_free(prop_str);
            return callback_ret;
        }
        return QAbstractFormBuilder::checkProperty(obj, prop);
    }

    // Friend functions
    friend void QAbstractFormBuilder_SuperAddMenuAction(QAbstractFormBuilder* self, QAction* action);
    friend QWidget* QAbstractFormBuilder_SuperCreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QLayout* QAbstractFormBuilder_SuperCreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend QAction* QAbstractFormBuilder_SuperCreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QAbstractFormBuilder_SuperCreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend bool QAbstractFormBuilder_SuperCheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop);
};

#endif
