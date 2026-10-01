#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKCOLLAPSIBLEGROUPBOX_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKCOLLAPSIBLEGROUPBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KCollapsibleGroupBox
class VirtualKCollapsibleGroupBox final : public KCollapsibleGroupBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KCollapsibleGroupBox_MetaObject_Callback = QMetaObject* (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_Metacast_Callback = void* (*)(KCollapsibleGroupBox*, const char*);
    using KCollapsibleGroupBox_Metacall_Callback = int (*)(KCollapsibleGroupBox*, int, int, void**);
    using KCollapsibleGroupBox_SizeHint_Callback = QSize* (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_MinimumSizeHint_Callback = QSize* (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_PaintEvent_Callback = void (*)(KCollapsibleGroupBox*, QPaintEvent*);
    using KCollapsibleGroupBox_Event_Callback = bool (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_MousePressEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_MouseMoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_LeaveEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_KeyPressEvent_Callback = void (*)(KCollapsibleGroupBox*, QKeyEvent*);
    using KCollapsibleGroupBox_ResizeEvent_Callback = void (*)(KCollapsibleGroupBox*, QResizeEvent*);
    using KCollapsibleGroupBox_DevType_Callback = int (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_SetVisible_Callback = void (*)(KCollapsibleGroupBox*, bool);
    using KCollapsibleGroupBox_HeightForWidth_Callback = int (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_HasHeightForWidth_Callback = bool (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_PaintEngine_Callback = QPaintEngine* (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_MouseReleaseEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_MouseDoubleClickEvent_Callback = void (*)(KCollapsibleGroupBox*, QMouseEvent*);
    using KCollapsibleGroupBox_WheelEvent_Callback = void (*)(KCollapsibleGroupBox*, QWheelEvent*);
    using KCollapsibleGroupBox_KeyReleaseEvent_Callback = void (*)(KCollapsibleGroupBox*, QKeyEvent*);
    using KCollapsibleGroupBox_FocusInEvent_Callback = void (*)(KCollapsibleGroupBox*, QFocusEvent*);
    using KCollapsibleGroupBox_FocusOutEvent_Callback = void (*)(KCollapsibleGroupBox*, QFocusEvent*);
    using KCollapsibleGroupBox_EnterEvent_Callback = void (*)(KCollapsibleGroupBox*, QEnterEvent*);
    using KCollapsibleGroupBox_MoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QMoveEvent*);
    using KCollapsibleGroupBox_CloseEvent_Callback = void (*)(KCollapsibleGroupBox*, QCloseEvent*);
    using KCollapsibleGroupBox_ContextMenuEvent_Callback = void (*)(KCollapsibleGroupBox*, QContextMenuEvent*);
    using KCollapsibleGroupBox_TabletEvent_Callback = void (*)(KCollapsibleGroupBox*, QTabletEvent*);
    using KCollapsibleGroupBox_ActionEvent_Callback = void (*)(KCollapsibleGroupBox*, QActionEvent*);
    using KCollapsibleGroupBox_DragEnterEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragEnterEvent*);
    using KCollapsibleGroupBox_DragMoveEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragMoveEvent*);
    using KCollapsibleGroupBox_DragLeaveEvent_Callback = void (*)(KCollapsibleGroupBox*, QDragLeaveEvent*);
    using KCollapsibleGroupBox_DropEvent_Callback = void (*)(KCollapsibleGroupBox*, QDropEvent*);
    using KCollapsibleGroupBox_ShowEvent_Callback = void (*)(KCollapsibleGroupBox*, QShowEvent*);
    using KCollapsibleGroupBox_HideEvent_Callback = void (*)(KCollapsibleGroupBox*, QHideEvent*);
    using KCollapsibleGroupBox_NativeEvent_Callback = bool (*)(KCollapsibleGroupBox*, libqt_string, void*, intptr_t*);
    using KCollapsibleGroupBox_ChangeEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_Metric_Callback = int (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_InitPainter_Callback = void (*)(const KCollapsibleGroupBox*, QPainter*);
    using KCollapsibleGroupBox_Redirected_Callback = QPaintDevice* (*)(const KCollapsibleGroupBox*, QPoint*);
    using KCollapsibleGroupBox_SharedPainter_Callback = QPainter* (*)(const KCollapsibleGroupBox*);
    using KCollapsibleGroupBox_InputMethodEvent_Callback = void (*)(KCollapsibleGroupBox*, QInputMethodEvent*);
    using KCollapsibleGroupBox_InputMethodQuery_Callback = QVariant* (*)(const KCollapsibleGroupBox*, int);
    using KCollapsibleGroupBox_FocusNextPrevChild_Callback = bool (*)(KCollapsibleGroupBox*, bool);
    using KCollapsibleGroupBox_EventFilter_Callback = bool (*)(KCollapsibleGroupBox*, QObject*, QEvent*);
    using KCollapsibleGroupBox_TimerEvent_Callback = void (*)(KCollapsibleGroupBox*, QTimerEvent*);
    using KCollapsibleGroupBox_ChildEvent_Callback = void (*)(KCollapsibleGroupBox*, QChildEvent*);
    using KCollapsibleGroupBox_CustomEvent_Callback = void (*)(KCollapsibleGroupBox*, QEvent*);
    using KCollapsibleGroupBox_ConnectNotify_Callback = void (*)(KCollapsibleGroupBox*, QMetaMethod*);
    using KCollapsibleGroupBox_DisconnectNotify_Callback = void (*)(KCollapsibleGroupBox*, QMetaMethod*);
    using KCollapsibleGroupBox::create;
    using KCollapsibleGroupBox::destroy;
    using KCollapsibleGroupBox::focusNextChild;
    using KCollapsibleGroupBox::focusPreviousChild;
    using KCollapsibleGroupBox::getDecodedMetricF;
    using KCollapsibleGroupBox::isSignalConnected;
    using KCollapsibleGroupBox::receivers;
    using KCollapsibleGroupBox::sender;
    using KCollapsibleGroupBox::senderSignalIndex;
    using KCollapsibleGroupBox::updateMicroFocus;

    // Instance callback storage
    KCollapsibleGroupBox_MetaObject_Callback kcollapsiblegroupbox_metaobject_callback = nullptr;
    KCollapsibleGroupBox_Metacast_Callback kcollapsiblegroupbox_metacast_callback = nullptr;
    KCollapsibleGroupBox_Metacall_Callback kcollapsiblegroupbox_metacall_callback = nullptr;
    KCollapsibleGroupBox_SizeHint_Callback kcollapsiblegroupbox_sizehint_callback = nullptr;
    KCollapsibleGroupBox_MinimumSizeHint_Callback kcollapsiblegroupbox_minimumsizehint_callback = nullptr;
    KCollapsibleGroupBox_PaintEvent_Callback kcollapsiblegroupbox_paintevent_callback = nullptr;
    KCollapsibleGroupBox_Event_Callback kcollapsiblegroupbox_event_callback = nullptr;
    KCollapsibleGroupBox_MousePressEvent_Callback kcollapsiblegroupbox_mousepressevent_callback = nullptr;
    KCollapsibleGroupBox_MouseMoveEvent_Callback kcollapsiblegroupbox_mousemoveevent_callback = nullptr;
    KCollapsibleGroupBox_LeaveEvent_Callback kcollapsiblegroupbox_leaveevent_callback = nullptr;
    KCollapsibleGroupBox_KeyPressEvent_Callback kcollapsiblegroupbox_keypressevent_callback = nullptr;
    KCollapsibleGroupBox_ResizeEvent_Callback kcollapsiblegroupbox_resizeevent_callback = nullptr;
    KCollapsibleGroupBox_DevType_Callback kcollapsiblegroupbox_devtype_callback = nullptr;
    KCollapsibleGroupBox_SetVisible_Callback kcollapsiblegroupbox_setvisible_callback = nullptr;
    KCollapsibleGroupBox_HeightForWidth_Callback kcollapsiblegroupbox_heightforwidth_callback = nullptr;
    KCollapsibleGroupBox_HasHeightForWidth_Callback kcollapsiblegroupbox_hasheightforwidth_callback = nullptr;
    KCollapsibleGroupBox_PaintEngine_Callback kcollapsiblegroupbox_paintengine_callback = nullptr;
    KCollapsibleGroupBox_MouseReleaseEvent_Callback kcollapsiblegroupbox_mousereleaseevent_callback = nullptr;
    KCollapsibleGroupBox_MouseDoubleClickEvent_Callback kcollapsiblegroupbox_mousedoubleclickevent_callback = nullptr;
    KCollapsibleGroupBox_WheelEvent_Callback kcollapsiblegroupbox_wheelevent_callback = nullptr;
    KCollapsibleGroupBox_KeyReleaseEvent_Callback kcollapsiblegroupbox_keyreleaseevent_callback = nullptr;
    KCollapsibleGroupBox_FocusInEvent_Callback kcollapsiblegroupbox_focusinevent_callback = nullptr;
    KCollapsibleGroupBox_FocusOutEvent_Callback kcollapsiblegroupbox_focusoutevent_callback = nullptr;
    KCollapsibleGroupBox_EnterEvent_Callback kcollapsiblegroupbox_enterevent_callback = nullptr;
    KCollapsibleGroupBox_MoveEvent_Callback kcollapsiblegroupbox_moveevent_callback = nullptr;
    KCollapsibleGroupBox_CloseEvent_Callback kcollapsiblegroupbox_closeevent_callback = nullptr;
    KCollapsibleGroupBox_ContextMenuEvent_Callback kcollapsiblegroupbox_contextmenuevent_callback = nullptr;
    KCollapsibleGroupBox_TabletEvent_Callback kcollapsiblegroupbox_tabletevent_callback = nullptr;
    KCollapsibleGroupBox_ActionEvent_Callback kcollapsiblegroupbox_actionevent_callback = nullptr;
    KCollapsibleGroupBox_DragEnterEvent_Callback kcollapsiblegroupbox_dragenterevent_callback = nullptr;
    KCollapsibleGroupBox_DragMoveEvent_Callback kcollapsiblegroupbox_dragmoveevent_callback = nullptr;
    KCollapsibleGroupBox_DragLeaveEvent_Callback kcollapsiblegroupbox_dragleaveevent_callback = nullptr;
    KCollapsibleGroupBox_DropEvent_Callback kcollapsiblegroupbox_dropevent_callback = nullptr;
    KCollapsibleGroupBox_ShowEvent_Callback kcollapsiblegroupbox_showevent_callback = nullptr;
    KCollapsibleGroupBox_HideEvent_Callback kcollapsiblegroupbox_hideevent_callback = nullptr;
    KCollapsibleGroupBox_NativeEvent_Callback kcollapsiblegroupbox_nativeevent_callback = nullptr;
    KCollapsibleGroupBox_ChangeEvent_Callback kcollapsiblegroupbox_changeevent_callback = nullptr;
    KCollapsibleGroupBox_Metric_Callback kcollapsiblegroupbox_metric_callback = nullptr;
    KCollapsibleGroupBox_InitPainter_Callback kcollapsiblegroupbox_initpainter_callback = nullptr;
    KCollapsibleGroupBox_Redirected_Callback kcollapsiblegroupbox_redirected_callback = nullptr;
    KCollapsibleGroupBox_SharedPainter_Callback kcollapsiblegroupbox_sharedpainter_callback = nullptr;
    KCollapsibleGroupBox_InputMethodEvent_Callback kcollapsiblegroupbox_inputmethodevent_callback = nullptr;
    KCollapsibleGroupBox_InputMethodQuery_Callback kcollapsiblegroupbox_inputmethodquery_callback = nullptr;
    KCollapsibleGroupBox_FocusNextPrevChild_Callback kcollapsiblegroupbox_focusnextprevchild_callback = nullptr;
    KCollapsibleGroupBox_EventFilter_Callback kcollapsiblegroupbox_eventfilter_callback = nullptr;
    KCollapsibleGroupBox_TimerEvent_Callback kcollapsiblegroupbox_timerevent_callback = nullptr;
    KCollapsibleGroupBox_ChildEvent_Callback kcollapsiblegroupbox_childevent_callback = nullptr;
    KCollapsibleGroupBox_CustomEvent_Callback kcollapsiblegroupbox_customevent_callback = nullptr;
    KCollapsibleGroupBox_ConnectNotify_Callback kcollapsiblegroupbox_connectnotify_callback = nullptr;
    KCollapsibleGroupBox_DisconnectNotify_Callback kcollapsiblegroupbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KCollapsibleGroupBox {
        using KCollapsibleGroupBox::actionEvent;
        using KCollapsibleGroupBox::changeEvent;
        using KCollapsibleGroupBox::childEvent;
        using KCollapsibleGroupBox::closeEvent;
        using KCollapsibleGroupBox::connectNotify;
        using KCollapsibleGroupBox::contextMenuEvent;
        using KCollapsibleGroupBox::customEvent;
        using KCollapsibleGroupBox::disconnectNotify;
        using KCollapsibleGroupBox::dragEnterEvent;
        using KCollapsibleGroupBox::dragLeaveEvent;
        using KCollapsibleGroupBox::dragMoveEvent;
        using KCollapsibleGroupBox::dropEvent;
        using KCollapsibleGroupBox::enterEvent;
        using KCollapsibleGroupBox::event;
        using KCollapsibleGroupBox::focusInEvent;
        using KCollapsibleGroupBox::focusNextPrevChild;
        using KCollapsibleGroupBox::focusOutEvent;
        using KCollapsibleGroupBox::hideEvent;
        using KCollapsibleGroupBox::initPainter;
        using KCollapsibleGroupBox::inputMethodEvent;
        using KCollapsibleGroupBox::keyPressEvent;
        using KCollapsibleGroupBox::keyReleaseEvent;
        using KCollapsibleGroupBox::leaveEvent;
        using KCollapsibleGroupBox::metric;
        using KCollapsibleGroupBox::mouseDoubleClickEvent;
        using KCollapsibleGroupBox::mouseMoveEvent;
        using KCollapsibleGroupBox::mousePressEvent;
        using KCollapsibleGroupBox::mouseReleaseEvent;
        using KCollapsibleGroupBox::moveEvent;
        using KCollapsibleGroupBox::nativeEvent;
        using KCollapsibleGroupBox::paintEvent;
        using KCollapsibleGroupBox::redirected;
        using KCollapsibleGroupBox::resizeEvent;
        using KCollapsibleGroupBox::sharedPainter;
        using KCollapsibleGroupBox::showEvent;
        using KCollapsibleGroupBox::tabletEvent;
        using KCollapsibleGroupBox::timerEvent;
        using KCollapsibleGroupBox::wheelEvent;
    };

    VirtualKCollapsibleGroupBox(QWidget* parent) : KCollapsibleGroupBox(parent) {};
    VirtualKCollapsibleGroupBox() : KCollapsibleGroupBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kcollapsiblegroupbox_metaobject_callback) {
            QMetaObject* callback_ret = kcollapsiblegroupbox_metaobject_callback(this);
            return callback_ret;
        }
        return KCollapsibleGroupBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kcollapsiblegroupbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kcollapsiblegroupbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KCollapsibleGroupBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kcollapsiblegroupbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kcollapsiblegroupbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KCollapsibleGroupBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kcollapsiblegroupbox_sizehint_callback) {
            QSize* callback_ret = kcollapsiblegroupbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCollapsibleGroupBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kcollapsiblegroupbox_minimumsizehint_callback) {
            QSize* callback_ret = kcollapsiblegroupbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCollapsibleGroupBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (kcollapsiblegroupbox_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            kcollapsiblegroupbox_paintevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (kcollapsiblegroupbox_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = kcollapsiblegroupbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KCollapsibleGroupBox::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (kcollapsiblegroupbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcollapsiblegroupbox_mousepressevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (kcollapsiblegroupbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            kcollapsiblegroupbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (kcollapsiblegroupbox_leaveevent_callback) {
            QEvent* cbval1 = param1;
            kcollapsiblegroupbox_leaveevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::leaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (kcollapsiblegroupbox_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            kcollapsiblegroupbox_keypressevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (kcollapsiblegroupbox_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            kcollapsiblegroupbox_resizeevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kcollapsiblegroupbox_devtype_callback) {
            int callback_ret = kcollapsiblegroupbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KCollapsibleGroupBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kcollapsiblegroupbox_setvisible_callback) {
            bool cbval1 = visible;
            kcollapsiblegroupbox_setvisible_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kcollapsiblegroupbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kcollapsiblegroupbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCollapsibleGroupBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kcollapsiblegroupbox_hasheightforwidth_callback) {
            bool callback_ret = kcollapsiblegroupbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KCollapsibleGroupBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kcollapsiblegroupbox_paintengine_callback) {
            QPaintEngine* callback_ret = kcollapsiblegroupbox_paintengine_callback(this);
            return callback_ret;
        }
        return KCollapsibleGroupBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kcollapsiblegroupbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kcollapsiblegroupbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kcollapsiblegroupbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kcollapsiblegroupbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kcollapsiblegroupbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kcollapsiblegroupbox_wheelevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kcollapsiblegroupbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kcollapsiblegroupbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kcollapsiblegroupbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kcollapsiblegroupbox_focusinevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kcollapsiblegroupbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kcollapsiblegroupbox_focusoutevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kcollapsiblegroupbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kcollapsiblegroupbox_enterevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kcollapsiblegroupbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kcollapsiblegroupbox_moveevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kcollapsiblegroupbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kcollapsiblegroupbox_closeevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kcollapsiblegroupbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kcollapsiblegroupbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kcollapsiblegroupbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kcollapsiblegroupbox_tabletevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kcollapsiblegroupbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kcollapsiblegroupbox_actionevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kcollapsiblegroupbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kcollapsiblegroupbox_dragenterevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kcollapsiblegroupbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kcollapsiblegroupbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kcollapsiblegroupbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kcollapsiblegroupbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kcollapsiblegroupbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kcollapsiblegroupbox_dropevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kcollapsiblegroupbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            kcollapsiblegroupbox_showevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kcollapsiblegroupbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kcollapsiblegroupbox_hideevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kcollapsiblegroupbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kcollapsiblegroupbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KCollapsibleGroupBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kcollapsiblegroupbox_changeevent_callback) {
            QEvent* cbval1 = param1;
            kcollapsiblegroupbox_changeevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kcollapsiblegroupbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kcollapsiblegroupbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KCollapsibleGroupBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kcollapsiblegroupbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            kcollapsiblegroupbox_initpainter_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kcollapsiblegroupbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kcollapsiblegroupbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KCollapsibleGroupBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kcollapsiblegroupbox_sharedpainter_callback) {
            QPainter* callback_ret = kcollapsiblegroupbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KCollapsibleGroupBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kcollapsiblegroupbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kcollapsiblegroupbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kcollapsiblegroupbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kcollapsiblegroupbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KCollapsibleGroupBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kcollapsiblegroupbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kcollapsiblegroupbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KCollapsibleGroupBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kcollapsiblegroupbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kcollapsiblegroupbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KCollapsibleGroupBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kcollapsiblegroupbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kcollapsiblegroupbox_timerevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kcollapsiblegroupbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            kcollapsiblegroupbox_childevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kcollapsiblegroupbox_customevent_callback) {
            QEvent* cbval1 = event;
            kcollapsiblegroupbox_customevent_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kcollapsiblegroupbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcollapsiblegroupbox_connectnotify_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kcollapsiblegroupbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kcollapsiblegroupbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KCollapsibleGroupBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void KCollapsibleGroupBox_SuperPaintEvent(KCollapsibleGroupBox* self, QPaintEvent* param1);
    friend bool KCollapsibleGroupBox_SuperEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_SuperMousePressEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_SuperMouseMoveEvent(KCollapsibleGroupBox* self, QMouseEvent* param1);
    friend void KCollapsibleGroupBox_SuperLeaveEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend void KCollapsibleGroupBox_SuperKeyPressEvent(KCollapsibleGroupBox* self, QKeyEvent* param1);
    friend void KCollapsibleGroupBox_SuperResizeEvent(KCollapsibleGroupBox* self, QResizeEvent* param1);
    friend void KCollapsibleGroupBox_SuperMouseReleaseEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_SuperMouseDoubleClickEvent(KCollapsibleGroupBox* self, QMouseEvent* event);
    friend void KCollapsibleGroupBox_SuperWheelEvent(KCollapsibleGroupBox* self, QWheelEvent* event);
    friend void KCollapsibleGroupBox_SuperKeyReleaseEvent(KCollapsibleGroupBox* self, QKeyEvent* event);
    friend void KCollapsibleGroupBox_SuperFocusInEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_SuperFocusOutEvent(KCollapsibleGroupBox* self, QFocusEvent* event);
    friend void KCollapsibleGroupBox_SuperEnterEvent(KCollapsibleGroupBox* self, QEnterEvent* event);
    friend void KCollapsibleGroupBox_SuperMoveEvent(KCollapsibleGroupBox* self, QMoveEvent* event);
    friend void KCollapsibleGroupBox_SuperCloseEvent(KCollapsibleGroupBox* self, QCloseEvent* event);
    friend void KCollapsibleGroupBox_SuperContextMenuEvent(KCollapsibleGroupBox* self, QContextMenuEvent* event);
    friend void KCollapsibleGroupBox_SuperTabletEvent(KCollapsibleGroupBox* self, QTabletEvent* event);
    friend void KCollapsibleGroupBox_SuperActionEvent(KCollapsibleGroupBox* self, QActionEvent* event);
    friend void KCollapsibleGroupBox_SuperDragEnterEvent(KCollapsibleGroupBox* self, QDragEnterEvent* event);
    friend void KCollapsibleGroupBox_SuperDragMoveEvent(KCollapsibleGroupBox* self, QDragMoveEvent* event);
    friend void KCollapsibleGroupBox_SuperDragLeaveEvent(KCollapsibleGroupBox* self, QDragLeaveEvent* event);
    friend void KCollapsibleGroupBox_SuperDropEvent(KCollapsibleGroupBox* self, QDropEvent* event);
    friend void KCollapsibleGroupBox_SuperShowEvent(KCollapsibleGroupBox* self, QShowEvent* event);
    friend void KCollapsibleGroupBox_SuperHideEvent(KCollapsibleGroupBox* self, QHideEvent* event);
    friend bool KCollapsibleGroupBox_SuperNativeEvent(KCollapsibleGroupBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KCollapsibleGroupBox_SuperChangeEvent(KCollapsibleGroupBox* self, QEvent* param1);
    friend int KCollapsibleGroupBox_SuperMetric(const KCollapsibleGroupBox* self, int param1);
    friend void KCollapsibleGroupBox_SuperInitPainter(const KCollapsibleGroupBox* self, QPainter* painter);
    friend QPaintDevice* KCollapsibleGroupBox_SuperRedirected(const KCollapsibleGroupBox* self, QPoint* offset);
    friend QPainter* KCollapsibleGroupBox_SuperSharedPainter(const KCollapsibleGroupBox* self);
    friend void KCollapsibleGroupBox_SuperInputMethodEvent(KCollapsibleGroupBox* self, QInputMethodEvent* param1);
    friend bool KCollapsibleGroupBox_SuperFocusNextPrevChild(KCollapsibleGroupBox* self, bool next);
    friend void KCollapsibleGroupBox_SuperTimerEvent(KCollapsibleGroupBox* self, QTimerEvent* event);
    friend void KCollapsibleGroupBox_SuperChildEvent(KCollapsibleGroupBox* self, QChildEvent* event);
    friend void KCollapsibleGroupBox_SuperCustomEvent(KCollapsibleGroupBox* self, QEvent* event);
    friend void KCollapsibleGroupBox_SuperConnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
    friend void KCollapsibleGroupBox_SuperDisconnectNotify(KCollapsibleGroupBox* self, const QMetaMethod* signal);
};

#endif
