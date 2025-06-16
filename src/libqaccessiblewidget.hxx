#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEWIDGET_H
#define SRCC_LIBVIRTUALQACCESSIBLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleWidget so that we can call protected methods
class VirtualQAccessibleWidget final : public QAccessibleWidget {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleWidget = true;

    // Virtual class public types (including callbacks)
    using QAccessibleWidget_IsValid_Callback = bool (*)();
    using QAccessibleWidget_Window_Callback = QWindow* (*)();
    using QAccessibleWidget_ChildCount_Callback = int (*)();
    using QAccessibleWidget_IndexOfChild_Callback = int (*)(const QAccessibleWidget*, QAccessibleInterface*);
    using QAccessibleWidget_Relations_Callback = libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_FocusChild_Callback = QAccessibleInterface* (*)();
    using QAccessibleWidget_Rect_Callback = QRect* (*)();
    using QAccessibleWidget_Parent_Callback = QAccessibleInterface* (*)();
    using QAccessibleWidget_Child_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_Text_Callback = libqt_string (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_Role_Callback = int (*)();
    using QAccessibleWidget_State_Callback = QAccessible__State* (*)();
    using QAccessibleWidget_ForegroundColor_Callback = QColor* (*)();
    using QAccessibleWidget_BackgroundColor_Callback = QColor* (*)();
    using QAccessibleWidget_InterfaceCast_Callback = void* (*)(QAccessibleWidget*, int);
    using QAccessibleWidget_ActionNames_Callback = libqt_list /* of libqt_string */ (*)();
    using QAccessibleWidget_DoAction_Callback = void (*)(QAccessibleWidget*, libqt_string);
    using QAccessibleWidget_KeyBindingsForAction_Callback = libqt_list /* of libqt_string */ (*)(const QAccessibleWidget*, libqt_string);
    using QAccessibleWidget_Object_Callback = QObject* (*)();
    using QAccessibleWidget_SetText_Callback = void (*)(QAccessibleWidget*, int, libqt_string);
    using QAccessibleWidget_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*, int, int);
    using QAccessibleWidget_VirtualHook_Callback = void (*)(QAccessibleWidget*, int, void*);
    using QAccessibleWidget_LocalizedActionName_Callback = libqt_string (*)(const QAccessibleWidget*, libqt_string);
    using QAccessibleWidget_LocalizedActionDescription_Callback = libqt_string (*)(const QAccessibleWidget*, libqt_string);
    using QAccessibleWidget_Widget_Callback = QWidget* (*)();
    using QAccessibleWidget_ParentObject_Callback = QObject* (*)();
    using QAccessibleWidget_AddControllingSignal_Callback = void (*)(QAccessibleWidget*, libqt_string);

