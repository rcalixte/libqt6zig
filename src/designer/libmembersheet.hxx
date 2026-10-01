#pragma once
#ifndef DESIGNER_LIBMEMBERSHEET_HXX
#define DESIGNER_LIBMEMBERSHEET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerMemberSheetExtension
class VirtualQDesignerMemberSheetExtension : public QDesignerMemberSheetExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerMemberSheetExtension_Count_Callback = int (*)(const QDesignerMemberSheetExtension*);
    using QDesignerMemberSheetExtension_IndexOf_Callback = int (*)(const QDesignerMemberSheetExtension*, const char*);
    using QDesignerMemberSheetExtension_MemberName_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_MemberGroup_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_SetMemberGroup_Callback = void (*)(QDesignerMemberSheetExtension*, int, const char*);
    using QDesignerMemberSheetExtension_IsVisible_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_SetVisible_Callback = void (*)(QDesignerMemberSheetExtension*, int, bool);
    using QDesignerMemberSheetExtension_IsSignal_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_IsSlot_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_InheritedFromWidget_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_DeclaredInClass_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_Signature_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_ParameterTypes_Callback = const char** (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_ParameterNames_Callback = const char** (*)(const QDesignerMemberSheetExtension*, int);

    // Instance callback storage
    QDesignerMemberSheetExtension_Count_Callback qdesignermembersheetextension_count_callback = nullptr;
    QDesignerMemberSheetExtension_IndexOf_Callback qdesignermembersheetextension_indexof_callback = nullptr;
    QDesignerMemberSheetExtension_MemberName_Callback qdesignermembersheetextension_membername_callback = nullptr;
    QDesignerMemberSheetExtension_MemberGroup_Callback qdesignermembersheetextension_membergroup_callback = nullptr;
    QDesignerMemberSheetExtension_SetMemberGroup_Callback qdesignermembersheetextension_setmembergroup_callback = nullptr;
    QDesignerMemberSheetExtension_IsVisible_Callback qdesignermembersheetextension_isvisible_callback = nullptr;
    QDesignerMemberSheetExtension_SetVisible_Callback qdesignermembersheetextension_setvisible_callback = nullptr;
    QDesignerMemberSheetExtension_IsSignal_Callback qdesignermembersheetextension_issignal_callback = nullptr;
    QDesignerMemberSheetExtension_IsSlot_Callback qdesignermembersheetextension_isslot_callback = nullptr;
    QDesignerMemberSheetExtension_InheritedFromWidget_Callback qdesignermembersheetextension_inheritedfromwidget_callback = nullptr;
    QDesignerMemberSheetExtension_DeclaredInClass_Callback qdesignermembersheetextension_declaredinclass_callback = nullptr;
    QDesignerMemberSheetExtension_Signature_Callback qdesignermembersheetextension_signature_callback = nullptr;
    QDesignerMemberSheetExtension_ParameterTypes_Callback qdesignermembersheetextension_parametertypes_callback = nullptr;
    QDesignerMemberSheetExtension_ParameterNames_Callback qdesignermembersheetextension_parameternames_callback = nullptr;

    VirtualQDesignerMemberSheetExtension() : QDesignerMemberSheetExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignermembersheetextension_count_callback) {
            int callback_ret = qdesignermembersheetextension_count_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::count called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QString& name) const override {
        if (qdesignermembersheetextension_indexof_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            int callback_ret = qdesignermembersheetextension_indexof_callback(this, cbval1);
            libqt_free(name_str);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::indexOf called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString memberName(int index) const override {
        if (qdesignermembersheetextension_membername_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignermembersheetextension_membername_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::memberName called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString memberGroup(int index) const override {
        if (qdesignermembersheetextension_membergroup_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignermembersheetextension_membergroup_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::memberGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMemberGroup(int index, const QString& group) override {
        if (qdesignermembersheetextension_setmembergroup_callback) {
            int cbval1 = index;
            const auto group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            auto group_str_len = group_b.length();
            const char* group_str = static_cast<const char*>(malloc(group_str_len + 1));
            memcpy((void*)group_str, group_b.data(), group_str_len);
            ((char*)group_str)[group_str_len] = '\0';
            const char* cbval2 = group_str;
            qdesignermembersheetextension_setmembergroup_callback(this, cbval1, cbval2);
            libqt_free(group_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::setMemberGroup called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isVisible(int index) const override {
        if (qdesignermembersheetextension_isvisible_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignermembersheetextension_isvisible_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::isVisible called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(int index, bool b) override {
        if (qdesignermembersheetextension_setvisible_callback) {
            int cbval1 = index;
            bool cbval2 = b;
            qdesignermembersheetextension_setvisible_callback(this, cbval1, cbval2);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::setVisible called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSignal(int index) const override {
        if (qdesignermembersheetextension_issignal_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignermembersheetextension_issignal_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::isSignal called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSlot(int index) const override {
        if (qdesignermembersheetextension_isslot_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignermembersheetextension_isslot_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::isSlot called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool inheritedFromWidget(int index) const override {
        if (qdesignermembersheetextension_inheritedfromwidget_callback) {
            int cbval1 = index;
            bool callback_ret = qdesignermembersheetextension_inheritedfromwidget_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::inheritedFromWidget called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString declaredInClass(int index) const override {
        if (qdesignermembersheetextension_declaredinclass_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignermembersheetextension_declaredinclass_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::declaredInClass called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString signature(int index) const override {
        if (qdesignermembersheetextension_signature_callback) {
            int cbval1 = index;
            const char* callback_ret = qdesignermembersheetextension_signature_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::signature called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QByteArray> parameterTypes(int index) const override {
        if (qdesignermembersheetextension_parametertypes_callback) {
            int cbval1 = index;
            const char** callback_ret = qdesignermembersheetextension_parametertypes_callback(this, cbval1);
            QList<QByteArray> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QByteArray callback_ret_arr_i_QByteArray(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QByteArray);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::parameterTypes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QByteArray> parameterNames(int index) const override {
        if (qdesignermembersheetextension_parameternames_callback) {
            int cbval1 = index;
            const char** callback_ret = qdesignermembersheetextension_parameternames_callback(this, cbval1);
            QList<QByteArray> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QByteArray callback_ret_arr_i_QByteArray(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QByteArray);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerMemberSheetExtension::parameterNames called without being implemented");
    }
};

#endif
