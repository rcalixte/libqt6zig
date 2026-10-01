#pragma once
#ifndef EXTRAS_KXMLGUI_LIBKSHORTCUTWIDGET_HXX
#define EXTRAS_KXMLGUI_LIBKSHORTCUTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KShortcutWidget
class VirtualKShortcutWidget final : public KShortcutWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KShortcutWidget_MetaObject_Callback = QMetaObject* (*)(const KShortcutWidget*);
    using KShortcutWidget_Metacast_Callback = void* (*)(KShortcutWidget*, const char*);
    using KShortcutWidget_Metacall_Callback = int (*)(KShortcutWidget*, int, int, void**);
    using KShortcutWidget_DevType_Callback = int (*)(const KShortcutWidget*);
    using KShortcutWidget_SetVisible_Callback = void (*)(KShortcutWidget*, bool);
    using KShortcutWidget_SizeHint_Callback = QSize* (*)(const KShortcutWidget*);
    using KShortcutWidget_MinimumSizeHint_Callback = QSize* (*)(const KShortcutWidget*);
    using KShortcutWidget_HeightForWidth_Callback = int (*)(const KShortcutWidget*, int);
    using KShortcutWidget_HasHeightForWidth_Callback = bool (*)(const KShortcutWidget*);
    using KShortcutWidget_PaintEngine_Callback = QPaintEngine* (*)(const KShortcutWidget*);
    using KShortcutWidget_Event_Callback = bool (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_MousePressEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseReleaseEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseDoubleClickEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_MouseMoveEvent_Callback = void (*)(KShortcutWidget*, QMouseEvent*);
    using KShortcutWidget_WheelEvent_Callback = void (*)(KShortcutWidget*, QWheelEvent*);
    using KShortcutWidget_KeyPressEvent_Callback = void (*)(KShortcutWidget*, QKeyEvent*);
    using KShortcutWidget_KeyReleaseEvent_Callback = void (*)(KShortcutWidget*, QKeyEvent*);
    using KShortcutWidget_FocusInEvent_Callback = void (*)(KShortcutWidget*, QFocusEvent*);
    using KShortcutWidget_FocusOutEvent_Callback = void (*)(KShortcutWidget*, QFocusEvent*);
    using KShortcutWidget_EnterEvent_Callback = void (*)(KShortcutWidget*, QEnterEvent*);
    using KShortcutWidget_LeaveEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_PaintEvent_Callback = void (*)(KShortcutWidget*, QPaintEvent*);
    using KShortcutWidget_MoveEvent_Callback = void (*)(KShortcutWidget*, QMoveEvent*);
    using KShortcutWidget_ResizeEvent_Callback = void (*)(KShortcutWidget*, QResizeEvent*);
    using KShortcutWidget_CloseEvent_Callback = void (*)(KShortcutWidget*, QCloseEvent*);
    using KShortcutWidget_ContextMenuEvent_Callback = void (*)(KShortcutWidget*, QContextMenuEvent*);
    using KShortcutWidget_TabletEvent_Callback = void (*)(KShortcutWidget*, QTabletEvent*);
    using KShortcutWidget_ActionEvent_Callback = void (*)(KShortcutWidget*, QActionEvent*);
    using KShortcutWidget_DragEnterEvent_Callback = void (*)(KShortcutWidget*, QDragEnterEvent*);
    using KShortcutWidget_DragMoveEvent_Callback = void (*)(KShortcutWidget*, QDragMoveEvent*);
    using KShortcutWidget_DragLeaveEvent_Callback = void (*)(KShortcutWidget*, QDragLeaveEvent*);
    using KShortcutWidget_DropEvent_Callback = void (*)(KShortcutWidget*, QDropEvent*);
    using KShortcutWidget_ShowEvent_Callback = void (*)(KShortcutWidget*, QShowEvent*);
    using KShortcutWidget_HideEvent_Callback = void (*)(KShortcutWidget*, QHideEvent*);
    using KShortcutWidget_NativeEvent_Callback = bool (*)(KShortcutWidget*, libqt_string, void*, intptr_t*);
    using KShortcutWidget_ChangeEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_Metric_Callback = int (*)(const KShortcutWidget*, int);
    using KShortcutWidget_InitPainter_Callback = void (*)(const KShortcutWidget*, QPainter*);
    using KShortcutWidget_Redirected_Callback = QPaintDevice* (*)(const KShortcutWidget*, QPoint*);
    using KShortcutWidget_SharedPainter_Callback = QPainter* (*)(const KShortcutWidget*);
    using KShortcutWidget_InputMethodEvent_Callback = void (*)(KShortcutWidget*, QInputMethodEvent*);
    using KShortcutWidget_InputMethodQuery_Callback = QVariant* (*)(const KShortcutWidget*, int);
    using KShortcutWidget_FocusNextPrevChild_Callback = bool (*)(KShortcutWidget*, bool);
    using KShortcutWidget_EventFilter_Callback = bool (*)(KShortcutWidget*, QObject*, QEvent*);
    using KShortcutWidget_TimerEvent_Callback = void (*)(KShortcutWidget*, QTimerEvent*);
    using KShortcutWidget_ChildEvent_Callback = void (*)(KShortcutWidget*, QChildEvent*);
    using KShortcutWidget_CustomEvent_Callback = void (*)(KShortcutWidget*, QEvent*);
    using KShortcutWidget_ConnectNotify_Callback = void (*)(KShortcutWidget*, QMetaMethod*);
    using KShortcutWidget_DisconnectNotify_Callback = void (*)(KShortcutWidget*, QMetaMethod*);
    using KShortcutWidget::create;
    using KShortcutWidget::destroy;
    using KShortcutWidget::focusNextChild;
    using KShortcutWidget::focusPreviousChild;
    using KShortcutWidget::getDecodedMetricF;
    using KShortcutWidget::isSignalConnected;
    using KShortcutWidget::receivers;
    using KShortcutWidget::sender;
    using KShortcutWidget::senderSignalIndex;
    using KShortcutWidget::updateMicroFocus;

    // Instance callback storage
    KShortcutWidget_MetaObject_Callback kshortcutwidget_metaobject_callback = nullptr;
    KShortcutWidget_Metacast_Callback kshortcutwidget_metacast_callback = nullptr;
    KShortcutWidget_Metacall_Callback kshortcutwidget_metacall_callback = nullptr;
    KShortcutWidget_DevType_Callback kshortcutwidget_devtype_callback = nullptr;
    KShortcutWidget_SetVisible_Callback kshortcutwidget_setvisible_callback = nullptr;
    KShortcutWidget_SizeHint_Callback kshortcutwidget_sizehint_callback = nullptr;
    KShortcutWidget_MinimumSizeHint_Callback kshortcutwidget_minimumsizehint_callback = nullptr;
    KShortcutWidget_HeightForWidth_Callback kshortcutwidget_heightforwidth_callback = nullptr;
    KShortcutWidget_HasHeightForWidth_Callback kshortcutwidget_hasheightforwidth_callback = nullptr;
    KShortcutWidget_PaintEngine_Callback kshortcutwidget_paintengine_callback = nullptr;
    KShortcutWidget_Event_Callback kshortcutwidget_event_callback = nullptr;
    KShortcutWidget_MousePressEvent_Callback kshortcutwidget_mousepressevent_callback = nullptr;
    KShortcutWidget_MouseReleaseEvent_Callback kshortcutwidget_mousereleaseevent_callback = nullptr;
    KShortcutWidget_MouseDoubleClickEvent_Callback kshortcutwidget_mousedoubleclickevent_callback = nullptr;
    KShortcutWidget_MouseMoveEvent_Callback kshortcutwidget_mousemoveevent_callback = nullptr;
    KShortcutWidget_WheelEvent_Callback kshortcutwidget_wheelevent_callback = nullptr;
    KShortcutWidget_KeyPressEvent_Callback kshortcutwidget_keypressevent_callback = nullptr;
    KShortcutWidget_KeyReleaseEvent_Callback kshortcutwidget_keyreleaseevent_callback = nullptr;
    KShortcutWidget_FocusInEvent_Callback kshortcutwidget_focusinevent_callback = nullptr;
    KShortcutWidget_FocusOutEvent_Callback kshortcutwidget_focusoutevent_callback = nullptr;
    KShortcutWidget_EnterEvent_Callback kshortcutwidget_enterevent_callback = nullptr;
    KShortcutWidget_LeaveEvent_Callback kshortcutwidget_leaveevent_callback = nullptr;
    KShortcutWidget_PaintEvent_Callback kshortcutwidget_paintevent_callback = nullptr;
    KShortcutWidget_MoveEvent_Callback kshortcutwidget_moveevent_callback = nullptr;
    KShortcutWidget_ResizeEvent_Callback kshortcutwidget_resizeevent_callback = nullptr;
    KShortcutWidget_CloseEvent_Callback kshortcutwidget_closeevent_callback = nullptr;
    KShortcutWidget_ContextMenuEvent_Callback kshortcutwidget_contextmenuevent_callback = nullptr;
    KShortcutWidget_TabletEvent_Callback kshortcutwidget_tabletevent_callback = nullptr;
    KShortcutWidget_ActionEvent_Callback kshortcutwidget_actionevent_callback = nullptr;
    KShortcutWidget_DragEnterEvent_Callback kshortcutwidget_dragenterevent_callback = nullptr;
    KShortcutWidget_DragMoveEvent_Callback kshortcutwidget_dragmoveevent_callback = nullptr;
    KShortcutWidget_DragLeaveEvent_Callback kshortcutwidget_dragleaveevent_callback = nullptr;
    KShortcutWidget_DropEvent_Callback kshortcutwidget_dropevent_callback = nullptr;
    KShortcutWidget_ShowEvent_Callback kshortcutwidget_showevent_callback = nullptr;
    KShortcutWidget_HideEvent_Callback kshortcutwidget_hideevent_callback = nullptr;
    KShortcutWidget_NativeEvent_Callback kshortcutwidget_nativeevent_callback = nullptr;
    KShortcutWidget_ChangeEvent_Callback kshortcutwidget_changeevent_callback = nullptr;
    KShortcutWidget_Metric_Callback kshortcutwidget_metric_callback = nullptr;
    KShortcutWidget_InitPainter_Callback kshortcutwidget_initpainter_callback = nullptr;
    KShortcutWidget_Redirected_Callback kshortcutwidget_redirected_callback = nullptr;
    KShortcutWidget_SharedPainter_Callback kshortcutwidget_sharedpainter_callback = nullptr;
    KShortcutWidget_InputMethodEvent_Callback kshortcutwidget_inputmethodevent_callback = nullptr;
    KShortcutWidget_InputMethodQuery_Callback kshortcutwidget_inputmethodquery_callback = nullptr;
    KShortcutWidget_FocusNextPrevChild_Callback kshortcutwidget_focusnextprevchild_callback = nullptr;
    KShortcutWidget_EventFilter_Callback kshortcutwidget_eventfilter_callback = nullptr;
    KShortcutWidget_TimerEvent_Callback kshortcutwidget_timerevent_callback = nullptr;
    KShortcutWidget_ChildEvent_Callback kshortcutwidget_childevent_callback = nullptr;
    KShortcutWidget_CustomEvent_Callback kshortcutwidget_customevent_callback = nullptr;
    KShortcutWidget_ConnectNotify_Callback kshortcutwidget_connectnotify_callback = nullptr;
    KShortcutWidget_DisconnectNotify_Callback kshortcutwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KShortcutWidget {
        using KShortcutWidget::actionEvent;
        using KShortcutWidget::changeEvent;
        using KShortcutWidget::childEvent;
        using KShortcutWidget::closeEvent;
        using KShortcutWidget::connectNotify;
        using KShortcutWidget::contextMenuEvent;
        using KShortcutWidget::customEvent;
        using KShortcutWidget::disconnectNotify;
        using KShortcutWidget::dragEnterEvent;
        using KShortcutWidget::dragLeaveEvent;
        using KShortcutWidget::dragMoveEvent;
        using KShortcutWidget::dropEvent;
        using KShortcutWidget::enterEvent;
        using KShortcutWidget::event;
        using KShortcutWidget::focusInEvent;
        using KShortcutWidget::focusNextPrevChild;
        using KShortcutWidget::focusOutEvent;
        using KShortcutWidget::hideEvent;
        using KShortcutWidget::initPainter;
        using KShortcutWidget::inputMethodEvent;
        using KShortcutWidget::keyPressEvent;
        using KShortcutWidget::keyReleaseEvent;
        using KShortcutWidget::leaveEvent;
        using KShortcutWidget::metric;
        using KShortcutWidget::mouseDoubleClickEvent;
        using KShortcutWidget::mouseMoveEvent;
        using KShortcutWidget::mousePressEvent;
        using KShortcutWidget::mouseReleaseEvent;
        using KShortcutWidget::moveEvent;
        using KShortcutWidget::nativeEvent;
        using KShortcutWidget::paintEvent;
        using KShortcutWidget::redirected;
        using KShortcutWidget::resizeEvent;
        using KShortcutWidget::sharedPainter;
        using KShortcutWidget::showEvent;
        using KShortcutWidget::tabletEvent;
        using KShortcutWidget::timerEvent;
        using KShortcutWidget::wheelEvent;
    };

    VirtualKShortcutWidget(QWidget* parent) : KShortcutWidget(parent) {};
    VirtualKShortcutWidget() : KShortcutWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kshortcutwidget_metaobject_callback) {
            QMetaObject* callback_ret = kshortcutwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KShortcutWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kshortcutwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kshortcutwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kshortcutwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kshortcutwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kshortcutwidget_devtype_callback) {
            int callback_ret = kshortcutwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kshortcutwidget_setvisible_callback) {
            bool cbval1 = visible;
            kshortcutwidget_setvisible_callback(this, cbval1);
            return;
        }
        KShortcutWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kshortcutwidget_sizehint_callback) {
            QSize* callback_ret = kshortcutwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kshortcutwidget_minimumsizehint_callback) {
            QSize* callback_ret = kshortcutwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kshortcutwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kshortcutwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kshortcutwidget_hasheightforwidth_callback) {
            bool callback_ret = kshortcutwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KShortcutWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kshortcutwidget_paintengine_callback) {
            QPaintEngine* callback_ret = kshortcutwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KShortcutWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kshortcutwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kshortcutwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kshortcutwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kshortcutwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kshortcutwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kshortcutwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kshortcutwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kshortcutwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kshortcutwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kshortcutwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kshortcutwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kshortcutwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kshortcutwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kshortcutwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kshortcutwidget_enterevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kshortcutwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kshortcutwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kshortcutwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kshortcutwidget_paintevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kshortcutwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kshortcutwidget_moveevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kshortcutwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kshortcutwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kshortcutwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kshortcutwidget_closeevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kshortcutwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kshortcutwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kshortcutwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kshortcutwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kshortcutwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kshortcutwidget_actionevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kshortcutwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kshortcutwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kshortcutwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kshortcutwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kshortcutwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kshortcutwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kshortcutwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kshortcutwidget_dropevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kshortcutwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kshortcutwidget_showevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kshortcutwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kshortcutwidget_hideevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kshortcutwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kshortcutwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KShortcutWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kshortcutwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kshortcutwidget_changeevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kshortcutwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kshortcutwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KShortcutWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kshortcutwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kshortcutwidget_initpainter_callback(this, cbval1);
            return;
        }
        KShortcutWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kshortcutwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kshortcutwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kshortcutwidget_sharedpainter_callback) {
            QPainter* callback_ret = kshortcutwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KShortcutWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kshortcutwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kshortcutwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kshortcutwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kshortcutwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KShortcutWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kshortcutwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kshortcutwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KShortcutWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kshortcutwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kshortcutwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KShortcutWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kshortcutwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kshortcutwidget_timerevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kshortcutwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kshortcutwidget_childevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kshortcutwidget_customevent_callback) {
            QEvent* cbval1 = event;
            kshortcutwidget_customevent_callback(this, cbval1);
            return;
        }
        KShortcutWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kshortcutwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KShortcutWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kshortcutwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kshortcutwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KShortcutWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KShortcutWidget_SuperEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_SuperMousePressEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event);
    friend void KShortcutWidget_SuperWheelEvent(KShortcutWidget* self, QWheelEvent* event);
    friend void KShortcutWidget_SuperKeyPressEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_SuperKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event);
    friend void KShortcutWidget_SuperFocusInEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_SuperFocusOutEvent(KShortcutWidget* self, QFocusEvent* event);
    friend void KShortcutWidget_SuperEnterEvent(KShortcutWidget* self, QEnterEvent* event);
    friend void KShortcutWidget_SuperLeaveEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_SuperPaintEvent(KShortcutWidget* self, QPaintEvent* event);
    friend void KShortcutWidget_SuperMoveEvent(KShortcutWidget* self, QMoveEvent* event);
    friend void KShortcutWidget_SuperResizeEvent(KShortcutWidget* self, QResizeEvent* event);
    friend void KShortcutWidget_SuperCloseEvent(KShortcutWidget* self, QCloseEvent* event);
    friend void KShortcutWidget_SuperContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event);
    friend void KShortcutWidget_SuperTabletEvent(KShortcutWidget* self, QTabletEvent* event);
    friend void KShortcutWidget_SuperActionEvent(KShortcutWidget* self, QActionEvent* event);
    friend void KShortcutWidget_SuperDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event);
    friend void KShortcutWidget_SuperDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event);
    friend void KShortcutWidget_SuperDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event);
    friend void KShortcutWidget_SuperDropEvent(KShortcutWidget* self, QDropEvent* event);
    friend void KShortcutWidget_SuperShowEvent(KShortcutWidget* self, QShowEvent* event);
    friend void KShortcutWidget_SuperHideEvent(KShortcutWidget* self, QHideEvent* event);
    friend bool KShortcutWidget_SuperNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KShortcutWidget_SuperChangeEvent(KShortcutWidget* self, QEvent* param1);
    friend int KShortcutWidget_SuperMetric(const KShortcutWidget* self, int param1);
    friend void KShortcutWidget_SuperInitPainter(const KShortcutWidget* self, QPainter* painter);
    friend QPaintDevice* KShortcutWidget_SuperRedirected(const KShortcutWidget* self, QPoint* offset);
    friend QPainter* KShortcutWidget_SuperSharedPainter(const KShortcutWidget* self);
    friend void KShortcutWidget_SuperInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1);
    friend bool KShortcutWidget_SuperFocusNextPrevChild(KShortcutWidget* self, bool next);
    friend void KShortcutWidget_SuperTimerEvent(KShortcutWidget* self, QTimerEvent* event);
    friend void KShortcutWidget_SuperChildEvent(KShortcutWidget* self, QChildEvent* event);
    friend void KShortcutWidget_SuperCustomEvent(KShortcutWidget* self, QEvent* event);
    friend void KShortcutWidget_SuperConnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
    friend void KShortcutWidget_SuperDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal);
};

#endif
