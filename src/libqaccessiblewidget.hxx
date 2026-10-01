#pragma once
#ifndef LIBQACCESSIBLEWIDGET_HXX
#define LIBQACCESSIBLEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAccessibleWidget
class VirtualQAccessibleWidget final : public QAccessibleWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QAccessibleWidget_IsValid_Callback = bool (*)(const QAccessibleWidget*);
    using QAccessibleWidget_Window_Callback = QWindow* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_ChildCount_Callback = int (*)(const QAccessibleWidget*);
    using QAccessibleWidget_IndexOfChild_Callback = int (*)(const QAccessibleWidget*, QAccessibleInterface*);
    using QAccessibleWidget_Relations_Callback = libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_FocusChild_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_Rect_Callback = QRect* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_Parent_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_Child_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_Text_Callback = const char* (*)(const QAccessibleWidget*, int);
    using QAccessibleWidget_Role_Callback = int (*)(const QAccessibleWidget*);
    using QAccessibleWidget_State_Callback = QAccessible__State* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_ForegroundColor_Callback = QColor* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_BackgroundColor_Callback = QColor* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_InterfaceCast_Callback = void* (*)(QAccessibleWidget*, int);
    using QAccessibleWidget_ActionNames_Callback = const char** (*)(const QAccessibleWidget*);
    using QAccessibleWidget_DoAction_Callback = void (*)(QAccessibleWidget*, const char*);
    using QAccessibleWidget_KeyBindingsForAction_Callback = const char** (*)(const QAccessibleWidget*, const char*);
    using QAccessibleWidget_Object_Callback = QObject* (*)(const QAccessibleWidget*);
    using QAccessibleWidget_SetText_Callback = void (*)(QAccessibleWidget*, int, const char*);
    using QAccessibleWidget_ChildAt_Callback = QAccessibleInterface* (*)(const QAccessibleWidget*, int, int);
    using QAccessibleWidget_VirtualHook_Callback = void (*)(QAccessibleWidget*, int, void*);
    using QAccessibleWidget_LocalizedActionName_Callback = const char* (*)(const QAccessibleWidget*, const char*);
    using QAccessibleWidget_LocalizedActionDescription_Callback = const char* (*)(const QAccessibleWidget*, const char*);
    using QAccessibleWidget::addControllingSignal;
    using QAccessibleWidget::parentObject;
    using QAccessibleWidget::widget;

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

    VirtualQAccessibleWidget(QWidget* o) : QAccessibleWidget(o) {};
    VirtualQAccessibleWidget(QWidget* o, QAccessible::Role r) : QAccessibleWidget(o, r) {};
    VirtualQAccessibleWidget(QWidget* o, QAccessible::Role r, const QString& name) : QAccessibleWidget(o, r, name) {};

    // Virtual method for C ABI access and custom callback
    virtual bool isValid() const override {
        if (qaccessiblewidget_isvalid_callback) {
            bool callback_ret = qaccessiblewidget_isvalid_callback(this);
            return callback_ret;
        }
        return QAccessibleWidget::isValid();
    }

    // Virtual method for C ABI access and custom callback
    virtual QWindow* window() const override {
        if (qaccessiblewidget_window_callback) {
            QWindow* callback_ret = qaccessiblewidget_window_callback(this);
            return callback_ret;
        }
        return QAccessibleWidget::window();
    }

    // Virtual method for C ABI access and custom callback
    virtual int childCount() const override {
        if (qaccessiblewidget_childcount_callback) {
            int callback_ret = qaccessiblewidget_childcount_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleWidget::childCount();
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOfChild(const QAccessibleInterface* child) const override {
        if (qaccessiblewidget_indexofchild_callback) {
            QAccessibleInterface* cbval1 = (QAccessibleInterface*)child;
            int callback_ret = qaccessiblewidget_indexofchild_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAccessibleWidget::indexOfChild(child);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>>> relations(QAccessible::Relation match) const override {
        if (qaccessiblewidget_relations_callback) {
            int cbval1 = static_cast<int>(match);
            libqt_list /* of pair_qaccessibleinterface_int tuple of QAccessibleInterface* and int */ callback_ret = qaccessiblewidget_relations_callback(this, cbval1);
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
        return QAccessibleWidget::relations(match);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* focusChild() const override {
        if (qaccessiblewidget_focuschild_callback) {
            QAccessibleInterface* callback_ret = qaccessiblewidget_focuschild_callback(this);
            return callback_ret;
        }
        return QAccessibleWidget::focusChild();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect rect() const override {
        if (qaccessiblewidget_rect_callback) {
            QRect* callback_ret = qaccessiblewidget_rect_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleWidget::rect();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* parent() const override {
        if (qaccessiblewidget_parent_callback) {
            QAccessibleInterface* callback_ret = qaccessiblewidget_parent_callback(this);
            return callback_ret;
        }
        return QAccessibleWidget::parent();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* child(int index) const override {
        if (qaccessiblewidget_child_callback) {
            int cbval1 = index;
            QAccessibleInterface* callback_ret = qaccessiblewidget_child_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleWidget::child(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString text(QAccessible::Text t) const override {
        if (qaccessiblewidget_text_callback) {
            int cbval1 = static_cast<int>(t);
            const char* callback_ret = qaccessiblewidget_text_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QAccessibleWidget::text(t);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::Role role() const override {
        if (qaccessiblewidget_role_callback) {
            int callback_ret = qaccessiblewidget_role_callback(this);
            return static_cast<QAccessible::Role>(callback_ret);
        }
        return QAccessibleWidget::role();
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessible::State state() const override {
        if (qaccessiblewidget_state_callback) {
            QAccessible__State* callback_ret = qaccessiblewidget_state_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleWidget::state();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor foregroundColor() const override {
        if (qaccessiblewidget_foregroundcolor_callback) {
            QColor* callback_ret = qaccessiblewidget_foregroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleWidget::foregroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor backgroundColor() const override {
        if (qaccessiblewidget_backgroundcolor_callback) {
            QColor* callback_ret = qaccessiblewidget_backgroundcolor_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QAccessibleWidget::backgroundColor();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* interface_cast(QAccessible::InterfaceType t) override {
        if (qaccessiblewidget_interfacecast_callback) {
            int cbval1 = static_cast<int>(t);
            void* callback_ret = qaccessiblewidget_interfacecast_callback(this, cbval1);
            return callback_ret;
        }
        return QAccessibleWidget::interface_cast(t);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> actionNames() const override {
        if (qaccessiblewidget_actionnames_callback) {
            const char** callback_ret = qaccessiblewidget_actionnames_callback(this);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            return callback_ret_QList;
        }
        return QAccessibleWidget::actionNames();
    }

    // Virtual method for C ABI access and custom callback
    virtual void doAction(const QString& actionName) override {
        if (qaccessiblewidget_doaction_callback) {
            const auto actionName_ret = actionName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray actionName_b = actionName_ret.toUtf8();
            auto actionName_str_len = actionName_b.length();
            const char* actionName_str = static_cast<const char*>(malloc(actionName_str_len + 1));
            memcpy((void*)actionName_str, actionName_b.data(), actionName_str_len);
            ((char*)actionName_str)[actionName_str_len] = '\0';
            const char* cbval1 = actionName_str;
            qaccessiblewidget_doaction_callback(this, cbval1);
            libqt_free(actionName_str);
            return;
        }
        QAccessibleWidget::doAction(actionName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QString> keyBindingsForAction(const QString& actionName) const override {
        if (qaccessiblewidget_keybindingsforaction_callback) {
            const auto actionName_ret = actionName;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray actionName_b = actionName_ret.toUtf8();
            auto actionName_str_len = actionName_b.length();
            const char* actionName_str = static_cast<const char*>(malloc(actionName_str_len + 1));
            memcpy((void*)actionName_str, actionName_b.data(), actionName_str_len);
            ((char*)actionName_str)[actionName_str_len] = '\0';
            const char* cbval1 = actionName_str;
            const char** callback_ret = qaccessiblewidget_keybindingsforaction_callback(this, cbval1);
            QList<QString> callback_ret_QList;
            size_t callback_ret_len = libqt_strv_length(callback_ret);
            callback_ret_QList.reserve(callback_ret_len);
            const char** callback_ret_arr = static_cast<const char**>(callback_ret);
            for (size_t i = 0; i < callback_ret_len; ++i) {
                QString callback_ret_arr_i_QString = QString::fromUtf8(callback_ret_arr[i]);
                callback_ret_QList.push_back(callback_ret_arr_i_QString);
            }
            libqt_free(callback_ret);
            libqt_free(actionName_str);
            return callback_ret_QList;
        }
        return QAccessibleWidget::keyBindingsForAction(actionName);
    }

    // Virtual method for C ABI access and custom callback
    virtual QObject* object() const override {
        if (qaccessiblewidget_object_callback) {
            QObject* callback_ret = qaccessiblewidget_object_callback(this);
            return callback_ret;
        }
        return QAccessibleWidget::object();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setText(QAccessible::Text t, const QString& text) override {
        if (qaccessiblewidget_settext_callback) {
            int cbval1 = static_cast<int>(t);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            qaccessiblewidget_settext_callback(this, cbval1, cbval2);
            libqt_free(text_str);
            return;
        }
        QAccessibleWidget::setText(t, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QAccessibleInterface* childAt(int x, int y) const override {
        if (qaccessiblewidget_childat_callback) {
            int cbval1 = x;
            int cbval2 = y;
            QAccessibleInterface* callback_ret = qaccessiblewidget_childat_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAccessibleWidget::childAt(x, y);
    }

    // Virtual method for C ABI access and custom callback
    virtual void virtual_hook(int id, void* data) override {
        if (qaccessiblewidget_virtualhook_callback) {
            int cbval1 = id;
            void* cbval2 = data;
            qaccessiblewidget_virtualhook_callback(this, cbval1, cbval2);
            return;
        }
        QAccessibleWidget::virtual_hook(id, data);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localizedActionName(const QString& name) const override {
        if (qaccessiblewidget_localizedactionname_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const char* callback_ret = qaccessiblewidget_localizedactionname_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(name_str);
            return callback_ret_QString;
        }
        return QAccessibleWidget::localizedActionName(name);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString localizedActionDescription(const QString& name) const override {
        if (qaccessiblewidget_localizedactiondescription_callback) {
            const auto name_ret = name;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray name_b = name_ret.toUtf8();
            auto name_str_len = name_b.length();
            const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
            memcpy((void*)name_str, name_b.data(), name_str_len);
            ((char*)name_str)[name_str_len] = '\0';
            const char* cbval1 = name_str;
            const char* callback_ret = qaccessiblewidget_localizedactiondescription_callback(this, cbval1);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            libqt_free(name_str);
            return callback_ret_QString;
        }
        return QAccessibleWidget::localizedActionDescription(name);
    }
};

#endif
