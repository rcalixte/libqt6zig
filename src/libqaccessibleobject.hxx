#pragma once
#ifndef LIBQACCESSIBLEOBJECT_HXX
#define LIBQACCESSIBLEOBJECT_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleObject
class VirtualQAccessibleObject : public QAccessibleObject {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleObject_IsValid_Callback = bool (*)(const QAccessibleObject*);
    using QAccessibleObject_Object_Callback = QObject* (*)(const QAccessibleObject*);
    using QAccessibleObject_Rect_Callback = QRect* (*)(const QAccessibleObject*);
    using QAccessibleObject_SetText_Callback = void (*)(QAccessibleObject*, int, const char*);
    using QAccessibleObject_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleObject*, int, int);
    using QAccessibleObject_Window_Callback = QWindow* (*)(const QAccessibleObject*);
    using QAccessibleObject_Relations_Callback = libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ (*)(const QAccessibleObject*, int);
    using QAccessibleObject_FocusChild_Callback = QAccessibleInterface* (*)(const QAccessibleObject*);
    using QAccessibleObject_Parent_Callback = QAccessibleInterface* (*)(const QAccessibleObject*);
    using QAccessibleObject_Child_Callback = QAccessibleInterface* (*)(const QAccessibleObject*, int);
    using QAccessibleObject_ChildCount_Callback = int (*)(const QAccessibleObject*);
    using QAccessibleObject_IndexOfChild_Callback = int (*)(const QAccessibleObject*, QAccessibleInterface*);
    using QAccessibleObject_Text_Callback = const char* (*)(const QAccessibleObject*, int);
    using QAccessibleObject_Role_Callback = int (*)(const QAccessibleObject*);
    using QAccessibleObject_State_Callback = QAccessible__State* (*)(const QAccessibleObject*);
    using QAccessibleObject_ForegroundColor_Callback = QColor* (*)(const QAccessibleObject*);
    using QAccessibleObject_BackgroundColor_Callback = QColor* (*)(const QAccessibleObject*);
    using QAccessibleObject_VirtualHook_Callback = void (*)(QAccessibleObject*, int, void*);
    using QAccessibleObject_InterfaceCast_Callback = void* (*)(QAccessibleObject*, int);

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

    VirtualQAccessibleObject(QObject* object) : QAccessibleObject(object) {};

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessibleobject_isvalid_callback) {
            bool callback_ret = qaccessibleobject_isvalid_callback(this);
            return callback_ret;
        }
        return QAccessibleObject::isValid();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessibleobject_object_callback) {
            QObject* callback_ret = qaccessibleobject_object_callback(this);
            return callback_ret;
        }
        return QAccessibleObject::object();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessibleobject_rect_callback) {
            QRect* callback_ret = qaccessibleobject_rect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleObject::rect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessibleobject_settext_callback) {
            int cbval1 = static_cast<int>(t);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            qaccessibleobject_settext_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return;
        }
        QAccessibleObject::setText(t, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessibleobject_childat_callback) {
            int cbval1 = x;
            int cbval2 = y;
            QAccessibleInterface* callback_ret = qaccessibleobject_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessibleObject::childAt(x, y);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessibleobject_window_callback) {
            QWindow* callback_ret = qaccessibleobject_window_callback(this);
            return callback_ret;
        }
        return QAccessibleObject::window();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
        if (qaccessibleobject_relations_callback) {
            int cbval1 = static_cast<int>(match);
            libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ callback_ret = qaccessibleobject_relations_callback(this, cbval1);
            QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* callback_ret_arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> callback_ret_arr_i_QPair;
                callback_ret_arr_i_QPair.first = callback_ret_arr[i].first;
                callback_ret_arr_i_QPair.second = static_cast<QFlags<QAccessible::RelationFlag>>(callback_ret_arr[i].second);
                callback_ret_QList.push_back(callback_ret_arr_i_QPair);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAccessibleObject::relations(match);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessibleobject_focuschild_callback) {
            QAccessibleInterface* callback_ret = qaccessibleobject_focuschild_callback(this);
            return callback_ret;
        }
        return QAccessibleObject::focusChild();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessibleobject_parent_callback) {
            QAccessibleInterface* callback_ret = qaccessibleobject_parent_callback(this);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::parent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessibleobject_child_callback) {
            int cbval1 = index;
            QAccessibleInterface* callback_ret = qaccessibleobject_child_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::child called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessibleobject_childcount_callback) {
            int callback_ret = qaccessibleobject_childcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::childCount called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* param1) const override {
        if (qaccessibleobject_indexofchild_callback) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)param1;
            int callback_ret = qaccessibleobject_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::indexOfChild called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessibleobject_text_callback) {
            int cbval1 = static_cast<int>(t);
            const char* callback_ret = qaccessibleobject_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::text called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessibleobject_role_callback) {
            int callback_ret = qaccessibleobject_role_callback(this);
            return static_cast<QAccessible::Role>(callback_ret);
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::role called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessibleobject_state_callback) {
            QAccessible__State* callback_ret = qaccessibleobject_state_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QAccessibleObject::state called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessibleobject_foregroundcolor_callback) {
            QColor* callback_ret = qaccessibleobject_foregroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleObject::foregroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessibleobject_backgroundcolor_callback) {
            QColor* callback_ret = qaccessibleobject_backgroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleObject::backgroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessibleobject_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            qaccessibleobject_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        QAccessibleObject::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType param1) override {
        if (qaccessibleobject_interfacecast_callback) {
            int cbval1 = static_cast<int>(param1);
            void* callback_ret = qaccessibleobject_interfacecast_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleObject::interface_cast(param1);
    }
};

