#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORYDRAWER_H
#define SRC_EXTRAS_KITEMVIEWSC_LIBVIRTUALKCATEGORYDRAWER_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategoryDrawer so that we can call protected methods
class VirtualKCategoryDrawer final : public KCategoryDrawer {

  public:
    // Virtual class boolean flag
    bool isVirtualKCategoryDrawer = true;

    // Virtual class public types (including callbacks)
    using KCategoryDrawer_Metacall_Callback = int (*)(KCategoryDrawer*, int, int, void**);
    using KCategoryDrawer_DrawCategory_Callback = void (*)(const KCategoryDrawer*, QModelIndex*, int, QStyleOption*, QPainter*);
    using KCategoryDrawer_CategoryHeight_Callback = int (*)(const KCategoryDrawer*, QModelIndex*, QStyleOption*);
    using KCategoryDrawer_LeftMargin_Callback = int (*)();
    using KCategoryDrawer_RightMargin_Callback = int (*)();
    using KCategoryDrawer_MouseButtonPressed_Callback = void (*)(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*);
    using KCategoryDrawer_MouseButtonReleased_Callback = void (*)(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*);
    using KCategoryDrawer_MouseMoved_Callback = void (*)(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*);
    using KCategoryDrawer_MouseButtonDoubleClicked_Callback = void (*)(KCategoryDrawer*, QModelIndex*, QRect*, QMouseEvent*);
    using KCategoryDrawer_MouseLeft_Callback = void (*)(KCategoryDrawer*, QModelIndex*, QRect*);
    using KCategoryDrawer_Event_Callback = bool (*)(KCategoryDrawer*, QEvent*);
    using KCategoryDrawer_EventFilter_Callback = bool (*)(KCategoryDrawer*, QObject*, QEvent*);
    using KCategoryDrawer_TimerEvent_Callback = void (*)(KCategoryDrawer*, QTimerEvent*);
    using KCategoryDrawer_ChildEvent_Callback = void (*)(KCategoryDrawer*, QChildEvent*);
    using KCategoryDrawer_CustomEvent_Callback = void (*)(KCategoryDrawer*, QEvent*);
    using KCategoryDrawer_ConnectNotify_Callback = void (*)(KCategoryDrawer*, QMetaMethod*);
    using KCategoryDrawer_DisconnectNotify_Callback = void (*)(KCategoryDrawer*, QMetaMethod*);
    using KCategoryDrawer_Sender_Callback = QObject* (*)();
    using KCategoryDrawer_SenderSignalIndex_Callback = int (*)();
    using KCategoryDrawer_Receivers_Callback = int (*)(const KCategoryDrawer*, const char*);
    using KCategoryDrawer_IsSignalConnected_Callback = bool (*)(const KCategoryDrawer*, QMetaMethod*);

