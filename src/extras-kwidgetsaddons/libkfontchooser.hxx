#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKFONTCHOOSER_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKFONTCHOOSER_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KFontChooser
class VirtualKFontChooser final : public KFontChooser {
  public:
    // Virtual class public types (including callbacks and access types)
    using KFontChooser_MetaObject_Callback = QMetaObject* (*)(const KFontChooser*);
    using KFontChooser_Metacast_Callback = void* (*)(KFontChooser*, const char*);
    using KFontChooser_Metacall_Callback = int (*)(KFontChooser*, int, int, void**);
    using KFontChooser_SizeHint_Callback = QSize* (*)(const KFontChooser*);
    using KFontChooser_DevType_Callback = int (*)(const KFontChooser*);
    using KFontChooser_SetVisible_Callback = void (*)(KFontChooser*, bool);
    using KFontChooser_MinimumSizeHint_Callback = QSize* (*)(const KFontChooser*);
    using KFontChooser_HeightForWidth_Callback = int (*)(const KFontChooser*, int);
    using KFontChooser_HasHeightForWidth_Callback = bool (*)(const KFontChooser*);
    using KFontChooser_PaintEngine_Callback = QPaintEngine* (*)(const KFontChooser*);
    using KFontChooser_Event_Callback = bool (*)(KFontChooser*, QEvent*);
    using KFontChooser_MousePressEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseReleaseEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseDoubleClickEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_MouseMoveEvent_Callback = void (*)(KFontChooser*, QMouseEvent*);
    using KFontChooser_WheelEvent_Callback = void (*)(KFontChooser*, QWheelEvent*);
    using KFontChooser_KeyPressEvent_Callback = void (*)(KFontChooser*, QKeyEvent*);
    using KFontChooser_KeyReleaseEvent_Callback = void (*)(KFontChooser*, QKeyEvent*);
    using KFontChooser_FocusInEvent_Callback = void (*)(KFontChooser*, QFocusEvent*);
    using KFontChooser_FocusOutEvent_Callback = void (*)(KFontChooser*, QFocusEvent*);
    using KFontChooser_EnterEvent_Callback = void (*)(KFontChooser*, QEnterEvent*);
    using KFontChooser_LeaveEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_PaintEvent_Callback = void (*)(KFontChooser*, QPaintEvent*);
    using KFontChooser_MoveEvent_Callback = void (*)(KFontChooser*, QMoveEvent*);
    using KFontChooser_ResizeEvent_Callback = void (*)(KFontChooser*, QResizeEvent*);
    using KFontChooser_CloseEvent_Callback = void (*)(KFontChooser*, QCloseEvent*);
    using KFontChooser_ContextMenuEvent_Callback = void (*)(KFontChooser*, QContextMenuEvent*);
    using KFontChooser_TabletEvent_Callback = void (*)(KFontChooser*, QTabletEvent*);
    using KFontChooser_ActionEvent_Callback = void (*)(KFontChooser*, QActionEvent*);
    using KFontChooser_DragEnterEvent_Callback = void (*)(KFontChooser*, QDragEnterEvent*);
    using KFontChooser_DragMoveEvent_Callback = void (*)(KFontChooser*, QDragMoveEvent*);
    using KFontChooser_DragLeaveEvent_Callback = void (*)(KFontChooser*, QDragLeaveEvent*);
    using KFontChooser_DropEvent_Callback = void (*)(KFontChooser*, QDropEvent*);
    using KFontChooser_ShowEvent_Callback = void (*)(KFontChooser*, QShowEvent*);
    using KFontChooser_HideEvent_Callback = void (*)(KFontChooser*, QHideEvent*);
    using KFontChooser_NativeEvent_Callback = bool (*)(KFontChooser*, libqt_string, void*, intptr_t*);
    using KFontChooser_ChangeEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_Metric_Callback = int (*)(const KFontChooser*, int);
    using KFontChooser_InitPainter_Callback = void (*)(const KFontChooser*, QPainter*);
    using KFontChooser_Redirected_Callback = QPaintDevice* (*)(const KFontChooser*, QPoint*);
    using KFontChooser_SharedPainter_Callback = QPainter* (*)(const KFontChooser*);
    using KFontChooser_InputMethodEvent_Callback = void (*)(KFontChooser*, QInputMethodEvent*);
    using KFontChooser_InputMethodQuery_Callback = QVariant* (*)(const KFontChooser*, int);
    using KFontChooser_FocusNextPrevChild_Callback = bool (*)(KFontChooser*, bool);
    using KFontChooser_EventFilter_Callback = bool (*)(KFontChooser*, QObject*, QEvent*);
    using KFontChooser_TimerEvent_Callback = void (*)(KFontChooser*, QTimerEvent*);
    using KFontChooser_ChildEvent_Callback = void (*)(KFontChooser*, QChildEvent*);
    using KFontChooser_CustomEvent_Callback = void (*)(KFontChooser*, QEvent*);
    using KFontChooser_ConnectNotify_Callback = void (*)(KFontChooser*, QMetaMethod*);
    using KFontChooser_DisconnectNotify_Callback = void (*)(KFontChooser*, QMetaMethod*);
    using KFontChooser::create;
    using KFontChooser::destroy;
    using KFontChooser::focusNextChild;
    using KFontChooser::focusPreviousChild;
    using KFontChooser::getDecodedMetricF;
    using KFontChooser::isSignalConnected;
    using KFontChooser::receivers;
    using KFontChooser::sender;
    using KFontChooser::senderSignalIndex;
    using KFontChooser::updateMicroFocus;

