#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETDATABASE_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTWIDGETDATABASE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetDataBaseItemInterface so that we can call protected methods
class VirtualQDesignerWidgetDataBaseItemInterface : public QDesignerWidgetDataBaseItemInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerWidgetDataBaseItemInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerWidgetDataBaseItemInterface_Name_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetName_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_Group_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetGroup_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_ToolTip_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_Icon_Callback = QIcon* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetIcon_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, QIcon*);
    using QDesignerWidgetDataBaseItemInterface_IsCompat_Callback = bool (*)();
    using QDesignerWidgetDataBaseItemInterface_SetCompat_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_IsContainer_Callback = bool (*)();
    using QDesignerWidgetDataBaseItemInterface_SetContainer_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_IsCustom_Callback = bool (*)();
    using QDesignerWidgetDataBaseItemInterface_SetCustom_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_PluginPath_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback = bool (*)();
    using QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_Extends_Callback = const char* (*)();
    using QDesignerWidgetDataBaseItemInterface_SetExtends_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, libqt_list /* of QVariant* */);
    using QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback = libqt_list /* of QVariant* */ (*)();

  protected:
    // Instance callback storage
    QDesignerWidgetDataBaseItemInterface_Name_Callback qdesignerwidgetdatabaseiteminterface_name_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetName_Callback qdesignerwidgetdatabaseiteminterface_setname_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_Group_Callback qdesignerwidgetdatabaseiteminterface_group_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetGroup_Callback qdesignerwidgetdatabaseiteminterface_setgroup_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_ToolTip_Callback qdesignerwidgetdatabaseiteminterface_tooltip_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback qdesignerwidgetdatabaseiteminterface_settooltip_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback qdesignerwidgetdatabaseiteminterface_whatsthis_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback qdesignerwidgetdatabaseiteminterface_includefile_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback qdesignerwidgetdatabaseiteminterface_setincludefile_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_Icon_Callback qdesignerwidgetdatabaseiteminterface_icon_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetIcon_Callback qdesignerwidgetdatabaseiteminterface_seticon_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_IsCompat_Callback qdesignerwidgetdatabaseiteminterface_iscompat_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetCompat_Callback qdesignerwidgetdatabaseiteminterface_setcompat_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_IsContainer_Callback qdesignerwidgetdatabaseiteminterface_iscontainer_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetContainer_Callback qdesignerwidgetdatabaseiteminterface_setcontainer_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_IsCustom_Callback qdesignerwidgetdatabaseiteminterface_iscustom_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetCustom_Callback qdesignerwidgetdatabaseiteminterface_setcustom_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_PluginPath_Callback qdesignerwidgetdatabaseiteminterface_pluginpath_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback qdesignerwidgetdatabaseiteminterface_setpluginpath_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback qdesignerwidgetdatabaseiteminterface_ispromoted_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback qdesignerwidgetdatabaseiteminterface_setpromoted_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_Extends_Callback qdesignerwidgetdatabaseiteminterface_extends_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetExtends_Callback qdesignerwidgetdatabaseiteminterface_setextends_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback = nullptr;
    QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerwidgetdatabaseiteminterface_name_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setname_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_group_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setgroup_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_tooltip_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_settooltip_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_whatsthis_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setwhatsthis_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_includefile_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setincludefile_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_icon_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_seticon_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_iscompat_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setcompat_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_iscontainer_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setcontainer_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_iscustom_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setcustom_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_pluginpath_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setpluginpath_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_ispromoted_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setpromoted_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_extends_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setextends_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_isbase = false;
    mutable bool qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_isbase = false;

  public:
    VirtualQDesignerWidgetDataBaseItemInterface() : QDesignerWidgetDataBaseItemInterface() {};

    // Callback setters
    inline void setQDesignerWidgetDataBaseItemInterface_Name_Callback(QDesignerWidgetDataBaseItemInterface_Name_Callback cb) { qdesignerwidgetdatabaseiteminterface_name_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetName_Callback(QDesignerWidgetDataBaseItemInterface_SetName_Callback cb) { qdesignerwidgetdatabaseiteminterface_setname_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_Group_Callback(QDesignerWidgetDataBaseItemInterface_Group_Callback cb) { qdesignerwidgetdatabaseiteminterface_group_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetGroup_Callback(QDesignerWidgetDataBaseItemInterface_SetGroup_Callback cb) { qdesignerwidgetdatabaseiteminterface_setgroup_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_ToolTip_Callback(QDesignerWidgetDataBaseItemInterface_ToolTip_Callback cb) { qdesignerwidgetdatabaseiteminterface_tooltip_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetToolTip_Callback(QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback cb) { qdesignerwidgetdatabaseiteminterface_settooltip_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_WhatsThis_Callback(QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback cb) { qdesignerwidgetdatabaseiteminterface_whatsthis_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback(QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback cb) { qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_IncludeFile_Callback(QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback cb) { qdesignerwidgetdatabaseiteminterface_includefile_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback(QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback cb) { qdesignerwidgetdatabaseiteminterface_setincludefile_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_Icon_Callback(QDesignerWidgetDataBaseItemInterface_Icon_Callback cb) { qdesignerwidgetdatabaseiteminterface_icon_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetIcon_Callback(QDesignerWidgetDataBaseItemInterface_SetIcon_Callback cb) { qdesignerwidgetdatabaseiteminterface_seticon_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsCompat_Callback(QDesignerWidgetDataBaseItemInterface_IsCompat_Callback cb) { qdesignerwidgetdatabaseiteminterface_iscompat_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetCompat_Callback(QDesignerWidgetDataBaseItemInterface_SetCompat_Callback cb) { qdesignerwidgetdatabaseiteminterface_setcompat_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsContainer_Callback(QDesignerWidgetDataBaseItemInterface_IsContainer_Callback cb) { qdesignerwidgetdatabaseiteminterface_iscontainer_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetContainer_Callback(QDesignerWidgetDataBaseItemInterface_SetContainer_Callback cb) { qdesignerwidgetdatabaseiteminterface_setcontainer_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsCustom_Callback(QDesignerWidgetDataBaseItemInterface_IsCustom_Callback cb) { qdesignerwidgetdatabaseiteminterface_iscustom_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetCustom_Callback(QDesignerWidgetDataBaseItemInterface_SetCustom_Callback cb) { qdesignerwidgetdatabaseiteminterface_setcustom_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_PluginPath_Callback(QDesignerWidgetDataBaseItemInterface_PluginPath_Callback cb) { qdesignerwidgetdatabaseiteminterface_pluginpath_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback(QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback cb) { qdesignerwidgetdatabaseiteminterface_setpluginpath_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsPromoted_Callback(QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback cb) { qdesignerwidgetdatabaseiteminterface_ispromoted_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetPromoted_Callback(QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback cb) { qdesignerwidgetdatabaseiteminterface_setpromoted_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_Extends_Callback(QDesignerWidgetDataBaseItemInterface_Extends_Callback cb) { qdesignerwidgetdatabaseiteminterface_extends_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetExtends_Callback(QDesignerWidgetDataBaseItemInterface_SetExtends_Callback cb) { qdesignerwidgetdatabaseiteminterface_setextends_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback(QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback cb) { qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback = cb; }
    inline void setQDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback(QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback cb) { qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback = cb; }

    // Base flag setters
    inline void setQDesignerWidgetDataBaseItemInterface_Name_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_name_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetName_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setname_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_Group_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_group_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetGroup_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setgroup_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_ToolTip_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_tooltip_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetToolTip_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_settooltip_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_WhatsThis_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_whatsthis_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetWhatsThis_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setwhatsthis_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_IncludeFile_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_includefile_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetIncludeFile_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setincludefile_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_Icon_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_icon_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetIcon_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_seticon_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsCompat_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_iscompat_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetCompat_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setcompat_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsContainer_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_iscontainer_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetContainer_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setcontainer_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsCustom_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_iscustom_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetCustom_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setcustom_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_PluginPath_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_pluginpath_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetPluginPath_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setpluginpath_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_IsPromoted_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_ispromoted_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetPromoted_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setpromoted_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_Extends_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_extends_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetExtends_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setextends_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_isbase = value; }
    inline void setQDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_IsBase(bool value) const { qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        auto name_cb = qdesignerwidgetdatabaseiteminterface_name_callback;
        if (name_cb) {
            const char* callback_ret = name_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setName(const QString& name) override {
        auto setname_cb = qdesignerwidgetdatabaseiteminterface_setname_callback;
        if (setname_cb) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;

            setname_cb(this, cbval1);
            libqt_free(name_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString group() const override {
        auto group_cb = qdesignerwidgetdatabaseiteminterface_group_callback;
        if (group_cb) {
            const char* callback_ret = group_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGroup(const QString& group) override {
        auto setgroup_cb = qdesignerwidgetdatabaseiteminterface_setgroup_callback;
        if (setgroup_cb) {
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval1 = group_str;

            setgroup_cb(this, cbval1);
            libqt_free(group_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString toolTip() const override {
        auto tooltip_cb = qdesignerwidgetdatabaseiteminterface_tooltip_callback;
        if (tooltip_cb) {
            const char* callback_ret = tooltip_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setToolTip(const QString& toolTip) override {
        auto settooltip_cb = qdesignerwidgetdatabaseiteminterface_settooltip_callback;
        if (settooltip_cb) {
            const QString toolTip_ret = toolTip;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray toolTip_b = toolTip_ret.toUtf8();
            auto toolTip_str_len = toolTip_b.length();
            const char* toolTip_str = static_cast<const char*>(malloc(toolTip_str_len + 1));
            memcpy((void*)toolTip_str, toolTip_b.data(), toolTip_str_len);
            ((char*)toolTip_str)[toolTip_str_len] = '\0';
            const char* cbval1 = toolTip_str;

            settooltip_cb(this, cbval1);
            libqt_free(toolTip_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString whatsThis() const override {
        auto whatsthis_cb = qdesignerwidgetdatabaseiteminterface_whatsthis_callback;
        if (whatsthis_cb) {
            const char* callback_ret = whatsthis_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWhatsThis(const QString& whatsThis) override {
        auto setwhatsthis_cb = qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback;
        if (setwhatsthis_cb) {
            const QString whatsThis_ret = whatsThis;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray whatsThis_b = whatsThis_ret.toUtf8();
            auto whatsThis_str_len = whatsThis_b.length();
            const char* whatsThis_str = static_cast<const char*>(malloc(whatsThis_str_len + 1));
            memcpy((void*)whatsThis_str, whatsThis_b.data(), whatsThis_str_len);
            ((char*)whatsThis_str)[whatsThis_str_len] = '\0';
            const char* cbval1 = whatsThis_str;

            setwhatsthis_cb(this, cbval1);
            libqt_free(whatsThis_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString includeFile() const override {
        auto includefile_cb = qdesignerwidgetdatabaseiteminterface_includefile_callback;
        if (includefile_cb) {
            const char* callback_ret = includefile_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIncludeFile(const QString& includeFile) override {
        auto setincludefile_cb = qdesignerwidgetdatabaseiteminterface_setincludefile_callback;
        if (setincludefile_cb) {
            const QString includeFile_ret = includeFile;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray includeFile_b = includeFile_ret.toUtf8();
            auto includeFile_str_len = includeFile_b.length();
            const char* includeFile_str = static_cast<const char*>(malloc(includeFile_str_len + 1));
            memcpy((void*)includeFile_str, includeFile_b.data(), includeFile_str_len);
            ((char*)includeFile_str)[includeFile_str_len] = '\0';
            const char* cbval1 = includeFile_str;

            setincludefile_cb(this, cbval1);
            libqt_free(includeFile_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon() const override {
        auto icon_cb = qdesignerwidgetdatabaseiteminterface_icon_callback;
        if (icon_cb) {
            QIcon* callback_ret = icon_cb();
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIcon(const QIcon& icon) override {
        auto seticon_cb = qdesignerwidgetdatabaseiteminterface_seticon_callback;
        if (seticon_cb) {
            const QIcon& icon_ret = icon;
            // Cast returned reference into pointer
            QIcon* cbval1 = const_cast<QIcon*>(&icon_ret);

            seticon_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isCompat() const override {
        auto iscompat_cb = qdesignerwidgetdatabaseiteminterface_iscompat_callback;
        if (iscompat_cb) {
            bool callback_ret = iscompat_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompat(bool compat) override {
        auto setcompat_cb = qdesignerwidgetdatabaseiteminterface_setcompat_callback;
        if (setcompat_cb) {
            bool cbval1 = compat;

            setcompat_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isContainer() const override {
        auto iscontainer_cb = qdesignerwidgetdatabaseiteminterface_iscontainer_callback;
        if (iscontainer_cb) {
            bool callback_ret = iscontainer_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setContainer(bool container) override {
        auto setcontainer_cb = qdesignerwidgetdatabaseiteminterface_setcontainer_callback;
        if (setcontainer_cb) {
            bool cbval1 = container;

            setcontainer_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isCustom() const override {
        auto iscustom_cb = qdesignerwidgetdatabaseiteminterface_iscustom_callback;
        if (iscustom_cb) {
            bool callback_ret = iscustom_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCustom(bool custom) override {
        auto setcustom_cb = qdesignerwidgetdatabaseiteminterface_setcustom_callback;
        if (setcustom_cb) {
            bool cbval1 = custom;

            setcustom_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString pluginPath() const override {
        auto pluginpath_cb = qdesignerwidgetdatabaseiteminterface_pluginpath_callback;
        if (pluginpath_cb) {
            const char* callback_ret = pluginpath_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPluginPath(const QString& path) override {
        auto setpluginpath_cb = qdesignerwidgetdatabaseiteminterface_setpluginpath_callback;
        if (setpluginpath_cb) {
            const QString path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;

            setpluginpath_cb(this, cbval1);
            libqt_free(path_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isPromoted() const override {
        auto ispromoted_cb = qdesignerwidgetdatabaseiteminterface_ispromoted_callback;
        if (ispromoted_cb) {
            bool callback_ret = ispromoted_cb();
            return callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPromoted(bool b) override {
        auto setpromoted_cb = qdesignerwidgetdatabaseiteminterface_setpromoted_callback;
        if (setpromoted_cb) {
            bool cbval1 = b;

            setpromoted_cb(this, cbval1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString extends() const override {
        auto extends_cb = qdesignerwidgetdatabaseiteminterface_extends_callback;
        if (extends_cb) {
            const char* callback_ret = extends_cb();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtends(const QString& s) override {
        auto setextends_cb = qdesignerwidgetdatabaseiteminterface_setextends_callback;
        if (setextends_cb) {
            const QString s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval1 = s_str;

            setextends_cb(this, cbval1);
            libqt_free(s_str);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaultPropertyValues(const QList<QVariant>& list) override {
        auto setdefaultpropertyvalues_cb = qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback;
        if (setdefaultpropertyvalues_cb) {
            const QList<QVariant>& list_ret = list;
            // Convert QList<> from C++ memory to manually-managed C memory
            QVariant** list_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * (list_ret.size())));
            for (qsizetype i = 0; i < list_ret.size(); ++i) {
                list_arr[i] = new QVariant(list_ret[i]);
            }
            libqt_list list_out;
            list_out.len = list_ret.size();
            list_out.data = static_cast<void*>(list_arr);
            libqt_list /* of QVariant* */ cbval1 = list_out;

            setdefaultpropertyvalues_cb(this, cbval1);
            free(list_arr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVariant> defaultPropertyValues() const override {
        auto defaultpropertyvalues_cb = qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback;
        if (defaultpropertyvalues_cb) {
            libqt_list /* of QVariant* */ callback_ret = defaultpropertyvalues_cb();
            QList<QVariant> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QVariant** callback_ret_arr = static_cast<QVariant**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return {};
    }
};

// This class is a subclass of QDesignerWidgetDataBaseInterface so that we can call protected methods
class VirtualQDesignerWidgetDataBaseInterface final : public QDesignerWidgetDataBaseInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerWidgetDataBaseInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerWidgetDataBaseInterface_MetaObject_Callback = QMetaObject* (*)();
    using QDesignerWidgetDataBaseInterface_Metacast_Callback = void* (*)(QDesignerWidgetDataBaseInterface*, const char*);
    using QDesignerWidgetDataBaseInterface_Metacall_Callback = int (*)(QDesignerWidgetDataBaseInterface*, int, int, void**);
    using QDesignerWidgetDataBaseInterface_Count_Callback = int (*)();
    using QDesignerWidgetDataBaseInterface_Item_Callback = QDesignerWidgetDataBaseItemInterface* (*)(const QDesignerWidgetDataBaseInterface*, int);
    using QDesignerWidgetDataBaseInterface_IndexOf_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_Insert_Callback = void (*)(QDesignerWidgetDataBaseInterface*, int, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_Append_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_IndexOfObject_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, QObject*, bool);
    using QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, const char*, bool);
    using QDesignerWidgetDataBaseInterface_Core_Callback = QDesignerFormEditorInterface* (*)();
    using QDesignerWidgetDataBaseInterface_Event_Callback = bool (*)(QDesignerWidgetDataBaseInterface*, QEvent*);
    using QDesignerWidgetDataBaseInterface_EventFilter_Callback = bool (*)(QDesignerWidgetDataBaseInterface*, QObject*, QEvent*);
    using QDesignerWidgetDataBaseInterface_TimerEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QTimerEvent*);
    using QDesignerWidgetDataBaseInterface_ChildEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QChildEvent*);
    using QDesignerWidgetDataBaseInterface_CustomEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QEvent*);
    using QDesignerWidgetDataBaseInterface_ConnectNotify_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QMetaMethod*);
    using QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QMetaMethod*);
    using QDesignerWidgetDataBaseInterface_Sender_Callback = QObject* (*)();
    using QDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback = int (*)();
    using QDesignerWidgetDataBaseInterface_Receivers_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, const char*);
    using QDesignerWidgetDataBaseInterface_IsSignalConnected_Callback = bool (*)(const QDesignerWidgetDataBaseInterface*, QMetaMethod*);

  protected:
    // Instance callback storage
    QDesignerWidgetDataBaseInterface_MetaObject_Callback qdesignerwidgetdatabaseinterface_metaobject_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Metacast_Callback qdesignerwidgetdatabaseinterface_metacast_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Metacall_Callback qdesignerwidgetdatabaseinterface_metacall_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Count_Callback qdesignerwidgetdatabaseinterface_count_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Item_Callback qdesignerwidgetdatabaseinterface_item_callback = nullptr;
    QDesignerWidgetDataBaseInterface_IndexOf_Callback qdesignerwidgetdatabaseinterface_indexof_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Insert_Callback qdesignerwidgetdatabaseinterface_insert_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Append_Callback qdesignerwidgetdatabaseinterface_append_callback = nullptr;
    QDesignerWidgetDataBaseInterface_IndexOfObject_Callback qdesignerwidgetdatabaseinterface_indexofobject_callback = nullptr;
    QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback qdesignerwidgetdatabaseinterface_indexofclassname_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Core_Callback qdesignerwidgetdatabaseinterface_core_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Event_Callback qdesignerwidgetdatabaseinterface_event_callback = nullptr;
    QDesignerWidgetDataBaseInterface_EventFilter_Callback qdesignerwidgetdatabaseinterface_eventfilter_callback = nullptr;
    QDesignerWidgetDataBaseInterface_TimerEvent_Callback qdesignerwidgetdatabaseinterface_timerevent_callback = nullptr;
    QDesignerWidgetDataBaseInterface_ChildEvent_Callback qdesignerwidgetdatabaseinterface_childevent_callback = nullptr;
    QDesignerWidgetDataBaseInterface_CustomEvent_Callback qdesignerwidgetdatabaseinterface_customevent_callback = nullptr;
    QDesignerWidgetDataBaseInterface_ConnectNotify_Callback qdesignerwidgetdatabaseinterface_connectnotify_callback = nullptr;
    QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback qdesignerwidgetdatabaseinterface_disconnectnotify_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Sender_Callback qdesignerwidgetdatabaseinterface_sender_callback = nullptr;
    QDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback qdesignerwidgetdatabaseinterface_sendersignalindex_callback = nullptr;
    QDesignerWidgetDataBaseInterface_Receivers_Callback qdesignerwidgetdatabaseinterface_receivers_callback = nullptr;
    QDesignerWidgetDataBaseInterface_IsSignalConnected_Callback qdesignerwidgetdatabaseinterface_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdesignerwidgetdatabaseinterface_metaobject_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_metacast_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_metacall_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_count_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_item_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_indexof_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_insert_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_append_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_indexofobject_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_indexofclassname_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_core_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_event_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_eventfilter_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_timerevent_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_childevent_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_customevent_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_connectnotify_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_disconnectnotify_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_sender_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_sendersignalindex_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_receivers_isbase = false;
    mutable bool qdesignerwidgetdatabaseinterface_issignalconnected_isbase = false;

  public:
    VirtualQDesignerWidgetDataBaseInterface() : QDesignerWidgetDataBaseInterface() {};
    VirtualQDesignerWidgetDataBaseInterface(QObject* parent) : QDesignerWidgetDataBaseInterface(parent) {};

    // Callback setters
    inline void setQDesignerWidgetDataBaseInterface_MetaObject_Callback(QDesignerWidgetDataBaseInterface_MetaObject_Callback cb) { qdesignerwidgetdatabaseinterface_metaobject_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Metacast_Callback(QDesignerWidgetDataBaseInterface_Metacast_Callback cb) { qdesignerwidgetdatabaseinterface_metacast_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Metacall_Callback(QDesignerWidgetDataBaseInterface_Metacall_Callback cb) { qdesignerwidgetdatabaseinterface_metacall_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Count_Callback(QDesignerWidgetDataBaseInterface_Count_Callback cb) { qdesignerwidgetdatabaseinterface_count_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Item_Callback(QDesignerWidgetDataBaseInterface_Item_Callback cb) { qdesignerwidgetdatabaseinterface_item_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOf_Callback(QDesignerWidgetDataBaseInterface_IndexOf_Callback cb) { qdesignerwidgetdatabaseinterface_indexof_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Insert_Callback(QDesignerWidgetDataBaseInterface_Insert_Callback cb) { qdesignerwidgetdatabaseinterface_insert_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Append_Callback(QDesignerWidgetDataBaseInterface_Append_Callback cb) { qdesignerwidgetdatabaseinterface_append_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOfObject_Callback(QDesignerWidgetDataBaseInterface_IndexOfObject_Callback cb) { qdesignerwidgetdatabaseinterface_indexofobject_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOfClassName_Callback(QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback cb) { qdesignerwidgetdatabaseinterface_indexofclassname_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Core_Callback(QDesignerWidgetDataBaseInterface_Core_Callback cb) { qdesignerwidgetdatabaseinterface_core_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Event_Callback(QDesignerWidgetDataBaseInterface_Event_Callback cb) { qdesignerwidgetdatabaseinterface_event_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_EventFilter_Callback(QDesignerWidgetDataBaseInterface_EventFilter_Callback cb) { qdesignerwidgetdatabaseinterface_eventfilter_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_TimerEvent_Callback(QDesignerWidgetDataBaseInterface_TimerEvent_Callback cb) { qdesignerwidgetdatabaseinterface_timerevent_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_ChildEvent_Callback(QDesignerWidgetDataBaseInterface_ChildEvent_Callback cb) { qdesignerwidgetdatabaseinterface_childevent_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_CustomEvent_Callback(QDesignerWidgetDataBaseInterface_CustomEvent_Callback cb) { qdesignerwidgetdatabaseinterface_customevent_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_ConnectNotify_Callback(QDesignerWidgetDataBaseInterface_ConnectNotify_Callback cb) { qdesignerwidgetdatabaseinterface_connectnotify_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_DisconnectNotify_Callback(QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback cb) { qdesignerwidgetdatabaseinterface_disconnectnotify_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Sender_Callback(QDesignerWidgetDataBaseInterface_Sender_Callback cb) { qdesignerwidgetdatabaseinterface_sender_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback(QDesignerWidgetDataBaseInterface_SenderSignalIndex_Callback cb) { qdesignerwidgetdatabaseinterface_sendersignalindex_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_Receivers_Callback(QDesignerWidgetDataBaseInterface_Receivers_Callback cb) { qdesignerwidgetdatabaseinterface_receivers_callback = cb; }
    inline void setQDesignerWidgetDataBaseInterface_IsSignalConnected_Callback(QDesignerWidgetDataBaseInterface_IsSignalConnected_Callback cb) { qdesignerwidgetdatabaseinterface_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQDesignerWidgetDataBaseInterface_MetaObject_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_metaobject_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Metacast_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_metacast_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Metacall_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_metacall_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Count_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_count_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Item_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_item_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOf_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_indexof_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Insert_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_insert_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Append_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_append_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOfObject_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_indexofobject_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_IndexOfClassName_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_indexofclassname_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Core_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_core_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Event_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_event_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_EventFilter_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_eventfilter_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_TimerEvent_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_timerevent_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_ChildEvent_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_childevent_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_CustomEvent_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_customevent_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_ConnectNotify_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_connectnotify_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_DisconnectNotify_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_disconnectnotify_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Sender_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_sender_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_SenderSignalIndex_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_sendersignalindex_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_Receivers_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_receivers_isbase = value; }
    inline void setQDesignerWidgetDataBaseInterface_IsSignalConnected_IsBase(bool value) const { qdesignerwidgetdatabaseinterface_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetdatabaseinterface_metaobject_isbase) {
            qdesignerwidgetdatabaseinterface_metaobject_isbase = false;
            return QDesignerWidgetDataBaseInterface::metaObject();
        }
        auto metaobject_cb = qdesignerwidgetdatabaseinterface_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetdatabaseinterface_metacast_isbase) {
            qdesignerwidgetdatabaseinterface_metacast_isbase = false;
            return QDesignerWidgetDataBaseInterface::qt_metacast(param1);
        }
        auto metacast_cb = qdesignerwidgetdatabaseinterface_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetdatabaseinterface_metacall_isbase) {
            qdesignerwidgetdatabaseinterface_metacall_isbase = false;
            return QDesignerWidgetDataBaseInterface::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qdesignerwidgetdatabaseinterface_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignerwidgetdatabaseinterface_count_isbase) {
            qdesignerwidgetdatabaseinterface_count_isbase = false;
            return QDesignerWidgetDataBaseInterface::count();
        }
        auto count_cb = qdesignerwidgetdatabaseinterface_count_callback;
        if (count_cb) {
            int callback_ret = count_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetDataBaseItemInterface* item(int index) const override {
        if (qdesignerwidgetdatabaseinterface_item_isbase) {
            qdesignerwidgetdatabaseinterface_item_isbase = false;
            return QDesignerWidgetDataBaseInterface::item(index);
        }
        auto item_cb = qdesignerwidgetdatabaseinterface_item_callback;
        if (item_cb) {
            int cbval1 = index;

            QDesignerWidgetDataBaseItemInterface* callback_ret = item_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::item(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QDesignerWidgetDataBaseItemInterface* item) const override {
        if (qdesignerwidgetdatabaseinterface_indexof_isbase) {
            qdesignerwidgetdatabaseinterface_indexof_isbase = false;
            return QDesignerWidgetDataBaseInterface::indexOf(item);
        }
        auto indexof_cb = qdesignerwidgetdatabaseinterface_indexof_callback;
        if (indexof_cb) {
            QDesignerWidgetDataBaseItemInterface* cbval1 = item;

            int callback_ret = indexof_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOf(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(int index, QDesignerWidgetDataBaseItemInterface* item) override {
        if (qdesignerwidgetdatabaseinterface_insert_isbase) {
            qdesignerwidgetdatabaseinterface_insert_isbase = false;
            QDesignerWidgetDataBaseInterface::insert(index, item);
            return;
        }
        auto insert_cb = qdesignerwidgetdatabaseinterface_insert_callback;
        if (insert_cb) {
            int cbval1 = index;
            QDesignerWidgetDataBaseItemInterface* cbval2 = item;

            insert_cb(this, cbval1, cbval2);
            return;
        }
        QDesignerWidgetDataBaseInterface::insert(index, item);
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(QDesignerWidgetDataBaseItemInterface* item) override {
        if (qdesignerwidgetdatabaseinterface_append_isbase) {
            qdesignerwidgetdatabaseinterface_append_isbase = false;
            QDesignerWidgetDataBaseInterface::append(item);
            return;
        }
        auto append_cb = qdesignerwidgetdatabaseinterface_append_callback;
        if (append_cb) {
            QDesignerWidgetDataBaseItemInterface* cbval1 = item;

            append_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::append(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfObject(QObject* object, bool resolveName) const override {
        if (qdesignerwidgetdatabaseinterface_indexofobject_isbase) {
            qdesignerwidgetdatabaseinterface_indexofobject_isbase = false;
            return QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
        }
        auto indexofobject_cb = qdesignerwidgetdatabaseinterface_indexofobject_callback;
        if (indexofobject_cb) {
            QObject* cbval1 = object;
            bool cbval2 = resolveName;

            int callback_ret = indexofobject_cb(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfClassName(const QString& className, bool resolveName) const override {
        if (qdesignerwidgetdatabaseinterface_indexofclassname_isbase) {
            qdesignerwidgetdatabaseinterface_indexofclassname_isbase = false;
            return QDesignerWidgetDataBaseInterface::indexOfClassName(className, resolveName);
        }
        auto indexofclassname_cb = qdesignerwidgetdatabaseinterface_indexofclassname_callback;
        if (indexofclassname_cb) {
            const QString className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            auto className_str_len = className_b.length();
            const char* className_str = static_cast<const char*>(malloc(className_str_len + 1));
            memcpy((void*)className_str, className_b.data(), className_str_len);
            ((char*)className_str)[className_str_len] = '\0';
            const char* cbval1 = className_str;
            bool cbval2 = resolveName;

            int callback_ret = indexofclassname_cb(this, cbval1, cbval2);
            libqt_free(className_str);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOfClassName(className, resolveName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerwidgetdatabaseinterface_core_isbase) {
            qdesignerwidgetdatabaseinterface_core_isbase = false;
            return QDesignerWidgetDataBaseInterface::core();
        }
        auto core_cb = qdesignerwidgetdatabaseinterface_core_callback;
        if (core_cb) {
            QDesignerFormEditorInterface* callback_ret = core_cb();
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_event_isbase) {
            qdesignerwidgetdatabaseinterface_event_isbase = false;
            return QDesignerWidgetDataBaseInterface::event(event);
        }
        auto event_cb = qdesignerwidgetdatabaseinterface_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_eventfilter_isbase) {
            qdesignerwidgetdatabaseinterface_eventfilter_isbase = false;
            return QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
        }
        auto eventfilter_cb = qdesignerwidgetdatabaseinterface_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_timerevent_isbase) {
            qdesignerwidgetdatabaseinterface_timerevent_isbase = false;
            QDesignerWidgetDataBaseInterface::timerEvent(event);
            return;
        }
        auto timerevent_cb = qdesignerwidgetdatabaseinterface_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_childevent_isbase) {
            qdesignerwidgetdatabaseinterface_childevent_isbase = false;
            QDesignerWidgetDataBaseInterface::childEvent(event);
            return;
        }
        auto childevent_cb = qdesignerwidgetdatabaseinterface_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_customevent_isbase) {
            qdesignerwidgetdatabaseinterface_customevent_isbase = false;
            QDesignerWidgetDataBaseInterface::customEvent(event);
            return;
        }
        auto customevent_cb = qdesignerwidgetdatabaseinterface_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetdatabaseinterface_connectnotify_isbase) {
            qdesignerwidgetdatabaseinterface_connectnotify_isbase = false;
            QDesignerWidgetDataBaseInterface::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qdesignerwidgetdatabaseinterface_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetdatabaseinterface_disconnectnotify_isbase) {
            qdesignerwidgetdatabaseinterface_disconnectnotify_isbase = false;
            QDesignerWidgetDataBaseInterface::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qdesignerwidgetdatabaseinterface_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdesignerwidgetdatabaseinterface_sender_isbase) {
            qdesignerwidgetdatabaseinterface_sender_isbase = false;
            return QDesignerWidgetDataBaseInterface::sender();
        }
        auto sender_cb = qdesignerwidgetdatabaseinterface_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdesignerwidgetdatabaseinterface_sendersignalindex_isbase) {
            qdesignerwidgetdatabaseinterface_sendersignalindex_isbase = false;
            return QDesignerWidgetDataBaseInterface::senderSignalIndex();
        }
        auto sendersignalindex_cb = qdesignerwidgetdatabaseinterface_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdesignerwidgetdatabaseinterface_receivers_isbase) {
            qdesignerwidgetdatabaseinterface_receivers_isbase = false;
            return QDesignerWidgetDataBaseInterface::receivers(signal);
        }
        auto receivers_cb = qdesignerwidgetdatabaseinterface_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdesignerwidgetdatabaseinterface_issignalconnected_isbase) {
            qdesignerwidgetdatabaseinterface_issignalconnected_isbase = false;
            return QDesignerWidgetDataBaseInterface::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qdesignerwidgetdatabaseinterface_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::isSignalConnected(signal);
    }

    // Friend functions
    friend void QDesignerWidgetDataBaseInterface_TimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperTimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetDataBaseInterface_ChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerWidgetDataBaseInterface_CustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperCustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event);
    friend void QDesignerWidgetDataBaseInterface_ConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetDataBaseInterface_SuperConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetDataBaseInterface_DisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetDataBaseInterface_SuperDisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend QObject* QDesignerWidgetDataBaseInterface_Sender(const QDesignerWidgetDataBaseInterface* self);
    friend QObject* QDesignerWidgetDataBaseInterface_SuperSender(const QDesignerWidgetDataBaseInterface* self);
    friend int QDesignerWidgetDataBaseInterface_SenderSignalIndex(const QDesignerWidgetDataBaseInterface* self);
    friend int QDesignerWidgetDataBaseInterface_SuperSenderSignalIndex(const QDesignerWidgetDataBaseInterface* self);
    friend int QDesignerWidgetDataBaseInterface_Receivers(const QDesignerWidgetDataBaseInterface* self, const char* signal);
    friend int QDesignerWidgetDataBaseInterface_SuperReceivers(const QDesignerWidgetDataBaseInterface* self, const char* signal);
    friend bool QDesignerWidgetDataBaseInterface_IsSignalConnected(const QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend bool QDesignerWidgetDataBaseInterface_SuperIsSignalConnected(const QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
};

#endif