  protected:
    // Instance callback storage
    QAccessibleWidget_IsValid_Callback qaccessiblewidget_isvalid_callback = nullptr;
    QAccessibleWidget_Window_Callback qaccessiblewidget_window_callback = nullptr;
    QAccessibleWidget_ChildCount_Callback qaccessiblewidget_childcount_callback = nullptr;
    QAccessibleWidget_IndexOfChild_Callback qaccessiblewidget_indexofchild_callback = nullptr;
    QAccessibleWidget_Relations_Callback qaccessiblewidget_relations_callback = nullptr;
    QAccessibleWidget_FocusChild_Callback qaccessiblewidget_focuschild_callback = nullptr;
    QAccessibleWidget_Rect_Callback qaccessiblewidget_rect_callback = nullptr;
    QAccessibleWidget_Parent_Callback qaccessiblewidget_parent_callback = nullptr;
    QAccessibleWidget_Child_Callback qaccessiblewidget_child_callback = nullptr;
    QAccessibleWidget_Text_Callback qaccessiblewidget_text_callback = nullptr;
    QAccessibleWidget_Role_Callback qaccessiblewidget_role_callback = nullptr;
    QAccessibleWidget_State_Callback qaccessiblewidget_state_callback = nullptr;
    QAccessibleWidget_ForegroundColor_Callback qaccessiblewidget_foregroundcolor_callback = nullptr;
    QAccessibleWidget_BackgroundColor_Callback qaccessiblewidget_backgroundcolor_callback = nullptr;
    QAccessibleWidget_InterfaceCast_Callback qaccessiblewidget_interfacecast_callback = nullptr;
    QAccessibleWidget_ActionNames_Callback qaccessiblewidget_actionnames_callback = nullptr;
    QAccessibleWidget_DoAction_Callback qaccessiblewidget_doaction_callback = nullptr;
    QAccessibleWidget_KeyBindingsForAction_Callback qaccessiblewidget_keybindingsforaction_callback = nullptr;
    QAccessibleWidget_Object_Callback qaccessiblewidget_object_callback = nullptr;
    QAccessibleWidget_SetText_Callback qaccessiblewidget_settext_callback = nullptr;
    QAccessibleWidget_ChildAt_Callback qaccessiblewidget_childat_callback = nullptr;
    QAccessibleWidget_VirtualHook_Callback qaccessiblewidget_virtualhook_callback = nullptr;
    QAccessibleWidget_LocalizedActionName_Callback qaccessiblewidget_localizedactionname_callback = nullptr;
    QAccessibleWidget_LocalizedActionDescription_Callback qaccessiblewidget_localizedactiondescription_callback = nullptr;
    QAccessibleWidget_Widget_Callback qaccessiblewidget_widget_callback = nullptr;
    QAccessibleWidget_ParentObject_Callback qaccessiblewidget_parentobject_callback = nullptr;
    QAccessibleWidget_AddControllingSignal_Callback qaccessiblewidget_addcontrollingsignal_callback = nullptr;

    // Instance base flags
    mutable bool qaccessiblewidget_isvalid_isbase = false;
    mutable bool qaccessiblewidget_window_isbase = false;
    mutable bool qaccessiblewidget_childcount_isbase = false;
    mutable bool qaccessiblewidget_indexofchild_isbase = false;
    mutable bool qaccessiblewidget_relations_isbase = false;
    mutable bool qaccessiblewidget_focuschild_isbase = false;
    mutable bool qaccessiblewidget_rect_isbase = false;
    mutable bool qaccessiblewidget_parent_isbase = false;
    mutable bool qaccessiblewidget_child_isbase = false;
    mutable bool qaccessiblewidget_text_isbase = false;
    mutable bool qaccessiblewidget_role_isbase = false;
    mutable bool qaccessiblewidget_state_isbase = false;
    mutable bool qaccessiblewidget_foregroundcolor_isbase = false;
    mutable bool qaccessiblewidget_backgroundcolor_isbase = false;
    mutable bool qaccessiblewidget_interfacecast_isbase = false;
    mutable bool qaccessiblewidget_actionnames_isbase = false;
    mutable bool qaccessiblewidget_doaction_isbase = false;
    mutable bool qaccessiblewidget_keybindingsforaction_isbase = false;
    mutable bool qaccessiblewidget_object_isbase = false;
    mutable bool qaccessiblewidget_settext_isbase = false;
    mutable bool qaccessiblewidget_childat_isbase = false;
    mutable bool qaccessiblewidget_virtualhook_isbase = false;
    mutable bool qaccessiblewidget_localizedactionname_isbase = false;
    mutable bool qaccessiblewidget_localizedactiondescription_isbase = false;
    mutable bool qaccessiblewidget_widget_isbase = false;
    mutable bool qaccessiblewidget_parentobject_isbase = false;
    mutable bool qaccessiblewidget_addcontrollingsignal_isbase = false;

  public:
    VirtualQAccessibleWidget(QWidget* o) : QAccessibleWidget(o){};
    VirtualQAccessibleWidget(QWidget* o, QAccessible::Role r) : QAccessibleWidget(o, r){};
    VirtualQAccessibleWidget(QWidget* o, QAccessible::Role r, const QString& name) : QAccessibleWidget(o, r, name){};

