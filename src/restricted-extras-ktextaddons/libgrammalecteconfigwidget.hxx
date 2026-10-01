#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTECONFIGWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTECONFIGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteConfigWidget
class VirtualTextGrammarCheckGrammalecteConfigWidget final : public TextGrammarCheck::GrammalecteConfigWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteConfigWidget*, const char*);
    using TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteConfigWidget*, int, int, void**);
    using TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, bool);
    using TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QActionEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QDropEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QShowEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QHideEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteConfigWidget*, QPainter*);
    using TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteConfigWidget*, QPoint*);
    using TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__GrammalecteConfigWidget*);
    using TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteConfigWidget*, int);
    using TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, bool);
    using TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteConfigWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QChildEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteConfigWidget*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteConfigWidget::create;
    using TextGrammarCheck::GrammalecteConfigWidget::destroy;
    using TextGrammarCheck::GrammalecteConfigWidget::focusNextChild;
    using TextGrammarCheck::GrammalecteConfigWidget::focusPreviousChild;
    using TextGrammarCheck::GrammalecteConfigWidget::getDecodedMetricF;
    using TextGrammarCheck::GrammalecteConfigWidget::isSignalConnected;
    using TextGrammarCheck::GrammalecteConfigWidget::receivers;
    using TextGrammarCheck::GrammalecteConfigWidget::sender;
    using TextGrammarCheck::GrammalecteConfigWidget::senderSignalIndex;
    using TextGrammarCheck::GrammalecteConfigWidget::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__GrammalecteConfigWidget_MetaObject_Callback textgrammarcheck__grammalecteconfigwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metacast_Callback textgrammarcheck__grammalecteconfigwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metacall_Callback textgrammarcheck__grammalecteconfigwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DevType_Callback textgrammarcheck__grammalecteconfigwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SetVisible_Callback textgrammarcheck__grammalecteconfigwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SizeHint_Callback textgrammarcheck__grammalecteconfigwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MinimumSizeHint_Callback textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HeightForWidth_Callback textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HasHeightForWidth_Callback textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_PaintEngine_Callback textgrammarcheck__grammalecteconfigwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Event_Callback textgrammarcheck__grammalecteconfigwidget_event_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MousePressEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseReleaseEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MouseMoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_WheelEvent_Callback textgrammarcheck__grammalecteconfigwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_KeyPressEvent_Callback textgrammarcheck__grammalecteconfigwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_KeyReleaseEvent_Callback textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusInEvent_Callback textgrammarcheck__grammalecteconfigwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusOutEvent_Callback textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_EnterEvent_Callback textgrammarcheck__grammalecteconfigwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_LeaveEvent_Callback textgrammarcheck__grammalecteconfigwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_PaintEvent_Callback textgrammarcheck__grammalecteconfigwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_MoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ResizeEvent_Callback textgrammarcheck__grammalecteconfigwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_CloseEvent_Callback textgrammarcheck__grammalecteconfigwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ContextMenuEvent_Callback textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_TabletEvent_Callback textgrammarcheck__grammalecteconfigwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ActionEvent_Callback textgrammarcheck__grammalecteconfigwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragEnterEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragMoveEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DragLeaveEvent_Callback textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DropEvent_Callback textgrammarcheck__grammalecteconfigwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ShowEvent_Callback textgrammarcheck__grammalecteconfigwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_HideEvent_Callback textgrammarcheck__grammalecteconfigwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_NativeEvent_Callback textgrammarcheck__grammalecteconfigwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ChangeEvent_Callback textgrammarcheck__grammalecteconfigwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Metric_Callback textgrammarcheck__grammalecteconfigwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InitPainter_Callback textgrammarcheck__grammalecteconfigwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_Redirected_Callback textgrammarcheck__grammalecteconfigwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_SharedPainter_Callback textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InputMethodEvent_Callback textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_InputMethodQuery_Callback textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_FocusNextPrevChild_Callback textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_EventFilter_Callback textgrammarcheck__grammalecteconfigwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_TimerEvent_Callback textgrammarcheck__grammalecteconfigwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ChildEvent_Callback textgrammarcheck__grammalecteconfigwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_CustomEvent_Callback textgrammarcheck__grammalecteconfigwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_ConnectNotify_Callback textgrammarcheck__grammalecteconfigwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteConfigWidget_DisconnectNotify_Callback textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteConfigWidget {
        using TextGrammarCheck::GrammalecteConfigWidget::actionEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::changeEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::childEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::closeEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::connectNotify;
        using TextGrammarCheck::GrammalecteConfigWidget::contextMenuEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::customEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::disconnectNotify;
        using TextGrammarCheck::GrammalecteConfigWidget::dragEnterEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::dragLeaveEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::dragMoveEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::dropEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::enterEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::event;
        using TextGrammarCheck::GrammalecteConfigWidget::focusInEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::focusNextPrevChild;
        using TextGrammarCheck::GrammalecteConfigWidget::focusOutEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::hideEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::initPainter;
        using TextGrammarCheck::GrammalecteConfigWidget::inputMethodEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::keyPressEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::keyReleaseEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::leaveEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::metric;
        using TextGrammarCheck::GrammalecteConfigWidget::mouseDoubleClickEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::mouseMoveEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::mousePressEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::mouseReleaseEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::moveEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::nativeEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::paintEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::redirected;
        using TextGrammarCheck::GrammalecteConfigWidget::resizeEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::sharedPainter;
        using TextGrammarCheck::GrammalecteConfigWidget::showEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::tabletEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::timerEvent;
        using TextGrammarCheck::GrammalecteConfigWidget::wheelEvent;
    };

    VirtualTextGrammarCheckGrammalecteConfigWidget(QWidget* parent) : TextGrammarCheck::GrammalecteConfigWidget(parent) {};
    VirtualTextGrammarCheckGrammalecteConfigWidget() : TextGrammarCheck::GrammalecteConfigWidget() {};
    VirtualTextGrammarCheckGrammalecteConfigWidget(QWidget* parent, bool disableMessageBox) : TextGrammarCheck::GrammalecteConfigWidget(parent, disableMessageBox) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteconfigwidget_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalecteconfigwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalecteconfigwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteconfigwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalecteconfigwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteconfigwidget_devtype_callback) {
            int callback_ret = textgrammarcheck__grammalecteconfigwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteconfigwidget_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__grammalecteconfigwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteconfigwidget_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteconfigwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteconfigwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__grammalecteconfigwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__grammalecteconfigwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteconfigwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__grammalecteconfigwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalecteconfigwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteconfigwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__grammalecteconfigwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__grammalecteconfigwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteconfigwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__grammalecteconfigwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteconfigwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__grammalecteconfigwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__grammalecteconfigwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__grammalecteconfigwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__grammalecteconfigwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__grammalecteconfigwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammalecteconfigwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteconfigwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteconfigwidget_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteconfigwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteconfigwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteConfigWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMousePressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperWheelEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyPressEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusInEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperFocusOutEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperEnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperLeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperPaintEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperResizeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperCloseEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperContextMenuEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperTabletEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperActionEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragEnterEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragMoveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDropEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperShowEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperHideEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperNativeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperChangeEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteConfigWidget_SuperMetric(const TextGrammarCheck::GrammalecteConfigWidget* self, int param1);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperInitPainter(const TextGrammarCheck::GrammalecteConfigWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteConfigWidget_SuperRedirected(const TextGrammarCheck::GrammalecteConfigWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteConfigWidget_SuperSharedPainter(const TextGrammarCheck::GrammalecteConfigWidget* self);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperInputMethodEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteConfigWidget* self, bool next);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperTimerEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperChildEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperCustomEvent(TextGrammarCheck::GrammalecteConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperConnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteConfigWidget_SuperDisconnectNotify(TextGrammarCheck::GrammalecteConfigWidget* self, const QMetaMethod* signal);
};

#endif
