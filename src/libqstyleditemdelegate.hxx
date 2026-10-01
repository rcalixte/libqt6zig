#pragma once
#ifndef LIBQSTYLEDITEMDELEGATE_HXX
#define LIBQSTYLEDITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStyledItemDelegate
class VirtualQStyledItemDelegate final : public QStyledItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using QStyledItemDelegate_MetaObject_Callback = QMetaObject* (*)(const QStyledItemDelegate*);
    using QStyledItemDelegate_Metacast_Callback = void* (*)(QStyledItemDelegate*, const char*);
    using QStyledItemDelegate_Metacall_Callback = int (*)(QStyledItemDelegate*, int, int, void**);
    using QStyledItemDelegate_Paint_Callback = void (*)(const QStyledItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_SizeHint_Callback = QSize* (*)(const QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_CreateEditor_Callback = QWidget* (*)(const QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_SetEditorData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QModelIndex*);
    using QStyledItemDelegate_SetModelData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using QStyledItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_DisplayText_Callback = const char* (*)(const QStyledItemDelegate*, QVariant*, QLocale*);
    using QStyledItemDelegate_InitStyleOption_Callback = void (*)(const QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_EventFilter_Callback = bool (*)(QStyledItemDelegate*, QObject*, QEvent*);
    using QStyledItemDelegate_EditorEvent_Callback = bool (*)(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_DestroyEditor_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QModelIndex*);
    using QStyledItemDelegate_HelpEvent_Callback = bool (*)(QStyledItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using QStyledItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const QStyledItemDelegate*);
    using QStyledItemDelegate_Event_Callback = bool (*)(QStyledItemDelegate*, QEvent*);
    using QStyledItemDelegate_TimerEvent_Callback = void (*)(QStyledItemDelegate*, QTimerEvent*);
    using QStyledItemDelegate_ChildEvent_Callback = void (*)(QStyledItemDelegate*, QChildEvent*);
    using QStyledItemDelegate_CustomEvent_Callback = void (*)(QStyledItemDelegate*, QEvent*);
    using QStyledItemDelegate_ConnectNotify_Callback = void (*)(QStyledItemDelegate*, QMetaMethod*);
    using QStyledItemDelegate_DisconnectNotify_Callback = void (*)(QStyledItemDelegate*, QMetaMethod*);
    using QStyledItemDelegate::isSignalConnected;
    using QStyledItemDelegate::receivers;
    using QStyledItemDelegate::sender;
    using QStyledItemDelegate::senderSignalIndex;

    // Instance callback storage
    QStyledItemDelegate_MetaObject_Callback qstyleditemdelegate_metaobject_callback = nullptr;
    QStyledItemDelegate_Metacast_Callback qstyleditemdelegate_metacast_callback = nullptr;
    QStyledItemDelegate_Metacall_Callback qstyleditemdelegate_metacall_callback = nullptr;
    QStyledItemDelegate_Paint_Callback qstyleditemdelegate_paint_callback = nullptr;
    QStyledItemDelegate_SizeHint_Callback qstyleditemdelegate_sizehint_callback = nullptr;
    QStyledItemDelegate_CreateEditor_Callback qstyleditemdelegate_createeditor_callback = nullptr;
    QStyledItemDelegate_SetEditorData_Callback qstyleditemdelegate_seteditordata_callback = nullptr;
    QStyledItemDelegate_SetModelData_Callback qstyleditemdelegate_setmodeldata_callback = nullptr;
    QStyledItemDelegate_UpdateEditorGeometry_Callback qstyleditemdelegate_updateeditorgeometry_callback = nullptr;
    QStyledItemDelegate_DisplayText_Callback qstyleditemdelegate_displaytext_callback = nullptr;
    QStyledItemDelegate_InitStyleOption_Callback qstyleditemdelegate_initstyleoption_callback = nullptr;
    QStyledItemDelegate_EventFilter_Callback qstyleditemdelegate_eventfilter_callback = nullptr;
    QStyledItemDelegate_EditorEvent_Callback qstyleditemdelegate_editorevent_callback = nullptr;
    QStyledItemDelegate_DestroyEditor_Callback qstyleditemdelegate_destroyeditor_callback = nullptr;
    QStyledItemDelegate_HelpEvent_Callback qstyleditemdelegate_helpevent_callback = nullptr;
    QStyledItemDelegate_PaintingRoles_Callback qstyleditemdelegate_paintingroles_callback = nullptr;
    QStyledItemDelegate_Event_Callback qstyleditemdelegate_event_callback = nullptr;
    QStyledItemDelegate_TimerEvent_Callback qstyleditemdelegate_timerevent_callback = nullptr;
    QStyledItemDelegate_ChildEvent_Callback qstyleditemdelegate_childevent_callback = nullptr;
    QStyledItemDelegate_CustomEvent_Callback qstyleditemdelegate_customevent_callback = nullptr;
    QStyledItemDelegate_ConnectNotify_Callback qstyleditemdelegate_connectnotify_callback = nullptr;
    QStyledItemDelegate_DisconnectNotify_Callback qstyleditemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QStyledItemDelegate {
        using QStyledItemDelegate::childEvent;
        using QStyledItemDelegate::connectNotify;
        using QStyledItemDelegate::customEvent;
        using QStyledItemDelegate::disconnectNotify;
        using QStyledItemDelegate::editorEvent;
        using QStyledItemDelegate::eventFilter;
        using QStyledItemDelegate::initStyleOption;
        using QStyledItemDelegate::timerEvent;
    };

    VirtualQStyledItemDelegate() : QStyledItemDelegate() {};
    VirtualQStyledItemDelegate(QObject* parent) : QStyledItemDelegate(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qstyleditemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = qstyleditemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return QStyledItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qstyleditemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qstyleditemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QStyledItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyleditemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qstyleditemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QStyledItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QStyledItemDelegate::paint(painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = qstyleditemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QStyledItemDelegate::sizeHint(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = qstyleditemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QStyledItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qstyleditemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        QStyledItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qstyleditemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QStyledItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QStyledItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
        if (qstyleditemdelegate_displaytext_callback) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval2 = const_cast<QLocale*>(&locale_ret);
            const char* callback_ret = qstyleditemdelegate_displaytext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return QStyledItemDelegate::displayText(value, locale);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_initstyleoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        QStyledItemDelegate::initStyleOption(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qstyleditemdelegate_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = qstyleditemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QStyledItemDelegate::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qstyleditemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qstyleditemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QStyledItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qstyleditemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            qstyleditemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        QStyledItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qstyleditemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = qstyleditemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QStyledItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qstyleditemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = qstyleditemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QStyledItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyleditemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qstyleditemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return QStyledItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyleditemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qstyleditemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        QStyledItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyleditemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            qstyleditemdelegate_childevent_callback(this, cbval1);
            return;
        }
        QStyledItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyleditemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            qstyleditemdelegate_customevent_callback(this, cbval1);
            return;
        }
        QStyledItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyleditemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyleditemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        QStyledItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyleditemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qstyleditemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        QStyledItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void QStyledItemDelegate_SuperInitStyleOption(const QStyledItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
    friend bool QStyledItemDelegate_SuperEventFilter(QStyledItemDelegate* self, QObject* object, QEvent* event);
    friend bool QStyledItemDelegate_SuperEditorEvent(QStyledItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend void QStyledItemDelegate_SuperTimerEvent(QStyledItemDelegate* self, QTimerEvent* event);
    friend void QStyledItemDelegate_SuperChildEvent(QStyledItemDelegate* self, QChildEvent* event);
    friend void QStyledItemDelegate_SuperCustomEvent(QStyledItemDelegate* self, QEvent* event);
    friend void QStyledItemDelegate_SuperConnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
    friend void QStyledItemDelegate_SuperDisconnectNotify(QStyledItemDelegate* self, const QMetaMethod* signal);
};

#endif