  protected:
    ~VirtualQAccessibleWidget() {
        qaccessiblewidget_isvalid_callback = nullptr;
        qaccessiblewidget_window_callback = nullptr;
        qaccessiblewidget_childcount_callback = nullptr;
        qaccessiblewidget_indexofchild_callback = nullptr;
        qaccessiblewidget_relations_callback = nullptr;
        qaccessiblewidget_focuschild_callback = nullptr;
        qaccessiblewidget_rect_callback = nullptr;
        qaccessiblewidget_parent_callback = nullptr;
        qaccessiblewidget_child_callback = nullptr;
        qaccessiblewidget_text_callback = nullptr;
        qaccessiblewidget_role_callback = nullptr;
        qaccessiblewidget_state_callback = nullptr;
        qaccessiblewidget_foregroundcolor_callback = nullptr;
        qaccessiblewidget_backgroundcolor_callback = nullptr;
        qaccessiblewidget_interfacecast_callback = nullptr;
        qaccessiblewidget_actionnames_callback = nullptr;
        qaccessiblewidget_doaction_callback = nullptr;
        qaccessiblewidget_keybindingsforaction_callback = nullptr;
        qaccessiblewidget_object_callback = nullptr;
        qaccessiblewidget_settext_callback = nullptr;
        qaccessiblewidget_childat_callback = nullptr;
        qaccessiblewidget_virtualhook_callback = nullptr;
        qaccessiblewidget_localizedactionname_callback = nullptr;
        qaccessiblewidget_localizedactiondescription_callback = nullptr;
        qaccessiblewidget_widget_callback = nullptr;
        qaccessiblewidget_parentobject_callback = nullptr;
        qaccessiblewidget_addcontrollingsignal_callback = nullptr;
    }

