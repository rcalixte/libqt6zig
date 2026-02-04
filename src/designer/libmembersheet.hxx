#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALMEMBERSHEET_H
#define SRC_DESIGNERC_LIBVIRTUALMEMBERSHEET_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerMemberSheetExtension so that we can call protected methods
class VirtualQDesignerMemberSheetExtension : public QDesignerMemberSheetExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerMemberSheetExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerMemberSheetExtension_Count_Callback = int (*)();
    using QDesignerMemberSheetExtension_IndexOf_Callback = int (*)(const QDesignerMemberSheetExtension*, libqt_string);
    using QDesignerMemberSheetExtension_MemberName_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_MemberGroup_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_SetMemberGroup_Callback = void (*)(QDesignerMemberSheetExtension*, int, libqt_string);
    using QDesignerMemberSheetExtension_IsVisible_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_SetVisible_Callback = void (*)(QDesignerMemberSheetExtension*, int, bool);
    using QDesignerMemberSheetExtension_IsSignal_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_IsSlot_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_InheritedFromWidget_Callback = bool (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_DeclaredInClass_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_Signature_Callback = const char* (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_ParameterTypes_Callback = const char** (*)(const QDesignerMemberSheetExtension*, int);
    using QDesignerMemberSheetExtension_ParameterNames_Callback = const char** (*)(const QDesignerMemberSheetExtension*, int);

  protected:
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

    // Instance base flags
    mutable bool qdesignermembersheetextension_count_isbase = false;
    mutable bool qdesignermembersheetextension_indexof_isbase = false;
    mutable bool qdesignermembersheetextension_membername_isbase = false;
    mutable bool qdesignermembersheetextension_membergroup_isbase = false;
    mutable bool qdesignermembersheetextension_setmembergroup_isbase = false;
    mutable bool qdesignermembersheetextension_isvisible_isbase = false;
    mutable bool qdesignermembersheetextension_setvisible_isbase = false;
    mutable bool qdesignermembersheetextension_issignal_isbase = false;
    mutable bool qdesignermembersheetextension_isslot_isbase = false;
    mutable bool qdesignermembersheetextension_inheritedfromwidget_isbase = false;
    mutable bool qdesignermembersheetextension_declaredinclass_isbase = false;
    mutable bool qdesignermembersheetextension_signature_isbase = false;
    mutable bool qdesignermembersheetextension_parametertypes_isbase = false;
    mutable bool qdesignermembersheetextension_parameternames_isbase = false;

  public:
    VirtualQDesignerMemberSheetExtension() : QDesignerMemberSheetExtension() {};

    ~VirtualQDesignerMemberSheetExtension() {
        qdesignermembersheetextension_count_callback = nullptr;
        qdesignermembersheetextension_indexof_callback = nullptr;
        qdesignermembersheetextension_membername_callback = nullptr;
        qdesignermembersheetextension_membergroup_callback = nullptr;
        qdesignermembersheetextension_setmembergroup_callback = nullptr;
        qdesignermembersheetextension_isvisible_callback = nullptr;
        qdesignermembersheetextension_setvisible_callback = nullptr;
        qdesignermembersheetextension_issignal_callback = nullptr;
        qdesignermembersheetextension_isslot_callback = nullptr;
        qdesignermembersheetextension_inheritedfromwidget_callback = nullptr;
        qdesignermembersheetextension_declaredinclass_callback = nullptr;
        qdesignermembersheetextension_signature_callback = nullptr;
        qdesignermembersheetextension_parametertypes_callback = nullptr;
        qdesignermembersheetextension_parameternames_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerMemberSheetExtension_Count_Callback(QDesignerMemberSheetExtension_Count_Callback cb) { qdesignermembersheetextension_count_callback = cb; }
    inline void setQDesignerMemberSheetExtension_IndexOf_Callback(QDesignerMemberSheetExtension_IndexOf_Callback cb) { qdesignermembersheetextension_indexof_callback = cb; }
    inline void setQDesignerMemberSheetExtension_MemberName_Callback(QDesignerMemberSheetExtension_MemberName_Callback cb) { qdesignermembersheetextension_membername_callback = cb; }
    inline void setQDesignerMemberSheetExtension_MemberGroup_Callback(QDesignerMemberSheetExtension_MemberGroup_Callback cb) { qdesignermembersheetextension_membergroup_callback = cb; }
    inline void setQDesignerMemberSheetExtension_SetMemberGroup_Callback(QDesignerMemberSheetExtension_SetMemberGroup_Callback cb) { qdesignermembersheetextension_setmembergroup_callback = cb; }
    inline void setQDesignerMemberSheetExtension_IsVisible_Callback(QDesignerMemberSheetExtension_IsVisible_Callback cb) { qdesignermembersheetextension_isvisible_callback = cb; }
    inline void setQDesignerMemberSheetExtension_SetVisible_Callback(QDesignerMemberSheetExtension_SetVisible_Callback cb) { qdesignermembersheetextension_setvisible_callback = cb; }
    inline void setQDesignerMemberSheetExtension_IsSignal_Callback(QDesignerMemberSheetExtension_IsSignal_Callback cb) { qdesignermembersheetextension_issignal_callback = cb; }
    inline void setQDesignerMemberSheetExtension_IsSlot_Callback(QDesignerMemberSheetExtension_IsSlot_Callback cb) { qdesignermembersheetextension_isslot_callback = cb; }
    inline void setQDesignerMemberSheetExtension_InheritedFromWidget_Callback(QDesignerMemberSheetExtension_InheritedFromWidget_Callback cb) { qdesignermembersheetextension_inheritedfromwidget_callback = cb; }
    inline void setQDesignerMemberSheetExtension_DeclaredInClass_Callback(QDesignerMemberSheetExtension_DeclaredInClass_Callback cb) { qdesignermembersheetextension_declaredinclass_callback = cb; }
    inline void setQDesignerMemberSheetExtension_Signature_Callback(QDesignerMemberSheetExtension_Signature_Callback cb) { qdesignermembersheetextension_signature_callback = cb; }
    inline void setQDesignerMemberSheetExtension_ParameterTypes_Callback(QDesignerMemberSheetExtension_ParameterTypes_Callback cb) { qdesignermembersheetextension_parametertypes_callback = cb; }
    inline void setQDesignerMemberSheetExtension_ParameterNames_Callback(QDesignerMemberSheetExtension_ParameterNames_Callback cb) { qdesignermembersheetextension_parameternames_callback = cb; }

    // Base flag setters
    inline void setQDesignerMemberSheetExtension_Count_IsBase(bool value) const { qdesignermembersheetextension_count_isbase = value; }
    inline void setQDesignerMemberSheetExtension_IndexOf_IsBase(bool value) const { qdesignermembersheetextension_indexof_isbase = value; }
    inline void setQDesignerMemberSheetExtension_MemberName_IsBase(bool value) const { qdesignermembersheetextension_membername_isbase = value; }
    inline void setQDesignerMemberSheetExtension_MemberGroup_IsBase(bool value) const { qdesignermembersheetextension_membergroup_isbase = value; }
    inline void setQDesignerMemberSheetExtension_SetMemberGroup_IsBase(bool value) const { qdesignermembersheetextension_setmembergroup_isbase = value; }
    inline void setQDesignerMemberSheetExtension_IsVisible_IsBase(bool value) const { qdesignermembersheetextension_isvisible_isbase = value; }
    inline void setQDesignerMemberSheetExtension_SetVisible_IsBase(bool value) const { qdesignermembersheetextension_setvisible_isbase = value; }
    inline void setQDesignerMemberSheetExtension_IsSignal_IsBase(bool value) const { qdesignermembersheetextension_issignal_isbase = value; }
    inline void setQDesignerMemberSheetExtension_IsSlot_IsBase(bool value) const { qdesignermembersheetextension_isslot_isbase = value; }
    inline void setQDesignerMemberSheetExtension_InheritedFromWidget_IsBase(bool value) const { qdesignermembersheetextension_inheritedfromwidget_isbase = value; }
    inline void setQDesignerMemberSheetExtension_DeclaredInClass_IsBase(bool value) const { qdesignermembersheetextension_declaredinclass_isbase = value; }
    inline void setQDesignerMemberSheetExtension_Signature_IsBase(bool value) const { qdesignermembersheetextension_signature_isbase = value; }
    inline void setQDesignerMemberSheetExtension_ParameterTypes_IsBase(bool value) const { qdesignermembersheetextension_parametertypes_isbase = value; }
    inline void setQDesignerMemberSheetExtension_ParameterNames_IsBase(bool value) const { qdesignermembersheetextension_parameternames_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qdesignermembersheetextension_count_callback != nullptr) {
            int callback_ret = qdesignermembersheetextension_count_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QString& name) const override {
        if (qdesignermembersheetextension_indexof_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc(name_str.len + 1));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            int callback_ret = qdesignermembersheetextension_indexof_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString memberName(int index) const override {
        if (qdesignermembersheetextension_membername_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignermembersheetextension_membername_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString memberGroup(int index) const override {
        if (qdesignermembersheetextension_membergroup_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignermembersheetextension_membergroup_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMemberGroup(int index, const QString& group) override {
        if (qdesignermembersheetextension_setmembergroup_callback != nullptr) {
            int cbval1 = index;
            const QString group_ret = group;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray group_b = group_ret.toUtf8();
            libqt_string group_str;
            group_str.len = group_b.length();
            group_str.data = static_cast<const char*>(malloc(group_str.len + 1));
            memcpy((void*)group_str.data, group_b.data(), group_str.len);
            ((char*)group_str.data)[group_str.len] = '\0';
            libqt_string cbval2 = group_str;

            qdesignermembersheetextension_setmembergroup_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isVisible(int index) const override {
        if (qdesignermembersheetextension_isvisible_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignermembersheetextension_isvisible_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(int index, bool b) override {
        if (qdesignermembersheetextension_setvisible_callback != nullptr) {
            int cbval1 = index;
            bool cbval2 = b;

            qdesignermembersheetextension_setvisible_callback(this, cbval1, cbval2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSignal(int index) const override {
        if (qdesignermembersheetextension_issignal_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignermembersheetextension_issignal_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isSlot(int index) const override {
        if (qdesignermembersheetextension_isslot_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignermembersheetextension_isslot_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool inheritedFromWidget(int index) const override {
        if (qdesignermembersheetextension_inheritedfromwidget_callback != nullptr) {
            int cbval1 = index;

            bool callback_ret = qdesignermembersheetextension_inheritedfromwidget_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString declaredInClass(int index) const override {
        if (qdesignermembersheetextension_declaredinclass_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignermembersheetextension_declaredinclass_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString signature(int index) const override {
        if (qdesignermembersheetextension_signature_callback != nullptr) {
            int cbval1 = index;

            const char* callback_ret = qdesignermembersheetextension_signature_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QByteArray> parameterTypes(int index) const override {
        if (qdesignermembersheetextension_parametertypes_callback != nullptr) {
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
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QByteArray> parameterNames(int index) const override {
        if (qdesignermembersheetextension_parameternames_callback != nullptr) {
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
        } else {
            return {};
        }
    }
};

#endif