    // Instance callback storage
    KFontChooser_MetaObject_Callback kfontchooser_metaobject_callback = nullptr;
    KFontChooser_Metacast_Callback kfontchooser_metacast_callback = nullptr;
    KFontChooser_Metacall_Callback kfontchooser_metacall_callback = nullptr;
    KFontChooser_SizeHint_Callback kfontchooser_sizehint_callback = nullptr;
    KFontChooser_DevType_Callback kfontchooser_devtype_callback = nullptr;
    KFontChooser_SetVisible_Callback kfontchooser_setvisible_callback = nullptr;
    KFontChooser_MinimumSizeHint_Callback kfontchooser_minimumsizehint_callback = nullptr;
    KFontChooser_HeightForWidth_Callback kfontchooser_heightforwidth_callback = nullptr;
    KFontChooser_HasHeightForWidth_Callback kfontchooser_hasheightforwidth_callback = nullptr;
    KFontChooser_PaintEngine_Callback kfontchooser_paintengine_callback = nullptr;
    KFontChooser_Event_Callback kfontchooser_event_callback = nullptr;
    KFontChooser_MousePressEvent_Callback kfontchooser_mousepressevent_callback = nullptr;
    KFontChooser_MouseReleaseEvent_Callback kfontchooser_mousereleaseevent_callback = nullptr;
    KFontChooser_MouseDoubleClickEvent_Callback kfontchooser_mousedoubleclickevent_callback = nullptr;
    KFontChooser_MouseMoveEvent_Callback kfontchooser_mousemoveevent_callback = nullptr;
    KFontChooser_WheelEvent_Callback kfontchooser_wheelevent_callback = nullptr;
    KFontChooser_KeyPressEvent_Callback kfontchooser_keypressevent_callback = nullptr;
    KFontChooser_KeyReleaseEvent_Callback kfontchooser_keyreleaseevent_callback = nullptr;
    KFontChooser_FocusInEvent_Callback kfontchooser_focusinevent_callback = nullptr;
    KFontChooser_FocusOutEvent_Callback kfontchooser_focusoutevent_callback = nullptr;
    KFontChooser_EnterEvent_Callback kfontchooser_enterevent_callback = nullptr;
    KFontChooser_LeaveEvent_Callback kfontchooser_leaveevent_callback = nullptr;
    KFontChooser_PaintEvent_Callback kfontchooser_paintevent_callback = nullptr;
    KFontChooser_MoveEvent_Callback kfontchooser_moveevent_callback = nullptr;
    KFontChooser_ResizeEvent_Callback kfontchooser_resizeevent_callback = nullptr;
    KFontChooser_CloseEvent_Callback kfontchooser_closeevent_callback = nullptr;
    KFontChooser_ContextMenuEvent_Callback kfontchooser_contextmenuevent_callback = nullptr;
    KFontChooser_TabletEvent_Callback kfontchooser_tabletevent_callback = nullptr;
    KFontChooser_ActionEvent_Callback kfontchooser_actionevent_callback = nullptr;
    KFontChooser_DragEnterEvent_Callback kfontchooser_dragenterevent_callback = nullptr;
    KFontChooser_DragMoveEvent_Callback kfontchooser_dragmoveevent_callback = nullptr;
    KFontChooser_DragLeaveEvent_Callback kfontchooser_dragleaveevent_callback = nullptr;
    KFontChooser_DropEvent_Callback kfontchooser_dropevent_callback = nullptr;
    KFontChooser_ShowEvent_Callback kfontchooser_showevent_callback = nullptr;
    KFontChooser_HideEvent_Callback kfontchooser_hideevent_callback = nullptr;
    KFontChooser_NativeEvent_Callback kfontchooser_nativeevent_callback = nullptr;
    KFontChooser_ChangeEvent_Callback kfontchooser_changeevent_callback = nullptr;
    KFontChooser_Metric_Callback kfontchooser_metric_callback = nullptr;
    KFontChooser_InitPainter_Callback kfontchooser_initpainter_callback = nullptr;
    KFontChooser_Redirected_Callback kfontchooser_redirected_callback = nullptr;
    KFontChooser_SharedPainter_Callback kfontchooser_sharedpainter_callback = nullptr;
    KFontChooser_InputMethodEvent_Callback kfontchooser_inputmethodevent_callback = nullptr;
    KFontChooser_InputMethodQuery_Callback kfontchooser_inputmethodquery_callback = nullptr;
    KFontChooser_FocusNextPrevChild_Callback kfontchooser_focusnextprevchild_callback = nullptr;
    KFontChooser_EventFilter_Callback kfontchooser_eventfilter_callback = nullptr;
    KFontChooser_TimerEvent_Callback kfontchooser_timerevent_callback = nullptr;
    KFontChooser_ChildEvent_Callback kfontchooser_childevent_callback = nullptr;
    KFontChooser_CustomEvent_Callback kfontchooser_customevent_callback = nullptr;
    KFontChooser_ConnectNotify_Callback kfontchooser_connectnotify_callback = nullptr;
    KFontChooser_DisconnectNotify_Callback kfontchooser_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KFontChooser {
        using KFontChooser::actionEvent;
        using KFontChooser::changeEvent;
        using KFontChooser::childEvent;
        using KFontChooser::closeEvent;
        using KFontChooser::connectNotify;
        using KFontChooser::contextMenuEvent;
        using KFontChooser::customEvent;
        using KFontChooser::disconnectNotify;
        using KFontChooser::dragEnterEvent;
        using KFontChooser::dragLeaveEvent;
        using KFontChooser::dragMoveEvent;
        using KFontChooser::dropEvent;
        using KFontChooser::enterEvent;
        using KFontChooser::event;
        using KFontChooser::focusInEvent;
        using KFontChooser::focusNextPrevChild;
        using KFontChooser::focusOutEvent;
        using KFontChooser::hideEvent;
        using KFontChooser::initPainter;
        using KFontChooser::inputMethodEvent;
        using KFontChooser::keyPressEvent;
        using KFontChooser::keyReleaseEvent;
        using KFontChooser::leaveEvent;
        using KFontChooser::metric;
        using KFontChooser::mouseDoubleClickEvent;
        using KFontChooser::mouseMoveEvent;
        using KFontChooser::mousePressEvent;
        using KFontChooser::mouseReleaseEvent;
        using KFontChooser::moveEvent;
        using KFontChooser::nativeEvent;
        using KFontChooser::paintEvent;
        using KFontChooser::redirected;
        using KFontChooser::resizeEvent;
        using KFontChooser::sharedPainter;
        using KFontChooser::showEvent;
        using KFontChooser::tabletEvent;
        using KFontChooser::timerEvent;
        using KFontChooser::wheelEvent;
    };