  public:
    // Callback setters
    inline void setQAccessibleWidget_IsValid_Callback(QAccessibleWidget_IsValid_Callback cb) { qaccessiblewidget_isvalid_callback = cb; }
    inline void setQAccessibleWidget_Window_Callback(QAccessibleWidget_Window_Callback cb) { qaccessiblewidget_window_callback = cb; }
    inline void setQAccessibleWidget_ChildCount_Callback(QAccessibleWidget_ChildCount_Callback cb) { qaccessiblewidget_childcount_callback = cb; }
    inline void setQAccessibleWidget_IndexOfChild_Callback(QAccessibleWidget_IndexOfChild_Callback cb) { qaccessiblewidget_indexofchild_callback = cb; }
    inline void setQAccessibleWidget_Relations_Callback(QAccessibleWidget_Relations_Callback cb) { qaccessiblewidget_relations_callback = cb; }
    inline void setQAccessibleWidget_FocusChild_Callback(QAccessibleWidget_FocusChild_Callback cb) { qaccessiblewidget_focuschild_callback = cb; }
    inline void setQAccessibleWidget_Rect_Callback(QAccessibleWidget_Rect_Callback cb) { qaccessiblewidget_rect_callback = cb; }
    inline void setQAccessibleWidget_Parent_Callback(QAccessibleWidget_Parent_Callback cb) { qaccessiblewidget_parent_callback = cb; }
    inline void setQAccessibleWidget_Child_Callback(QAccessibleWidget_Child_Callback cb) { qaccessiblewidget_child_callback = cb; }
    inline void setQAccessibleWidget_Text_Callback(QAccessibleWidget_Text_Callback cb) { qaccessiblewidget_text_callback = cb; }
    inline void setQAccessibleWidget_Role_Callback(QAccessibleWidget_Role_Callback cb) { qaccessiblewidget_role_callback = cb; }
    inline void setQAccessibleWidget_State_Callback(QAccessibleWidget_State_Callback cb) { qaccessiblewidget_state_callback = cb; }
    inline void setQAccessibleWidget_ForegroundColor_Callback(QAccessibleWidget_ForegroundColor_Callback cb) { qaccessiblewidget_foregroundcolor_callback = cb; }
    inline void setQAccessibleWidget_BackgroundColor_Callback(QAccessibleWidget_BackgroundColor_Callback cb) { qaccessiblewidget_backgroundcolor_callback = cb; }
    inline void setQAccessibleWidget_InterfaceCast_Callback(QAccessibleWidget_InterfaceCast_Callback cb) { qaccessiblewidget_interfacecast_callback = cb; }
    inline void setQAccessibleWidget_ActionNames_Callback(QAccessibleWidget_ActionNames_Callback cb) { qaccessiblewidget_actionnames_callback = cb; }
    inline void setQAccessibleWidget_DoAction_Callback(QAccessibleWidget_DoAction_Callback cb) { qaccessiblewidget_doaction_callback = cb; }
    inline void setQAccessibleWidget_KeyBindingsForAction_Callback(QAccessibleWidget_KeyBindingsForAction_Callback cb) { qaccessiblewidget_keybindingsforaction_callback = cb; }
    inline void setQAccessibleWidget_Object_Callback(QAccessibleWidget_Object_Callback cb) { qaccessiblewidget_object_callback = cb; }
    inline void setQAccessibleWidget_SetText_Callback(QAccessibleWidget_SetText_Callback cb) { qaccessiblewidget_settext_callback = cb; }
    inline void setQAccessibleWidget_ChildAt_Callback(QAccessibleWidget_ChildAt_Callback cb) { qaccessiblewidget_childat_callback = cb; }
    inline void setQAccessibleWidget_VirtualHook_Callback(QAccessibleWidget_VirtualHook_Callback cb) { qaccessiblewidget_virtualhook_callback = cb; }
    inline void setQAccessibleWidget_LocalizedActionName_Callback(QAccessibleWidget_LocalizedActionName_Callback cb) { qaccessiblewidget_localizedactionname_callback = cb; }
    inline void setQAccessibleWidget_LocalizedActionDescription_Callback(QAccessibleWidget_LocalizedActionDescription_Callback cb) { qaccessiblewidget_localizedactiondescription_callback = cb; }
    inline void setQAccessibleWidget_Widget_Callback(QAccessibleWidget_Widget_Callback cb) { qaccessiblewidget_widget_callback = cb; }
    inline void setQAccessibleWidget_ParentObject_Callback(QAccessibleWidget_ParentObject_Callback cb) { qaccessiblewidget_parentobject_callback = cb; }
    inline void setQAccessibleWidget_AddControllingSignal_Callback(QAccessibleWidget_AddControllingSignal_Callback cb) { qaccessiblewidget_addcontrollingsignal_callback = cb; }

