#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKEXTENDABLEITEMDELEGATE_HXX
#define EXTRAS_KITEMVIEWS_LIBKEXTENDABLEITEMDELEGATE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KExtendableItemDelegate
class VirtualKExtendableItemDelegate final : public KExtendableItemDelegate {
  public:
    // Virtual class public types (including callbacks and access types)
    using KExtendableItemDelegate_MetaObject_Callback = QMetaObject* (*)(const KExtendableItemDelegate*);
    using KExtendableItemDelegate_Metacast_Callback = void* (*)(KExtendableItemDelegate*, const char*);
    using KExtendableItemDelegate_Metacall_Callback = int (*)(KExtendableItemDelegate*, int, int, void**);
    using KExtendableItemDelegate_SizeHint_Callback = QSize* (*)(const KExtendableItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_Paint_Callback = void (*)(const KExtendableItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_UpdateExtenderGeometry_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_CreateEditor_Callback = QWidget* (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_SetEditorData_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QModelIndex*);
    using KExtendableItemDelegate_SetModelData_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using KExtendableItemDelegate_UpdateEditorGeometry_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_DisplayText_Callback = const char* (*)(const KExtendableItemDelegate*, QVariant*, QLocale*);
    using KExtendableItemDelegate_InitStyleOption_Callback = void (*)(const KExtendableItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_EventFilter_Callback = bool (*)(KExtendableItemDelegate*, QObject*, QEvent*);
    using KExtendableItemDelegate_EditorEvent_Callback = bool (*)(KExtendableItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_DestroyEditor_Callback = void (*)(const KExtendableItemDelegate*, QWidget*, QModelIndex*);
    using KExtendableItemDelegate_HelpEvent_Callback = bool (*)(KExtendableItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using KExtendableItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)(const KExtendableItemDelegate*);
    using KExtendableItemDelegate_Event_Callback = bool (*)(KExtendableItemDelegate*, QEvent*);
    using KExtendableItemDelegate_TimerEvent_Callback = void (*)(KExtendableItemDelegate*, QTimerEvent*);
    using KExtendableItemDelegate_ChildEvent_Callback = void (*)(KExtendableItemDelegate*, QChildEvent*);
    using KExtendableItemDelegate_CustomEvent_Callback = void (*)(KExtendableItemDelegate*, QEvent*);
    using KExtendableItemDelegate_ConnectNotify_Callback = void (*)(KExtendableItemDelegate*, QMetaMethod*);
    using KExtendableItemDelegate_DisconnectNotify_Callback = void (*)(KExtendableItemDelegate*, QMetaMethod*);
    using KExtendableItemDelegate::contractPixmap;
    using KExtendableItemDelegate::extenderRect;
    using KExtendableItemDelegate::extendPixmap;
    using KExtendableItemDelegate::isSignalConnected;
    using KExtendableItemDelegate::receivers;
    using KExtendableItemDelegate::sender;
    using KExtendableItemDelegate::senderSignalIndex;
    using KExtendableItemDelegate::setContractPixmap;
    using KExtendableItemDelegate::setExtendPixmap;

    // Instance callback storage
    KExtendableItemDelegate_MetaObject_Callback kextendableitemdelegate_metaobject_callback = nullptr;
    KExtendableItemDelegate_Metacast_Callback kextendableitemdelegate_metacast_callback = nullptr;
    KExtendableItemDelegate_Metacall_Callback kextendableitemdelegate_metacall_callback = nullptr;
    KExtendableItemDelegate_SizeHint_Callback kextendableitemdelegate_sizehint_callback = nullptr;
    KExtendableItemDelegate_Paint_Callback kextendableitemdelegate_paint_callback = nullptr;
    KExtendableItemDelegate_UpdateExtenderGeometry_Callback kextendableitemdelegate_updateextendergeometry_callback = nullptr;
    KExtendableItemDelegate_CreateEditor_Callback kextendableitemdelegate_createeditor_callback = nullptr;
    KExtendableItemDelegate_SetEditorData_Callback kextendableitemdelegate_seteditordata_callback = nullptr;
    KExtendableItemDelegate_SetModelData_Callback kextendableitemdelegate_setmodeldata_callback = nullptr;
    KExtendableItemDelegate_UpdateEditorGeometry_Callback kextendableitemdelegate_updateeditorgeometry_callback = nullptr;
    KExtendableItemDelegate_DisplayText_Callback kextendableitemdelegate_displaytext_callback = nullptr;
    KExtendableItemDelegate_InitStyleOption_Callback kextendableitemdelegate_initstyleoption_callback = nullptr;
    KExtendableItemDelegate_EventFilter_Callback kextendableitemdelegate_eventfilter_callback = nullptr;
    KExtendableItemDelegate_EditorEvent_Callback kextendableitemdelegate_editorevent_callback = nullptr;
    KExtendableItemDelegate_DestroyEditor_Callback kextendableitemdelegate_destroyeditor_callback = nullptr;
    KExtendableItemDelegate_HelpEvent_Callback kextendableitemdelegate_helpevent_callback = nullptr;
    KExtendableItemDelegate_PaintingRoles_Callback kextendableitemdelegate_paintingroles_callback = nullptr;
    KExtendableItemDelegate_Event_Callback kextendableitemdelegate_event_callback = nullptr;
    KExtendableItemDelegate_TimerEvent_Callback kextendableitemdelegate_timerevent_callback = nullptr;
    KExtendableItemDelegate_ChildEvent_Callback kextendableitemdelegate_childevent_callback = nullptr;
    KExtendableItemDelegate_CustomEvent_Callback kextendableitemdelegate_customevent_callback = nullptr;
    KExtendableItemDelegate_ConnectNotify_Callback kextendableitemdelegate_connectnotify_callback = nullptr;
    KExtendableItemDelegate_DisconnectNotify_Callback kextendableitemdelegate_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KExtendableItemDelegate {
        using KExtendableItemDelegate::childEvent;
        using KExtendableItemDelegate::connectNotify;
        using KExtendableItemDelegate::customEvent;
        using KExtendableItemDelegate::disconnectNotify;
        using KExtendableItemDelegate::editorEvent;
        using KExtendableItemDelegate::eventFilter;
        using KExtendableItemDelegate::initStyleOption;
        using KExtendableItemDelegate::timerEvent;
    };

    VirtualKExtendableItemDelegate(QAbstractItemView* parent) : KExtendableItemDelegate(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kextendableitemdelegate_metaobject_callback) {
            QMetaObject* callback_ret = kextendableitemdelegate_metaobject_callback(this);
            return callback_ret;
        }
        return KExtendableItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kextendableitemdelegate_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kextendableitemdelegate_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KExtendableItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kextendableitemdelegate_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kextendableitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KExtendableItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_sizehint_callback) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            QSize* callback_ret = kextendableitemdelegate_sizehint_callback(this, cbval1, cbval2);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KExtendableItemDelegate::sizeHint(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_paint_callback) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::paint(painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateExtenderGeometry(QWidget* extender, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_updateextendergeometry_callback) {
            QWidget* cbval1 = extender;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_updateextendergeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::updateExtenderGeometry(extender, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_createeditor_callback) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            QWidget* callback_ret = kextendableitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return KExtendableItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kextendableitemdelegate_seteditordata_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_seteditordata_callback(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kextendableitemdelegate_setmodeldata_callback) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_updateeditorgeometry_callback) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KExtendableItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
        if (kextendableitemdelegate_displaytext_callback) {
            const QVariant& value_ret = value;
            // Cast returned reference into pointer
            QVariant* cbval1 = const_cast<QVariant*>(&value_ret);
            const QLocale& locale_ret = locale;
            // Cast returned reference into pointer
            QLocale* cbval2 = const_cast<QLocale*>(&locale_ret);
            const char* callback_ret = kextendableitemdelegate_displaytext_callback(this, cbval1, cbval2);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        return KExtendableItemDelegate::displayText(value, locale);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
        if (kextendableitemdelegate_initstyleoption_callback) {
            QStyleOptionViewItem* cbval1 = option;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_initstyleoption_callback(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::initStyleOption(option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kextendableitemdelegate_eventfilter_callback) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;
            bool callback_ret = kextendableitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KExtendableItemDelegate::eventFilter(object, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kextendableitemdelegate_editorevent_callback) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kextendableitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KExtendableItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kextendableitemdelegate_destroyeditor_callback) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);
            kextendableitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
            return;
        }
        KExtendableItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kextendableitemdelegate_helpevent_callback) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);
            bool callback_ret = kextendableitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return KExtendableItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kextendableitemdelegate_paintingroles_callback) {
            libqt_list /* of int */ callback_ret = kextendableitemdelegate_paintingroles_callback(this);
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return KExtendableItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kextendableitemdelegate_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kextendableitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        }
        return KExtendableItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kextendableitemdelegate_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kextendableitemdelegate_timerevent_callback(this, cbval1);
            return;
        }
        KExtendableItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kextendableitemdelegate_childevent_callback) {
            QChildEvent* cbval1 = event;
            kextendableitemdelegate_childevent_callback(this, cbval1);
            return;
        }
        KExtendableItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kextendableitemdelegate_customevent_callback) {
            QEvent* cbval1 = event;
            kextendableitemdelegate_customevent_callback(this, cbval1);
            return;
        }
        KExtendableItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kextendableitemdelegate_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kextendableitemdelegate_connectnotify_callback(this, cbval1);
            return;
        }
        KExtendableItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kextendableitemdelegate_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kextendableitemdelegate_disconnectnotify_callback(this, cbval1);
            return;
        }
        KExtendableItemDelegate::disconnectNotify(signal);
    }

    // Friend functions
    friend void KExtendableItemDelegate_SuperInitStyleOption(const KExtendableItemDelegate* self, QStyleOptionViewItem* option, const QModelIndex* index);
    friend bool KExtendableItemDelegate_SuperEventFilter(KExtendableItemDelegate* self, QObject* object, QEvent* event);
    friend bool KExtendableItemDelegate_SuperEditorEvent(KExtendableItemDelegate* self, QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem* option, const QModelIndex* index);
    friend void KExtendableItemDelegate_SuperTimerEvent(KExtendableItemDelegate* self, QTimerEvent* event);
    friend void KExtendableItemDelegate_SuperChildEvent(KExtendableItemDelegate* self, QChildEvent* event);
    friend void KExtendableItemDelegate_SuperCustomEvent(KExtendableItemDelegate* self, QEvent* event);
    friend void KExtendableItemDelegate_SuperConnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
    friend void KExtendableItemDelegate_SuperDisconnectNotify(KExtendableItemDelegate* self, const QMetaMethod* signal);
};

#endif
