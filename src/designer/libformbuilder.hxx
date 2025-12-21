#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALFORMBUILDER_H
#define SRC_DESIGNERC_LIBVIRTUALFORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QFormBuilder so that we can call protected methods
class VirtualQFormBuilder final : public QFormBuilder {

  public:
    // Virtual class boolean flag
    bool isVirtualQFormBuilder = true;

    // Virtual class public types (including callbacks)
    using QFormBuilder_CreateWidget_Callback = QWidget* (*)(QFormBuilder*, libqt_string, QWidget*, libqt_string);
    using QFormBuilder_CreateLayout_Callback = QLayout* (*)(QFormBuilder*, libqt_string, QObject*, libqt_string);
    using QFormBuilder_UpdateCustomWidgets_Callback = void (*)();
    using QFormBuilder_Load_Callback = QWidget* (*)(QFormBuilder*, QIODevice*, QWidget*);
    using QFormBuilder_Save_Callback = void (*)(QFormBuilder*, QIODevice*, QWidget*);
    using QFormBuilder_AddMenuAction_Callback = void (*)(QFormBuilder*, QAction*);
    using QFormBuilder_CreateAction_Callback = QAction* (*)(QFormBuilder*, QObject*, libqt_string);
    using QFormBuilder_CreateActionGroup_Callback = QActionGroup* (*)(QFormBuilder*, QObject*, libqt_string);
    using QFormBuilder_CheckProperty_Callback = bool (*)(const QFormBuilder*, QObject*, libqt_string);
    using QFormBuilder_WidgetByName_Callback = QWidget* (*)(QFormBuilder*, QWidget*, libqt_string);
    using QFormBuilder_ApplyPropertyInternally_Callback = bool (*)(QFormBuilder*, QObject*, libqt_string, QVariant*);
    using QFormBuilder_Reset_Callback = void (*)();
    using QFormBuilder_ToolBarAreaMetaEnum_Callback = QMetaEnum* (*)();

  protected:
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
    QFormBuilder_WidgetByName_Callback qformbuilder_widgetbyname_callback = nullptr;
    QFormBuilder_ApplyPropertyInternally_Callback qformbuilder_applypropertyinternally_callback = nullptr;
    QFormBuilder_Reset_Callback qformbuilder_reset_callback = nullptr;
    QFormBuilder_ToolBarAreaMetaEnum_Callback qformbuilder_toolbarareametaenum_callback = nullptr;

    // Instance base flags
    mutable bool qformbuilder_createwidget_isbase = false;
    mutable bool qformbuilder_createlayout_isbase = false;
    mutable bool qformbuilder_updatecustomwidgets_isbase = false;
    mutable bool qformbuilder_load_isbase = false;
    mutable bool qformbuilder_save_isbase = false;
    mutable bool qformbuilder_addmenuaction_isbase = false;
    mutable bool qformbuilder_createaction_isbase = false;
    mutable bool qformbuilder_createactiongroup_isbase = false;
    mutable bool qformbuilder_checkproperty_isbase = false;
    mutable bool qformbuilder_widgetbyname_isbase = false;
    mutable bool qformbuilder_applypropertyinternally_isbase = false;
    mutable bool qformbuilder_reset_isbase = false;
    mutable bool qformbuilder_toolbarareametaenum_isbase = false;

  public:
    VirtualQFormBuilder() : QFormBuilder() {};

    ~VirtualQFormBuilder() {
        qformbuilder_createwidget_callback = nullptr;
        qformbuilder_createlayout_callback = nullptr;
        qformbuilder_updatecustomwidgets_callback = nullptr;
        qformbuilder_load_callback = nullptr;
        qformbuilder_save_callback = nullptr;
        qformbuilder_addmenuaction_callback = nullptr;
        qformbuilder_createaction_callback = nullptr;
        qformbuilder_createactiongroup_callback = nullptr;
        qformbuilder_checkproperty_callback = nullptr;
        qformbuilder_widgetbyname_callback = nullptr;
        qformbuilder_applypropertyinternally_callback = nullptr;
        qformbuilder_reset_callback = nullptr;
        qformbuilder_toolbarareametaenum_callback = nullptr;
    }