    // Base flag setters
    inline void setQAccessibleWidget_IsValid_IsBase(bool value) const { qaccessiblewidget_isvalid_isbase = value; }
    inline void setQAccessibleWidget_Window_IsBase(bool value) const { qaccessiblewidget_window_isbase = value; }
    inline void setQAccessibleWidget_ChildCount_IsBase(bool value) const { qaccessiblewidget_childcount_isbase = value; }
    inline void setQAccessibleWidget_IndexOfChild_IsBase(bool value) const { qaccessiblewidget_indexofchild_isbase = value; }
    inline void setQAccessibleWidget_Relations_IsBase(bool value) const { qaccessiblewidget_relations_isbase = value; }
    inline void setQAccessibleWidget_FocusChild_IsBase(bool value) const { qaccessiblewidget_focuschild_isbase = value; }
    inline void setQAccessibleWidget_Rect_IsBase(bool value) const { qaccessiblewidget_rect_isbase = value; }
    inline void setQAccessibleWidget_Parent_IsBase(bool value) const { qaccessiblewidget_parent_isbase = value; }
    inline void setQAccessibleWidget_Child_IsBase(bool value) const { qaccessiblewidget_child_isbase = value; }
    inline void setQAccessibleWidget_Text_IsBase(bool value) const { qaccessiblewidget_text_isbase = value; }
    inline void setQAccessibleWidget_Role_IsBase(bool value) const { qaccessiblewidget_role_isbase = value; }
    inline void setQAccessibleWidget_State_IsBase(bool value) const { qaccessiblewidget_state_isbase = value; }
    inline void setQAccessibleWidget_ForegroundColor_IsBase(bool value) const { qaccessiblewidget_foregroundcolor_isbase = value; }
    inline void setQAccessibleWidget_BackgroundColor_IsBase(bool value) const { qaccessiblewidget_backgroundcolor_isbase = value; }
    inline void setQAccessibleWidget_InterfaceCast_IsBase(bool value) const { qaccessiblewidget_interfacecast_isbase = value; }
    inline void setQAccessibleWidget_ActionNames_IsBase(bool value) const { qaccessiblewidget_actionnames_isbase = value; }
    inline void setQAccessibleWidget_DoAction_IsBase(bool value) const { qaccessiblewidget_doaction_isbase = value; }
    inline void setQAccessibleWidget_KeyBindingsForAction_IsBase(bool value) const { qaccessiblewidget_keybindingsforaction_isbase = value; }
    inline void setQAccessibleWidget_Object_IsBase(bool value) const { qaccessiblewidget_object_isbase = value; }
    inline void setQAccessibleWidget_SetText_IsBase(bool value) const { qaccessiblewidget_settext_isbase = value; }
    inline void setQAccessibleWidget_ChildAt_IsBase(bool value) const { qaccessiblewidget_childat_isbase = value; }
    inline void setQAccessibleWidget_VirtualHook_IsBase(bool value) const { qaccessiblewidget_virtualhook_isbase = value; }
    inline void setQAccessibleWidget_LocalizedActionName_IsBase(bool value) const { qaccessiblewidget_localizedactionname_isbase = value; }
    inline void setQAccessibleWidget_LocalizedActionDescription_IsBase(bool value) const { qaccessiblewidget_localizedactiondescription_isbase = value; }
    inline void setQAccessibleWidget_Widget_IsBase(bool value) const { qaccessiblewidget_widget_isbase = value; }
    inline void setQAccessibleWidget_ParentObject_IsBase(bool value) const { qaccessiblewidget_parentobject_isbase = value; }
    inline void setQAccessibleWidget_AddControllingSignal_IsBase(bool value) const { qaccessiblewidget_addcontrollingsignal_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessiblewidget_isvalid_isbase) {
            qaccessiblewidget_isvalid_isbase = false;
            return QAccessibleWidget::isValid();
        } else if (qaccessiblewidget_isvalid_callback != nullptr) {
            bool callback_ret = qaccessiblewidget_isvalid_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::isValid();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessiblewidget_window_isbase) {
            qaccessiblewidget_window_isbase = false;
            return QAccessibleWidget::window();
        } else if (qaccessiblewidget_window_callback != nullptr) {
            QWindow* callback_ret = qaccessiblewidget_window_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::window();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessiblewidget_childcount_isbase) {
            qaccessiblewidget_childcount_isbase = false;
            return QAccessibleWidget::childCount();
        } else if (qaccessiblewidget_childcount_callback != nullptr) {
            int callback_ret = qaccessiblewidget_childcount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleWidget::childCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* child) const override {
        if (qaccessiblewidget_indexofchild_isbase) {
            qaccessiblewidget_indexofchild_isbase = false;
            return QAccessibleWidget::indexOfChild(child);
        } else if (qaccessiblewidget_indexofchild_callback != nullptr) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)child;

