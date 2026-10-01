#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBAUTOCORRECTIONWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextAutoCorrectionWidgets::AutoCorrectionWidget
class VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget final : public TextAutoCorrectionWidgets::AutoCorrectionWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_Callback = QMetaObject* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_Callback = void* (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, const char*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_Callback = int (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, int, int, void**);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_Callback = QSize* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_Callback = bool (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_Event_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMouseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QWheelEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QKeyEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QFocusEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QPaintEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QResizeEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QCloseEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QContextMenuEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QTabletEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QActionEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QDragEnterEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QDragMoveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QDragLeaveEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QDropEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QShowEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QHideEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, libqt_string, void*, intptr_t*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_Callback = int (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_Callback = void (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*, QPainter*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_Callback = QPaintDevice* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*, QPoint*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_Callback = QPainter* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QInputMethodEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_Callback = QVariant* (*)(const TextAutoCorrectionWidgets__AutoCorrectionWidget*, int);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, bool);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_Callback = bool (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QObject*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QTimerEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QChildEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QEvent*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMetaMethod*);
    using TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_Callback = void (*)(TextAutoCorrectionWidgets__AutoCorrectionWidget*, QMetaMethod*);
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::create;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::destroy;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextChild;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::focusPreviousChild;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::getDecodedMetricF;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::isSignalConnected;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::receivers;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::sender;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::senderSignalIndex;
    using TextAutoCorrectionWidgets::AutoCorrectionWidget::updateMicroFocus;

    // Instance callback storage
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MetaObject_Callback textautocorrectionwidgets__autocorrectionwidget_metaobject_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacast_Callback textautocorrectionwidgets__autocorrectionwidget_metacast_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_Metacall_Callback textautocorrectionwidgets__autocorrectionwidget_metacall_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DevType_Callback textautocorrectionwidgets__autocorrectionwidget_devtype_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_SetVisible_Callback textautocorrectionwidgets__autocorrectionwidget_setvisible_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_SizeHint_Callback textautocorrectionwidgets__autocorrectionwidget_sizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MinimumSizeHint_Callback textautocorrectionwidgets__autocorrectionwidget_minimumsizehint_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_HeightForWidth_Callback textautocorrectionwidgets__autocorrectionwidget_heightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_HasHeightForWidth_Callback textautocorrectionwidgets__autocorrectionwidget_hasheightforwidth_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEngine_Callback textautocorrectionwidgets__autocorrectionwidget_paintengine_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_Event_Callback textautocorrectionwidgets__autocorrectionwidget_event_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MousePressEvent_Callback textautocorrectionwidgets__autocorrectionwidget_mousepressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseReleaseEvent_Callback textautocorrectionwidgets__autocorrectionwidget_mousereleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseDoubleClickEvent_Callback textautocorrectionwidgets__autocorrectionwidget_mousedoubleclickevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MouseMoveEvent_Callback textautocorrectionwidgets__autocorrectionwidget_mousemoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_WheelEvent_Callback textautocorrectionwidgets__autocorrectionwidget_wheelevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyPressEvent_Callback textautocorrectionwidgets__autocorrectionwidget_keypressevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_KeyReleaseEvent_Callback textautocorrectionwidgets__autocorrectionwidget_keyreleaseevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusInEvent_Callback textautocorrectionwidgets__autocorrectionwidget_focusinevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusOutEvent_Callback textautocorrectionwidgets__autocorrectionwidget_focusoutevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_EnterEvent_Callback textautocorrectionwidgets__autocorrectionwidget_enterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_LeaveEvent_Callback textautocorrectionwidgets__autocorrectionwidget_leaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_PaintEvent_Callback textautocorrectionwidgets__autocorrectionwidget_paintevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_MoveEvent_Callback textautocorrectionwidgets__autocorrectionwidget_moveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ResizeEvent_Callback textautocorrectionwidgets__autocorrectionwidget_resizeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_CloseEvent_Callback textautocorrectionwidgets__autocorrectionwidget_closeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ContextMenuEvent_Callback textautocorrectionwidgets__autocorrectionwidget_contextmenuevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_TabletEvent_Callback textautocorrectionwidgets__autocorrectionwidget_tabletevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ActionEvent_Callback textautocorrectionwidgets__autocorrectionwidget_actionevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DragEnterEvent_Callback textautocorrectionwidgets__autocorrectionwidget_dragenterevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DragMoveEvent_Callback textautocorrectionwidgets__autocorrectionwidget_dragmoveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DragLeaveEvent_Callback textautocorrectionwidgets__autocorrectionwidget_dragleaveevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DropEvent_Callback textautocorrectionwidgets__autocorrectionwidget_dropevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ShowEvent_Callback textautocorrectionwidgets__autocorrectionwidget_showevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_HideEvent_Callback textautocorrectionwidgets__autocorrectionwidget_hideevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_NativeEvent_Callback textautocorrectionwidgets__autocorrectionwidget_nativeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ChangeEvent_Callback textautocorrectionwidgets__autocorrectionwidget_changeevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_Metric_Callback textautocorrectionwidgets__autocorrectionwidget_metric_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_InitPainter_Callback textautocorrectionwidgets__autocorrectionwidget_initpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_Redirected_Callback textautocorrectionwidgets__autocorrectionwidget_redirected_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_SharedPainter_Callback textautocorrectionwidgets__autocorrectionwidget_sharedpainter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodEvent_Callback textautocorrectionwidgets__autocorrectionwidget_inputmethodevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_InputMethodQuery_Callback textautocorrectionwidgets__autocorrectionwidget_inputmethodquery_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_FocusNextPrevChild_Callback textautocorrectionwidgets__autocorrectionwidget_focusnextprevchild_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_EventFilter_Callback textautocorrectionwidgets__autocorrectionwidget_eventfilter_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_TimerEvent_Callback textautocorrectionwidgets__autocorrectionwidget_timerevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ChildEvent_Callback textautocorrectionwidgets__autocorrectionwidget_childevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_CustomEvent_Callback textautocorrectionwidgets__autocorrectionwidget_customevent_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_ConnectNotify_Callback textautocorrectionwidgets__autocorrectionwidget_connectnotify_callback = nullptr;
    TextAutoCorrectionWidgets__AutoCorrectionWidget_DisconnectNotify_Callback textautocorrectionwidgets__autocorrectionwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextAutoCorrectionWidgets::AutoCorrectionWidget {
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::actionEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::changeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::childEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::closeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::connectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::contextMenuEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::customEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::disconnectNotify;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::dragEnterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::dragLeaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::dragMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::dropEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::enterEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::event;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::focusInEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::focusNextPrevChild;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::focusOutEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::hideEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::initPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::inputMethodEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::keyPressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::keyReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::leaveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::metric;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseDoubleClickEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseMoveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::mousePressEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::mouseReleaseEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::moveEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::nativeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::paintEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::redirected;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::resizeEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::sharedPainter;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::showEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::tabletEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::timerEvent;
        using TextAutoCorrectionWidgets::AutoCorrectionWidget::wheelEvent;
    };

    VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget(QWidget* parent) : TextAutoCorrectionWidgets::AutoCorrectionWidget(parent) {};
    VirtualTextAutoCorrectionWidgetsAutoCorrectionWidget() : TextAutoCorrectionWidgets::AutoCorrectionWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_metaobject_callback) {
            QMetaObject* callback_ret = textautocorrectionwidgets__autocorrectionwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textautocorrectionwidgets__autocorrectionwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textautocorrectionwidgets__autocorrectionwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textautocorrectionwidgets__autocorrectionwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textautocorrectionwidgets__autocorrectionwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_devtype_callback) {
            int callback_ret = textautocorrectionwidgets__autocorrectionwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textautocorrectionwidgets__autocorrectionwidget_setvisible_callback) {
            bool cbval1 = visible;
            textautocorrectionwidgets__autocorrectionwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_sizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectionwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_minimumsizehint_callback) {
            QSize* callback_ret = textautocorrectionwidgets__autocorrectionwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textautocorrectionwidgets__autocorrectionwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textautocorrectionwidgets__autocorrectionwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_hasheightforwidth_callback) {
            bool callback_ret = textautocorrectionwidgets__autocorrectionwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textautocorrectionwidgets__autocorrectionwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textautocorrectionwidgets__autocorrectionwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_showevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textautocorrectionwidgets__autocorrectionwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textautocorrectionwidgets__autocorrectionwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectionwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textautocorrectionwidgets__autocorrectionwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textautocorrectionwidgets__autocorrectionwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textautocorrectionwidgets__autocorrectionwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textautocorrectionwidgets__autocorrectionwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textautocorrectionwidgets__autocorrectionwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textautocorrectionwidgets__autocorrectionwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textautocorrectionwidgets__autocorrectionwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textautocorrectionwidgets__autocorrectionwidget_sharedpainter_callback) {
            QPainter* callback_ret = textautocorrectionwidgets__autocorrectionwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textautocorrectionwidgets__autocorrectionwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textautocorrectionwidgets__autocorrectionwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textautocorrectionwidgets__autocorrectionwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textautocorrectionwidgets__autocorrectionwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textautocorrectionwidgets__autocorrectionwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textautocorrectionwidgets__autocorrectionwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textautocorrectionwidgets__autocorrectionwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextAutoCorrectionWidgets__AutoCorrectionWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_childevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textautocorrectionwidgets__autocorrectionwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textautocorrectionwidgets__autocorrectionwidget_customevent_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectionwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectionwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textautocorrectionwidgets__autocorrectionwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textautocorrectionwidgets__autocorrectionwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextAutoCorrectionWidgets__AutoCorrectionWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMousePressEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseDoubleClickEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMouseMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QMouseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperWheelEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QWheelEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyPressEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QKeyEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperKeyReleaseEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QKeyEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusInEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QFocusEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusOutEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QFocusEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QEnterEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperPaintEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QPaintEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QMoveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperResizeEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QResizeEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCloseEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QCloseEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperContextMenuEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QContextMenuEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTabletEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QTabletEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperActionEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QActionEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragEnterEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QDragEnterEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragMoveEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QDragMoveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDragLeaveEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QDragLeaveEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDropEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QDropEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperShowEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QShowEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperHideEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QHideEvent* event);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperNativeEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChangeEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QEvent* param1);
    friend int TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperMetric(const TextAutoCorrectionWidgets::AutoCorrectionWidget* self, int param1);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInitPainter(const TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QPainter* painter);
    friend QPaintDevice* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperRedirected(const TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QPoint* offset);
    friend QPainter* TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperSharedPainter(const TextAutoCorrectionWidgets::AutoCorrectionWidget* self);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperInputMethodEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QInputMethodEvent* param1);
    friend bool TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperFocusNextPrevChild(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, bool next);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperTimerEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QTimerEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperChildEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QChildEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperCustomEvent(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, QEvent* event);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperConnectNotify(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, const QMetaMethod* signal);
    friend void TextAutoCorrectionWidgets__AutoCorrectionWidget_SuperDisconnectNotify(TextAutoCorrectionWidgets::AutoCorrectionWidget* self, const QMetaMethod* signal);
};

#endif