    // Callback setters
    inline void setQFormBuilder_CreateWidget_Callback(QFormBuilder_CreateWidget_Callback cb) { qformbuilder_createwidget_callback = cb; }
    inline void setQFormBuilder_CreateLayout_Callback(QFormBuilder_CreateLayout_Callback cb) { qformbuilder_createlayout_callback = cb; }
    inline void setQFormBuilder_UpdateCustomWidgets_Callback(QFormBuilder_UpdateCustomWidgets_Callback cb) { qformbuilder_updatecustomwidgets_callback = cb; }
    inline void setQFormBuilder_Load_Callback(QFormBuilder_Load_Callback cb) { qformbuilder_load_callback = cb; }
    inline void setQFormBuilder_Save_Callback(QFormBuilder_Save_Callback cb) { qformbuilder_save_callback = cb; }
    inline void setQFormBuilder_AddMenuAction_Callback(QFormBuilder_AddMenuAction_Callback cb) { qformbuilder_addmenuaction_callback = cb; }
    inline void setQFormBuilder_CreateAction_Callback(QFormBuilder_CreateAction_Callback cb) { qformbuilder_createaction_callback = cb; }
    inline void setQFormBuilder_CreateActionGroup_Callback(QFormBuilder_CreateActionGroup_Callback cb) { qformbuilder_createactiongroup_callback = cb; }
    inline void setQFormBuilder_CheckProperty_Callback(QFormBuilder_CheckProperty_Callback cb) { qformbuilder_checkproperty_callback = cb; }
    inline void setQFormBuilder_WidgetByName_Callback(QFormBuilder_WidgetByName_Callback cb) { qformbuilder_widgetbyname_callback = cb; }
    inline void setQFormBuilder_ApplyPropertyInternally_Callback(QFormBuilder_ApplyPropertyInternally_Callback cb) { qformbuilder_applypropertyinternally_callback = cb; }
    inline void setQFormBuilder_Reset_Callback(QFormBuilder_Reset_Callback cb) { qformbuilder_reset_callback = cb; }
    inline void setQFormBuilder_ToolBarAreaMetaEnum_Callback(QFormBuilder_ToolBarAreaMetaEnum_Callback cb) { qformbuilder_toolbarareametaenum_callback = cb; }