// This class is a subclass of QAccessibleApplication
class VirtualQAccessibleApplication final : public QAccessibleApplication {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleApplication_Window_Callback = QWindow* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_ChildCount_Callback = int (*)(const QAccessibleApplication*);
    using QAccessibleApplication_IndexOfChild_Callback = int (*)(const QAccessibleApplication*, QAccessibleInterface*);
    using QAccessibleApplication_FocusChild_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_Parent_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_Child_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_Text_Callback = const char* (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_Role_Callback = int (*)(const QAccessibleApplication*);
    using QAccessibleApplication_State_Callback = QAccessible__State* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_IsValid_Callback = bool (*)(const QAccessibleApplication*);
    using QAccessibleApplication_Object_Callback = QObject* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_Rect_Callback = QRect* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_SetText_Callback = void (*)(QAccessibleApplication*, int, const char*);
    using QAccessibleApplication_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleApplication*, int, int);
    using QAccessibleApplication_Relations_Callback = libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ (*)(const QAccessibleApplication*, int);
    using QAccessibleApplication_ForegroundColor_Callback = QColor* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_BackgroundColor_Callback = QColor* (*)(const QAccessibleApplication*);
    using QAccessibleApplication_VirtualHook_Callback = void (*)(QAccessibleApplication*, int, void*);
    using QAccessibleApplication_InterfaceCast_Callback = void* (*)(QAccessibleApplication*, int);

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

    VirtualQAccessibleApplication() : QAccessibleApplication() {};

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessibleapplication_window_callback) {
            QWindow* callback_ret = qaccessibleapplication_window_callback(this);
            return callback_ret;
        }
        return QAccessibleApplication::window();
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessibleapplication_childcount_callback) {
            int callback_ret = qaccessibleapplication_childcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleApplication::childCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* param1) const override {
        if (qaccessibleapplication_indexofchild_callback) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)param1;
            int callback_ret = qaccessibleapplication_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleApplication::indexOfChild(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessibleapplication_focuschild_callback) {
            QAccessibleInterface* callback_ret = qaccessibleapplication_focuschild_callback(this);
            return callback_ret;
        }
        return QAccessibleApplication::focusChild();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessibleapplication_parent_callback) {
            QAccessibleInterface* callback_ret = qaccessibleapplication_parent_callback(this);
            return callback_ret;
        }
        return QAccessibleApplication::parent();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessibleapplication_child_callback) {
            int cbval1 = index;
            QAccessibleInterface* callback_ret = qaccessibleapplication_child_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleApplication::child(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessibleapplication_text_callback) {
            int cbval1 = static_cast<int>(t);
            const char* callback_ret = qaccessibleapplication_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QAccessibleApplication::text(t);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessibleapplication_role_callback) {
            int callback_ret = qaccessibleapplication_role_callback(this);
            return static_cast<QAccessible::Role>(callback_ret);
        }
        return QAccessibleApplication::role();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessibleapplication_state_callback) {
            QAccessible__State* callback_ret = qaccessibleapplication_state_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleApplication::state();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessibleapplication_isvalid_callback) {
            bool callback_ret = qaccessibleapplication_isvalid_callback(this);
            return callback_ret;
        }
        return QAccessibleApplication::isValid();
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessibleapplication_object_callback) {
            QObject* callback_ret = qaccessibleapplication_object_callback(this);
            return callback_ret;
        }
        return QAccessibleApplication::object();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessibleapplication_rect_callback) {
            QRect* callback_ret = qaccessibleapplication_rect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleApplication::rect();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessibleapplication_settext_callback) {
            int cbval1 = static_cast<int>(t);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            qaccessibleapplication_settext_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return;
        }
        QAccessibleApplication::setText(t, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessibleapplication_childat_callback) {
            int cbval1 = x;
            int cbval2 = y;
            QAccessibleInterface* callback_ret = qaccessibleapplication_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessibleApplication::childAt(x, y);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
        if (qaccessibleapplication_relations_callback) {
            int cbval1 = static_cast<int>(match);
            libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ callback_ret = qaccessibleapplication_relations_callback(this, cbval1);
            QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */* callback_ret_arr = static_cast<pair_qaccessibleinterface_int /* tuple of QAccessibleInterface* and int */*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> callback_ret_arr_i_QPair;
                callback_ret_arr_i_QPair.first = callback_ret_arr[i].first;
                callback_ret_arr_i_QPair.second = static_cast<QFlags<QAccessible::RelationFlag>>(callback_ret_arr[i].second);
                callback_ret_QList.push_back(callback_ret_arr_i_QPair);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAccessibleApplication::relations(match);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessibleapplication_foregroundcolor_callback) {
            QColor* callback_ret = qaccessibleapplication_foregroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleApplication::foregroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessibleapplication_backgroundcolor_callback) {
            QColor* callback_ret = qaccessibleapplication_backgroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleApplication::backgroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessibleapplication_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            qaccessibleapplication_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        QAccessibleApplication::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType param1) override {
        if (qaccessibleapplication_interfacecast_callback) {
            int cbval1 = static_cast<int>(param1);
            void* callback_ret = qaccessibleapplication_interfacecast_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleApplication::interface_cast(param1);
    }
};

#endif
