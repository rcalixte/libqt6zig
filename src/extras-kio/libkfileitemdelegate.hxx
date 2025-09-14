#pragma once
#ifndef SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMDELEGATE_H
#define SRC_EXTRAS_KIOC_LIBVIRTUALKFILEITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFileItemDelegate so that we can call protected methods
class VirtualKFileItemDelegate final : public KFileItemDelegate {

  public:
    // Virtual class boolean flag
    bool isVirtualKFileItemDelegate = true;

    // Virtual class public types (including callbacks)
    using KFileItemDelegate_Metacall_Callback = int (*)(KFileItemDelegate*, int, int, void**);
    using KFileItemDelegate_SizeHint_Callback = QSize* (*)(const KFileItemDelegate*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_Paint_Callback = void (*)(const KFileItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_CreateEditor_Callback = QWidget* (*)(const KFileItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_EditorEvent_Callback = bool (*)(KFileItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_SetEditorData_Callback = void (*)(const KFileItemDelegate*, QWidget*, QModelIndex*);
    using KFileItemDelegate_SetModelData_Callback = void (*)(const KFileItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*);
    using KFileItemDelegate_UpdateEditorGeometry_Callback = void (*)(const KFileItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_EventFilter_Callback = bool (*)(KFileItemDelegate*, QObject*, QEvent*);
    using KFileItemDelegate_HelpEvent_Callback = bool (*)(KFileItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*);
    using KFileItemDelegate_DestroyEditor_Callback = void (*)(const KFileItemDelegate*, QWidget*, QModelIndex*);
    using KFileItemDelegate_PaintingRoles_Callback = int* (*)();
    using KFileItemDelegate_Event_Callback = bool (*)(KFileItemDelegate*, QEvent*);
    using KFileItemDelegate_TimerEvent_Callback = void (*)(KFileItemDelegate*, QTimerEvent*);
    using KFileItemDelegate_ChildEvent_Callback = void (*)(KFileItemDelegate*, QChildEvent*);
    using KFileItemDelegate_CustomEvent_Callback = void (*)(KFileItemDelegate*, QEvent*);
    using KFileItemDelegate_ConnectNotify_Callback = void (*)(KFileItemDelegate*, QMetaMethod*);
    using KFileItemDelegate_DisconnectNotify_Callback = void (*)(KFileItemDelegate*, QMetaMethod*);
    using KFileItemDelegate_Sender_Callback = QObject* (*)();
    using KFileItemDelegate_SenderSignalIndex_Callback = int (*)();
    using KFileItemDelegate_Receivers_Callback = int (*)(const KFileItemDelegate*, const char*);
    using KFileItemDelegate_IsSignalConnected_Callback = bool (*)(const KFileItemDelegate*, QMetaMethod*);

  protected:
    // Instance callback storage
    KFileItemDelegate_Metacall_Callback kfileitemdelegate_metacall_callback = nullptr;
    KFileItemDelegate_SizeHint_Callback kfileitemdelegate_sizehint_callback = nullptr;
    KFileItemDelegate_Paint_Callback kfileitemdelegate_paint_callback = nullptr;
    KFileItemDelegate_CreateEditor_Callback kfileitemdelegate_createeditor_callback = nullptr;
    KFileItemDelegate_EditorEvent_Callback kfileitemdelegate_editorevent_callback = nullptr;
    KFileItemDelegate_SetEditorData_Callback kfileitemdelegate_seteditordata_callback = nullptr;
    KFileItemDelegate_SetModelData_Callback kfileitemdelegate_setmodeldata_callback = nullptr;
    KFileItemDelegate_UpdateEditorGeometry_Callback kfileitemdelegate_updateeditorgeometry_callback = nullptr;
    KFileItemDelegate_EventFilter_Callback kfileitemdelegate_eventfilter_callback = nullptr;
    KFileItemDelegate_HelpEvent_Callback kfileitemdelegate_helpevent_callback = nullptr;
    KFileItemDelegate_DestroyEditor_Callback kfileitemdelegate_destroyeditor_callback = nullptr;
    KFileItemDelegate_PaintingRoles_Callback kfileitemdelegate_paintingroles_callback = nullptr;
    KFileItemDelegate_Event_Callback kfileitemdelegate_event_callback = nullptr;
    KFileItemDelegate_TimerEvent_Callback kfileitemdelegate_timerevent_callback = nullptr;
    KFileItemDelegate_ChildEvent_Callback kfileitemdelegate_childevent_callback = nullptr;
    KFileItemDelegate_CustomEvent_Callback kfileitemdelegate_customevent_callback = nullptr;
    KFileItemDelegate_ConnectNotify_Callback kfileitemdelegate_connectnotify_callback = nullptr;
    KFileItemDelegate_DisconnectNotify_Callback kfileitemdelegate_disconnectnotify_callback = nullptr;
    KFileItemDelegate_Sender_Callback kfileitemdelegate_sender_callback = nullptr;
    KFileItemDelegate_SenderSignalIndex_Callback kfileitemdelegate_sendersignalindex_callback = nullptr;
    KFileItemDelegate_Receivers_Callback kfileitemdelegate_receivers_callback = nullptr;
    KFileItemDelegate_IsSignalConnected_Callback kfileitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kfileitemdelegate_metacall_isbase = false;
    mutable bool kfileitemdelegate_sizehint_isbase = false;
    mutable bool kfileitemdelegate_paint_isbase = false;
    mutable bool kfileitemdelegate_createeditor_isbase = false;
    mutable bool kfileitemdelegate_editorevent_isbase = false;
    mutable bool kfileitemdelegate_seteditordata_isbase = false;
    mutable bool kfileitemdelegate_setmodeldata_isbase = false;
    mutable bool kfileitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool kfileitemdelegate_eventfilter_isbase = false;
    mutable bool kfileitemdelegate_helpevent_isbase = false;
    mutable bool kfileitemdelegate_destroyeditor_isbase = false;
    mutable bool kfileitemdelegate_paintingroles_isbase = false;
    mutable bool kfileitemdelegate_event_isbase = false;
    mutable bool kfileitemdelegate_timerevent_isbase = false;
    mutable bool kfileitemdelegate_childevent_isbase = false;
    mutable bool kfileitemdelegate_customevent_isbase = false;
    mutable bool kfileitemdelegate_connectnotify_isbase = false;
    mutable bool kfileitemdelegate_disconnectnotify_isbase = false;
    mutable bool kfileitemdelegate_sender_isbase = false;
    mutable bool kfileitemdelegate_sendersignalindex_isbase = false;
    mutable bool kfileitemdelegate_receivers_isbase = false;
    mutable bool kfileitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualKFileItemDelegate() : KFileItemDelegate() {};
    VirtualKFileItemDelegate(QObject* parent) : KFileItemDelegate(parent) {};

    ~VirtualKFileItemDelegate() {
        kfileitemdelegate_metacall_callback = nullptr;
        kfileitemdelegate_sizehint_callback = nullptr;
        kfileitemdelegate_paint_callback = nullptr;
        kfileitemdelegate_createeditor_callback = nullptr;
        kfileitemdelegate_editorevent_callback = nullptr;
        kfileitemdelegate_seteditordata_callback = nullptr;
        kfileitemdelegate_setmodeldata_callback = nullptr;
        kfileitemdelegate_updateeditorgeometry_callback = nullptr;
        kfileitemdelegate_eventfilter_callback = nullptr;
        kfileitemdelegate_helpevent_callback = nullptr;
        kfileitemdelegate_destroyeditor_callback = nullptr;
        kfileitemdelegate_paintingroles_callback = nullptr;
        kfileitemdelegate_event_callback = nullptr;
        kfileitemdelegate_timerevent_callback = nullptr;
        kfileitemdelegate_childevent_callback = nullptr;
        kfileitemdelegate_customevent_callback = nullptr;
        kfileitemdelegate_connectnotify_callback = nullptr;
        kfileitemdelegate_disconnectnotify_callback = nullptr;
        kfileitemdelegate_sender_callback = nullptr;
        kfileitemdelegate_sendersignalindex_callback = nullptr;
        kfileitemdelegate_receivers_callback = nullptr;
        kfileitemdelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKFileItemDelegate_Metacall_Callback(KFileItemDelegate_Metacall_Callback cb) { kfileitemdelegate_metacall_callback = cb; }
    inline void setKFileItemDelegate_SizeHint_Callback(KFileItemDelegate_SizeHint_Callback cb) { kfileitemdelegate_sizehint_callback = cb; }
    inline void setKFileItemDelegate_Paint_Callback(KFileItemDelegate_Paint_Callback cb) { kfileitemdelegate_paint_callback = cb; }
    inline void setKFileItemDelegate_CreateEditor_Callback(KFileItemDelegate_CreateEditor_Callback cb) { kfileitemdelegate_createeditor_callback = cb; }
    inline void setKFileItemDelegate_EditorEvent_Callback(KFileItemDelegate_EditorEvent_Callback cb) { kfileitemdelegate_editorevent_callback = cb; }
    inline void setKFileItemDelegate_SetEditorData_Callback(KFileItemDelegate_SetEditorData_Callback cb) { kfileitemdelegate_seteditordata_callback = cb; }
    inline void setKFileItemDelegate_SetModelData_Callback(KFileItemDelegate_SetModelData_Callback cb) { kfileitemdelegate_setmodeldata_callback = cb; }
    inline void setKFileItemDelegate_UpdateEditorGeometry_Callback(KFileItemDelegate_UpdateEditorGeometry_Callback cb) { kfileitemdelegate_updateeditorgeometry_callback = cb; }
    inline void setKFileItemDelegate_EventFilter_Callback(KFileItemDelegate_EventFilter_Callback cb) { kfileitemdelegate_eventfilter_callback = cb; }
    inline void setKFileItemDelegate_HelpEvent_Callback(KFileItemDelegate_HelpEvent_Callback cb) { kfileitemdelegate_helpevent_callback = cb; }
    inline void setKFileItemDelegate_DestroyEditor_Callback(KFileItemDelegate_DestroyEditor_Callback cb) { kfileitemdelegate_destroyeditor_callback = cb; }
    inline void setKFileItemDelegate_PaintingRoles_Callback(KFileItemDelegate_PaintingRoles_Callback cb) { kfileitemdelegate_paintingroles_callback = cb; }
    inline void setKFileItemDelegate_Event_Callback(KFileItemDelegate_Event_Callback cb) { kfileitemdelegate_event_callback = cb; }
    inline void setKFileItemDelegate_TimerEvent_Callback(KFileItemDelegate_TimerEvent_Callback cb) { kfileitemdelegate_timerevent_callback = cb; }
    inline void setKFileItemDelegate_ChildEvent_Callback(KFileItemDelegate_ChildEvent_Callback cb) { kfileitemdelegate_childevent_callback = cb; }
    inline void setKFileItemDelegate_CustomEvent_Callback(KFileItemDelegate_CustomEvent_Callback cb) { kfileitemdelegate_customevent_callback = cb; }
    inline void setKFileItemDelegate_ConnectNotify_Callback(KFileItemDelegate_ConnectNotify_Callback cb) { kfileitemdelegate_connectnotify_callback = cb; }
    inline void setKFileItemDelegate_DisconnectNotify_Callback(KFileItemDelegate_DisconnectNotify_Callback cb) { kfileitemdelegate_disconnectnotify_callback = cb; }
    inline void setKFileItemDelegate_Sender_Callback(KFileItemDelegate_Sender_Callback cb) { kfileitemdelegate_sender_callback = cb; }
    inline void setKFileItemDelegate_SenderSignalIndex_Callback(KFileItemDelegate_SenderSignalIndex_Callback cb) { kfileitemdelegate_sendersignalindex_callback = cb; }
    inline void setKFileItemDelegate_Receivers_Callback(KFileItemDelegate_Receivers_Callback cb) { kfileitemdelegate_receivers_callback = cb; }
    inline void setKFileItemDelegate_IsSignalConnected_Callback(KFileItemDelegate_IsSignalConnected_Callback cb) { kfileitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKFileItemDelegate_Metacall_IsBase(bool value) const { kfileitemdelegate_metacall_isbase = value; }
    inline void setKFileItemDelegate_SizeHint_IsBase(bool value) const { kfileitemdelegate_sizehint_isbase = value; }
    inline void setKFileItemDelegate_Paint_IsBase(bool value) const { kfileitemdelegate_paint_isbase = value; }
    inline void setKFileItemDelegate_CreateEditor_IsBase(bool value) const { kfileitemdelegate_createeditor_isbase = value; }
    inline void setKFileItemDelegate_EditorEvent_IsBase(bool value) const { kfileitemdelegate_editorevent_isbase = value; }
    inline void setKFileItemDelegate_SetEditorData_IsBase(bool value) const { kfileitemdelegate_seteditordata_isbase = value; }
    inline void setKFileItemDelegate_SetModelData_IsBase(bool value) const { kfileitemdelegate_setmodeldata_isbase = value; }
    inline void setKFileItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { kfileitemdelegate_updateeditorgeometry_isbase = value; }
    inline void setKFileItemDelegate_EventFilter_IsBase(bool value) const { kfileitemdelegate_eventfilter_isbase = value; }
    inline void setKFileItemDelegate_HelpEvent_IsBase(bool value) const { kfileitemdelegate_helpevent_isbase = value; }
    inline void setKFileItemDelegate_DestroyEditor_IsBase(bool value) const { kfileitemdelegate_destroyeditor_isbase = value; }
    inline void setKFileItemDelegate_PaintingRoles_IsBase(bool value) const { kfileitemdelegate_paintingroles_isbase = value; }
    inline void setKFileItemDelegate_Event_IsBase(bool value) const { kfileitemdelegate_event_isbase = value; }
    inline void setKFileItemDelegate_TimerEvent_IsBase(bool value) const { kfileitemdelegate_timerevent_isbase = value; }
    inline void setKFileItemDelegate_ChildEvent_IsBase(bool value) const { kfileitemdelegate_childevent_isbase = value; }
    inline void setKFileItemDelegate_CustomEvent_IsBase(bool value) const { kfileitemdelegate_customevent_isbase = value; }
    inline void setKFileItemDelegate_ConnectNotify_IsBase(bool value) const { kfileitemdelegate_connectnotify_isbase = value; }
    inline void setKFileItemDelegate_DisconnectNotify_IsBase(bool value) const { kfileitemdelegate_disconnectnotify_isbase = value; }
    inline void setKFileItemDelegate_Sender_IsBase(bool value) const { kfileitemdelegate_sender_isbase = value; }
    inline void setKFileItemDelegate_SenderSignalIndex_IsBase(bool value) const { kfileitemdelegate_sendersignalindex_isbase = value; }
    inline void setKFileItemDelegate_Receivers_IsBase(bool value) const { kfileitemdelegate_receivers_isbase = value; }
    inline void setKFileItemDelegate_IsSignalConnected_IsBase(bool value) const { kfileitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfileitemdelegate_metacall_isbase) {
            kfileitemdelegate_metacall_isbase = false;
            return KFileItemDelegate::qt_metacall(param1, param2, param3);
        } else if (kfileitemdelegate_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kfileitemdelegate_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_sizehint_isbase) {
            kfileitemdelegate_sizehint_isbase = false;
            return KFileItemDelegate::sizeHint(option, index);
        } else if (kfileitemdelegate_sizehint_callback != nullptr) {
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            QSize* callback_ret = kfileitemdelegate_sizehint_callback(this, cbval1, cbval2);
            return *callback_ret;
        } else {
            return KFileItemDelegate::sizeHint(option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_paint_isbase) {
            kfileitemdelegate_paint_isbase = false;
            KFileItemDelegate::paint(painter, option, index);
        } else if (kfileitemdelegate_paint_callback != nullptr) {
            QPainter* cbval1 = painter;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kfileitemdelegate_paint_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFileItemDelegate::paint(painter, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_createeditor_isbase) {
            kfileitemdelegate_createeditor_isbase = false;
            return KFileItemDelegate::createEditor(parent, option, index);
        } else if (kfileitemdelegate_createeditor_callback != nullptr) {
            QWidget* cbval1 = parent;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            QWidget* callback_ret = kfileitemdelegate_createeditor_callback(this, cbval1, cbval2, cbval3);
            return callback_ret;
        } else {
            return KFileItemDelegate::createEditor(parent, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kfileitemdelegate_editorevent_isbase) {
            kfileitemdelegate_editorevent_isbase = false;
            return KFileItemDelegate::editorEvent(event, model, option, index);
        } else if (kfileitemdelegate_editorevent_callback != nullptr) {
            QEvent* cbval1 = event;
            QAbstractItemModel* cbval2 = model;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kfileitemdelegate_editorevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KFileItemDelegate::editorEvent(event, model, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (kfileitemdelegate_seteditordata_isbase) {
            kfileitemdelegate_seteditordata_isbase = false;
            KFileItemDelegate::setEditorData(editor, index);
        } else if (kfileitemdelegate_seteditordata_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kfileitemdelegate_seteditordata_callback(this, cbval1, cbval2);
        } else {
            KFileItemDelegate::setEditorData(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (kfileitemdelegate_setmodeldata_isbase) {
            kfileitemdelegate_setmodeldata_isbase = false;
            KFileItemDelegate::setModelData(editor, model, index);
        } else if (kfileitemdelegate_setmodeldata_callback != nullptr) {
            QWidget* cbval1 = editor;
            QAbstractItemModel* cbval2 = model;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kfileitemdelegate_setmodeldata_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFileItemDelegate::setModelData(editor, model, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (kfileitemdelegate_updateeditorgeometry_isbase) {
            kfileitemdelegate_updateeditorgeometry_isbase = false;
            KFileItemDelegate::updateEditorGeometry(editor, option, index);
        } else if (kfileitemdelegate_updateeditorgeometry_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval3 = const_cast<QModelIndex*>(&index_ret);

            kfileitemdelegate_updateeditorgeometry_callback(this, cbval1, cbval2, cbval3);
        } else {
            KFileItemDelegate::updateEditorGeometry(editor, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (kfileitemdelegate_eventfilter_isbase) {
            kfileitemdelegate_eventfilter_isbase = false;
            return KFileItemDelegate::eventFilter(object, event);
        } else if (kfileitemdelegate_eventfilter_callback != nullptr) {
            QObject* cbval1 = object;
            QEvent* cbval2 = event;

            bool callback_ret = kfileitemdelegate_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KFileItemDelegate::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (kfileitemdelegate_helpevent_isbase) {
            kfileitemdelegate_helpevent_isbase = false;
            return KFileItemDelegate::helpEvent(event, view, option, index);
        } else if (kfileitemdelegate_helpevent_callback != nullptr) {
            QHelpEvent* cbval1 = event;
            QAbstractItemView* cbval2 = view;
            const QStyleOptionViewItem& option_ret = option;
            // Cast returned reference into pointer
            QStyleOptionViewItem* cbval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval4 = const_cast<QModelIndex*>(&index_ret);

            bool callback_ret = kfileitemdelegate_helpevent_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        } else {
            return KFileItemDelegate::helpEvent(event, view, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (kfileitemdelegate_destroyeditor_isbase) {
            kfileitemdelegate_destroyeditor_isbase = false;
            KFileItemDelegate::destroyEditor(editor, index);
        } else if (kfileitemdelegate_destroyeditor_callback != nullptr) {
            QWidget* cbval1 = editor;
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval2 = const_cast<QModelIndex*>(&index_ret);

            kfileitemdelegate_destroyeditor_callback(this, cbval1, cbval2);
        } else {
            KFileItemDelegate::destroyEditor(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (kfileitemdelegate_paintingroles_isbase) {
            kfileitemdelegate_paintingroles_isbase = false;
            return KFileItemDelegate::paintingRoles();
        } else if (kfileitemdelegate_paintingroles_callback != nullptr) {
            int* callback_ret = kfileitemdelegate_paintingroles_callback();
            QList<int> callback_ret_QList;
            for (int* ptr = callback_ret; *ptr != -1; ++ptr) {
                callback_ret_QList.push_back(*ptr);
            }
            return callback_ret_QList;
        } else {
            return KFileItemDelegate::paintingRoles();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfileitemdelegate_event_isbase) {
            kfileitemdelegate_event_isbase = false;
            return KFileItemDelegate::event(event);
        } else if (kfileitemdelegate_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kfileitemdelegate_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileItemDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfileitemdelegate_timerevent_isbase) {
            kfileitemdelegate_timerevent_isbase = false;
            KFileItemDelegate::timerEvent(event);
        } else if (kfileitemdelegate_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kfileitemdelegate_timerevent_callback(this, cbval1);
        } else {
            KFileItemDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfileitemdelegate_childevent_isbase) {
            kfileitemdelegate_childevent_isbase = false;
            KFileItemDelegate::childEvent(event);
        } else if (kfileitemdelegate_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kfileitemdelegate_childevent_callback(this, cbval1);
        } else {
            KFileItemDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfileitemdelegate_customevent_isbase) {
            kfileitemdelegate_customevent_isbase = false;
            KFileItemDelegate::customEvent(event);
        } else if (kfileitemdelegate_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kfileitemdelegate_customevent_callback(this, cbval1);
        } else {
            KFileItemDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfileitemdelegate_connectnotify_isbase) {
            kfileitemdelegate_connectnotify_isbase = false;
            KFileItemDelegate::connectNotify(signal);
        } else if (kfileitemdelegate_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileitemdelegate_connectnotify_callback(this, cbval1);
        } else {
            KFileItemDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfileitemdelegate_disconnectnotify_isbase) {
            kfileitemdelegate_disconnectnotify_isbase = false;
            KFileItemDelegate::disconnectNotify(signal);
        } else if (kfileitemdelegate_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kfileitemdelegate_disconnectnotify_callback(this, cbval1);
        } else {
            KFileItemDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kfileitemdelegate_sender_isbase) {
            kfileitemdelegate_sender_isbase = false;
            return KFileItemDelegate::sender();
        } else if (kfileitemdelegate_sender_callback != nullptr) {
            QObject* callback_ret = kfileitemdelegate_sender_callback();
            return callback_ret;
        } else {
            return KFileItemDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kfileitemdelegate_sendersignalindex_isbase) {
            kfileitemdelegate_sendersignalindex_isbase = false;
            return KFileItemDelegate::senderSignalIndex();
        } else if (kfileitemdelegate_sendersignalindex_callback != nullptr) {
            int callback_ret = kfileitemdelegate_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kfileitemdelegate_receivers_isbase) {
            kfileitemdelegate_receivers_isbase = false;
            return KFileItemDelegate::receivers(signal);
        } else if (kfileitemdelegate_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kfileitemdelegate_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KFileItemDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kfileitemdelegate_issignalconnected_isbase) {
            kfileitemdelegate_issignalconnected_isbase = false;
            return KFileItemDelegate::isSignalConnected(signal);
        } else if (kfileitemdelegate_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kfileitemdelegate_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KFileItemDelegate::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KFileItemDelegate_TimerEvent(KFileItemDelegate* self, QTimerEvent* event);
    friend void KFileItemDelegate_QBaseTimerEvent(KFileItemDelegate* self, QTimerEvent* event);
    friend void KFileItemDelegate_ChildEvent(KFileItemDelegate* self, QChildEvent* event);
    friend void KFileItemDelegate_QBaseChildEvent(KFileItemDelegate* self, QChildEvent* event);
    friend void KFileItemDelegate_CustomEvent(KFileItemDelegate* self, QEvent* event);
    friend void KFileItemDelegate_QBaseCustomEvent(KFileItemDelegate* self, QEvent* event);
    friend void KFileItemDelegate_ConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
    friend void KFileItemDelegate_QBaseConnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
    friend void KFileItemDelegate_DisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
    friend void KFileItemDelegate_QBaseDisconnectNotify(KFileItemDelegate* self, const QMetaMethod* signal);
    friend QObject* KFileItemDelegate_Sender(const KFileItemDelegate* self);
    friend QObject* KFileItemDelegate_QBaseSender(const KFileItemDelegate* self);
    friend int KFileItemDelegate_SenderSignalIndex(const KFileItemDelegate* self);
    friend int KFileItemDelegate_QBaseSenderSignalIndex(const KFileItemDelegate* self);
    friend int KFileItemDelegate_Receivers(const KFileItemDelegate* self, const char* signal);
    friend int KFileItemDelegate_QBaseReceivers(const KFileItemDelegate* self, const char* signal);
    friend bool KFileItemDelegate_IsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal);
    friend bool KFileItemDelegate_QBaseIsSignalConnected(const KFileItemDelegate* self, const QMetaMethod* signal);
};

#endif
