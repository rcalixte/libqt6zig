#pragma once
#ifndef DESIGNER_LIBABSTRACTWIDGETDATABASE_HXX
#define DESIGNER_LIBABSTRACTWIDGETDATABASE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerWidgetDataBaseItemInterface
class VirtualQDesignerWidgetDataBaseItemInterface : public QDesignerWidgetDataBaseItemInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerWidgetDataBaseItemInterface_Name_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetName_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_Group_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetGroup_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_ToolTip_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetToolTip_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_WhatsThis_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetWhatsThis_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_IncludeFile_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetIncludeFile_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_Icon_Callback = QIcon* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetIcon_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, QIcon*);
    using QDesignerWidgetDataBaseItemInterface_IsCompat_Callback = bool (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetCompat_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_IsContainer_Callback = bool (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetContainer_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_IsCustom_Callback = bool (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetCustom_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_PluginPath_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetPluginPath_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_IsPromoted_Callback = bool (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetPromoted_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, bool);
    using QDesignerWidgetDataBaseItemInterface_Extends_Callback = const char* (*)(const QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseItemInterface_SetExtends_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, const char*);
    using QDesignerWidgetDataBaseItemInterface_SetDefaultPropertyValues_Callback = void (*)(QDesignerWidgetDataBaseItemInterface*, libqt_list /* of QVariant* */);
    using QDesignerWidgetDataBaseItemInterface_DefaultPropertyValues_Callback = libqt_list /* of QVariant* */ (*)(const QDesignerWidgetDataBaseItemInterface*);

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

    VirtualQDesignerWidgetDataBaseItemInterface() : QDesignerWidgetDataBaseItemInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (qdesignerwidgetdatabaseiteminterface_name_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::name called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setName(const QString& name) override {
        if (qdesignerwidgetdatabaseiteminterface_setname_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            qdesignerwidgetdatabaseiteminterface_setname_callback(this, cbval1);
            libqt_free(name_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString group() const override {
        if (qdesignerwidgetdatabaseiteminterface_group_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_group_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::group called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGroup(const QString& group) override {
        if (qdesignerwidgetdatabaseiteminterface_setgroup_callback) {
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval1 = group_str;
            qdesignerwidgetdatabaseiteminterface_setgroup_callback(this, cbval1);
            libqt_free(group_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString toolTip() const override {
        if (qdesignerwidgetdatabaseiteminterface_tooltip_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_tooltip_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::toolTip called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setToolTip(const QString& toolTip) override {
        if (qdesignerwidgetdatabaseiteminterface_settooltip_callback) {
            const auto toolTip_ret = toolTip;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray toolTip_b = toolTip_ret.toUtf8();
            auto toolTip_str_len = toolTip_b.length();
            const char* toolTip_str = static_cast<const char*>(malloc(toolTip_str_len + 1));
            memcpy((void*)toolTip_str, toolTip_b.data(), toolTip_str_len);
            ((char*)toolTip_str)[toolTip_str_len] = '\0';
            const char* cbval1 = toolTip_str;
            qdesignerwidgetdatabaseiteminterface_settooltip_callback(this, cbval1);
            libqt_free(toolTip_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setToolTip called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString whatsThis() const override {
        if (qdesignerwidgetdatabaseiteminterface_whatsthis_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_whatsthis_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::whatsThis called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWhatsThis(const QString& whatsThis) override {
        if (qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback) {
            const auto whatsThis_ret = whatsThis;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray whatsThis_b = whatsThis_ret.toUtf8();
            auto whatsThis_str_len = whatsThis_b.length();
            const char* whatsThis_str = static_cast<const char*>(malloc(whatsThis_str_len + 1));
            memcpy((void*)whatsThis_str, whatsThis_b.data(), whatsThis_str_len);
            ((char*)whatsThis_str)[whatsThis_str_len] = '\0';
            const char* cbval1 = whatsThis_str;
            qdesignerwidgetdatabaseiteminterface_setwhatsthis_callback(this, cbval1);
            libqt_free(whatsThis_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setWhatsThis called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString includeFile() const override {
        if (qdesignerwidgetdatabaseiteminterface_includefile_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_includefile_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::includeFile called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIncludeFile(const QString& includeFile) override {
        if (qdesignerwidgetdatabaseiteminterface_setincludefile_callback) {
            const auto includeFile_ret = includeFile;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray includeFile_b = includeFile_ret.toUtf8();
            auto includeFile_str_len = includeFile_b.length();
            const char* includeFile_str = static_cast<const char*>(malloc(includeFile_str_len + 1));
            memcpy((void*)includeFile_str, includeFile_b.data(), includeFile_str_len);
            ((char*)includeFile_str)[includeFile_str_len] = '\0';
            const char* cbval1 = includeFile_str;
            qdesignerwidgetdatabaseiteminterface_setincludefile_callback(this, cbval1);
            libqt_free(includeFile_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setIncludeFile called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon icon() const override {
        if (qdesignerwidgetdatabaseiteminterface_icon_callback) {
            QIcon* callback_ret = qdesignerwidgetdatabaseiteminterface_icon_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::icon called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setIcon(const QIcon& icon) override {
        if (qdesignerwidgetdatabaseiteminterface_seticon_callback) {
            const QIcon& icon_ret = icon;
            // Cast returned reference into pointer
            QIcon* cbval1 = const_cast<QIcon*>(&icon_ret);
            qdesignerwidgetdatabaseiteminterface_seticon_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setIcon called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isCompat() const override {
        if (qdesignerwidgetdatabaseiteminterface_iscompat_callback) {
            bool callback_ret = qdesignerwidgetdatabaseiteminterface_iscompat_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::isCompat called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCompat(bool compat) override {
        if (qdesignerwidgetdatabaseiteminterface_setcompat_callback) {
            bool cbval1 = compat;
            qdesignerwidgetdatabaseiteminterface_setcompat_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setCompat called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isContainer() const override {
        if (qdesignerwidgetdatabaseiteminterface_iscontainer_callback) {
            bool callback_ret = qdesignerwidgetdatabaseiteminterface_iscontainer_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::isContainer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setContainer(bool container) override {
        if (qdesignerwidgetdatabaseiteminterface_setcontainer_callback) {
            bool cbval1 = container;
            qdesignerwidgetdatabaseiteminterface_setcontainer_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setContainer called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isCustom() const override {
        if (qdesignerwidgetdatabaseiteminterface_iscustom_callback) {
            bool callback_ret = qdesignerwidgetdatabaseiteminterface_iscustom_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::isCustom called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setCustom(bool custom) override {
        if (qdesignerwidgetdatabaseiteminterface_setcustom_callback) {
            bool cbval1 = custom;
            qdesignerwidgetdatabaseiteminterface_setcustom_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setCustom called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString pluginPath() const override {
        if (qdesignerwidgetdatabaseiteminterface_pluginpath_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_pluginpath_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::pluginPath called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPluginPath(const QString& path) override {
        if (qdesignerwidgetdatabaseiteminterface_setpluginpath_callback) {
            const auto path_ret = path;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray path_b = path_ret.toUtf8();
            auto path_str_len = path_b.length();
            const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
            memcpy((void*)path_str, path_b.data(), path_str_len);
            ((char*)path_str)[path_str_len] = '\0';
            const char* cbval1 = path_str;
            qdesignerwidgetdatabaseiteminterface_setpluginpath_callback(this, cbval1);
            libqt_free(path_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setPluginPath called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isPromoted() const override {
        if (qdesignerwidgetdatabaseiteminterface_ispromoted_callback) {
            bool callback_ret = qdesignerwidgetdatabaseiteminterface_ispromoted_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::isPromoted called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPromoted(bool b) override {
        if (qdesignerwidgetdatabaseiteminterface_setpromoted_callback) {
            bool cbval1 = b;
            qdesignerwidgetdatabaseiteminterface_setpromoted_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setPromoted called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString extends() const override {
        if (qdesignerwidgetdatabaseiteminterface_extends_callback) {
            const char* callback_ret = qdesignerwidgetdatabaseiteminterface_extends_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::extends called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtends(const QString& s) override {
        if (qdesignerwidgetdatabaseiteminterface_setextends_callback) {
            const auto s_ret = s;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray s_b = s_ret.toUtf8();
            auto s_str_len = s_b.length();
            const char* s_str = static_cast<const char*>(malloc(s_str_len + 1));
            memcpy((void*)s_str, s_b.data(), s_str_len);
            ((char*)s_str)[s_str_len] = '\0';
            const char* cbval1 = s_str;
            qdesignerwidgetdatabaseiteminterface_setextends_callback(this, cbval1);
            libqt_free(s_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setExtends called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setDefaultPropertyValues(const QList<QVariant>& list) override {
        if (qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback) {
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
            qdesignerwidgetdatabaseiteminterface_setdefaultpropertyvalues_callback(this, cbval1);
            free(list_arr);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::setDefaultPropertyValues called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVariant> defaultPropertyValues() const override {
        if (qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback) {
            libqt_list /* of QVariant* */ callback_ret = qdesignerwidgetdatabaseiteminterface_defaultpropertyvalues_callback(this);
            QList<QVariant> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QVariant** callback_ret_arr = static_cast<QVariant**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(*(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerWidgetDataBaseItemInterface::defaultPropertyValues called without being implemented");
    }
};

// This class is a subclass of QDesignerWidgetDataBaseInterface
class VirtualQDesignerWidgetDataBaseInterface final : public QDesignerWidgetDataBaseInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerWidgetDataBaseInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerWidgetDataBaseInterface*);
    using QDesignerWidgetDataBaseInterface_Metacast_Callback = void* (*)(QDesignerWidgetDataBaseInterface*, const char*);
    using QDesignerWidgetDataBaseInterface_Metacall_Callback = int (*)(QDesignerWidgetDataBaseInterface*, int, int, void**);
    using QDesignerWidgetDataBaseInterface_Count_Callback = int (*)(const QDesignerWidgetDataBaseInterface*);
    using QDesignerWidgetDataBaseInterface_Item_Callback = QDesignerWidgetDataBaseItemInterface* (*)(const QDesignerWidgetDataBaseInterface*, int);
    using QDesignerWidgetDataBaseInterface_IndexOf_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_Insert_Callback = void (*)(QDesignerWidgetDataBaseInterface*, int, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_Append_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QDesignerWidgetDataBaseItemInterface*);
    using QDesignerWidgetDataBaseInterface_IndexOfObject_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, QObject*, bool);
    using QDesignerWidgetDataBaseInterface_IndexOfClassName_Callback = int (*)(const QDesignerWidgetDataBaseInterface*, const char*, bool);
    using QDesignerWidgetDataBaseInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerWidgetDataBaseInterface*);
    using QDesignerWidgetDataBaseInterface_Event_Callback = bool (*)(QDesignerWidgetDataBaseInterface*, QEvent*);
    using QDesignerWidgetDataBaseInterface_EventFilter_Callback = bool (*)(QDesignerWidgetDataBaseInterface*, QObject*, QEvent*);
    using QDesignerWidgetDataBaseInterface_TimerEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QTimerEvent*);
    using QDesignerWidgetDataBaseInterface_ChildEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QChildEvent*);
    using QDesignerWidgetDataBaseInterface_CustomEvent_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QEvent*);
    using QDesignerWidgetDataBaseInterface_ConnectNotify_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QMetaMethod*);
    using QDesignerWidgetDataBaseInterface_DisconnectNotify_Callback = void (*)(QDesignerWidgetDataBaseInterface*, QMetaMethod*);
    using QDesignerWidgetDataBaseInterface::isSignalConnected;
    using QDesignerWidgetDataBaseInterface::receivers;
    using QDesignerWidgetDataBaseInterface::sender;
    using QDesignerWidgetDataBaseInterface::senderSignalIndex;

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

    // Access struct
    struct Base : QDesignerWidgetDataBaseInterface {
        using QDesignerWidgetDataBaseInterface::childEvent;
        using QDesignerWidgetDataBaseInterface::connectNotify;
        using QDesignerWidgetDataBaseInterface::customEvent;
        using QDesignerWidgetDataBaseInterface::disconnectNotify;
        using QDesignerWidgetDataBaseInterface::timerEvent;
    };

    VirtualQDesignerWidgetDataBaseInterface() : QDesignerWidgetDataBaseInterface() {};
    VirtualQDesignerWidgetDataBaseInterface(QObject* parent) : QDesignerWidgetDataBaseInterface(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerwidgetdatabaseinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerwidgetdatabaseinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerwidgetdatabaseinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerwidgetdatabaseinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerwidgetdatabaseinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerwidgetdatabaseinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignerwidgetdatabaseinterface_count_callback) {
            int callback_ret = qdesignerwidgetdatabaseinterface_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::count();
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerWidgetDataBaseItemInterface* item(int index) const override {
        if (qdesignerwidgetdatabaseinterface_item_callback) {
            int cbval1 = index;
            QDesignerWidgetDataBaseItemInterface* callback_ret = qdesignerwidgetdatabaseinterface_item_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::item(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(QDesignerWidgetDataBaseItemInterface* item) const override {
        if (qdesignerwidgetdatabaseinterface_indexof_callback) {
            QDesignerWidgetDataBaseItemInterface* cbval1 = item;
            int callback_ret = qdesignerwidgetdatabaseinterface_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOf(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(int index, QDesignerWidgetDataBaseItemInterface* item) override {
        if (qdesignerwidgetdatabaseinterface_insert_callback) {
            int cbval1 = index;
            QDesignerWidgetDataBaseItemInterface* cbval2 = item;
            qdesignerwidgetdatabaseinterface_insert_callback(this, cbval1, cbval2);
            return;
        }
        QDesignerWidgetDataBaseInterface::insert(index, item);
    }

    // Virtual method for C ABI access and custom callback
    virtual void append(QDesignerWidgetDataBaseItemInterface* item) override {
        if (qdesignerwidgetdatabaseinterface_append_callback) {
            QDesignerWidgetDataBaseItemInterface* cbval1 = item;
            qdesignerwidgetdatabaseinterface_append_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::append(item);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfObject(QObject* object, bool resolveName) const override {
        if (qdesignerwidgetdatabaseinterface_indexofobject_callback) {
            QObject* cbval1 = object;
            bool cbval2 = resolveName;
            int callback_ret = qdesignerwidgetdatabaseinterface_indexofobject_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfClassName(const QString& className, bool resolveName) const override {
        if (qdesignerwidgetdatabaseinterface_indexofclassname_callback) {
            const auto className_ret = className;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray className_b = className_ret.toUtf8();
            auto className_str_len = className_b.length();
            const char* className_str = static_cast<const char*>(malloc(className_str_len + 1));
            memcpy((void*)className_str, className_b.data(), className_str_len);
            ((char*)className_str)[className_str_len] = '\0';
            const char* cbval1 = className_str;
            bool cbval2 = resolveName;
            int callback_ret = qdesignerwidgetdatabaseinterface_indexofclassname_callback(this, cbval1, cbval2);
            libqt_free(className_str);
            return static_cast<int>(callback_ret);
        }
        return QDesignerWidgetDataBaseInterface::indexOfClassName(className, resolveName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerwidgetdatabaseinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerwidgetdatabaseinterface_core_callback(this);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerwidgetdatabaseinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerwidgetdatabaseinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerwidgetdatabaseinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerwidgetdatabaseinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerwidgetdatabaseinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerwidgetdatabaseinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetdatabaseinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetdatabaseinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerwidgetdatabaseinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerwidgetdatabaseinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerWidgetDataBaseInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDesignerWidgetDataBaseInterface_SuperTimerEvent(QDesignerWidgetDataBaseInterface* self, QTimerEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperChildEvent(QDesignerWidgetDataBaseInterface* self, QChildEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperCustomEvent(QDesignerWidgetDataBaseInterface* self, QEvent* event);
    friend void QDesignerWidgetDataBaseInterface_SuperConnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
    friend void QDesignerWidgetDataBaseInterface_SuperDisconnectNotify(QDesignerWidgetDataBaseInterface* self, const QMetaMethod* signal);
};

#endif