    // Base flag setters
    inline void setQFormBuilder_CreateWidget_IsBase(bool value) const { qformbuilder_createwidget_isbase = value; }
    inline void setQFormBuilder_CreateLayout_IsBase(bool value) const { qformbuilder_createlayout_isbase = value; }
    inline void setQFormBuilder_UpdateCustomWidgets_IsBase(bool value) const { qformbuilder_updatecustomwidgets_isbase = value; }
    inline void setQFormBuilder_Load_IsBase(bool value) const { qformbuilder_load_isbase = value; }
    inline void setQFormBuilder_Save_IsBase(bool value) const { qformbuilder_save_isbase = value; }
    inline void setQFormBuilder_AddMenuAction_IsBase(bool value) const { qformbuilder_addmenuaction_isbase = value; }
    inline void setQFormBuilder_CreateAction_IsBase(bool value) const { qformbuilder_createaction_isbase = value; }
    inline void setQFormBuilder_CreateActionGroup_IsBase(bool value) const { qformbuilder_createactiongroup_isbase = value; }
    inline void setQFormBuilder_CheckProperty_IsBase(bool value) const { qformbuilder_checkproperty_isbase = value; }
    inline void setQFormBuilder_WidgetByName_IsBase(bool value) const { qformbuilder_widgetbyname_isbase = value; }
    inline void setQFormBuilder_ApplyPropertyInternally_IsBase(bool value) const { qformbuilder_applypropertyinternally_isbase = value; }
    inline void setQFormBuilder_Reset_IsBase(bool value) const { qformbuilder_reset_isbase = value; }
    inline void setQFormBuilder_ToolBarAreaMetaEnum_IsBase(bool value) const { qformbuilder_toolbarareametaenum_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
        if (qformbuilder_createwidget_isbase) {
            qformbuilder_createwidget_isbase = false;
            return QFormBuilder::createWidget(widgetName, parentWidget, name);
        } else if (qformbuilder_createwidget_callback != nullptr) {
            const QString widgetName_ret = widgetName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray widgetName_b = widgetName_ret.toUtf8();
            libqt_string widgetName_str;
            widgetName_str.len = widgetName_b.length();
            widgetName_str.data = static_cast<const char*>(malloc(widgetName_str.len + 1));
            memcpy((void*)widgetName_str.data, widgetName_b.data(), widgetName_str.len);
            ((char*)widgetName_str.data)[widgetName_str.len] = '\0';
            libqt_string cbval1 = widgetName_str;
            QWidget* cbval2 = parentWidget;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval3 = name_str;

            QWidget* callback_ret = qformbuilder_createwidget_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QFormBuilder::createWidget(widgetName, parentWidget, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
        if (qformbuilder_createlayout_isbase) {
            qformbuilder_createlayout_isbase = false;
            return QFormBuilder::createLayout(layoutName, parent, name);
        } else if (qformbuilder_createlayout_callback != nullptr) {
            const QString layoutName_ret = layoutName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray layoutName_b = layoutName_ret.toUtf8();
            libqt_string layoutName_str;
            layoutName_str.len = layoutName_b.length();
            layoutName_str.data = static_cast<const char*>(malloc(layoutName_str.len + 1));
            memcpy((void*)layoutName_str.data, layoutName_b.data(), layoutName_str.len);
            ((char*)layoutName_str.data)[layoutName_str.len] = '\0';
            libqt_string cbval1 = layoutName_str;
            QObject* cbval2 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval3 = name_str;

            QLayout* callback_ret = qformbuilder_createlayout_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QFormBuilder::createLayout(layoutName, parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateCustomWidgets() override {
        if (qformbuilder_updatecustomwidgets_isbase) {
            qformbuilder_updatecustomwidgets_isbase = false;
            QFormBuilder::updateCustomWidgets();
        } else if (qformbuilder_updatecustomwidgets_callback != nullptr) {
            qformbuilder_updatecustomwidgets_callback();
        } else {
            QFormBuilder::updateCustomWidgets();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
        if (qformbuilder_load_isbase) {
            qformbuilder_load_isbase = false;
            return QFormBuilder::load(dev, parentWidget);
        } else if (qformbuilder_load_callback != nullptr) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = parentWidget;

            QWidget* callback_ret = qformbuilder_load_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFormBuilder::load(dev, parentWidget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void save(QIODevice* dev, QWidget* widget) override {
        if (qformbuilder_save_isbase) {
            qformbuilder_save_isbase = false;
            QFormBuilder::save(dev, widget);
        } else if (qformbuilder_save_callback != nullptr) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = widget;

            qformbuilder_save_callback(this, cbval1, cbval2);
        } else {
            QFormBuilder::save(dev, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addMenuAction(QAction* action) override {
        if (qformbuilder_addmenuaction_isbase) {
            qformbuilder_addmenuaction_isbase = false;
            QFormBuilder::addMenuAction(action);
        } else if (qformbuilder_addmenuaction_callback != nullptr) {
            QAction* cbval1 = action;

            qformbuilder_addmenuaction_callback(this, cbval1);
        } else {
            QFormBuilder::addMenuAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (qformbuilder_createaction_isbase) {
            qformbuilder_createaction_isbase = false;
            return QFormBuilder::createAction(parent, name);
        } else if (qformbuilder_createaction_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval2 = name_str;

            QAction* callback_ret = qformbuilder_createaction_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFormBuilder::createAction(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (qformbuilder_createactiongroup_isbase) {
            qformbuilder_createactiongroup_isbase = false;
            return QFormBuilder::createActionGroup(parent, name);
        } else if (qformbuilder_createactiongroup_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval2 = name_str;

            QActionGroup* callback_ret = qformbuilder_createactiongroup_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFormBuilder::createActionGroup(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkProperty(QObject* obj, const QString& prop) const override {
        if (qformbuilder_checkproperty_isbase) {
            qformbuilder_checkproperty_isbase = false;
            return QFormBuilder::checkProperty(obj, prop);
        } else if (qformbuilder_checkproperty_callback != nullptr) {
            QObject* cbval1 = obj;
            const QString prop_ret = prop;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray prop_b = prop_ret.toUtf8();
            libqt_string prop_str;
            prop_str.len = prop_b.length();
            prop_str.data = static_cast<const char*>(malloc(prop_str.len + 1));
            memcpy((void*)prop_str.data, prop_b.data(), prop_str.len);
            ((char*)prop_str.data)[prop_str.len] = '\0';
            libqt_string cbval2 = prop_str;

            bool callback_ret = qformbuilder_checkproperty_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFormBuilder::checkProperty(obj, prop);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* widgetByName(QWidget* topLevel, const QString& name) {
        if (qformbuilder_widgetbyname_isbase) {
            qformbuilder_widgetbyname_isbase = false;
            return QFormBuilder::widgetByName(topLevel, name);
        } else if (qformbuilder_widgetbyname_callback != nullptr) {
            QWidget* cbval1 = topLevel;
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval2 = name_str;

            QWidget* callback_ret = qformbuilder_widgetbyname_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QFormBuilder::widgetByName(topLevel, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool applyPropertyInternally(QObject* o, const QString& propertyName, const QVariant& value) {
        if (qformbuilder_applypropertyinternally_isbase) {
            qformbuilder_applypropertyinternally_isbase = false;
            return QFormBuilder::applyPropertyInternally(o, propertyName, value);
        } else if (qformbuilder_applypropertyinternally_callback != nullptr) {
            QObject* cbval1 = o;
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            libqt_string propertyName_str;
            propertyName_str.len = propertyName_b.length();
            propertyName_str.data = static_cast<const char*>(malloc(propertyName_str.len + 1));
            memcpy((void*)propertyName_str.data, propertyName_b.data(), propertyName_str.len);
            ((char*)propertyName_str.data)[propertyName_str.len] = '\0';
            libqt_string cbval2 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);

            bool callback_ret = qformbuilder_applypropertyinternally_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return QFormBuilder::applyPropertyInternally(o, propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    void reset() {
        if (qformbuilder_reset_isbase) {
            qformbuilder_reset_isbase = false;
            QFormBuilder::reset();
        } else if (qformbuilder_reset_callback != nullptr) {
            qformbuilder_reset_callback();
        } else {
            QFormBuilder::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    QMetaEnum toolBarAreaMetaEnum() {
        if (qformbuilder_toolbarareametaenum_isbase) {
            qformbuilder_toolbarareametaenum_isbase = false;
            return QFormBuilder::toolBarAreaMetaEnum();
        } else if (qformbuilder_toolbarareametaenum_callback != nullptr) {
            QMetaEnum* callback_ret = qformbuilder_toolbarareametaenum_callback();
            return *callback_ret;
        } else {
            return QFormBuilder::toolBarAreaMetaEnum();
        }
    }

    // Friend functions
    friend QWidget* QFormBuilder_CreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QWidget* QFormBuilder_QBaseCreateWidget(QFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QLayout* QFormBuilder_CreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend QLayout* QFormBuilder_QBaseCreateLayout(QFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend void QFormBuilder_UpdateCustomWidgets(QFormBuilder* self);
    friend void QFormBuilder_QBaseUpdateCustomWidgets(QFormBuilder* self);
    friend void QFormBuilder_AddMenuAction(QFormBuilder* self, QAction* action);
    friend void QFormBuilder_QBaseAddMenuAction(QFormBuilder* self, QAction* action);
    friend QAction* QFormBuilder_CreateAction(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend QAction* QFormBuilder_QBaseCreateAction(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QFormBuilder_CreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QFormBuilder_QBaseCreateActionGroup(QFormBuilder* self, QObject* parent, const libqt_string name);
    friend bool QFormBuilder_CheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop);
    friend bool QFormBuilder_QBaseCheckProperty(const QFormBuilder* self, QObject* obj, const libqt_string prop);
    friend QWidget* QFormBuilder_WidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name);
    friend QWidget* QFormBuilder_QBaseWidgetByName(QFormBuilder* self, QWidget* topLevel, const libqt_string name);
    friend bool QFormBuilder_ApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
    friend bool QFormBuilder_QBaseApplyPropertyInternally(QFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
    friend void QFormBuilder_Reset(QFormBuilder* self);
    friend void QFormBuilder_QBaseReset(QFormBuilder* self);
    friend QMetaEnum* QFormBuilder_ToolBarAreaMetaEnum(QFormBuilder* self);
    friend QMetaEnum* QFormBuilder_QBaseToolBarAreaMetaEnum(QFormBuilder* self);
};

#endif