  protected:
    // Instance callback storage
    KCategoryDrawer_Metacall_Callback kcategorydrawer_metacall_callback = nullptr;
    KCategoryDrawer_DrawCategory_Callback kcategorydrawer_drawcategory_callback = nullptr;
    KCategoryDrawer_CategoryHeight_Callback kcategorydrawer_categoryheight_callback = nullptr;
    KCategoryDrawer_LeftMargin_Callback kcategorydrawer_leftmargin_callback = nullptr;
    KCategoryDrawer_RightMargin_Callback kcategorydrawer_rightmargin_callback = nullptr;
    KCategoryDrawer_MouseButtonPressed_Callback kcategorydrawer_mousebuttonpressed_callback = nullptr;
    KCategoryDrawer_MouseButtonReleased_Callback kcategorydrawer_mousebuttonreleased_callback = nullptr;
    KCategoryDrawer_MouseMoved_Callback kcategorydrawer_mousemoved_callback = nullptr;
    KCategoryDrawer_MouseButtonDoubleClicked_Callback kcategorydrawer_mousebuttondoubleclicked_callback = nullptr;
    KCategoryDrawer_MouseLeft_Callback kcategorydrawer_mouseleft_callback = nullptr;
    KCategoryDrawer_Event_Callback kcategorydrawer_event_callback = nullptr;
    KCategoryDrawer_EventFilter_Callback kcategorydrawer_eventfilter_callback = nullptr;
    KCategoryDrawer_TimerEvent_Callback kcategorydrawer_timerevent_callback = nullptr;
    KCategoryDrawer_ChildEvent_Callback kcategorydrawer_childevent_callback = nullptr;
    KCategoryDrawer_CustomEvent_Callback kcategorydrawer_customevent_callback = nullptr;
    KCategoryDrawer_ConnectNotify_Callback kcategorydrawer_connectnotify_callback = nullptr;
    KCategoryDrawer_DisconnectNotify_Callback kcategorydrawer_disconnectnotify_callback = nullptr;
    KCategoryDrawer_Sender_Callback kcategorydrawer_sender_callback = nullptr;
    KCategoryDrawer_SenderSignalIndex_Callback kcategorydrawer_sendersignalindex_callback = nullptr;
    KCategoryDrawer_Receivers_Callback kcategorydrawer_receivers_callback = nullptr;
    KCategoryDrawer_IsSignalConnected_Callback kcategorydrawer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool kcategorydrawer_metacall_isbase = false;
    mutable bool kcategorydrawer_drawcategory_isbase = false;
    mutable bool kcategorydrawer_categoryheight_isbase = false;
    mutable bool kcategorydrawer_leftmargin_isbase = false;
    mutable bool kcategorydrawer_rightmargin_isbase = false;
    mutable bool kcategorydrawer_mousebuttonpressed_isbase = false;
    mutable bool kcategorydrawer_mousebuttonreleased_isbase = false;
    mutable bool kcategorydrawer_mousemoved_isbase = false;
    mutable bool kcategorydrawer_mousebuttondoubleclicked_isbase = false;
    mutable bool kcategorydrawer_mouseleft_isbase = false;
    mutable bool kcategorydrawer_event_isbase = false;
    mutable bool kcategorydrawer_eventfilter_isbase = false;
    mutable bool kcategorydrawer_timerevent_isbase = false;
    mutable bool kcategorydrawer_childevent_isbase = false;
    mutable bool kcategorydrawer_customevent_isbase = false;
    mutable bool kcategorydrawer_connectnotify_isbase = false;
    mutable bool kcategorydrawer_disconnectnotify_isbase = false;
    mutable bool kcategorydrawer_sender_isbase = false;
    mutable bool kcategorydrawer_sendersignalindex_isbase = false;
    mutable bool kcategorydrawer_receivers_isbase = false;
    mutable bool kcategorydrawer_issignalconnected_isbase = false;

  public:
    VirtualKCategoryDrawer(KCategorizedView* view) : KCategoryDrawer(view) {};

