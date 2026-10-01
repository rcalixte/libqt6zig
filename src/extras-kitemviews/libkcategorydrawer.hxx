#pragma once
#ifndef EXTRAS_KITEMVIEWS_LIBKCATEGORYDRAWER_HXX
#define EXTRAS_KITEMVIEWS_LIBKCATEGORYDRAWER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCategoryDrawer
class VirtualKCategoryDrawer final : public KCategoryDrawer {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCategoryDrawer_MetaObject_Callback = QMetaObject* (*)(const KCategoryDrawer*);
    using KCategoryDrawer_Metacast_Callback = void* (*)(KCategoryDrawer*, const char*);
    using KCategoryDrawer_Metacall_Callback = int (*)(KCategoryDrawer*, int, int, void**);
    using KCategoryDrawer_DrawCategory_Callback = void (*)(const KCategoryDrawer*, QModelIndex*, int, QStyleOption*, QPainter*);
    using KCategoryDrawer_CategoryHeight_Callback = int (*)(const KCategoryDrawer*, QModelIndex*, QStyleOption*);
    using KCategoryDrawer_LeftMargin_Callback = int (*)(const KCategoryDrawer*);
    using KCategoryDrawer_RightMargin_Callback = int (*)(const KCategoryDrawer*);
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
    using KCategoryDrawer::isSignalConnected;
    using KCategoryDrawer::receivers;
    using KCategoryDrawer::sender;
    using KCategoryDrawer::senderSignalIndex;

    // Instance callback storage
    KCategoryDrawer_MetaObject_Callback kcategorydrawer_metaobject_callback = nullptr;
    KCategoryDrawer_Metacast_Callback kcategorydrawer_metacast_callback = nullptr;
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

    // Access struct
    struct Base : KCategoryDrawer {
        using KCategoryDrawer::childEvent;
        using KCategoryDrawer::connectNotify;
        using KCategoryDrawer::customEvent;
        using KCategoryDrawer::disconnectNotify;
        using KCategoryDrawer::mouseButtonDoubleClicked;
        using KCategoryDrawer::mouseButtonPressed;
        using KCategoryDrawer::mouseButtonReleased;
        using KCategoryDrawer::mouseLeft;
        using KCategoryDrawer::mouseMoved;
        using KCategoryDrawer::timerEvent;
    };

    VirtualKCategoryDrawer(KCategorizedView* view) : KCategoryDrawer(view) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcategorydrawer_metaobject_callback) {
            QMetaObject* callback_ret = kcategorydrawer_metaobject_callback(this);
            return callback_ret;
        }
        return KCategoryDrawer::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcategorydrawer_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcategorydrawer_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCategoryDrawer::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcategorydrawer_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcategorydrawer_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCategoryDrawer::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawCategory(const QModelIndex& index, int sortRole, const QStyleOption& option, QPainter* painter) const override {
        if (kcategorydrawer_drawcategory_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            int cbval2 = sortRole;
            const QStyleOption& option_ret = option;
            // Cast returned reference into pointer
            QStyleOption* cbval3 = const_cast<QStyleOption*>(&option_ret);
            QPainter* cbval4 = painter;
            kcategorydrawer_drawcategory_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        KCategoryDrawer::drawCategory(index, sortRole, option, painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual int categoryHeight(const QModelIndex& index, const QStyleOption& option) const override {
        if (kcategorydrawer_categoryheight_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QStyleOption& option_ret = option;
            // Cast returned reference into pointer
            QStyleOption* cbval2 = const_cast<QStyleOption*>(&option_ret);
            int callback_ret = kcategorydrawer_categoryheight_callback(this, cbval1, cbval2);
            return static_cast<int>(callback_ret);
        }
        return KCategoryDrawer::categoryHeight(index, option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int leftMargin() const override {
        if (kcategorydrawer_leftmargin_callback) {
            int callback_ret = kcategorydrawer_leftmargin_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCategoryDrawer::leftMargin();
    }

    // Virtual method for C ABI access and custom callback
    virtual int rightMargin() const override {
        if (kcategorydrawer_rightmargin_callback) {
            int callback_ret = kcategorydrawer_rightmargin_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCategoryDrawer::rightMargin();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonPressed(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttonpressed_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;
            kcategorydrawer_mousebuttonpressed_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategoryDrawer::mouseButtonPressed(index, blockRect, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonReleased(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttonreleased_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;
            kcategorydrawer_mousebuttonreleased_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategoryDrawer::mouseButtonReleased(index, blockRect, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoved(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousemoved_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;
            kcategorydrawer_mousemoved_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategoryDrawer::mouseMoved(index, blockRect, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseButtonDoubleClicked(const QModelIndex& index, const QRect& blockRect, QMouseEvent* event) override {
        if (kcategorydrawer_mousebuttondoubleclicked_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            QMouseEvent* cbval3 = event;
            kcategorydrawer_mousebuttondoubleclicked_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        KCategoryDrawer::mouseButtonDoubleClicked(index, blockRect, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseLeft(const QModelIndex& index, const QRect& blockRect) override {
        if (kcategorydrawer_mouseleft_callback) {
            const QModelIndex& index_ret = index;
            // Cast returned reference into pointer
            QModelIndex* cbval1 = const_cast<QModelIndex*>(&index_ret);
            const QRect& blockRect_ret = blockRect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&blockRect_ret);
            kcategorydrawer_mouseleft_callback(this, cbval1, cbval2);
            return;
        }
        KCategoryDrawer::mouseLeft(index, blockRect);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kcategorydrawer_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kcategorydrawer_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCategoryDrawer::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcategorydrawer_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcategorydrawer_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCategoryDrawer::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcategorydrawer_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcategorydrawer_timerevent_callback(this, cbval1);
            return;
        }
        KCategoryDrawer::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcategorydrawer_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcategorydrawer_childevent_callback(this, cbval1);
            return;
        }
        KCategoryDrawer::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcategorydrawer_customevent_callback) {
            QEvent* cbval1 = event;
            kcategorydrawer_customevent_callback(this, cbval1);
            return;
        }
        KCategoryDrawer::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcategorydrawer_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorydrawer_connectnotify_callback(this, cbval1);
            return;
        }
        KCategoryDrawer::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcategorydrawer_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcategorydrawer_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCategoryDrawer::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCategoryDrawer_SuperMouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_SuperMouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_SuperMouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_SuperMouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event);
    friend void KCategoryDrawer_SuperMouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect);
    friend void KCategoryDrawer_SuperTimerEvent(KCategoryDrawer* self, QTimerEvent* event);
    friend void KCategoryDrawer_SuperChildEvent(KCategoryDrawer* self, QChildEvent* event);
    friend void KCategoryDrawer_SuperCustomEvent(KCategoryDrawer* self, QEvent* event);
    friend void KCategoryDrawer_SuperConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
    friend void KCategoryDrawer_SuperDisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal);
};

#endif
