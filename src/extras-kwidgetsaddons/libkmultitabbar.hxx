#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMULTITABBAR_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMULTITABBAR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMultiTabBar
class VirtualKMultiTabBar final : public KMultiTabBar {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMultiTabBar_MetaObject_Callback = QMetaObject* (*)(const KMultiTabBar*);
    using KMultiTabBar_Metacast_Callback = void* (*)(KMultiTabBar*, const char*);
    using KMultiTabBar_Metacall_Callback = int (*)(KMultiTabBar*, int, int, void**);
    using KMultiTabBar_FontChange_Callback = void (*)(KMultiTabBar*, QFont*);
    using KMultiTabBar_PaintEvent_Callback = void (*)(KMultiTabBar*, QPaintEvent*);
    using KMultiTabBar_DevType_Callback = int (*)(const KMultiTabBar*);
    using KMultiTabBar_SetVisible_Callback = void (*)(KMultiTabBar*, bool);
    using KMultiTabBar_SizeHint_Callback = QSize* (*)(const KMultiTabBar*);
    using KMultiTabBar_MinimumSizeHint_Callback = QSize* (*)(const KMultiTabBar*);
    using KMultiTabBar_HeightForWidth_Callback = int (*)(const KMultiTabBar*, int);
    using KMultiTabBar_HasHeightForWidth_Callback = bool (*)(const KMultiTabBar*);
    using KMultiTabBar_PaintEngine_Callback = QPaintEngine* (*)(const KMultiTabBar*);
    using KMultiTabBar_Event_Callback = bool (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_MousePressEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseReleaseEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseDoubleClickEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_MouseMoveEvent_Callback = void (*)(KMultiTabBar*, QMouseEvent*);
    using KMultiTabBar_WheelEvent_Callback = void (*)(KMultiTabBar*, QWheelEvent*);
    using KMultiTabBar_KeyPressEvent_Callback = void (*)(KMultiTabBar*, QKeyEvent*);
    using KMultiTabBar_KeyReleaseEvent_Callback = void (*)(KMultiTabBar*, QKeyEvent*);
    using KMultiTabBar_FocusInEvent_Callback = void (*)(KMultiTabBar*, QFocusEvent*);
    using KMultiTabBar_FocusOutEvent_Callback = void (*)(KMultiTabBar*, QFocusEvent*);
    using KMultiTabBar_EnterEvent_Callback = void (*)(KMultiTabBar*, QEnterEvent*);
    using KMultiTabBar_LeaveEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_MoveEvent_Callback = void (*)(KMultiTabBar*, QMoveEvent*);
    using KMultiTabBar_ResizeEvent_Callback = void (*)(KMultiTabBar*, QResizeEvent*);
    using KMultiTabBar_CloseEvent_Callback = void (*)(KMultiTabBar*, QCloseEvent*);
    using KMultiTabBar_ContextMenuEvent_Callback = void (*)(KMultiTabBar*, QContextMenuEvent*);
    using KMultiTabBar_TabletEvent_Callback = void (*)(KMultiTabBar*, QTabletEvent*);
    using KMultiTabBar_ActionEvent_Callback = void (*)(KMultiTabBar*, QActionEvent*);
    using KMultiTabBar_DragEnterEvent_Callback = void (*)(KMultiTabBar*, QDragEnterEvent*);
    using KMultiTabBar_DragMoveEvent_Callback = void (*)(KMultiTabBar*, QDragMoveEvent*);
    using KMultiTabBar_DragLeaveEvent_Callback = void (*)(KMultiTabBar*, QDragLeaveEvent*);
    using KMultiTabBar_DropEvent_Callback = void (*)(KMultiTabBar*, QDropEvent*);
    using KMultiTabBar_ShowEvent_Callback = void (*)(KMultiTabBar*, QShowEvent*);
    using KMultiTabBar_HideEvent_Callback = void (*)(KMultiTabBar*, QHideEvent*);
    using KMultiTabBar_NativeEvent_Callback = bool (*)(KMultiTabBar*, libqt_string, void*, intptr_t*);
    using KMultiTabBar_ChangeEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_Metric_Callback = int (*)(const KMultiTabBar*, int);
    using KMultiTabBar_InitPainter_Callback = void (*)(const KMultiTabBar*, QPainter*);
    using KMultiTabBar_Redirected_Callback = QPaintDevice* (*)(const KMultiTabBar*, QPoint*);
    using KMultiTabBar_SharedPainter_Callback = QPainter* (*)(const KMultiTabBar*);
    using KMultiTabBar_InputMethodEvent_Callback = void (*)(KMultiTabBar*, QInputMethodEvent*);
    using KMultiTabBar_InputMethodQuery_Callback = QVariant* (*)(const KMultiTabBar*, int);
    using KMultiTabBar_FocusNextPrevChild_Callback = bool (*)(KMultiTabBar*, bool);
    using KMultiTabBar_EventFilter_Callback = bool (*)(KMultiTabBar*, QObject*, QEvent*);
    using KMultiTabBar_TimerEvent_Callback = void (*)(KMultiTabBar*, QTimerEvent*);
    using KMultiTabBar_ChildEvent_Callback = void (*)(KMultiTabBar*, QChildEvent*);
    using KMultiTabBar_CustomEvent_Callback = void (*)(KMultiTabBar*, QEvent*);
    using KMultiTabBar_ConnectNotify_Callback = void (*)(KMultiTabBar*, QMetaMethod*);
    using KMultiTabBar_DisconnectNotify_Callback = void (*)(KMultiTabBar*, QMetaMethod*);
    using KMultiTabBar::create;
    using KMultiTabBar::destroy;
    using KMultiTabBar::focusNextChild;
    using KMultiTabBar::focusPreviousChild;
    using KMultiTabBar::getDecodedMetricF;
    using KMultiTabBar::isSignalConnected;
    using KMultiTabBar::receivers;
    using KMultiTabBar::sender;
    using KMultiTabBar::senderSignalIndex;
    using KMultiTabBar::updateMicroFocus;
    using KMultiTabBar::updateSeparator;

    // Instance callback storage
    KMultiTabBar_MetaObject_Callback kmultitabbar_metaobject_callback = nullptr;
    KMultiTabBar_Metacast_Callback kmultitabbar_metacast_callback = nullptr;
    KMultiTabBar_Metacall_Callback kmultitabbar_metacall_callback = nullptr;
    KMultiTabBar_FontChange_Callback kmultitabbar_fontchange_callback = nullptr;
    KMultiTabBar_PaintEvent_Callback kmultitabbar_paintevent_callback = nullptr;
    KMultiTabBar_DevType_Callback kmultitabbar_devtype_callback = nullptr;
    KMultiTabBar_SetVisible_Callback kmultitabbar_setvisible_callback = nullptr;
    KMultiTabBar_SizeHint_Callback kmultitabbar_sizehint_callback = nullptr;
    KMultiTabBar_MinimumSizeHint_Callback kmultitabbar_minimumsizehint_callback = nullptr;
    KMultiTabBar_HeightForWidth_Callback kmultitabbar_heightforwidth_callback = nullptr;
    KMultiTabBar_HasHeightForWidth_Callback kmultitabbar_hasheightforwidth_callback = nullptr;
    KMultiTabBar_PaintEngine_Callback kmultitabbar_paintengine_callback = nullptr;
    KMultiTabBar_Event_Callback kmultitabbar_event_callback = nullptr;
    KMultiTabBar_MousePressEvent_Callback kmultitabbar_mousepressevent_callback = nullptr;
    KMultiTabBar_MouseReleaseEvent_Callback kmultitabbar_mousereleaseevent_callback = nullptr;
    KMultiTabBar_MouseDoubleClickEvent_Callback kmultitabbar_mousedoubleclickevent_callback = nullptr;
    KMultiTabBar_MouseMoveEvent_Callback kmultitabbar_mousemoveevent_callback = nullptr;
    KMultiTabBar_WheelEvent_Callback kmultitabbar_wheelevent_callback = nullptr;
    KMultiTabBar_KeyPressEvent_Callback kmultitabbar_keypressevent_callback = nullptr;
    KMultiTabBar_KeyReleaseEvent_Callback kmultitabbar_keyreleaseevent_callback = nullptr;
    KMultiTabBar_FocusInEvent_Callback kmultitabbar_focusinevent_callback = nullptr;
    KMultiTabBar_FocusOutEvent_Callback kmultitabbar_focusoutevent_callback = nullptr;
    KMultiTabBar_EnterEvent_Callback kmultitabbar_enterevent_callback = nullptr;
    KMultiTabBar_LeaveEvent_Callback kmultitabbar_leaveevent_callback = nullptr;
    KMultiTabBar_MoveEvent_Callback kmultitabbar_moveevent_callback = nullptr;
    KMultiTabBar_ResizeEvent_Callback kmultitabbar_resizeevent_callback = nullptr;
    KMultiTabBar_CloseEvent_Callback kmultitabbar_closeevent_callback = nullptr;
    KMultiTabBar_ContextMenuEvent_Callback kmultitabbar_contextmenuevent_callback = nullptr;
    KMultiTabBar_TabletEvent_Callback kmultitabbar_tabletevent_callback = nullptr;
    KMultiTabBar_ActionEvent_Callback kmultitabbar_actionevent_callback = nullptr;
    KMultiTabBar_DragEnterEvent_Callback kmultitabbar_dragenterevent_callback = nullptr;
    KMultiTabBar_DragMoveEvent_Callback kmultitabbar_dragmoveevent_callback = nullptr;
    KMultiTabBar_DragLeaveEvent_Callback kmultitabbar_dragleaveevent_callback = nullptr;
    KMultiTabBar_DropEvent_Callback kmultitabbar_dropevent_callback = nullptr;
    KMultiTabBar_ShowEvent_Callback kmultitabbar_showevent_callback = nullptr;
    KMultiTabBar_HideEvent_Callback kmultitabbar_hideevent_callback = nullptr;
    KMultiTabBar_NativeEvent_Callback kmultitabbar_nativeevent_callback = nullptr;
    KMultiTabBar_ChangeEvent_Callback kmultitabbar_changeevent_callback = nullptr;
    KMultiTabBar_Metric_Callback kmultitabbar_metric_callback = nullptr;
    KMultiTabBar_InitPainter_Callback kmultitabbar_initpainter_callback = nullptr;
    KMultiTabBar_Redirected_Callback kmultitabbar_redirected_callback = nullptr;
    KMultiTabBar_SharedPainter_Callback kmultitabbar_sharedpainter_callback = nullptr;
    KMultiTabBar_InputMethodEvent_Callback kmultitabbar_inputmethodevent_callback = nullptr;
    KMultiTabBar_InputMethodQuery_Callback kmultitabbar_inputmethodquery_callback = nullptr;
    KMultiTabBar_FocusNextPrevChild_Callback kmultitabbar_focusnextprevchild_callback = nullptr;
    KMultiTabBar_EventFilter_Callback kmultitabbar_eventfilter_callback = nullptr;
    KMultiTabBar_TimerEvent_Callback kmultitabbar_timerevent_callback = nullptr;
    KMultiTabBar_ChildEvent_Callback kmultitabbar_childevent_callback = nullptr;
    KMultiTabBar_CustomEvent_Callback kmultitabbar_customevent_callback = nullptr;
    KMultiTabBar_ConnectNotify_Callback kmultitabbar_connectnotify_callback = nullptr;
    KMultiTabBar_DisconnectNotify_Callback kmultitabbar_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KMultiTabBar {
        using KMultiTabBar::actionEvent;
        using KMultiTabBar::changeEvent;
        using KMultiTabBar::childEvent;
        using KMultiTabBar::closeEvent;
        using KMultiTabBar::connectNotify;
        using KMultiTabBar::contextMenuEvent;
        using KMultiTabBar::customEvent;
        using KMultiTabBar::disconnectNotify;
        using KMultiTabBar::dragEnterEvent;
        using KMultiTabBar::dragLeaveEvent;
        using KMultiTabBar::dragMoveEvent;
        using KMultiTabBar::dropEvent;
        using KMultiTabBar::enterEvent;
        using KMultiTabBar::event;
        using KMultiTabBar::focusInEvent;
        using KMultiTabBar::focusNextPrevChild;
        using KMultiTabBar::focusOutEvent;
        using KMultiTabBar::fontChange;
        using KMultiTabBar::hideEvent;
        using KMultiTabBar::initPainter;
        using KMultiTabBar::inputMethodEvent;
        using KMultiTabBar::keyPressEvent;
        using KMultiTabBar::keyReleaseEvent;
        using KMultiTabBar::leaveEvent;
        using KMultiTabBar::metric;
        using KMultiTabBar::mouseDoubleClickEvent;
        using KMultiTabBar::mouseMoveEvent;
        using KMultiTabBar::mousePressEvent;
        using KMultiTabBar::mouseReleaseEvent;
        using KMultiTabBar::moveEvent;
        using KMultiTabBar::nativeEvent;
        using KMultiTabBar::paintEvent;
        using KMultiTabBar::redirected;
        using KMultiTabBar::resizeEvent;
        using KMultiTabBar::sharedPainter;
        using KMultiTabBar::showEvent;
        using KMultiTabBar::tabletEvent;
        using KMultiTabBar::timerEvent;
        using KMultiTabBar::wheelEvent;
    };

    VirtualKMultiTabBar(QWidget* parent) : KMultiTabBar(parent) {};
    VirtualKMultiTabBar() : KMultiTabBar() {};
    VirtualKMultiTabBar(KMultiTabBar::KMultiTabBarPosition pos) : KMultiTabBar(pos) {};
    VirtualKMultiTabBar(KMultiTabBar::KMultiTabBarPosition pos, QWidget* parent) : KMultiTabBar(pos, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kmultitabbar_metaobject_callback) {
            QMetaObject* callback_ret = kmultitabbar_metaobject_callback(this);
            return callback_ret;
        }
        return KMultiTabBar::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kmultitabbar_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kmultitabbar_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KMultiTabBar::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kmultitabbar_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kmultitabbar_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KMultiTabBar::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void fontChange(const QFont& param1) override {
        if (kmultitabbar_fontchange_callback) {
            const QFont& param1_ret = param1;
            // Cast returned reference into pointer
            QFont* cbval1 = const_cast<QFont*>(&param1_ret);
            kmultitabbar_fontchange_callback(this, cbval1);
            return;
        }
        KMultiTabBar::fontChange(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kmultitabbar_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kmultitabbar_paintevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kmultitabbar_devtype_callback) {
            int callback_ret = kmultitabbar_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KMultiTabBar::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kmultitabbar_setvisible_callback) {
            bool cbval1 = visible;
            kmultitabbar_setvisible_callback(this, cbval1);
            return;
        }
        KMultiTabBar::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kmultitabbar_sizehint_callback) {
            QSize* callback_ret = kmultitabbar_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMultiTabBar::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kmultitabbar_minimumsizehint_callback) {
            QSize* callback_ret = kmultitabbar_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMultiTabBar::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kmultitabbar_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kmultitabbar_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMultiTabBar::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kmultitabbar_hasheightforwidth_callback) {
            bool callback_ret = kmultitabbar_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KMultiTabBar::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kmultitabbar_paintengine_callback) {
            QPaintEngine* callback_ret = kmultitabbar_paintengine_callback(this);
            return callback_ret;
        }
        return KMultiTabBar::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kmultitabbar_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kmultitabbar_event_callback(this, cbval1);
            return callback_ret;
        }
        return KMultiTabBar::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kmultitabbar_mousepressevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kmultitabbar_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kmultitabbar_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kmultitabbar_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kmultitabbar_mousemoveevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kmultitabbar_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kmultitabbar_wheelevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kmultitabbar_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kmultitabbar_keypressevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kmultitabbar_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kmultitabbar_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kmultitabbar_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kmultitabbar_focusinevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kmultitabbar_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kmultitabbar_focusoutevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kmultitabbar_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kmultitabbar_enterevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kmultitabbar_leaveevent_callback) {
            QEvent* cbval1 = event;
            kmultitabbar_leaveevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kmultitabbar_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kmultitabbar_moveevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kmultitabbar_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kmultitabbar_resizeevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kmultitabbar_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kmultitabbar_closeevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kmultitabbar_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kmultitabbar_contextmenuevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kmultitabbar_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kmultitabbar_tabletevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kmultitabbar_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kmultitabbar_actionevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kmultitabbar_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kmultitabbar_dragenterevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kmultitabbar_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kmultitabbar_dragmoveevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kmultitabbar_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kmultitabbar_dragleaveevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kmultitabbar_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kmultitabbar_dropevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kmultitabbar_showevent_callback) {
            QShowEvent* cbval1 = event;
            kmultitabbar_showevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kmultitabbar_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kmultitabbar_hideevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kmultitabbar_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kmultitabbar_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KMultiTabBar::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kmultitabbar_changeevent_callback) {
            QEvent* cbval1 = param1;
            kmultitabbar_changeevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kmultitabbar_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kmultitabbar_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KMultiTabBar::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kmultitabbar_initpainter_callback) {
            QPainter* cbval1 = painter;
            kmultitabbar_initpainter_callback(this, cbval1);
            return;
        }
        KMultiTabBar::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kmultitabbar_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kmultitabbar_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KMultiTabBar::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kmultitabbar_sharedpainter_callback) {
            QPainter* callback_ret = kmultitabbar_sharedpainter_callback(this);
            return callback_ret;
        }
        return KMultiTabBar::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kmultitabbar_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kmultitabbar_inputmethodevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kmultitabbar_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kmultitabbar_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KMultiTabBar::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kmultitabbar_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kmultitabbar_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KMultiTabBar::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kmultitabbar_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kmultitabbar_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KMultiTabBar::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kmultitabbar_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kmultitabbar_timerevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kmultitabbar_childevent_callback) {
            QChildEvent* cbval1 = event;
            kmultitabbar_childevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kmultitabbar_customevent_callback) {
            QEvent* cbval1 = event;
            kmultitabbar_customevent_callback(this, cbval1);
            return;
        }
        KMultiTabBar::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kmultitabbar_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmultitabbar_connectnotify_callback(this, cbval1);
            return;
        }
        KMultiTabBar::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kmultitabbar_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kmultitabbar_disconnectnotify_callback(this, cbval1);
            return;
        }
        KMultiTabBar::disconnectNotify(signal);
    }

    // Friend functions
    friend void KMultiTabBar_SuperFontChange(KMultiTabBar* self, const QFont* param1);
    friend void KMultiTabBar_SuperPaintEvent(KMultiTabBar* self, QPaintEvent* param1);
    friend bool KMultiTabBar_SuperEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_SuperMousePressEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_SuperMouseReleaseEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_SuperMouseDoubleClickEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_SuperMouseMoveEvent(KMultiTabBar* self, QMouseEvent* event);
    friend void KMultiTabBar_SuperWheelEvent(KMultiTabBar* self, QWheelEvent* event);
    friend void KMultiTabBar_SuperKeyPressEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_SuperKeyReleaseEvent(KMultiTabBar* self, QKeyEvent* event);
    friend void KMultiTabBar_SuperFocusInEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_SuperFocusOutEvent(KMultiTabBar* self, QFocusEvent* event);
    friend void KMultiTabBar_SuperEnterEvent(KMultiTabBar* self, QEnterEvent* event);
    friend void KMultiTabBar_SuperLeaveEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_SuperMoveEvent(KMultiTabBar* self, QMoveEvent* event);
    friend void KMultiTabBar_SuperResizeEvent(KMultiTabBar* self, QResizeEvent* event);
    friend void KMultiTabBar_SuperCloseEvent(KMultiTabBar* self, QCloseEvent* event);
    friend void KMultiTabBar_SuperContextMenuEvent(KMultiTabBar* self, QContextMenuEvent* event);
    friend void KMultiTabBar_SuperTabletEvent(KMultiTabBar* self, QTabletEvent* event);
    friend void KMultiTabBar_SuperActionEvent(KMultiTabBar* self, QActionEvent* event);
    friend void KMultiTabBar_SuperDragEnterEvent(KMultiTabBar* self, QDragEnterEvent* event);
    friend void KMultiTabBar_SuperDragMoveEvent(KMultiTabBar* self, QDragMoveEvent* event);
    friend void KMultiTabBar_SuperDragLeaveEvent(KMultiTabBar* self, QDragLeaveEvent* event);
    friend void KMultiTabBar_SuperDropEvent(KMultiTabBar* self, QDropEvent* event);
    friend void KMultiTabBar_SuperShowEvent(KMultiTabBar* self, QShowEvent* event);
    friend void KMultiTabBar_SuperHideEvent(KMultiTabBar* self, QHideEvent* event);
    friend bool KMultiTabBar_SuperNativeEvent(KMultiTabBar* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KMultiTabBar_SuperChangeEvent(KMultiTabBar* self, QEvent* param1);
    friend int KMultiTabBar_SuperMetric(const KMultiTabBar* self, int param1);
    friend void KMultiTabBar_SuperInitPainter(const KMultiTabBar* self, QPainter* painter);
    friend QPaintDevice* KMultiTabBar_SuperRedirected(const KMultiTabBar* self, QPoint* offset);
    friend QPainter* KMultiTabBar_SuperSharedPainter(const KMultiTabBar* self);
    friend void KMultiTabBar_SuperInputMethodEvent(KMultiTabBar* self, QInputMethodEvent* param1);
    friend bool KMultiTabBar_SuperFocusNextPrevChild(KMultiTabBar* self, bool next);
    friend void KMultiTabBar_SuperTimerEvent(KMultiTabBar* self, QTimerEvent* event);
    friend void KMultiTabBar_SuperChildEvent(KMultiTabBar* self, QChildEvent* event);
    friend void KMultiTabBar_SuperCustomEvent(KMultiTabBar* self, QEvent* event);
    friend void KMultiTabBar_SuperConnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
    friend void KMultiTabBar_SuperDisconnectNotify(KMultiTabBar* self, const QMetaMethod* signal);
};

#endif