    VirtualKFontChooser(QWidget* parent) : KFontChooser(parent) {};
    VirtualKFontChooser() : KFontChooser() {};
    VirtualKFontChooser(KFontChooser::DisplayFlags flags) : KFontChooser(flags) {};
    VirtualKFontChooser(KFontChooser::DisplayFlags flags, QWidget* parent) : KFontChooser(flags, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kfontchooser_metaobject_callback) {
            QMetaObject* callback_ret = kfontchooser_metaobject_callback(this);
            return callback_ret;
        }
        return KFontChooser::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kfontchooser_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kfontchooser_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooser::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kfontchooser_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kfontchooser_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KFontChooser::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kfontchooser_sizehint_callback) {
            QSize* callback_ret = kfontchooser_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooser::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kfontchooser_devtype_callback) {
            int callback_ret = kfontchooser_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KFontChooser::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kfontchooser_setvisible_callback) {
            bool cbval1 = visible;
            kfontchooser_setvisible_callback(this, cbval1);
            return;
        }
        KFontChooser::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kfontchooser_minimumsizehint_callback) {
            QSize* callback_ret = kfontchooser_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooser::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kfontchooser_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kfontchooser_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooser::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kfontchooser_hasheightforwidth_callback) {
            bool callback_ret = kfontchooser_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KFontChooser::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kfontchooser_paintengine_callback) {
            QPaintEngine* callback_ret = kfontchooser_paintengine_callback(this);
            return callback_ret;
        }
        return KFontChooser::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kfontchooser_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kfontchooser_event_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooser::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kfontchooser_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooser_mousepressevent_callback(this, cbval1);
            return;
        }
        KFontChooser::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kfontchooser_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooser_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KFontChooser::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kfontchooser_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooser_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KFontChooser::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kfontchooser_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kfontchooser_mousemoveevent_callback(this, cbval1);
            return;
        }
        KFontChooser::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kfontchooser_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kfontchooser_wheelevent_callback(this, cbval1);
            return;
        }
        KFontChooser::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kfontchooser_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kfontchooser_keypressevent_callback(this, cbval1);
            return;
        }
        KFontChooser::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kfontchooser_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kfontchooser_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KFontChooser::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kfontchooser_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontchooser_focusinevent_callback(this, cbval1);
            return;
        }
        KFontChooser::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kfontchooser_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kfontchooser_focusoutevent_callback(this, cbval1);
            return;
        }
        KFontChooser::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kfontchooser_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kfontchooser_enterevent_callback(this, cbval1);
            return;
        }
        KFontChooser::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kfontchooser_leaveevent_callback) {
            QEvent* cbval1 = event;
            kfontchooser_leaveevent_callback(this, cbval1);
            return;
        }
        KFontChooser::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kfontchooser_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kfontchooser_paintevent_callback(this, cbval1);
            return;
        }
        KFontChooser::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kfontchooser_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kfontchooser_moveevent_callback(this, cbval1);
            return;
        }
        KFontChooser::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kfontchooser_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kfontchooser_resizeevent_callback(this, cbval1);
            return;
        }
        KFontChooser::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kfontchooser_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kfontchooser_closeevent_callback(this, cbval1);
            return;
        }
        KFontChooser::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kfontchooser_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kfontchooser_contextmenuevent_callback(this, cbval1);
            return;
        }
        KFontChooser::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kfontchooser_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kfontchooser_tabletevent_callback(this, cbval1);
            return;
        }
        KFontChooser::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kfontchooser_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kfontchooser_actionevent_callback(this, cbval1);
            return;
        }
        KFontChooser::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kfontchooser_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kfontchooser_dragenterevent_callback(this, cbval1);
            return;
        }
        KFontChooser::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kfontchooser_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kfontchooser_dragmoveevent_callback(this, cbval1);
            return;
        }
        KFontChooser::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kfontchooser_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kfontchooser_dragleaveevent_callback(this, cbval1);
            return;
        }
        KFontChooser::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kfontchooser_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kfontchooser_dropevent_callback(this, cbval1);
            return;
        }
        KFontChooser::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kfontchooser_showevent_callback) {
            QShowEvent* cbval1 = event;
            kfontchooser_showevent_callback(this, cbval1);
            return;
        }
        KFontChooser::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kfontchooser_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kfontchooser_hideevent_callback(this, cbval1);
            return;
        }
        KFontChooser::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kfontchooser_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kfontchooser_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KFontChooser::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kfontchooser_changeevent_callback) {
            QEvent* cbval1 = param1;
            kfontchooser_changeevent_callback(this, cbval1);
            return;
        }
        KFontChooser::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kfontchooser_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kfontchooser_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KFontChooser::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kfontchooser_initpainter_callback) {
            QPainter* cbval1 = painter;
            kfontchooser_initpainter_callback(this, cbval1);
            return;
        }
        KFontChooser::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kfontchooser_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kfontchooser_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooser::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kfontchooser_sharedpainter_callback) {
            QPainter* callback_ret = kfontchooser_sharedpainter_callback(this);
            return callback_ret;
        }
        return KFontChooser::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kfontchooser_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kfontchooser_inputmethodevent_callback(this, cbval1);
            return;
        }
        KFontChooser::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kfontchooser_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kfontchooser_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KFontChooser::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kfontchooser_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kfontchooser_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KFontChooser::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kfontchooser_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kfontchooser_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KFontChooser::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kfontchooser_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kfontchooser_timerevent_callback(this, cbval1);
            return;
        }
        KFontChooser::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kfontchooser_childevent_callback) {
            QChildEvent* cbval1 = event;
            kfontchooser_childevent_callback(this, cbval1);
            return;
        }
        KFontChooser::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kfontchooser_customevent_callback) {
            QEvent* cbval1 = event;
            kfontchooser_customevent_callback(this, cbval1);
            return;
        }
        KFontChooser::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kfontchooser_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontchooser_connectnotify_callback(this, cbval1);
            return;
        }
        KFontChooser::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kfontchooser_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kfontchooser_disconnectnotify_callback(this, cbval1);
            return;
        }
        KFontChooser::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KFontChooser_SuperEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_SuperMousePressEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_SuperMouseReleaseEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_SuperMouseDoubleClickEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_SuperMouseMoveEvent(KFontChooser* self, QMouseEvent* event);
    friend void KFontChooser_SuperWheelEvent(KFontChooser* self, QWheelEvent* event);
    friend void KFontChooser_SuperKeyPressEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_SuperKeyReleaseEvent(KFontChooser* self, QKeyEvent* event);
    friend void KFontChooser_SuperFocusInEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_SuperFocusOutEvent(KFontChooser* self, QFocusEvent* event);
    friend void KFontChooser_SuperEnterEvent(KFontChooser* self, QEnterEvent* event);
    friend void KFontChooser_SuperLeaveEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_SuperPaintEvent(KFontChooser* self, QPaintEvent* event);
    friend void KFontChooser_SuperMoveEvent(KFontChooser* self, QMoveEvent* event);
    friend void KFontChooser_SuperResizeEvent(KFontChooser* self, QResizeEvent* event);
    friend void KFontChooser_SuperCloseEvent(KFontChooser* self, QCloseEvent* event);
    friend void KFontChooser_SuperContextMenuEvent(KFontChooser* self, QContextMenuEvent* event);
    friend void KFontChooser_SuperTabletEvent(KFontChooser* self, QTabletEvent* event);
    friend void KFontChooser_SuperActionEvent(KFontChooser* self, QActionEvent* event);
    friend void KFontChooser_SuperDragEnterEvent(KFontChooser* self, QDragEnterEvent* event);
    friend void KFontChooser_SuperDragMoveEvent(KFontChooser* self, QDragMoveEvent* event);
    friend void KFontChooser_SuperDragLeaveEvent(KFontChooser* self, QDragLeaveEvent* event);
    friend void KFontChooser_SuperDropEvent(KFontChooser* self, QDropEvent* event);
    friend void KFontChooser_SuperShowEvent(KFontChooser* self, QShowEvent* event);
    friend void KFontChooser_SuperHideEvent(KFontChooser* self, QHideEvent* event);
    friend bool KFontChooser_SuperNativeEvent(KFontChooser* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KFontChooser_SuperChangeEvent(KFontChooser* self, QEvent* param1);
    friend int KFontChooser_SuperMetric(const KFontChooser* self, int param1);
    friend void KFontChooser_SuperInitPainter(const KFontChooser* self, QPainter* painter);
    friend QPaintDevice* KFontChooser_SuperRedirected(const KFontChooser* self, QPoint* offset);
    friend QPainter* KFontChooser_SuperSharedPainter(const KFontChooser* self);
    friend void KFontChooser_SuperInputMethodEvent(KFontChooser* self, QInputMethodEvent* param1);
    friend bool KFontChooser_SuperFocusNextPrevChild(KFontChooser* self, bool next);
    friend void KFontChooser_SuperTimerEvent(KFontChooser* self, QTimerEvent* event);
    friend void KFontChooser_SuperChildEvent(KFontChooser* self, QChildEvent* event);
    friend void KFontChooser_SuperCustomEvent(KFontChooser* self, QEvent* event);
    friend void KFontChooser_SuperConnectNotify(KFontChooser* self, const QMetaMethod* signal);
    friend void KFontChooser_SuperDisconnectNotify(KFontChooser* self, const QMetaMethod* signal);
};

#endif
