#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMBUILDER_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTFORMBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractFormBuilder so that we can call protected methods
class VirtualQAbstractFormBuilder final : public QAbstractFormBuilder {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractFormBuilder = true;

    // Virtual class public types (including callbacks)
    using QAbstractFormBuilder_Load_Callback = QWidget* (*)(QAbstractFormBuilder*, QIODevice*, QWidget*);
    using QAbstractFormBuilder_Save_Callback = void (*)(QAbstractFormBuilder*, QIODevice*, QWidget*);
    using QAbstractFormBuilder_AddMenuAction_Callback = void (*)(QAbstractFormBuilder*, QAction*);
    using QAbstractFormBuilder_CreateWidget_Callback = QWidget* (*)(QAbstractFormBuilder*, const char*, QWidget*, const char*);
    using QAbstractFormBuilder_CreateLayout_Callback = QLayout* (*)(QAbstractFormBuilder*, const char*, QObject*, const char*);
    using QAbstractFormBuilder_CreateAction_Callback = QAction* (*)(QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder_CreateActionGroup_Callback = QActionGroup* (*)(QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder_CheckProperty_Callback = bool (*)(const QAbstractFormBuilder*, QObject*, const char*);
    using QAbstractFormBuilder_ApplyPropertyInternally_Callback = bool (*)(QAbstractFormBuilder*, QObject*, const char*, QVariant*);
    using QAbstractFormBuilder_Reset_Callback = void (*)();
    using QAbstractFormBuilder_ToolBarAreaMetaEnum_Callback = QMetaEnum* (*)();

  protected:
    // Instance callback storage
    QAbstractFormBuilder_Load_Callback qabstractformbuilder_load_callback = nullptr;
    QAbstractFormBuilder_Save_Callback qabstractformbuilder_save_callback = nullptr;
    QAbstractFormBuilder_AddMenuAction_Callback qabstractformbuilder_addmenuaction_callback = nullptr;
    QAbstractFormBuilder_CreateWidget_Callback qabstractformbuilder_createwidget_callback = nullptr;
    QAbstractFormBuilder_CreateLayout_Callback qabstractformbuilder_createlayout_callback = nullptr;
    QAbstractFormBuilder_CreateAction_Callback qabstractformbuilder_createaction_callback = nullptr;
    QAbstractFormBuilder_CreateActionGroup_Callback qabstractformbuilder_createactiongroup_callback = nullptr;
    QAbstractFormBuilder_CheckProperty_Callback qabstractformbuilder_checkproperty_callback = nullptr;
    QAbstractFormBuilder_ApplyPropertyInternally_Callback qabstractformbuilder_applypropertyinternally_callback = nullptr;
    QAbstractFormBuilder_Reset_Callback qabstractformbuilder_reset_callback = nullptr;
    QAbstractFormBuilder_ToolBarAreaMetaEnum_Callback qabstractformbuilder_toolbarareametaenum_callback = nullptr;

    // Instance base flags
    mutable bool qabstractformbuilder_load_isbase = false;
    mutable bool qabstractformbuilder_save_isbase = false;
    mutable bool qabstractformbuilder_addmenuaction_isbase = false;
    mutable bool qabstractformbuilder_createwidget_isbase = false;
    mutable bool qabstractformbuilder_createlayout_isbase = false;
    mutable bool qabstractformbuilder_createaction_isbase = false;
    mutable bool qabstractformbuilder_createactiongroup_isbase = false;
    mutable bool qabstractformbuilder_checkproperty_isbase = false;
    mutable bool qabstractformbuilder_applypropertyinternally_isbase = false;
    mutable bool qabstractformbuilder_reset_isbase = false;
    mutable bool qabstractformbuilder_toolbarareametaenum_isbase = false;

  public:
    VirtualQAbstractFormBuilder() : QAbstractFormBuilder() {};

    ~VirtualQAbstractFormBuilder() {
        qabstractformbuilder_load_callback = nullptr;
        qabstractformbuilder_save_callback = nullptr;
        qabstractformbuilder_addmenuaction_callback = nullptr;
        qabstractformbuilder_createwidget_callback = nullptr;
        qabstractformbuilder_createlayout_callback = nullptr;
        qabstractformbuilder_createaction_callback = nullptr;
        qabstractformbuilder_createactiongroup_callback = nullptr;
        qabstractformbuilder_checkproperty_callback = nullptr;
        qabstractformbuilder_applypropertyinternally_callback = nullptr;
        qabstractformbuilder_reset_callback = nullptr;
        qabstractformbuilder_toolbarareametaenum_callback = nullptr;
    }

    // Callback setters
    inline void setQAbstractFormBuilder_Load_Callback(QAbstractFormBuilder_Load_Callback cb) { qabstractformbuilder_load_callback = cb; }
    inline void setQAbstractFormBuilder_Save_Callback(QAbstractFormBuilder_Save_Callback cb) { qabstractformbuilder_save_callback = cb; }
    inline void setQAbstractFormBuilder_AddMenuAction_Callback(QAbstractFormBuilder_AddMenuAction_Callback cb) { qabstractformbuilder_addmenuaction_callback = cb; }
    inline void setQAbstractFormBuilder_CreateWidget_Callback(QAbstractFormBuilder_CreateWidget_Callback cb) { qabstractformbuilder_createwidget_callback = cb; }
    inline void setQAbstractFormBuilder_CreateLayout_Callback(QAbstractFormBuilder_CreateLayout_Callback cb) { qabstractformbuilder_createlayout_callback = cb; }
    inline void setQAbstractFormBuilder_CreateAction_Callback(QAbstractFormBuilder_CreateAction_Callback cb) { qabstractformbuilder_createaction_callback = cb; }
    inline void setQAbstractFormBuilder_CreateActionGroup_Callback(QAbstractFormBuilder_CreateActionGroup_Callback cb) { qabstractformbuilder_createactiongroup_callback = cb; }
    inline void setQAbstractFormBuilder_CheckProperty_Callback(QAbstractFormBuilder_CheckProperty_Callback cb) { qabstractformbuilder_checkproperty_callback = cb; }
    inline void setQAbstractFormBuilder_ApplyPropertyInternally_Callback(QAbstractFormBuilder_ApplyPropertyInternally_Callback cb) { qabstractformbuilder_applypropertyinternally_callback = cb; }
    inline void setQAbstractFormBuilder_Reset_Callback(QAbstractFormBuilder_Reset_Callback cb) { qabstractformbuilder_reset_callback = cb; }
    inline void setQAbstractFormBuilder_ToolBarAreaMetaEnum_Callback(QAbstractFormBuilder_ToolBarAreaMetaEnum_Callback cb) { qabstractformbuilder_toolbarareametaenum_callback = cb; }

    // Base flag setters
    inline void setQAbstractFormBuilder_Load_IsBase(bool value) const { qabstractformbuilder_load_isbase = value; }
    inline void setQAbstractFormBuilder_Save_IsBase(bool value) const { qabstractformbuilder_save_isbase = value; }
    inline void setQAbstractFormBuilder_AddMenuAction_IsBase(bool value) const { qabstractformbuilder_addmenuaction_isbase = value; }
    inline void setQAbstractFormBuilder_CreateWidget_IsBase(bool value) const { qabstractformbuilder_createwidget_isbase = value; }
    inline void setQAbstractFormBuilder_CreateLayout_IsBase(bool value) const { qabstractformbuilder_createlayout_isbase = value; }
    inline void setQAbstractFormBuilder_CreateAction_IsBase(bool value) const { qabstractformbuilder_createaction_isbase = value; }
    inline void setQAbstractFormBuilder_CreateActionGroup_IsBase(bool value) const { qabstractformbuilder_createactiongroup_isbase = value; }
    inline void setQAbstractFormBuilder_CheckProperty_IsBase(bool value) const { qabstractformbuilder_checkproperty_isbase = value; }
    inline void setQAbstractFormBuilder_ApplyPropertyInternally_IsBase(bool value) const { qabstractformbuilder_applypropertyinternally_isbase = value; }
    inline void setQAbstractFormBuilder_Reset_IsBase(bool value) const { qabstractformbuilder_reset_isbase = value; }
    inline void setQAbstractFormBuilder_ToolBarAreaMetaEnum_IsBase(bool value) const { qabstractformbuilder_toolbarareametaenum_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
        if (qabstractformbuilder_load_isbase) {
            qabstractformbuilder_load_isbase = false;
            return QAbstractFormBuilder::load(dev, parentWidget);
        } else if (qabstractformbuilder_load_callback != nullptr) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = parentWidget;

            QWidget* callback_ret = qabstractformbuilder_load_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAbstractFormBuilder::load(dev, parentWidget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void save(QIODevice* dev, QWidget* widget) override {
        if (qabstractformbuilder_save_isbase) {
            qabstractformbuilder_save_isbase = false;
            QAbstractFormBuilder::save(dev, widget);
        } else if (qabstractformbuilder_save_callback != nullptr) {
            QIODevice* cbval1 = dev;
            QWidget* cbval2 = widget;

            qabstractformbuilder_save_callback(this, cbval1, cbval2);
        } else {
            QAbstractFormBuilder::save(dev, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addMenuAction(QAction* action) override {
        if (qabstractformbuilder_addmenuaction_isbase) {
            qabstractformbuilder_addmenuaction_isbase = false;
            QAbstractFormBuilder::addMenuAction(action);
        } else if (qabstractformbuilder_addmenuaction_callback != nullptr) {
            QAction* cbval1 = action;

            qabstractformbuilder_addmenuaction_callback(this, cbval1);
        } else {
            QAbstractFormBuilder::addMenuAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
        if (qabstractformbuilder_createwidget_isbase) {
            qabstractformbuilder_createwidget_isbase = false;
            return QAbstractFormBuilder::createWidget(widgetName, parentWidget, name);
        } else if (qabstractformbuilder_createwidget_callback != nullptr) {
            const QString widgetName_ret = widgetName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray widgetName_b = widgetName_ret.toUtf8();
            auto widgetName_str_len = widgetName_b.length();
            const char* widgetName_str = static_cast<const char*>(malloc(widgetName_str_len + 1));
            memcpy((void*)widgetName_str, widgetName_b.data(), widgetName_str_len);
            ((char*)widgetName_str)[widgetName_str_len] = '\0';
            const char* cbval1 = widgetName_str;
            QWidget* cbval2 = parentWidget;
            const QString name_ret = name;
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
        } else {
            return QAbstractFormBuilder::createWidget(widgetName, parentWidget, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createlayout_isbase) {
            qabstractformbuilder_createlayout_isbase = false;
            return QAbstractFormBuilder::createLayout(layoutName, parent, name);
        } else if (qabstractformbuilder_createlayout_callback != nullptr) {
            const QString layoutName_ret = layoutName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray layoutName_b = layoutName_ret.toUtf8();
            auto layoutName_str_len = layoutName_b.length();
            const char* layoutName_str = static_cast<const char*>(malloc(layoutName_str_len + 1));
            memcpy((void*)layoutName_str, layoutName_b.data(), layoutName_str_len);
            ((char*)layoutName_str)[layoutName_str_len] = '\0';
            const char* cbval1 = layoutName_str;
            QObject* cbval2 = parent;
            const QString name_ret = name;
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
        } else {
            return QAbstractFormBuilder::createLayout(layoutName, parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAction* createAction(QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createaction_isbase) {
            qabstractformbuilder_createaction_isbase = false;
            return QAbstractFormBuilder::createAction(parent, name);
        } else if (qabstractformbuilder_createaction_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
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
        } else {
            return QAbstractFormBuilder::createAction(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
        if (qabstractformbuilder_createactiongroup_isbase) {
            qabstractformbuilder_createactiongroup_isbase = false;
            return QAbstractFormBuilder::createActionGroup(parent, name);
        } else if (qabstractformbuilder_createactiongroup_callback != nullptr) {
            QObject* cbval1 = parent;
            const QString name_ret = name;
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
        } else {
            return QAbstractFormBuilder::createActionGroup(parent, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool checkProperty(QObject* obj, const QString& prop) const override {
        if (qabstractformbuilder_checkproperty_isbase) {
            qabstractformbuilder_checkproperty_isbase = false;
            return QAbstractFormBuilder::checkProperty(obj, prop);
        } else if (qabstractformbuilder_checkproperty_callback != nullptr) {
            QObject* cbval1 = obj;
            const QString prop_ret = prop;
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
        } else {
            return QAbstractFormBuilder::checkProperty(obj, prop);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool applyPropertyInternally(QObject* o, const QString& propertyName, const QVariant& value) {
        if (qabstractformbuilder_applypropertyinternally_isbase) {
            qabstractformbuilder_applypropertyinternally_isbase = false;
            return QAbstractFormBuilder::applyPropertyInternally(o, propertyName, value);
        } else if (qabstractformbuilder_applypropertyinternally_callback != nullptr) {
            QObject* cbval1 = o;
            const QString propertyName_ret = propertyName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray propertyName_b = propertyName_ret.toUtf8();
            auto propertyName_str_len = propertyName_b.length();
            const char* propertyName_str = static_cast<const char*>(malloc(propertyName_str_len + 1));
            memcpy((void*)propertyName_str, propertyName_b.data(), propertyName_str_len);
            ((char*)propertyName_str)[propertyName_str_len] = '\0';
            const char* cbval2 = propertyName_str;
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval3 = const_cast<QVariant*>(&value_ret);

            bool callback_ret = qabstractformbuilder_applypropertyinternally_callback(this, cbval1, cbval2, cbval3);
            libqt_free(propertyName_str);
            return callback_ret;
        } else {
            return QAbstractFormBuilder::applyPropertyInternally(o, propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    void reset() {
        if (qabstractformbuilder_reset_isbase) {
            qabstractformbuilder_reset_isbase = false;
            QAbstractFormBuilder::reset();
        } else if (qabstractformbuilder_reset_callback != nullptr) {
            qabstractformbuilder_reset_callback();
        } else {
            QAbstractFormBuilder::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    QMetaEnum toolBarAreaMetaEnum() {
        if (qabstractformbuilder_toolbarareametaenum_isbase) {
            qabstractformbuilder_toolbarareametaenum_isbase = false;
            return QAbstractFormBuilder::toolBarAreaMetaEnum();
        } else if (qabstractformbuilder_toolbarareametaenum_callback != nullptr) {
            QMetaEnum* callback_ret = qabstractformbuilder_toolbarareametaenum_callback();
            return *callback_ret;
        } else {
            return QAbstractFormBuilder::toolBarAreaMetaEnum();
        }
    }

    // Friend functions
    friend void QAbstractFormBuilder_AddMenuAction(QAbstractFormBuilder* self, QAction* action);
    friend void QAbstractFormBuilder_QBaseAddMenuAction(QAbstractFormBuilder* self, QAction* action);
    friend QWidget* QAbstractFormBuilder_CreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QWidget* QAbstractFormBuilder_QBaseCreateWidget(QAbstractFormBuilder* self, const libqt_string widgetName, QWidget* parentWidget, const libqt_string name);
    friend QLayout* QAbstractFormBuilder_CreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend QLayout* QAbstractFormBuilder_QBaseCreateLayout(QAbstractFormBuilder* self, const libqt_string layoutName, QObject* parent, const libqt_string name);
    friend QAction* QAbstractFormBuilder_CreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend QAction* QAbstractFormBuilder_QBaseCreateAction(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QAbstractFormBuilder_CreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend QActionGroup* QAbstractFormBuilder_QBaseCreateActionGroup(QAbstractFormBuilder* self, QObject* parent, const libqt_string name);
    friend bool QAbstractFormBuilder_CheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop);
    friend bool QAbstractFormBuilder_QBaseCheckProperty(const QAbstractFormBuilder* self, QObject* obj, const libqt_string prop);
    friend bool QAbstractFormBuilder_ApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
    friend bool QAbstractFormBuilder_QBaseApplyPropertyInternally(QAbstractFormBuilder* self, QObject* o, const libqt_string propertyName, const QVariant* value);
    friend void QAbstractFormBuilder_Reset(QAbstractFormBuilder* self);
    friend void QAbstractFormBuilder_QBaseReset(QAbstractFormBuilder* self);
    friend QMetaEnum* QAbstractFormBuilder_ToolBarAreaMetaEnum(QAbstractFormBuilder* self);
    friend QMetaEnum* QAbstractFormBuilder_QBaseToolBarAreaMetaEnum(QAbstractFormBuilder* self);
};

#endif