    ~VirtualKCategoryDrawer() {
        kcategorydrawer_metacall_callback = nullptr;
        kcategorydrawer_drawcategory_callback = nullptr;
        kcategorydrawer_categoryheight_callback = nullptr;
        kcategorydrawer_leftmargin_callback = nullptr;
        kcategorydrawer_rightmargin_callback = nullptr;
        kcategorydrawer_mousebuttonpressed_callback = nullptr;
        kcategorydrawer_mousebuttonreleased_callback = nullptr;
        kcategorydrawer_mousemoved_callback = nullptr;
        kcategorydrawer_mousebuttondoubleclicked_callback = nullptr;
        kcategorydrawer_mouseleft_callback = nullptr;
        kcategorydrawer_event_callback = nullptr;
        kcategorydrawer_eventfilter_callback = nullptr;
        kcategorydrawer_timerevent_callback = nullptr;
        kcategorydrawer_childevent_callback = nullptr;
        kcategorydrawer_customevent_callback = nullptr;
        kcategorydrawer_connectnotify_callback = nullptr;
        kcategorydrawer_disconnectnotify_callback = nullptr;
        kcategorydrawer_sender_callback = nullptr;
        kcategorydrawer_sendersignalindex_callback = nullptr;
        kcategorydrawer_receivers_callback = nullptr;
        kcategorydrawer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    inline void setKCategoryDrawer_Metacall_Callback(KCategoryDrawer_Metacall_Callback cb) { kcategorydrawer_metacall_callback = cb; }
    inline void setKCategoryDrawer_DrawCategory_Callback(KCategoryDrawer_DrawCategory_Callback cb) { kcategorydrawer_drawcategory_callback = cb; }
    inline void setKCategoryDrawer_CategoryHeight_Callback(KCategoryDrawer_CategoryHeight_Callback cb) { kcategorydrawer_categoryheight_callback = cb; }
    inline void setKCategoryDrawer_LeftMargin_Callback(KCategoryDrawer_LeftMargin_Callback cb) { kcategorydrawer_leftmargin_callback = cb; }
    inline void setKCategoryDrawer_RightMargin_Callback(KCategoryDrawer_RightMargin_Callback cb) { kcategorydrawer_rightmargin_callback = cb; }
    inline void setKCategoryDrawer_MouseButtonPressed_Callback(KCategoryDrawer_MouseButtonPressed_Callback cb) { kcategorydrawer_mousebuttonpressed_callback = cb; }
    inline void setKCategoryDrawer_MouseButtonReleased_Callback(KCategoryDrawer_MouseButtonReleased_Callback cb) { kcategorydrawer_mousebuttonreleased_callback = cb; }
    inline void setKCategoryDrawer_MouseMoved_Callback(KCategoryDrawer_MouseMoved_Callback cb) { kcategorydrawer_mousemoved_callback = cb; }
    inline void setKCategoryDrawer_MouseButtonDoubleClicked_Callback(KCategoryDrawer_MouseButtonDoubleClicked_Callback cb) { kcategorydrawer_mousebuttondoubleclicked_callback = cb; }
    inline void setKCategoryDrawer_MouseLeft_Callback(KCategoryDrawer_MouseLeft_Callback cb) { kcategorydrawer_mouseleft_callback = cb; }
    inline void setKCategoryDrawer_Event_Callback(KCategoryDrawer_Event_Callback cb) { kcategorydrawer_event_callback = cb; }
    inline void setKCategoryDrawer_EventFilter_Callback(KCategoryDrawer_EventFilter_Callback cb) { kcategorydrawer_eventfilter_callback = cb; }
    inline void setKCategoryDrawer_TimerEvent_Callback(KCategoryDrawer_TimerEvent_Callback cb) { kcategorydrawer_timerevent_callback = cb; }
    inline void setKCategoryDrawer_ChildEvent_Callback(KCategoryDrawer_ChildEvent_Callback cb) { kcategorydrawer_childevent_callback = cb; }
    inline void setKCategoryDrawer_CustomEvent_Callback(KCategoryDrawer_CustomEvent_Callback cb) { kcategorydrawer_customevent_callback = cb; }
    inline void setKCategoryDrawer_ConnectNotify_Callback(KCategoryDrawer_ConnectNotify_Callback cb) { kcategorydrawer_connectnotify_callback = cb; }
    inline void setKCategoryDrawer_DisconnectNotify_Callback(KCategoryDrawer_DisconnectNotify_Callback cb) { kcategorydrawer_disconnectnotify_callback = cb; }
    inline void setKCategoryDrawer_Sender_Callback(KCategoryDrawer_Sender_Callback cb) { kcategorydrawer_sender_callback = cb; }
    inline void setKCategoryDrawer_SenderSignalIndex_Callback(KCategoryDrawer_SenderSignalIndex_Callback cb) { kcategorydrawer_sendersignalindex_callback = cb; }
    inline void setKCategoryDrawer_Receivers_Callback(KCategoryDrawer_Receivers_Callback cb) { kcategorydrawer_receivers_callback = cb; }
    inline void setKCategoryDrawer_IsSignalConnected_Callback(KCategoryDrawer_IsSignalConnected_Callback cb) { kcategorydrawer_issignalconnected_callback = cb; }

    // Base flag setters
    inline void setKCategoryDrawer_Metacall_IsBase(bool value) const { kcategorydrawer_metacall_isbase = value; }
    inline void setKCategoryDrawer_DrawCategory_IsBase(bool value) const { kcategorydrawer_drawcategory_isbase = value; }
    inline void setKCategoryDrawer_CategoryHeight_IsBase(bool value) const { kcategorydrawer_categoryheight_isbase = value; }
    inline void setKCategoryDrawer_LeftMargin_IsBase(bool value) const { kcategorydrawer_leftmargin_isbase = value; }
    inline void setKCategoryDrawer_RightMargin_IsBase(bool value) const { kcategorydrawer_rightmargin_isbase = value; }
    inline void setKCategoryDrawer_MouseButtonPressed_IsBase(bool value) const { kcategorydrawer_mousebuttonpressed_isbase = value; }
    inline void setKCategoryDrawer_MouseButtonReleased_IsBase(bool value) const { kcategorydrawer_mousebuttonreleased_isbase = value; }
    inline void setKCategoryDrawer_MouseMoved_IsBase(bool value) const { kcategorydrawer_mousemoved_isbase = value; }
    inline void setKCategoryDrawer_MouseButtonDoubleClicked_IsBase(bool value) const { kcategorydrawer_mousebuttondoubleclicked_isbase = value; }
    inline void setKCategoryDrawer_MouseLeft_IsBase(bool value) const { kcategorydrawer_mouseleft_isbase = value; }
    inline void setKCategoryDrawer_Event_IsBase(bool value) const { kcategorydrawer_event_isbase = value; }
    inline void setKCategoryDrawer_EventFilter_IsBase(bool value) const { kcategorydrawer_eventfilter_isbase = value; }
    inline void setKCategoryDrawer_TimerEvent_IsBase(bool value) const { kcategorydrawer_timerevent_isbase = value; }
    inline void setKCategoryDrawer_ChildEvent_IsBase(bool value) const { kcategorydrawer_childevent_isbase = value; }
    inline void setKCategoryDrawer_CustomEvent_IsBase(bool value) const { kcategorydrawer_customevent_isbase = value; }
    inline void setKCategoryDrawer_ConnectNotify_IsBase(bool value) const { kcategorydrawer_connectnotify_isbase = value; }
    inline void setKCategoryDrawer_DisconnectNotify_IsBase(bool value) const { kcategorydrawer_disconnectnotify_isbase = value; }
    inline void setKCategoryDrawer_Sender_IsBase(bool value) const { kcategorydrawer_sender_isbase = value; }
    inline void setKCategoryDrawer_SenderSignalIndex_IsBase(bool value) const { kcategorydrawer_sendersignalindex_isbase = value; }
    inline void setKCategoryDrawer_Receivers_IsBase(bool value) const { kcategorydrawer_receivers_isbase = value; }
    inline void setKCategoryDrawer_IsSignalConnected_IsBase(bool value) const { kcategorydrawer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorydrawer_metacall_isbase) {
            kcategorydrawer_metacall_isbase = false;
            return KCategoryDrawer::qt_metacall(param1, param2, param3);
        } else if (kcategorydrawer_metacall_callback != nullptr) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;

            int callback_ret = kcategorydrawer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawCategory(const QModelIndex& index, int sortRole, const QStyleOption& option, QPainter* painter) const override {
        if (kcategorydrawer_drawcategory_isbase) {
            kcategorydrawer_drawcategory_isbase = false;
            KCategoryDrawer::drawCategory(index, sortRole, option, painter);
        } else if (kcategorydrawer_drawcategory_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = sortRole;
            const QStyleOption& option_ret = option;
            // Cast returned reference into pointer
            QStyleOption* cbval3 = const_cast<QStyleOption*>(&option_ret);
            QPainter* cbval4 = painter;

            kcategorydrawer_drawcategory_callback(this, cbval1, cbval2, cbval3, cbval4);
        } else {
            KCategoryDrawer::drawCategory(index, sortRole, option, painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int categoryHeight(const QModelIndex& index, const QStyleOption& option) const override {
        if (kcategorydrawer_categoryheight_isbase) {
            kcategorydrawer_categoryheight_isbase = false;
            return KCategoryDrawer::categoryHeight(index, option);
        } else if (kcategorydrawer_categoryheight_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QStyleOption& option_ret = option;
            // Cast returned reference into pointer
            QStyleOption* cbval2 = const_cast<QStyleOption*>(&option_ret);

            int callback_ret = kcategorydrawer_categoryheight_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::categoryHeight(index, option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int leftMargin() const override {
        if (kcategorydrawer_leftmargin_isbase) {
            kcategorydrawer_leftmargin_isbase = false;
            return KCategoryDrawer::leftMargin();
        } else if (kcategorydrawer_leftmargin_callback != nullptr) {
            int callback_ret = kcategorydrawer_leftmargin_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::leftMargin();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rightMargin() const override {
        if (kcategorydrawer_rightmargin_isbase) {
            kcategorydrawer_rightmargin_isbase = false;
            return KCategoryDrawer::rightMargin();
        } else if (kcategorydrawer_rightmargin_callback != nullptr) {
            int callback_ret = kcategorydrawer_rightmargin_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::rightMargin();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonPressed(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttonpressed_isbase) {
            kcategorydrawer_mousebuttonpressed_isbase = false;
            KCategoryDrawer::mouseButtonPressed(index, blockRect, event);
        } else if (kcategorydrawer_mousebuttonpressed_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;

            kcategorydrawer_mousebuttonpressed_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategoryDrawer::mouseButtonPressed(index, blockRect, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonReleased(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttonreleased_isbase) {
            kcategorydrawer_mousebuttonreleased_isbase = false;
            KCategoryDrawer::mouseButtonReleased(index, blockRect, event);
        } else if (kcategorydrawer_mousebuttonreleased_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;

            kcategorydrawer_mousebuttonreleased_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategoryDrawer::mouseButtonReleased(index, blockRect, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoved(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousemoved_isbase) {
            kcategorydrawer_mousemoved_isbase = false;
            KCategoryDrawer::mouseMoved(index, blockRect, event);
        } else if (kcategorydrawer_mousemoved_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;

            kcategorydrawer_mousemoved_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategoryDrawer::mouseMoved(index, blockRect, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonDoubleClicked(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttondoubleclicked_isbase) {
            kcategorydrawer_mousebuttondoubleclicked_isbase = false;
            KCategoryDrawer::mouseButtonDoubleClicked(index, blockRect, event);
        } else if (kcategorydrawer_mousebuttondoubleclicked_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;

            kcategorydrawer_mousebuttondoubleclicked_callback(this, cbval1, cbval2, cbval3);
        } else {
            KCategoryDrawer::mouseButtonDoubleClicked(index, blockRect, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseLeft(const QModelIndex& index, const QRect& blockRect) override {
        if (kcategorydrawer_mouseleft_isbase) {
            kcategorydrawer_mouseleft_isbase = false;
            KCategoryDrawer::mouseLeft(index, blockRect);
        } else if (kcategorydrawer_mouseleft_callback != nullptr) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);

            kcategorydrawer_mouseleft_callback(this, cbval1, cbval2);
        } else {
            KCategoryDrawer::mouseLeft(index, blockRect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcategorydrawer_event_isbase) {
            kcategorydrawer_event_isbase = false;
            return KCategoryDrawer::event(event);
        } else if (kcategorydrawer_event_callback != nullptr) {
            QEvent* cbval1 = event;

            bool callback_ret = kcategorydrawer_event_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategoryDrawer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcategorydrawer_eventfilter_isbase) {
            kcategorydrawer_eventfilter_isbase = false;
            return KCategoryDrawer::eventFilter(watched, event);
        } else if (kcategorydrawer_eventfilter_callback != nullptr) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;

            bool callback_ret = kcategorydrawer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return KCategoryDrawer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcategorydrawer_timerevent_isbase) {
            kcategorydrawer_timerevent_isbase = false;
            KCategoryDrawer::timerEvent(event);
        } else if (kcategorydrawer_timerevent_callback != nullptr) {
            QTimerEvent* cbval1 = event;

            kcategorydrawer_timerevent_callback(this, cbval1);
        } else {
            KCategoryDrawer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorydrawer_childevent_isbase) {
            kcategorydrawer_childevent_isbase = false;
            KCategoryDrawer::childEvent(event);
        } else if (kcategorydrawer_childevent_callback != nullptr) {
            QChildEvent* cbval1 = event;

            kcategorydrawer_childevent_callback(this, cbval1);
        } else {
            KCategoryDrawer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorydrawer_customevent_isbase) {
            kcategorydrawer_customevent_isbase = false;
            KCategoryDrawer::customEvent(event);
        } else if (kcategorydrawer_customevent_callback != nullptr) {
            QEvent* cbval1 = event;

            kcategorydrawer_customevent_callback(this, cbval1);
        } else {
            KCategoryDrawer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorydrawer_connectnotify_isbase) {
            kcategorydrawer_connectnotify_isbase = false;
            KCategoryDrawer::connectNotify(signal);
        } else if (kcategorydrawer_connectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcategorydrawer_connectnotify_callback(this, cbval1);
        } else {
            KCategoryDrawer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorydrawer_disconnectnotify_isbase) {
            kcategorydrawer_disconnectnotify_isbase = false;
            KCategoryDrawer::disconnectNotify(signal);
        } else if (kcategorydrawer_disconnectnotify_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            kcategorydrawer_disconnectnotify_callback(this, cbval1);
        } else {
            KCategoryDrawer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (kcategorydrawer_sender_isbase) {
            kcategorydrawer_sender_isbase = false;
            return KCategoryDrawer::sender();
        } else if (kcategorydrawer_sender_callback != nullptr) {
            QObject* callback_ret = kcategorydrawer_sender_callback();
            return callback_ret;
        } else {
            return KCategoryDrawer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (kcategorydrawer_sendersignalindex_isbase) {
            kcategorydrawer_sendersignalindex_isbase = false;
            return KCategoryDrawer::senderSignalIndex();
        } else if (kcategorydrawer_sendersignalindex_callback != nullptr) {
            int callback_ret = kcategorydrawer_sendersignalindex_callback();
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (kcategorydrawer_receivers_isbase) {
            kcategorydrawer_receivers_isbase = false;
            return KCategoryDrawer::receivers(signal);
        } else if (kcategorydrawer_receivers_callback != nullptr) {
            const char* cbval1 = (const char*)signal;

            int callback_ret = kcategorydrawer_receivers_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        } else {
            return KCategoryDrawer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (kcategorydrawer_issignalconnected_isbase) {
            kcategorydrawer_issignalconnected_isbase = false;
            return KCategoryDrawer::isSignalConnected(signal);
        } else if (kcategorydrawer_issignalconnected_callback != nullptr) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);

            bool callback_ret = kcategorydrawer_issignalconnected_callback(this, cbval1);
            return callback_ret;
        } else {
            return KCategoryDrawer::isSignalConnected(signal);
        }
    }

    // Friend functions
    friend void KCategoryDrawer_MouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_QBaseMouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_MouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_QBaseMouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_MouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_QBaseMouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_MouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_QBaseMouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_MouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect);
    friend void KCategoryDrawer_QBaseMouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect);
    friend void KCategoryDrawer_TimerEvent(KCategoryDrawer* self, QTimerEvent* event);
    friend void KCategoryDrawer_QBaseTimerEvent(KCategoryDrawer* self, QTimerEvent* event);
    friend void KCategoryDrawer_ChildEvent(KCategoryDrawer* self, QChildEvent* event);
    friend void KCategoryDrawer_QBaseChildEvent(KCategoryDrawer* self, QChildEvent* event);
    friend void KCategoryDrawer_CustomEvent(KCategoryDrawer* self, QEvent* event);
    friend void KCategoryDrawer_QBaseCustomEvent(KCategoryDrawer* self, QEvent* event);
    friend void KCategoryDrawer_ConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
    friend void KCategoryDrawer_QBaseConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
    friend void KCategoryDrawer_DisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
    friend void KCategoryDrawer_QBaseDisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
    friend QObject* KCategoryDrawer_Sender(const KCategoryDrawer* self);
    friend QObject* KCategoryDrawer_QBaseSender(const KCategoryDrawer* self);
    friend int KCategoryDrawer_SenderSignalIndex(const KCategoryDrawer* self);
    friend int KCategoryDrawer_QBaseSenderSignalIndex(const KCategoryDrawer* self);
    friend int KCategoryDrawer_Receivers(const KCategoryDrawer* self, const char* signal);
    friend int KCategoryDrawer_QBaseReceivers(const KCategoryDrawer* self, const char* signal);
    friend bool KCategoryDrawer_IsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal);
    friend bool KCategoryDrawer_QBaseIsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal);
};

#endif