            int callback_ret = qaccessiblewidget_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleWidget::indexOfChild(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QAccessible::Relation>> relations(QAccessible::Relation match) const override {
        if (qaccessiblewidget_relations_isbase) {
            qaccessiblewidget_relations_isbase = false;
            return QAccessibleWidget::relations(match);
        } else if (qaccessiblewidget_relations_callback != nullptr) {
            int cbval1 = static_cast<int>(match);

            libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ callback_ret = qaccessiblewidget_relations_callback(this, cbval1);
            QList<QPair<QAccessibleInterface*, QAccessible::Relation>> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_pair /* tuple of QAccessibleInterface* and int */* callback_ret_arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> callback_ret_arr_i_QPair;
                QAccessibleInterface** callback_ret_arr_i_first = static_cast<QAccessibleInterface**>(callback_ret_arr[i].first);
                int* callback_ret_arr_i_second = static_cast<int*>(callback_ret_arr[i].second);
                callback_ret_arr_i_QPair.first = callback_ret_arr_i_first[0];
                callback_ret_arr_i_QPair.second = static_cast<QFlags<QAccessible::RelationFlag>>(callback_ret_arr_i_second[0]);
                callback_ret_QList.push_back(callback_ret_arr_i_QPair);
            }
            return callback_ret_QList;
        } else {
            return QAccessibleWidget::relations(match);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessiblewidget_focuschild_isbase) {
            qaccessiblewidget_focuschild_isbase = false;
            return QAccessibleWidget::focusChild();
        } else if (qaccessiblewidget_focuschild_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessiblewidget_focuschild_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::focusChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessiblewidget_rect_isbase) {
            qaccessiblewidget_rect_isbase = false;
            return QAccessibleWidget::rect();
        } else if (qaccessiblewidget_rect_callback != nullptr) {
            QRect* callback_ret = qaccessiblewidget_rect_callback();
            return *callback_ret;
        } else {
            return QAccessibleWidget::rect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessiblewidget_parent_isbase) {
            qaccessiblewidget_parent_isbase = false;
            return QAccessibleWidget::parent();
        } else if (qaccessiblewidget_parent_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessiblewidget_parent_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::parent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessiblewidget_child_isbase) {
            qaccessiblewidget_child_isbase = false;
            return QAccessibleWidget::child(index);
        } else if (qaccessiblewidget_child_callback != nullptr) {
            int cbval1 = index;

            QAccessibleInterface* callback_ret = qaccessiblewidget_child_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleWidget::child(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessiblewidget_text_isbase) {
            qaccessiblewidget_text_isbase = false;
            return QAccessibleWidget::text(t);
        } else if (qaccessiblewidget_text_callback != nullptr) {
            int cbval1 = static_cast<int>(t);

            libqt_string callback_ret = qaccessiblewidget_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QAccessibleWidget::text(t);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessiblewidget_role_isbase) {
            qaccessiblewidget_role_isbase = false;
            return QAccessibleWidget::role();
        } else if (qaccessiblewidget_role_callback != nullptr) {
            int callback_ret = qaccessiblewidget_role_callback();
            return static_cast<QAccessible::Role>(callback_ret);
        } else {
            return QAccessibleWidget::role();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessiblewidget_state_isbase) {
            qaccessiblewidget_state_isbase = false;
            return QAccessibleWidget::state();
        } else if (qaccessiblewidget_state_callback != nullptr) {
            QAccessible__State* callback_ret = qaccessiblewidget_state_callback();
            return *callback_ret;
        } else {
            return QAccessibleWidget::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessiblewidget_foregroundcolor_isbase) {
            qaccessiblewidget_foregroundcolor_isbase = false;
            return QAccessibleWidget::foregroundColor();
        } else if (qaccessiblewidget_foregroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessiblewidget_foregroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleWidget::foregroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessiblewidget_backgroundcolor_isbase) {
            qaccessiblewidget_backgroundcolor_isbase = false;
            return QAccessibleWidget::backgroundColor();
        } else if (qaccessiblewidget_backgroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessiblewidget_backgroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleWidget::backgroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType t) override {
        if (qaccessiblewidget_interfacecast_isbase) {
            qaccessiblewidget_interfacecast_isbase = false;
            return QAccessibleWidget::interface_cast(t);
        } else if (qaccessiblewidget_interfacecast_callback != nullptr) {
            int cbval1 = static_cast<int>(t);

            void* callback_ret = qaccessiblewidget_interfacecast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleWidget::interface_cast(t);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList actionNames() const override {
        if (qaccessiblewidget_actionnames_isbase) {
            qaccessiblewidget_actionnames_isbase = false;
            return QAccessibleWidget::actionNames();
        } else if (qaccessiblewidget_actionnames_callback != nullptr) {
            libqt_list /* of libqt_string */ callback_ret = qaccessiblewidget_actionnames_callback();
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QAccessibleWidget::actionNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doAction(const QString& actionName) override {
        if (qaccessiblewidget_doaction_isbase) {
            qaccessiblewidget_doaction_isbase = false;
            QAccessibleWidget::doAction(actionName);
        } else if (qaccessiblewidget_doaction_callback != nullptr) {
            const QString actionName_ret = actionName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray actionName_b = actionName_ret.toUtf8();
            libqt_string actionName_str;
            actionName_str.len = actionName_b.length();
            actionName_str.data = static_cast<const char*>(malloc((actionName_str.len + 1) * sizeof(char)));
            memcpy((void*)actionName_str.data, actionName_b.data(), actionName_str.len);
            ((char*)actionName_str.data)[actionName_str.len] = '\0';
            libqt_string cbval1 = actionName_str;

            qaccessiblewidget_doaction_callback(this, cbval1);
        } else {
            QAccessibleWidget::doAction(actionName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList keyBindingsForAction(const QString& actionName) const override {
        if (qaccessiblewidget_keybindingsforaction_isbase) {
            qaccessiblewidget_keybindingsforaction_isbase = false;
            return QAccessibleWidget::keyBindingsForAction(actionName);
        } else if (qaccessiblewidget_keybindingsforaction_callback != nullptr) {
            const QString actionName_ret = actionName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray actionName_b = actionName_ret.toUtf8();
            libqt_string actionName_str;
            actionName_str.len = actionName_b.length();
            actionName_str.data = static_cast<const char*>(malloc((actionName_str.len + 1) * sizeof(char)));
            memcpy((void*)actionName_str.data, actionName_b.data(), actionName_str.len);
            ((char*)actionName_str.data)[actionName_str.len] = '\0';
            libqt_string cbval1 = actionName_str;

            libqt_list /* of libqt_string */ callback_ret = qaccessiblewidget_keybindingsforaction_callback(this, cbval1);
            QStringList callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            libqt_string* callback_ret_arr = static_cast<libqt_string*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i].data, callback_ret_arr[i].len);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            return callback_ret_QList;
        } else {
            return QAccessibleWidget::keyBindingsForAction(actionName);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessiblewidget_object_isbase) {
            qaccessiblewidget_object_isbase = false;
            return QAccessibleWidget::object();
        } else if (qaccessiblewidget_object_callback != nullptr) {
            QObject* callback_ret = qaccessiblewidget_object_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::object();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessiblewidget_settext_isbase) {
            qaccessiblewidget_settext_isbase = false;
            QAccessibleWidget::setText(t, text);
        } else if (qaccessiblewidget_settext_callback != nullptr) {
            int cbval1 = static_cast<int>(t);
            const QString text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            libqt_string text_str;
            text_str.len = text_b.length();
            text_str.data = static_cast<const char*>(malloc((text_str.len + 1) * sizeof(char)));
            memcpy((void*)text_str.data, text_b.data(), text_str.len);
            ((char*)text_str.data)[text_str.len] = '\0';
            libqt_string cbval2 = text_str;

            qaccessiblewidget_settext_callback(this, cbval1, cbval2);
        } else {
            QAccessibleWidget::setText(t, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessiblewidget_childat_isbase) {
            qaccessiblewidget_childat_isbase = false;
            return QAccessibleWidget::childAt(x, y);
        } else if (qaccessiblewidget_childat_callback != nullptr) {
            int cbval1 = x;
            int cbval2 = y;

            QAccessibleInterface* callback_ret = qaccessiblewidget_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAccessibleWidget::childAt(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessiblewidget_virtualhook_isbase) {
            qaccessiblewidget_virtualhook_isbase = false;
            QAccessibleWidget::virtual_hook(id, data);
        } else if (qaccessiblewidget_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            qaccessiblewidget_virtualhook_callback(this, cbval1, cbval2);
        } else {
            QAccessibleWidget::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localizedActionName(const QString& name) const override {
        if (qaccessiblewidget_localizedactionname_isbase) {
            qaccessiblewidget_localizedactionname_isbase = false;
            return QAccessibleWidget::localizedActionName(name);
        } else if (qaccessiblewidget_localizedactionname_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc((name_str.len + 1) * sizeof(char)));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            libqt_string callback_ret = qaccessiblewidget_localizedactionname_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QAccessibleWidget::localizedActionName(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localizedActionDescription(const QString& name) const override {
        if (qaccessiblewidget_localizedactiondescription_isbase) {
            qaccessiblewidget_localizedactiondescription_isbase = false;
            return QAccessibleWidget::localizedActionDescription(name);
        } else if (qaccessiblewidget_localizedactiondescription_callback != nullptr) {
            const QString name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            libqt_string name_str;
            name_str.len = name_b.length();
            name_str.data = static_cast<const char*>(malloc((name_str.len + 1) * sizeof(char)));
            memcpy((void*)name_str.data, name_b.data(), name_str.len);
            ((char*)name_str.data)[name_str.len] = '\0';
            libqt_string cbval1 = name_str;

            libqt_string callback_ret = qaccessiblewidget_localizedactiondescription_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QAccessibleWidget::localizedActionDescription(name);
        }
    }

    // Virtual method for C ABI access and custom callback
    QWidget* widget() const {
        if (qaccessiblewidget_widget_isbase) {
            qaccessiblewidget_widget_isbase = false;
            return QAccessibleWidget::widget();
        } else if (qaccessiblewidget_widget_callback != nullptr) {
            QWidget* callback_ret = qaccessiblewidget_widget_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* parentObject() const {
        if (qaccessiblewidget_parentobject_isbase) {
            qaccessiblewidget_parentobject_isbase = false;
            return QAccessibleWidget::parentObject();
        } else if (qaccessiblewidget_parentobject_callback != nullptr) {
            QObject* callback_ret = qaccessiblewidget_parentobject_callback();
            return callback_ret;
        } else {
            return QAccessibleWidget::parentObject();
        }
    }

    // Virtual method for C ABI access and custom callback
    void addControllingSignal(const QString& signal) {
        if (qaccessiblewidget_addcontrollingsignal_isbase) {
            qaccessiblewidget_addcontrollingsignal_isbase = false;
            QAccessibleWidget::addControllingSignal(signal);
        } else if (qaccessiblewidget_addcontrollingsignal_callback != nullptr) {
            const QString signal_ret = signal;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray signal_b = signal_ret.toUtf8();
            libqt_string signal_str;
            signal_str.len = signal_b.length();
            signal_str.data = static_cast<const char*>(malloc((signal_str.len + 1) * sizeof(char)));
            memcpy((void*)signal_str.data, signal_b.data(), signal_str.len);
            ((char*)signal_str.data)[signal_str.len] = '\0';
            libqt_string cbval1 = signal_str;

            qaccessiblewidget_addcontrollingsignal_callback(this, cbval1);
        } else {
            QAccessibleWidget::addControllingSignal(signal);
        }
    }

    // Friend functions
    friend QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self);
    friend QWidget* QAccessibleWidget_QBaseWidget(const QAccessibleWidget* self);
    friend QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self);
    friend QObject* QAccessibleWidget_QBaseParentObject(const QAccessibleWidget* self);
    friend void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal);
    friend void QAccessibleWidget_QBaseAddControllingSignal(QAccessibleWidget* self, const libqt_string signal);
};

#endif
