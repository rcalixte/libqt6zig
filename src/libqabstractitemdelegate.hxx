#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMDELEGATE_H
#define SRCC_LIBVIRTUALQABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemDelegate so that we can call protected methods
class VirtualQAbstractItemDelegate : public QAbstractItemDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualQAbstractItemDelegate = true;

    // Virtual class public types (including callbacks)
    using QAbstractItemDelegate_MetaObject_Callback = QMetaObject* (*)();
    using QAbstractItemDelegate_Metacast_Callback = void* (*)(QAbstractItemDelegate*, const char*);
    using QAbstractItemDelegate_Metacall_Callback = int (*)(QAbstractItemDelegate*, int, int, void**);
    using QAbstractItemDelegate_Paint_Callback = void (*)(const QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_SizeHint_Callback = QSize* (*)(const QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_CreateEditor_Callback = QWidget* (*)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_DestroyEditor_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QModelIndex*);
    using QAbstractItemDelegate_SetEditorData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QModelIndex*);
    using QAbstractItemDelegate_SetModelData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using QAbstractItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_EditorEvent_Callback = bool (*)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_HelpEvent_Callback = bool (*)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using QAbstractItemDelegate_PaintingRoles_Callback = libqt_list /* of int */ (*)();
    using QAbstractItemDelegate_Event_Callback = bool (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_EventFilter_Callback = bool (*)(QAbstractItemDelegate*, QObject*, QEvent*);
    using QAbstractItemDelegate_TimerEvent_Callback = void (*)(QAbstractItemDelegate*, QTimerEvent*);
    using QAbstractItemDelegate_ChildEvent_Callback = void (*)(QAbstractItemDelegate*, QChildEvent*);
    using QAbstractItemDelegate_CustomEvent_Callback = void (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_ConnectNotify_Callback = void (*)(QAbstractItemDelegate*, QMetaMethod*);
    using QAbstractItemDelegate_DisconnectNotify_Callback = void (*)(QAbstractItemDelegate*, QMetaMethod*);
    using QAbstractItemDelegate_Sender_Callback = QObject* (*)();
    using QAbstractItemDelegate_SenderSignalIndex_Callback = int (*)();
    using QAbstractItemDelegate_Receivers_Callback = int (*)(const QAbstractItemDelegate*, const char*);
    using QAbstractItemDelegate_IsSignalConnected_Callback = bool (*)(const QAbstractItemDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    QAbstractItemDelegate_MetaObject_Callback qabstractitemdelegate_metaobject_callback = nullptr;
    QAbstractItemDelegate_Metacast_Callback qabstractitemdelegate_metacast_callback = nullptr;
    QAbstractItemDelegate_Metacall_Callback qabstractitemdelegate_metacall_callback = nullptr;
    QAbstractItemDelegate_Paint_Callback qabstractitemdelegate_paint_callback = nullptr;
    QAbstractItemDelegate_SizeHint_Callback qabstractitemdelegate_sizehint_callback = nullptr;
    QAbstractItemDelegate_CreateEditor_Callback qabstractitemdelegate_createeditor_callback = nullptr;
    QAbstractItemDelegate_DestroyEditor_Callback qabstractitemdelegate_destroyeditor_callback = nullptr;
    QAbstractItemDelegate_SetEditorData_Callback qabstractitemdelegate_seteditordata_callback = nullptr;
    QAbstractItemDelegate_SetModelData_Callback qabstractitemdelegate_setmodeldata_callback = nullptr;
    QAbstractItemDelegate_UpdateEditorGeometry_Callback qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
    QAbstractItemDelegate_EditorEvent_Callback qabstractitemdelegate_editorevent_callback = nullptr;
    QAbstractItemDelegate_HelpEvent_Callback qabstractitemdelegate_helpevent_callback = nullptr;
    QAbstractItemDelegate_PaintingRoles_Callback qabstractitemdelegate_paintingroles_callback = nullptr;
    QAbstractItemDelegate_Event_Callback qabstractitemdelegate_event_callback = nullptr;
    QAbstractItemDelegate_EventFilter_Callback qabstractitemdelegate_eventfilter_callback = nullptr;
    QAbstractItemDelegate_TimerEvent_Callback qabstractitemdelegate_timerevent_callback = nullptr;
    QAbstractItemDelegate_ChildEvent_Callback qabstractitemdelegate_childevent_callback = nullptr;
    QAbstractItemDelegate_CustomEvent_Callback qabstractitemdelegate_customevent_callback = nullptr;
    QAbstractItemDelegate_ConnectNotify_Callback qabstractitemdelegate_connectnotify_callback = nullptr;
    QAbstractItemDelegate_DisconnectNotify_Callback qabstractitemdelegate_disconnectnotify_callback = nullptr;
    QAbstractItemDelegate_Sender_Callback qabstractitemdelegate_sender_callback = nullptr;
    QAbstractItemDelegate_SenderSignalIndex_Callback qabstractitemdelegate_sendersignalindex_callback = nullptr;
    QAbstractItemDelegate_Receivers_Callback qabstractitemdelegate_receivers_callback = nullptr;
    QAbstractItemDelegate_IsSignalConnected_Callback qabstractitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractitemdelegate_metaobject_isbase = false;
    mutable bool qabstractitemdelegate_metacast_isbase = false;
    mutable bool qabstractitemdelegate_metacall_isbase = false;
    mutable bool qabstractitemdelegate_paint_isbase = false;
    mutable bool qabstractitemdelegate_sizehint_isbase = false;
    mutable bool qabstractitemdelegate_createeditor_isbase = false;
    mutable bool qabstractitemdelegate_destroyeditor_isbase = false;
    mutable bool qabstractitemdelegate_seteditordata_isbase = false;
    mutable bool qabstractitemdelegate_setmodeldata_isbase = false;
    mutable bool qabstractitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qabstractitemdelegate_editorevent_isbase = false;
    mutable bool qabstractitemdelegate_helpevent_isbase = false;
    mutable bool qabstractitemdelegate_paintingroles_isbase = false;
    mutable bool qabstractitemdelegate_event_isbase = false;
    mutable bool qabstractitemdelegate_eventfilter_isbase = false;
    mutable bool qabstractitemdelegate_timerevent_isbase = false;
    mutable bool qabstractitemdelegate_childevent_isbase = false;
    mutable bool qabstractitemdelegate_customevent_isbase = false;
    mutable bool qabstractitemdelegate_connectnotify_isbase = false;
    mutable bool qabstractitemdelegate_disconnectnotify_isbase = false;
    mutable bool qabstractitemdelegate_sender_isbase = false;
    mutable bool qabstractitemdelegate_sendersignalindex_isbase = false;
    mutable bool qabstractitemdelegate_receivers_isbase = false;
    mutable bool qabstractitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualQAbstractItemDelegate() : QAbstractItemDelegate() {};
    VirtualQAbstractItemDelegate(QObject* parent) : QAbstractItemDelegate(parent) {};

    // Callback setters
    inline void setQAbstractItemDelegate_MetaObject_Callback(QAbstractItemDelegate_MetaObject_Callback cb) { qabstractitemdelegate_metaobject_callback = cb; }
    inline void setQAbstractItemDelegate_Metacast_Callback(QAbstractItemDelegate_Metacast_Callback cb) { qabstractitemdelegate_metacast_callback = cb; }
    inline void setQAbstractItemDelegate_Metacall_Callback(QAbstractItemDelegate_Metacall_Callback cb) { qabstractitemdelegate_metacall_callback = cb; }
    inline void setQAbstractItemDelegate_Paint_Callback(QAbstractItemDelegate_Paint_Callback cb) { qabstractitemdelegate_paint_callback = cb; }
    inline void setQAbstractItemDelegate_SizeHint_Callback(QAbstractItemDelegate_SizeHint_Callback cb) { qabstractitemdelegate_sizehint_callback = cb; }
    inline void setQAbstractItemDelegate_CreateEditor_Callback(QAbstractItemDelegate_CreateEditor_Callback cb) { qabstractitemdelegate_createeditor_callback = cb; }
    inline void setQAbstractItemDelegate_DestroyEditor_Callback(QAbstractItemDelegate_DestroyEditor_Callback cb) { qabstractitemdelegate_destroyeditor_callback = cb; }
    inline void setQAbstractItemDelegate_SetEditorData_Callback(QAbstractItemDelegate_SetEditorData_Callback cb) { qabstractitemdelegate_seteditordata_callback = cb; }
    inline void setQAbstractItemDelegate_SetModelData_Callback(QAbstractItemDelegate_SetModelData_Callback cb) { qabstractitemdelegate_setmodeldata_callback = cb; }
    inline void setQAbstractItemDelegate_UpdateEditorGeometry_Callback(QAbstractItemDelegate_UpdateEditorGeometry_Callback cb) { qabstractitemdelegate_updateeditorgeometry_callback = cb; }
    inline void setQAbstractItemDelegate_EditorEvent_Callback(QAbstractItemDelegate_EditorEvent_Callback cb) { qabstractitemdelegate_editorevent_callback = cb; }
    inline void setQAbstractItemDelegate_HelpEvent_Callback(QAbstractItemDelegate_HelpEvent_Callback cb) { qabstractitemdelegate_helpevent_callback = cb; }
    inline void setQAbstractItemDelegate_PaintingRoles_Callback(QAbstractItemDelegate_PaintingRoles_Callback cb) { qabstractitemdelegate_paintingroles_callback = cb; }
    inline void setQAbstractItemDelegate_Event_Callback(QAbstractItemDelegate_Event_Callback cb) { qabstractitemdelegate_event_callback = cb; }
    inline void setQAbstractItemDelegate_EventFilter_Callback(QAbstractItemDelegate_EventFilter_Callback cb) { qabstractitemdelegate_eventfilter_callback = cb; }
    inline void setQAbstractItemDelegate_TimerEvent_Callback(QAbstractItemDelegate_TimerEvent_Callback cb) { qabstractitemdelegate_timerevent_callback = cb; }
    inline void setQAbstractItemDelegate_ChildEvent_Callback(QAbstractItemDelegate_ChildEvent_Callback cb) { qabstractitemdelegate_childevent_callback = cb; }
    inline void setQAbstractItemDelegate_CustomEvent_Callback(QAbstractItemDelegate_CustomEvent_Callback cb) { qabstractitemdelegate_customevent_callback = cb; }
    inline void setQAbstractItemDelegate_ConnectNotify_Callback(QAbstractItemDelegate_ConnectNotify_Callback cb) { qabstractitemdelegate_connectnotify_callback = cb; }
    inline void setQAbstractItemDelegate_DisconnectNotify_Callback(QAbstractItemDelegate_DisconnectNotify_Callback cb) { qabstractitemdelegate_disconnectnotify_callback = cb; }
    inline void setQAbstractItemDelegate_Sender_Callback(QAbstractItemDelegate_Sender_Callback cb) { qabstractitemdelegate_sender_callback = cb; }
    inline void setQAbstractItemDelegate_SenderSignalIndex_Callback(QAbstractItemDelegate_SenderSignalIndex_Callback cb) { qabstractitemdelegate_sendersignalindex_callback = cb; }
    inline void setQAbstractItemDelegate_Receivers_Callback(QAbstractItemDelegate_Receivers_Callback cb) { qabstractitemdelegate_receivers_callback = cb; }
    inline void setQAbstractItemDelegate_IsSignalConnected_Callback(QAbstractItemDelegate_IsSignalConnected_Callback cb) { qabstractitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setQAbstractItemDelegate_MetaObject_IsBase(bool value) const { qabstractitemdelegate_metaobject_isbase = value; }
    inline void setQAbstractItemDelegate_Metacast_IsBase(bool value) const { qabstractitemdelegate_metacast_isbase = value; }
    inline void setQAbstractItemDelegate_Metacall_IsBase(bool value) const { qabstractitemdelegate_metacall_isbase = value; }
    inline void setQAbstractItemDelegate_Paint_IsBase(bool value) const { qabstractitemdelegate_paint_isbase = value; }
    inline void setQAbstractItemDelegate_SizeHint_IsBase(bool value) const { qabstractitemdelegate_sizehint_isbase = value; }
    inline void setQAbstractItemDelegate_CreateEditor_IsBase(bool value) const { qabstractitemdelegate_createeditor_isbase = value; }
    inline void setQAbstractItemDelegate_DestroyEditor_IsBase(bool value) const { qabstractitemdelegate_destroyeditor_isbase = value; }
    inline void setQAbstractItemDelegate_SetEditorData_IsBase(bool value) const { qabstractitemdelegate_seteditordata_isbase = value; }
    inline void setQAbstractItemDelegate_SetModelData_IsBase(bool value) const { qabstractitemdelegate_setmodeldata_isbase = value; }
    inline void setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qabstractitemdelegate_updateeditorgeometry_isbase = value; }
    inline void setQAbstractItemDelegate_EditorEvent_IsBase(bool value) const { qabstractitemdelegate_editorevent_isbase = value; }
    inline void setQAbstractItemDelegate_HelpEvent_IsBase(bool value) const { qabstractitemdelegate_helpevent_isbase = value; }
    inline void setQAbstractItemDelegate_PaintingRoles_IsBase(bool value) const { qabstractitemdelegate_paintingroles_isbase = value; }
    inline void setQAbstractItemDelegate_Event_IsBase(bool value) const { qabstractitemdelegate_event_isbase = value; }
    inline void setQAbstractItemDelegate_EventFilter_IsBase(bool value) const { qabstractitemdelegate_eventfilter_isbase = value; }
    inline void setQAbstractItemDelegate_TimerEvent_IsBase(bool value) const { qabstractitemdelegate_timerevent_isbase = value; }
    inline void setQAbstractItemDelegate_ChildEvent_IsBase(bool value) const { qabstractitemdelegate_childevent_isbase = value; }
    inline void setQAbstractItemDelegate_CustomEvent_IsBase(bool value) const { qabstractitemdelegate_customevent_isbase = value; }
    inline void setQAbstractItemDelegate_ConnectNotify_IsBase(bool value) const { qabstractitemdelegate_connectnotify_isbase = value; }
    inline void setQAbstractItemDelegate_DisconnectNotify_IsBase(bool value) const { qabstractitemdelegate_disconnectnotify_isbase = value; }
    inline void setQAbstractItemDelegate_Sender_IsBase(bool value) const { qabstractitemdelegate_sender_isbase = value; }
    inline void setQAbstractItemDelegate_SenderSignalIndex_IsBase(bool value) const { qabstractitemdelegate_sendersignalindex_isbase = value; }
    inline void setQAbstractItemDelegate_Receivers_IsBase(bool value) const { qabstractitemdelegate_receivers_isbase = value; }
    inline void setQAbstractItemDelegate_IsSignalConnected_IsBase(bool value) const { qabstractitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qabstractitemdelegate_metaobject_isbase) {
            qabstractitemdelegate_metaobject_isbase = false;
            return QAbstractItemDelegate::metaObject();
        }
        auto metaobject_cb = qabstractitemdelegate_metaobject_callback;
        if (metaobject_cb) {
            QMetaObject* callback_ret = metaobject_cb();
            return callback_ret;
        }
        return QAbstractItemDelegate::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qabstractitemdelegate_metacast_isbase) {
            qabstractitemdelegate_metacast_isbase = false;
            return QAbstractItemDelegate::qt_metacast(param1);
        }
        auto metacast_cb = qabstractitemdelegate_metacast_callback;
        if (metacast_cb) {
            const char* cbval1 = (const char*)param1;

            void* callback_ret = metacast_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemDelegate::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemdelegate_metacall_isbase) {
            qabstractitemdelegate_metacall_isbase = false;
            return QAbstractItemDelegate::qt_metacall(param1, param2, param3);
        }
        auto metacall_cb = qabstractitemdelegate_metacall_callback;
        if (metacall_cb) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = metacall_cb(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemDelegate::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        auto paint_cb = qabstractitemdelegate_paint_callback;
        if (paint_cb) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            paint_cb(this, cbval1, cbval2, cbval3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        auto sizehint_cb = qabstractitemdelegate_sizehint_callback;
        if (sizehint_cb) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = sizehint_cb(this, cbval1, cbval2);
            return *callback_ret;
        }
        return {};
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_createeditor_isbase) {
            qabstractitemdelegate_createeditor_isbase = false;
            return QAbstractItemDelegate::createEditor(parent, option, index);
        }
        auto createeditor_cb = qabstractitemdelegate_createeditor_callback;
        if (createeditor_cb) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QWidget* callback_ret = createeditor_cb(this, cbval1, cbval2, cbval3);
            return callback_ret;
        }
        return QAbstractItemDelegate::createEditor(parent, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_destroyeditor_isbase) {
            qabstractitemdelegate_destroyeditor_isbase = false;
            QAbstractItemDelegate::destroyEditor(editor, index);
            return;
        }
        auto destroyeditor_cb = qabstractitemdelegate_destroyeditor_callback;
        if (destroyeditor_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            destroyeditor_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemDelegate::destroyEditor(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_seteditordata_isbase) {
            qabstractitemdelegate_seteditordata_isbase = false;
            QAbstractItemDelegate::setEditorData(editor, index);
            return;
        }
        auto seteditordata_cb = qabstractitemdelegate_seteditordata_callback;
        if (seteditordata_cb) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            seteditordata_cb(this, cbval1, cbval2);
            return;
        }
        QAbstractItemDelegate::setEditorData(editor, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qabstractitemdelegate_setmodeldata_isbase) {
            qabstractitemdelegate_setmodeldata_isbase = false;
            QAbstractItemDelegate::setModelData(editor, model, index);
            return;
        }
        auto setmodeldata_cb = qabstractitemdelegate_setmodeldata_callback;
        if (setmodeldata_cb) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            setmodeldata_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemDelegate::setModelData(editor, model, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_updateeditorgeometry_isbase) {
            qabstractitemdelegate_updateeditorgeometry_isbase = false;
            QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
            return;
        }
        auto updateeditorgeometry_cb = qabstractitemdelegate_updateeditorgeometry_callback;
        if (updateeditorgeometry_cb) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            updateeditorgeometry_cb(this, cbval1, cbval2, cbval3);
            return;
        }
        QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_editorevent_isbase) {
            qabstractitemdelegate_editorevent_isbase = false;
            return QAbstractItemDelegate::editorEvent(event, model, option, index);
        }
        auto editorevent_cb = qabstractitemdelegate_editorevent_callback;
        if (editorevent_cb) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = editorevent_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractItemDelegate::editorEvent(event, model, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_helpevent_isbase) {
            qabstractitemdelegate_helpevent_isbase = false;
            return QAbstractItemDelegate::helpEvent(event, view, option, index);
        }
        auto helpevent_cb = qabstractitemdelegate_helpevent_callback;
        if (helpevent_cb) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = helpevent_cb(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qabstractitemdelegate_paintingroles_isbase) {
            qabstractitemdelegate_paintingroles_isbase = false;
            return QAbstractItemDelegate::paintingRoles();
        }
        auto paintingroles_cb = qabstractitemdelegate_paintingroles_callback;
        if (paintingroles_cb) {
            libqt_list /* of int */ callback_ret = paintingroles_cb();
            QList<int> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<int>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QAbstractItemDelegate::paintingRoles();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemdelegate_event_isbase) {
            qabstractitemdelegate_event_isbase = false;
            return QAbstractItemDelegate::event(event);
        }
        auto event_cb = qabstractitemdelegate_event_callback;
        if (event_cb) {
            QEvent* cbval1 = event;

            bool callback_ret = event_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemDelegate::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractitemdelegate_eventfilter_isbase) {
            qabstractitemdelegate_eventfilter_isbase = false;
            return QAbstractItemDelegate::eventFilter(watched, event);
        }
        auto eventfilter_cb = qabstractitemdelegate_eventfilter_callback;
        if (eventfilter_cb) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = eventfilter_cb(this, cbval1, cbval2);
            return callback_ret;
        }
        return QAbstractItemDelegate::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemdelegate_timerevent_isbase) {
            qabstractitemdelegate_timerevent_isbase = false;
            QAbstractItemDelegate::timerEvent(event);
            return;
        }
        auto timerevent_cb = qabstractitemdelegate_timerevent_callback;
        if (timerevent_cb) {
            QTimerEvent* cbval1 = event;

            timerevent_cb(this, cbval1);
            return;
        }
        QAbstractItemDelegate::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemdelegate_childevent_isbase) {
            qabstractitemdelegate_childevent_isbase = false;
            QAbstractItemDelegate::childEvent(event);
            return;
        }
        auto childevent_cb = qabstractitemdelegate_childevent_callback;
        if (childevent_cb) {
            QChildEvent* cbval1 = event;

            childevent_cb(this, cbval1);
            return;
        }
        QAbstractItemDelegate::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemdelegate_customevent_isbase) {
            qabstractitemdelegate_customevent_isbase = false;
            QAbstractItemDelegate::customEvent(event);
            return;
        }
        auto customevent_cb = qabstractitemdelegate_customevent_callback;
        if (customevent_cb) {
            QEvent* cbval1 = event;

            customevent_cb(this, cbval1);
            return;
        }
        QAbstractItemDelegate::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_connectnotify_isbase) {
            qabstractitemdelegate_connectnotify_isbase = false;
            QAbstractItemDelegate::connectNotify(signal);
            return;
        }
        auto connectnotify_cb = qabstractitemdelegate_connectnotify_callback;
        if (connectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            connectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemDelegate::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_disconnectnotify_isbase) {
            qabstractitemdelegate_disconnectnotify_isbase = false;
            QAbstractItemDelegate::disconnectNotify(signal);
            return;
        }
        auto disconnectnotify_cb = qabstractitemdelegate_disconnectnotify_callback;
        if (disconnectnotify_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            disconnectnotify_cb(this, cbval1);
            return;
        }
        QAbstractItemDelegate::disconnectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemdelegate_sender_isbase) {
            qabstractitemdelegate_sender_isbase = false;
            return QAbstractItemDelegate::sender();
        }
        auto sender_cb = qabstractitemdelegate_sender_callback;
        if (sender_cb) {
            QObject* callback_ret = sender_cb();
            return callback_ret;
        }
        return QAbstractItemDelegate::sender();
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemdelegate_sendersignalindex_isbase) {
            qabstractitemdelegate_sendersignalindex_isbase = false;
            return QAbstractItemDelegate::senderSignalIndex();
        }
        auto sendersignalindex_cb = qabstractitemdelegate_sendersignalindex_callback;
        if (sendersignalindex_cb) {
            int callback_ret = sendersignalindex_cb();
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemDelegate::senderSignalIndex();
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemdelegate_receivers_isbase) {
            qabstractitemdelegate_receivers_isbase = false;
            return QAbstractItemDelegate::receivers(signal);
        }
        auto receivers_cb = qabstractitemdelegate_receivers_callback;
        if (receivers_cb) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = receivers_cb(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QAbstractItemDelegate::receivers(signal);
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemdelegate_issignalconnected_isbase) {
            qabstractitemdelegate_issignalconnected_isbase = false;
            return QAbstractItemDelegate::isSignalConnected(signal);
        }
        auto issignalconnected_cb = qabstractitemdelegate_issignalconnected_callback;
        if (issignalconnected_cb) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = issignalconnected_cb(this, cbval1);
            return callback_ret;
        }
        return QAbstractItemDelegate::isSignalConnected(signal);
    }

    // Friend functions
    friend void QAbstractItemDelegate_TimerEvent(QAbstractItemDelegate* self, QTimerEvent* event);
    friend void QAbstractItemDelegate_SuperTimerEvent(QAbstractItemDelegate* self, QTimerEvent* event);
    friend void QAbstractItemDelegate_ChildEvent(QAbstractItemDelegate* self, QChildEvent* event);
    friend void QAbstractItemDelegate_SuperChildEvent(QAbstractItemDelegate* self, QChildEvent* event);
    friend void QAbstractItemDelegate_CustomEvent(QAbstractItemDelegate* self, QEvent* event);
    friend void QAbstractItemDelegate_SuperCustomEvent(QAbstractItemDelegate* self, QEvent* event);
    friend void QAbstractItemDelegate_ConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend void QAbstractItemDelegate_SuperConnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend void QAbstractItemDelegate_DisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend void QAbstractItemDelegate_SuperDisconnectNotify(QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend QObject* QAbstractItemDelegate_Sender(const QAbstractItemDelegate* self);
    friend QObject* QAbstractItemDelegate_SuperSender(const QAbstractItemDelegate* self);
    friend int QAbstractItemDelegate_SenderSignalIndex(const QAbstractItemDelegate* self);
    friend int QAbstractItemDelegate_SuperSenderSignalIndex(const QAbstractItemDelegate* self);
    friend int QAbstractItemDelegate_Receivers(const QAbstractItemDelegate* self, const char* signal);
    friend int QAbstractItemDelegate_SuperReceivers(const QAbstractItemDelegate* self, const char* signal);
    friend bool QAbstractItemDelegate_IsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal);
    friend bool QAbstractItemDelegate_SuperIsSignalConnected(const QAbstractItemDelegate* self, const QMetaMethod* signal);
};

#endif
