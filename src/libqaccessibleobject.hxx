#pragma once
#ifndef SRCC_LIBVIRTUALQACCESSIBLEOBJECT_H
#define SRCC_LIBVIRTUALQACCESSIBLEOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleObject so that we can call protected methods
class VirtualQAccessibleObject final : public QAccessibleObject {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleObject = true;

    // Virtual class public types (including callbacks)
    using QAccessibleObject_IsValid_Callback = bool (*)();
    using QAccessibleObject_Object_Callback = QObject* (*)();
    using QAccessibleObject_Rect_Callback = QRect* (*)();
    using QAccessibleObject_SetText_Callback = void (*)(QAccessibleObject*, int, libqt_string);
    using QAccessibleObject_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleObject*, int, int);
    using QAccessibleObject_Window_Callback = QWindow* (*)();
    using QAccessibleObject_Relations_Callback = libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ (*)(const QAccessibleObject*, int);
    using QAccessibleObject_FocusChild_Callback = QAccessibleInterface* (*)();
    using QAccessibleObject_Parent_Callback = QAccessibleInterface* (*)();
    using QAccessibleObject_Child_Callback = QAccessibleInterface* (*)(const QAccessibleObject*, int);
    using QAccessibleObject_ChildCount_Callback = int (*)();
    using QAccessibleObject_IndexOfChild_Callback = int (*)(const QAccessibleObject*, QAccessibleInterface*);
    using QAccessibleObject_Text_Callback = libqt_string (*)(const QAccessibleObject*, int);
    using QAccessibleObject_Role_Callback = int (*)();
    using QAccessibleObject_State_Callback = QAccessible__State* (*)();
    using QAccessibleObject_ForegroundColor_Callback = QColor* (*)();
    using QAccessibleObject_BackgroundColor_Callback = QColor* (*)();
    using QAccessibleObject_VirtualHook_Callback = void (*)(QAccessibleObject*, int, void*);
    using QAccessibleObject_InterfaceCast_Callback = void* (*)(QAccessibleObject*, int);

  protected:
    // Instance callback storage
    QAccessibleObject_IsValid_Callback qaccessibleobject_isvalid_callback = nullptr;
    QAccessibleObject_Object_Callback qaccessibleobject_object_callback = nullptr;
    QAccessibleObject_Rect_Callback qaccessibleobject_rect_callback = nullptr;
    QAccessibleObject_SetText_Callback qaccessibleobject_settext_callback = nullptr;
    QAccessibleObject_ChildAt_Callback qaccessibleobject_childat_callback = nullptr;
    QAccessibleObject_Window_Callback qaccessibleobject_window_callback = nullptr;
    QAccessibleObject_Relations_Callback qaccessibleobject_relations_callback = nullptr;
    QAccessibleObject_FocusChild_Callback qaccessibleobject_focuschild_callback = nullptr;
    QAccessibleObject_Parent_Callback qaccessibleobject_parent_callback = nullptr;
    QAccessibleObject_Child_Callback qaccessibleobject_child_callback = nullptr;
    QAccessibleObject_ChildCount_Callback qaccessibleobject_childcount_callback = nullptr;
    QAccessibleObject_IndexOfChild_Callback qaccessibleobject_indexofchild_callback = nullptr;
    QAccessibleObject_Text_Callback qaccessibleobject_text_callback = nullptr;
    QAccessibleObject_Role_Callback qaccessibleobject_role_callback = nullptr;
    QAccessibleObject_State_Callback qaccessibleobject_state_callback = nullptr;
    QAccessibleObject_ForegroundColor_Callback qaccessibleobject_foregroundcolor_callback = nullptr;
    QAccessibleObject_BackgroundColor_Callback qaccessibleobject_backgroundcolor_callback = nullptr;
    QAccessibleObject_VirtualHook_Callback qaccessibleobject_virtualhook_callback = nullptr;
    QAccessibleObject_InterfaceCast_Callback qaccessibleobject_interfacecast_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleobject_isvalid_isbase = false;
    mutable bool qaccessibleobject_object_isbase = false;
    mutable bool qaccessibleobject_rect_isbase = false;
    mutable bool qaccessibleobject_settext_isbase = false;
    mutable bool qaccessibleobject_childat_isbase = false;
    mutable bool qaccessibleobject_window_isbase = false;
    mutable bool qaccessibleobject_relations_isbase = false;
    mutable bool qaccessibleobject_focuschild_isbase = false;
    mutable bool qaccessibleobject_parent_isbase = false;
    mutable bool qaccessibleobject_child_isbase = false;
    mutable bool qaccessibleobject_childcount_isbase = false;
    mutable bool qaccessibleobject_indexofchild_isbase = false;
    mutable bool qaccessibleobject_text_isbase = false;
    mutable bool qaccessibleobject_role_isbase = false;
    mutable bool qaccessibleobject_state_isbase = false;
    mutable bool qaccessibleobject_foregroundcolor_isbase = false;
    mutable bool qaccessibleobject_backgroundcolor_isbase = false;
    mutable bool qaccessibleobject_virtualhook_isbase = false;
    mutable bool qaccessibleobject_interfacecast_isbase = false;

  public:
    VirtualQAccessibleObject(QObject* object) : QAccessibleObject(object) {};

  protected:
    ~VirtualQAccessibleObject() {
        qaccessibleobject_isvalid_callback = nullptr;
        qaccessibleobject_object_callback = nullptr;
        qaccessibleobject_rect_callback = nullptr;
        qaccessibleobject_settext_callback = nullptr;
        qaccessibleobject_childat_callback = nullptr;
        qaccessibleobject_window_callback = nullptr;
        qaccessibleobject_relations_callback = nullptr;
        qaccessibleobject_focuschild_callback = nullptr;
        qaccessibleobject_parent_callback = nullptr;
        qaccessibleobject_child_callback = nullptr;
        qaccessibleobject_childcount_callback = nullptr;
        qaccessibleobject_indexofchild_callback = nullptr;
        qaccessibleobject_text_callback = nullptr;
        qaccessibleobject_role_callback = nullptr;
        qaccessibleobject_state_callback = nullptr;
        qaccessibleobject_foregroundcolor_callback = nullptr;
        qaccessibleobject_backgroundcolor_callback = nullptr;
        qaccessibleobject_virtualhook_callback = nullptr;
        qaccessibleobject_interfacecast_callback = nullptr;
    }

  public:
    // Callback setters
    inline void setQAccessibleObject_IsValid_Callback(QAccessibleObject_IsValid_Callback cb) { qaccessibleobject_isvalid_callback = cb; }
    inline void setQAccessibleObject_Object_Callback(QAccessibleObject_Object_Callback cb) { qaccessibleobject_object_callback = cb; }
    inline void setQAccessibleObject_Rect_Callback(QAccessibleObject_Rect_Callback cb) { qaccessibleobject_rect_callback = cb; }
    inline void setQAccessibleObject_SetText_Callback(QAccessibleObject_SetText_Callback cb) { qaccessibleobject_settext_callback = cb; }
    inline void setQAccessibleObject_ChildAt_Callback(QAccessibleObject_ChildAt_Callback cb) { qaccessibleobject_childat_callback = cb; }
    inline void setQAccessibleObject_Window_Callback(QAccessibleObject_Window_Callback cb) { qaccessibleobject_window_callback = cb; }
    inline void setQAccessibleObject_Relations_Callback(QAccessibleObject_Relations_Callback cb) { qaccessibleobject_relations_callback = cb; }
    inline void setQAccessibleObject_FocusChild_Callback(QAccessibleObject_FocusChild_Callback cb) { qaccessibleobject_focuschild_callback = cb; }
    inline void setQAccessibleObject_Parent_Callback(QAccessibleObject_Parent_Callback cb) { qaccessibleobject_parent_callback = cb; }
    inline void setQAccessibleObject_Child_Callback(QAccessibleObject_Child_Callback cb) { qaccessibleobject_child_callback = cb; }
    inline void setQAccessibleObject_ChildCount_Callback(QAccessibleObject_ChildCount_Callback cb) { qaccessibleobject_childcount_callback = cb; }
    inline void setQAccessibleObject_IndexOfChild_Callback(QAccessibleObject_IndexOfChild_Callback cb) { qaccessibleobject_indexofchild_callback = cb; }
    inline void setQAccessibleObject_Text_Callback(QAccessibleObject_Text_Callback cb) { qaccessibleobject_text_callback = cb; }
    inline void setQAccessibleObject_Role_Callback(QAccessibleObject_Role_Callback cb) { qaccessibleobject_role_callback = cb; }
    inline void setQAccessibleObject_State_Callback(QAccessibleObject_State_Callback cb) { qaccessibleobject_state_callback = cb; }
    inline void setQAccessibleObject_ForegroundColor_Callback(QAccessibleObject_ForegroundColor_Callback cb) { qaccessibleobject_foregroundcolor_callback = cb; }
    inline void setQAccessibleObject_BackgroundColor_Callback(QAccessibleObject_BackgroundColor_Callback cb) { qaccessibleobject_backgroundcolor_callback = cb; }
    inline void setQAccessibleObject_VirtualHook_Callback(QAccessibleObject_VirtualHook_Callback cb) { qaccessibleobject_virtualhook_callback = cb; }
    inline void setQAccessibleObject_InterfaceCast_Callback(QAccessibleObject_InterfaceCast_Callback cb) { qaccessibleobject_interfacecast_callback = cb; }

    // Base flag setters
    inline void setQAccessibleObject_IsValid_IsBase(bool value) const { qaccessibleobject_isvalid_isbase = value; }
    inline void setQAccessibleObject_Object_IsBase(bool value) const { qaccessibleobject_object_isbase = value; }
    inline void setQAccessibleObject_Rect_IsBase(bool value) const { qaccessibleobject_rect_isbase = value; }
    inline void setQAccessibleObject_SetText_IsBase(bool value) const { qaccessibleobject_settext_isbase = value; }
    inline void setQAccessibleObject_ChildAt_IsBase(bool value) const { qaccessibleobject_childat_isbase = value; }
    inline void setQAccessibleObject_Window_IsBase(bool value) const { qaccessibleobject_window_isbase = value; }
    inline void setQAccessibleObject_Relations_IsBase(bool value) const { qaccessibleobject_relations_isbase = value; }
    inline void setQAccessibleObject_FocusChild_IsBase(bool value) const { qaccessibleobject_focuschild_isbase = value; }
    inline void setQAccessibleObject_Parent_IsBase(bool value) const { qaccessibleobject_parent_isbase = value; }
    inline void setQAccessibleObject_Child_IsBase(bool value) const { qaccessibleobject_child_isbase = value; }
    inline void setQAccessibleObject_ChildCount_IsBase(bool value) const { qaccessibleobject_childcount_isbase = value; }
    inline void setQAccessibleObject_IndexOfChild_IsBase(bool value) const { qaccessibleobject_indexofchild_isbase = value; }
    inline void setQAccessibleObject_Text_IsBase(bool value) const { qaccessibleobject_text_isbase = value; }
    inline void setQAccessibleObject_Role_IsBase(bool value) const { qaccessibleobject_role_isbase = value; }
    inline void setQAccessibleObject_State_IsBase(bool value) const { qaccessibleobject_state_isbase = value; }
    inline void setQAccessibleObject_ForegroundColor_IsBase(bool value) const { qaccessibleobject_foregroundcolor_isbase = value; }
    inline void setQAccessibleObject_BackgroundColor_IsBase(bool value) const { qaccessibleobject_backgroundcolor_isbase = value; }
    inline void setQAccessibleObject_VirtualHook_IsBase(bool value) const { qaccessibleobject_virtualhook_isbase = value; }
    inline void setQAccessibleObject_InterfaceCast_IsBase(bool value) const { qaccessibleobject_interfacecast_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessibleobject_isvalid_isbase) {
            qaccessibleobject_isvalid_isbase = false;
            return QAccessibleObject::isValid();
        } else if (qaccessibleobject_isvalid_callback != nullptr) {
            bool callback_ret = qaccessibleobject_isvalid_callback();
            return callback_ret;
        } else {
            return QAccessibleObject::isValid();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessibleobject_object_isbase) {
            qaccessibleobject_object_isbase = false;
            return QAccessibleObject::object();
        } else if (qaccessibleobject_object_callback != nullptr) {
            QObject* callback_ret = qaccessibleobject_object_callback();
            return callback_ret;
        } else {
            return QAccessibleObject::object();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessibleobject_rect_isbase) {
            qaccessibleobject_rect_isbase = false;
            return QAccessibleObject::rect();
        } else if (qaccessibleobject_rect_callback != nullptr) {
            QRect* callback_ret = qaccessibleobject_rect_callback();
            return *callback_ret;
        } else {
            return QAccessibleObject::rect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessibleobject_settext_isbase) {
            qaccessibleobject_settext_isbase = false;
            QAccessibleObject::setText(t, text);
        } else if (qaccessibleobject_settext_callback != nullptr) {
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

            qaccessibleobject_settext_callback(this, cbval1, cbval2);
        } else {
            QAccessibleObject::setText(t, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessibleobject_childat_isbase) {
            qaccessibleobject_childat_isbase = false;
            return QAccessibleObject::childAt(x, y);
        } else if (qaccessibleobject_childat_callback != nullptr) {
            int cbval1 = x;
            int cbval2 = y;

            QAccessibleInterface* callback_ret = qaccessibleobject_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAccessibleObject::childAt(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessibleobject_window_isbase) {
            qaccessibleobject_window_isbase = false;
            return QAccessibleObject::window();
        } else if (qaccessibleobject_window_callback != nullptr) {
            QWindow* callback_ret = qaccessibleobject_window_callback();
            return callback_ret;
        } else {
            return QAccessibleObject::window();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
        if (qaccessibleobject_relations_isbase) {
            qaccessibleobject_relations_isbase = false;
            return QAccessibleObject::relations(match);
        } else if (qaccessibleobject_relations_callback != nullptr) {
            int cbval1 = static_cast<int>(match);

            libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ callback_ret = qaccessibleobject_relations_callback(this, cbval1);
            QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> callback_ret_QList;
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
            return QAccessibleObject::relations(match);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessibleobject_focuschild_isbase) {
            qaccessibleobject_focuschild_isbase = false;
            return QAccessibleObject::focusChild();
        } else if (qaccessibleobject_focuschild_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleobject_focuschild_callback();
            return callback_ret;
        } else {
            return QAccessibleObject::focusChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessibleobject_parent_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleobject_parent_callback();
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessibleobject_child_callback != nullptr) {
            int cbval1 = index;

            QAccessibleInterface* callback_ret = qaccessibleobject_child_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessibleobject_childcount_callback != nullptr) {
            int callback_ret = qaccessibleobject_childcount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* param1) const override {
        if (qaccessibleobject_indexofchild_callback != nullptr) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)param1;

            int callback_ret = qaccessibleobject_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessibleobject_text_callback != nullptr) {
            int cbval1 = static_cast<int>(t);

            libqt_string callback_ret = qaccessibleobject_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessibleobject_role_callback != nullptr) {
            int callback_ret = qaccessibleobject_role_callback();
            return static_cast<QAccessible::Role>(callback_ret);
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessibleobject_state_callback != nullptr) {
            QAccessible__State* callback_ret = qaccessibleobject_state_callback();
            return *callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessibleobject_foregroundcolor_isbase) {
            qaccessibleobject_foregroundcolor_isbase = false;
            return QAccessibleObject::foregroundColor();
        } else if (qaccessibleobject_foregroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessibleobject_foregroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleObject::foregroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessibleobject_backgroundcolor_isbase) {
            qaccessibleobject_backgroundcolor_isbase = false;
            return QAccessibleObject::backgroundColor();
        } else if (qaccessibleobject_backgroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessibleobject_backgroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleObject::backgroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessibleobject_virtualhook_isbase) {
            qaccessibleobject_virtualhook_isbase = false;
            QAccessibleObject::virtual_hook(id, data);
        } else if (qaccessibleobject_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            qaccessibleobject_virtualhook_callback(this, cbval1, cbval2);
        } else {
            QAccessibleObject::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType param1) override {
        if (qaccessibleobject_interfacecast_isbase) {
            qaccessibleobject_interfacecast_isbase = false;
            return QAccessibleObject::interface_cast(param1);
        } else if (qaccessibleobject_interfacecast_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            void* callback_ret = qaccessibleobject_interfacecast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleObject::interface_cast(param1);
        }
    }
};

// This class is a subclass of QAccessibleApplication so that we can call protected methods
class VirtualQAccessibleApplication final : public QAccessibleApplication {

  public:
    // Virtual class boolean flag
    bool isVirtualQAccessibleApplication = true;

    // Virtual class public types (including callbacks)
    using QAccessibleApplication_Window_Callback = QWindow* (*)();
    using QAccessibleApplication_ChildCount_Callback = int (*)();
    using QAccessibleApplication_IndexOfChild_Callback = int (*)(const QAccessibleApplication*, QAccessibleInterface*);
    using QAccessibleApplication_FocusChild_Callback = QAccessibleInterface* (*)();
    using QAccessibleApplication_Parent_Callback = QAccessibleInterface* (*)();
    using QAccessibleApplication_Child_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_Text_Callback = libqt_string (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_Role_Callback = int (*)();
    using QAccessibleApplication_State_Callback = QAccessible__State* (*)();
    using QAccessibleApplication_IsValid_Callback = bool (*)();
    using QAccessibleApplication_Object_Callback = QObject* (*)();
    using QAccessibleApplication_Rect_Callback = QRect* (*)();
    using QAccessibleApplication_SetText_Callback = void (*)(QAccessibleApplication*, int, libqt_string);
    using QAccessibleApplication_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int, int);
    using QAccessibleApplication_Relations_Callback = libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_ForegroundColor_Callback = QColor* (*)();
    using QAccessibleApplication_BackgroundColor_Callback = QColor* (*)();
    using QAccessibleApplication_VirtualHook_Callback = void (*)(QAccessibleApplication*, int, void*);
    using QAccessibleApplication_InterfaceCast_Callback = void* (*)(QAccessibleApplication*, int);

  protected:
    // Instance callback storage
    QAccessibleApplication_Window_Callback qaccessibleapplication_window_callback = nullptr;
    QAccessibleApplication_ChildCount_Callback qaccessibleapplication_childcount_callback = nullptr;
    QAccessibleApplication_IndexOfChild_Callback qaccessibleapplication_indexofchild_callback = nullptr;
    QAccessibleApplication_FocusChild_Callback qaccessibleapplication_focuschild_callback = nullptr;
    QAccessibleApplication_Parent_Callback qaccessibleapplication_parent_callback = nullptr;
    QAccessibleApplication_Child_Callback qaccessibleapplication_child_callback = nullptr;
    QAccessibleApplication_Text_Callback qaccessibleapplication_text_callback = nullptr;
    QAccessibleApplication_Role_Callback qaccessibleapplication_role_callback = nullptr;
    QAccessibleApplication_State_Callback qaccessibleapplication_state_callback = nullptr;
    QAccessibleApplication_IsValid_Callback qaccessibleapplication_isvalid_callback = nullptr;
    QAccessibleApplication_Object_Callback qaccessibleapplication_object_callback = nullptr;
    QAccessibleApplication_Rect_Callback qaccessibleapplication_rect_callback = nullptr;
    QAccessibleApplication_SetText_Callback qaccessibleapplication_settext_callback = nullptr;
    QAccessibleApplication_ChildAt_Callback qaccessibleapplication_childat_callback = nullptr;
    QAccessibleApplication_Relations_Callback qaccessibleapplication_relations_callback = nullptr;
    QAccessibleApplication_ForegroundColor_Callback qaccessibleapplication_foregroundcolor_callback = nullptr;
    QAccessibleApplication_BackgroundColor_Callback qaccessibleapplication_backgroundcolor_callback = nullptr;
    QAccessibleApplication_VirtualHook_Callback qaccessibleapplication_virtualhook_callback = nullptr;
    QAccessibleApplication_InterfaceCast_Callback qaccessibleapplication_interfacecast_callback = nullptr;

    // Instance base flags
    mutable bool qaccessibleapplication_window_isbase = false;
    mutable bool qaccessibleapplication_childcount_isbase = false;
    mutable bool qaccessibleapplication_indexofchild_isbase = false;
    mutable bool qaccessibleapplication_focuschild_isbase = false;
    mutable bool qaccessibleapplication_parent_isbase = false;
    mutable bool qaccessibleapplication_child_isbase = false;
    mutable bool qaccessibleapplication_text_isbase = false;
    mutable bool qaccessibleapplication_role_isbase = false;
    mutable bool qaccessibleapplication_state_isbase = false;
    mutable bool qaccessibleapplication_isvalid_isbase = false;
    mutable bool qaccessibleapplication_object_isbase = false;
    mutable bool qaccessibleapplication_rect_isbase = false;
    mutable bool qaccessibleapplication_settext_isbase = false;
    mutable bool qaccessibleapplication_childat_isbase = false;
    mutable bool qaccessibleapplication_relations_isbase = false;
    mutable bool qaccessibleapplication_foregroundcolor_isbase = false;
    mutable bool qaccessibleapplication_backgroundcolor_isbase = false;
    mutable bool qaccessibleapplication_virtualhook_isbase = false;
    mutable bool qaccessibleapplication_interfacecast_isbase = false;

  public:
    VirtualQAccessibleApplication() : QAccessibleApplication() {};

    ~VirtualQAccessibleApplication() {
        qaccessibleapplication_window_callback = nullptr;
        qaccessibleapplication_childcount_callback = nullptr;
        qaccessibleapplication_indexofchild_callback = nullptr;
        qaccessibleapplication_focuschild_callback = nullptr;
        qaccessibleapplication_parent_callback = nullptr;
        qaccessibleapplication_child_callback = nullptr;
        qaccessibleapplication_text_callback = nullptr;
        qaccessibleapplication_role_callback = nullptr;
        qaccessibleapplication_state_callback = nullptr;
        qaccessibleapplication_isvalid_callback = nullptr;
        qaccessibleapplication_object_callback = nullptr;
        qaccessibleapplication_rect_callback = nullptr;
        qaccessibleapplication_settext_callback = nullptr;
        qaccessibleapplication_childat_callback = nullptr;
        qaccessibleapplication_relations_callback = nullptr;
        qaccessibleapplication_foregroundcolor_callback = nullptr;
        qaccessibleapplication_backgroundcolor_callback = nullptr;
        qaccessibleapplication_virtualhook_callback = nullptr;
        qaccessibleapplication_interfacecast_callback = nullptr;
    }

    // Callback setters
    inline void setQAccessibleApplication_Window_Callback(QAccessibleApplication_Window_Callback cb) { qaccessibleapplication_window_callback = cb; }
    inline void setQAccessibleApplication_ChildCount_Callback(QAccessibleApplication_ChildCount_Callback cb) { qaccessibleapplication_childcount_callback = cb; }
    inline void setQAccessibleApplication_IndexOfChild_Callback(QAccessibleApplication_IndexOfChild_Callback cb) { qaccessibleapplication_indexofchild_callback = cb; }
    inline void setQAccessibleApplication_FocusChild_Callback(QAccessibleApplication_FocusChild_Callback cb) { qaccessibleapplication_focuschild_callback = cb; }
    inline void setQAccessibleApplication_Parent_Callback(QAccessibleApplication_Parent_Callback cb) { qaccessibleapplication_parent_callback = cb; }
    inline void setQAccessibleApplication_Child_Callback(QAccessibleApplication_Child_Callback cb) { qaccessibleapplication_child_callback = cb; }
    inline void setQAccessibleApplication_Text_Callback(QAccessibleApplication_Text_Callback cb) { qaccessibleapplication_text_callback = cb; }
    inline void setQAccessibleApplication_Role_Callback(QAccessibleApplication_Role_Callback cb) { qaccessibleapplication_role_callback = cb; }
    inline void setQAccessibleApplication_State_Callback(QAccessibleApplication_State_Callback cb) { qaccessibleapplication_state_callback = cb; }
    inline void setQAccessibleApplication_IsValid_Callback(QAccessibleApplication_IsValid_Callback cb) { qaccessibleapplication_isvalid_callback = cb; }
    inline void setQAccessibleApplication_Object_Callback(QAccessibleApplication_Object_Callback cb) { qaccessibleapplication_object_callback = cb; }
    inline void setQAccessibleApplication_Rect_Callback(QAccessibleApplication_Rect_Callback cb) { qaccessibleapplication_rect_callback = cb; }
    inline void setQAccessibleApplication_SetText_Callback(QAccessibleApplication_SetText_Callback cb) { qaccessibleapplication_settext_callback = cb; }
    inline void setQAccessibleApplication_ChildAt_Callback(QAccessibleApplication_ChildAt_Callback cb) { qaccessibleapplication_childat_callback = cb; }
    inline void setQAccessibleApplication_Relations_Callback(QAccessibleApplication_Relations_Callback cb) { qaccessibleapplication_relations_callback = cb; }
    inline void setQAccessibleApplication_ForegroundColor_Callback(QAccessibleApplication_ForegroundColor_Callback cb) { qaccessibleapplication_foregroundcolor_callback = cb; }
    inline void setQAccessibleApplication_BackgroundColor_Callback(QAccessibleApplication_BackgroundColor_Callback cb) { qaccessibleapplication_backgroundcolor_callback = cb; }
    inline void setQAccessibleApplication_VirtualHook_Callback(QAccessibleApplication_VirtualHook_Callback cb) { qaccessibleapplication_virtualhook_callback = cb; }
    inline void setQAccessibleApplication_InterfaceCast_Callback(QAccessibleApplication_InterfaceCast_Callback cb) { qaccessibleapplication_interfacecast_callback = cb; }

    // Base flag setters
    inline void setQAccessibleApplication_Window_IsBase(bool value) const { qaccessibleapplication_window_isbase = value; }
    inline void setQAccessibleApplication_ChildCount_IsBase(bool value) const { qaccessibleapplication_childcount_isbase = value; }
    inline void setQAccessibleApplication_IndexOfChild_IsBase(bool value) const { qaccessibleapplication_indexofchild_isbase = value; }
    inline void setQAccessibleApplication_FocusChild_IsBase(bool value) const { qaccessibleapplication_focuschild_isbase = value; }
    inline void setQAccessibleApplication_Parent_IsBase(bool value) const { qaccessibleapplication_parent_isbase = value; }
    inline void setQAccessibleApplication_Child_IsBase(bool value) const { qaccessibleapplication_child_isbase = value; }
    inline void setQAccessibleApplication_Text_IsBase(bool value) const { qaccessibleapplication_text_isbase = value; }
    inline void setQAccessibleApplication_Role_IsBase(bool value) const { qaccessibleapplication_role_isbase = value; }
    inline void setQAccessibleApplication_State_IsBase(bool value) const { qaccessibleapplication_state_isbase = value; }
    inline void setQAccessibleApplication_IsValid_IsBase(bool value) const { qaccessibleapplication_isvalid_isbase = value; }
    inline void setQAccessibleApplication_Object_IsBase(bool value) const { qaccessibleapplication_object_isbase = value; }
    inline void setQAccessibleApplication_Rect_IsBase(bool value) const { qaccessibleapplication_rect_isbase = value; }
    inline void setQAccessibleApplication_SetText_IsBase(bool value) const { qaccessibleapplication_settext_isbase = value; }
    inline void setQAccessibleApplication_ChildAt_IsBase(bool value) const { qaccessibleapplication_childat_isbase = value; }
    inline void setQAccessibleApplication_Relations_IsBase(bool value) const { qaccessibleapplication_relations_isbase = value; }
    inline void setQAccessibleApplication_ForegroundColor_IsBase(bool value) const { qaccessibleapplication_foregroundcolor_isbase = value; }
    inline void setQAccessibleApplication_BackgroundColor_IsBase(bool value) const { qaccessibleapplication_backgroundcolor_isbase = value; }
    inline void setQAccessibleApplication_VirtualHook_IsBase(bool value) const { qaccessibleapplication_virtualhook_isbase = value; }
    inline void setQAccessibleApplication_InterfaceCast_IsBase(bool value) const { qaccessibleapplication_interfacecast_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessibleapplication_window_isbase) {
            qaccessibleapplication_window_isbase = false;
            return QAccessibleApplication::window();
        } else if (qaccessibleapplication_window_callback != nullptr) {
            QWindow* callback_ret = qaccessibleapplication_window_callback();
            return callback_ret;
        } else {
            return QAccessibleApplication::window();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessibleapplication_childcount_isbase) {
            qaccessibleapplication_childcount_isbase = false;
            return QAccessibleApplication::childCount();
        } else if (qaccessibleapplication_childcount_callback != nullptr) {
            int callback_ret = qaccessibleapplication_childcount_callback();
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleApplication::childCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* param1) const override {
        if (qaccessibleapplication_indexofchild_isbase) {
            qaccessibleapplication_indexofchild_isbase = false;
            return QAccessibleApplication::indexOfChild(param1);
        } else if (qaccessibleapplication_indexofchild_callback != nullptr) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)param1;

            int callback_ret = qaccessibleapplication_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return QAccessibleApplication::indexOfChild(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessibleapplication_focuschild_isbase) {
            qaccessibleapplication_focuschild_isbase = false;
            return QAccessibleApplication::focusChild();
        } else if (qaccessibleapplication_focuschild_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleapplication_focuschild_callback();
            return callback_ret;
        } else {
            return QAccessibleApplication::focusChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessibleapplication_parent_isbase) {
            qaccessibleapplication_parent_isbase = false;
            return QAccessibleApplication::parent();
        } else if (qaccessibleapplication_parent_callback != nullptr) {
            QAccessibleInterface* callback_ret = qaccessibleapplication_parent_callback();
            return callback_ret;
        } else {
            return QAccessibleApplication::parent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessibleapplication_child_isbase) {
            qaccessibleapplication_child_isbase = false;
            return QAccessibleApplication::child(index);
        } else if (qaccessibleapplication_child_callback != nullptr) {
            int cbval1 = index;

            QAccessibleInterface* callback_ret = qaccessibleapplication_child_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleApplication::child(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessibleapplication_text_isbase) {
            qaccessibleapplication_text_isbase = false;
            return QAccessibleApplication::text(t);
        } else if (qaccessibleapplication_text_callback != nullptr) {
            int cbval1 = static_cast<int>(t);

            libqt_string callback_ret = qaccessibleapplication_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret.data, callback_ret.len);
            return callback_ret_QString;
        } else {
            return QAccessibleApplication::text(t);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessibleapplication_role_isbase) {
            qaccessibleapplication_role_isbase = false;
            return QAccessibleApplication::role();
        } else if (qaccessibleapplication_role_callback != nullptr) {
            int callback_ret = qaccessibleapplication_role_callback();
            return static_cast<QAccessible::Role>(callback_ret);
        } else {
            return QAccessibleApplication::role();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessibleapplication_state_isbase) {
            qaccessibleapplication_state_isbase = false;
            return QAccessibleApplication::state();
        } else if (qaccessibleapplication_state_callback != nullptr) {
            QAccessible__State* callback_ret = qaccessibleapplication_state_callback();
            return *callback_ret;
        } else {
            return QAccessibleApplication::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessibleapplication_isvalid_isbase) {
            qaccessibleapplication_isvalid_isbase = false;
            return QAccessibleApplication::isValid();
        } else if (qaccessibleapplication_isvalid_callback != nullptr) {
            bool callback_ret = qaccessibleapplication_isvalid_callback();
            return callback_ret;
        } else {
            return QAccessibleApplication::isValid();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessibleapplication_object_isbase) {
            qaccessibleapplication_object_isbase = false;
            return QAccessibleApplication::object();
        } else if (qaccessibleapplication_object_callback != nullptr) {
            QObject* callback_ret = qaccessibleapplication_object_callback();
            return callback_ret;
        } else {
            return QAccessibleApplication::object();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessibleapplication_rect_isbase) {
            qaccessibleapplication_rect_isbase = false;
            return QAccessibleApplication::rect();
        } else if (qaccessibleapplication_rect_callback != nullptr) {
            QRect* callback_ret = qaccessibleapplication_rect_callback();
            return *callback_ret;
        } else {
            return QAccessibleApplication::rect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessibleapplication_settext_isbase) {
            qaccessibleapplication_settext_isbase = false;
            QAccessibleApplication::setText(t, text);
        } else if (qaccessibleapplication_settext_callback != nullptr) {
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

            qaccessibleapplication_settext_callback(this, cbval1, cbval2);
        } else {
            QAccessibleApplication::setText(t, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessibleapplication_childat_isbase) {
            qaccessibleapplication_childat_isbase = false;
            return QAccessibleApplication::childAt(x, y);
        } else if (qaccessibleapplication_childat_callback != nullptr) {
            int cbval1 = x;
            int cbval2 = y;

            QAccessibleInterface* callback_ret = qaccessibleapplication_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QAccessibleApplication::childAt(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
        if (qaccessibleapplication_relations_isbase) {
            qaccessibleapplication_relations_isbase = false;
            return QAccessibleApplication::relations(match);
        } else if (qaccessibleapplication_relations_callback != nullptr) {
            int cbval1 = static_cast<int>(match);

            libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ callback_ret = qaccessibleapplication_relations_callback(this, cbval1);
            QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> callback_ret_QList;
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
            return QAccessibleApplication::relations(match);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessibleapplication_foregroundcolor_isbase) {
            qaccessibleapplication_foregroundcolor_isbase = false;
            return QAccessibleApplication::foregroundColor();
        } else if (qaccessibleapplication_foregroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessibleapplication_foregroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleApplication::foregroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessibleapplication_backgroundcolor_isbase) {
            qaccessibleapplication_backgroundcolor_isbase = false;
            return QAccessibleApplication::backgroundColor();
        } else if (qaccessibleapplication_backgroundcolor_callback != nullptr) {
            QColor* callback_ret = qaccessibleapplication_backgroundcolor_callback();
            return *callback_ret;
        } else {
            return QAccessibleApplication::backgroundColor();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessibleapplication_virtualhook_isbase) {
            qaccessibleapplication_virtualhook_isbase = false;
            QAccessibleApplication::virtual_hook(id, data);
        } else if (qaccessibleapplication_virtualhook_callback != nullptr) {
            int cbval1 = id;
            void* cbval2 = data;

            qaccessibleapplication_virtualhook_callback(this, cbval1, cbval2);
        } else {
            QAccessibleApplication::virtual_hook(id, data);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType param1) override {
        if (qaccessibleapplication_interfacecast_isbase) {
            qaccessibleapplication_interfacecast_isbase = false;
            return QAccessibleApplication::interface_cast(param1);
        } else if (qaccessibleapplication_interfacecast_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);

            void* callback_ret = qaccessibleapplication_interfacecast_callback(this, cbval1);
            return callback_ret;
        } else {
            return QAccessibleApplication::interface_cast(param1);
        }
    }
};

#endif
