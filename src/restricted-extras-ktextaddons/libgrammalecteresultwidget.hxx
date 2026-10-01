#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTERESULTWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMALECTERESULTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammalecteResultWidget
class VirtualTextGrammarCheckGrammalecteResultWidget final : public TextGrammarCheck::GrammalecteResultWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammalecteResultWidget*, const char*);
    using TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammalecteResultWidget*, int, int, void**);
    using TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_DevType_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, bool);
    using TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QActionEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QDropEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QShowEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QHideEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammalecteResultWidget*, QPainter*);
    using TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammalecteResultWidget*, QPoint*);
    using TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__GrammalecteResultWidget*);
    using TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammalecteResultWidget*, int);
    using TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, bool);
    using TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammalecteResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QChildEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QEvent*);
    using TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammalecteResultWidget*, QMetaMethod*);
    using TextGrammarCheck::GrammalecteResultWidget::create;
    using TextGrammarCheck::GrammalecteResultWidget::destroy;
    using TextGrammarCheck::GrammalecteResultWidget::focusNextChild;
    using TextGrammarCheck::GrammalecteResultWidget::focusPreviousChild;
    using TextGrammarCheck::GrammalecteResultWidget::getDecodedMetricF;
    using TextGrammarCheck::GrammalecteResultWidget::isSignalConnected;
    using TextGrammarCheck::GrammalecteResultWidget::receivers;
    using TextGrammarCheck::GrammalecteResultWidget::sender;
    using TextGrammarCheck::GrammalecteResultWidget::senderSignalIndex;
    using TextGrammarCheck::GrammalecteResultWidget::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__GrammalecteResultWidget_MetaObject_Callback textgrammarcheck__grammalecteresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metacast_Callback textgrammarcheck__grammalecteresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metacall_Callback textgrammarcheck__grammalecteresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CheckGrammar_Callback textgrammarcheck__grammalecteresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_AddExtraWidget_Callback textgrammarcheck__grammalecteresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DevType_Callback textgrammarcheck__grammalecteresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SetVisible_Callback textgrammarcheck__grammalecteresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SizeHint_Callback textgrammarcheck__grammalecteresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MinimumSizeHint_Callback textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HeightForWidth_Callback textgrammarcheck__grammalecteresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HasHeightForWidth_Callback textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_PaintEngine_Callback textgrammarcheck__grammalecteresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Event_Callback textgrammarcheck__grammalecteresultwidget_event_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MousePressEvent_Callback textgrammarcheck__grammalecteresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseReleaseEvent_Callback textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MouseMoveEvent_Callback textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_WheelEvent_Callback textgrammarcheck__grammalecteresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_KeyPressEvent_Callback textgrammarcheck__grammalecteresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_KeyReleaseEvent_Callback textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusInEvent_Callback textgrammarcheck__grammalecteresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusOutEvent_Callback textgrammarcheck__grammalecteresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_EnterEvent_Callback textgrammarcheck__grammalecteresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_LeaveEvent_Callback textgrammarcheck__grammalecteresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_PaintEvent_Callback textgrammarcheck__grammalecteresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_MoveEvent_Callback textgrammarcheck__grammalecteresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ResizeEvent_Callback textgrammarcheck__grammalecteresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CloseEvent_Callback textgrammarcheck__grammalecteresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ContextMenuEvent_Callback textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_TabletEvent_Callback textgrammarcheck__grammalecteresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ActionEvent_Callback textgrammarcheck__grammalecteresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragEnterEvent_Callback textgrammarcheck__grammalecteresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragMoveEvent_Callback textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DragLeaveEvent_Callback textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DropEvent_Callback textgrammarcheck__grammalecteresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ShowEvent_Callback textgrammarcheck__grammalecteresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_HideEvent_Callback textgrammarcheck__grammalecteresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_NativeEvent_Callback textgrammarcheck__grammalecteresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ChangeEvent_Callback textgrammarcheck__grammalecteresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Metric_Callback textgrammarcheck__grammalecteresultwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InitPainter_Callback textgrammarcheck__grammalecteresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_Redirected_Callback textgrammarcheck__grammalecteresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_SharedPainter_Callback textgrammarcheck__grammalecteresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InputMethodEvent_Callback textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_InputMethodQuery_Callback textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_FocusNextPrevChild_Callback textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_EventFilter_Callback textgrammarcheck__grammalecteresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_TimerEvent_Callback textgrammarcheck__grammalecteresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ChildEvent_Callback textgrammarcheck__grammalecteresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_CustomEvent_Callback textgrammarcheck__grammalecteresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_ConnectNotify_Callback textgrammarcheck__grammalecteresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammalecteResultWidget_DisconnectNotify_Callback textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammalecteResultWidget {
        using TextGrammarCheck::GrammalecteResultWidget::actionEvent;
        using TextGrammarCheck::GrammalecteResultWidget::addExtraWidget;
        using TextGrammarCheck::GrammalecteResultWidget::changeEvent;
        using TextGrammarCheck::GrammalecteResultWidget::childEvent;
        using TextGrammarCheck::GrammalecteResultWidget::closeEvent;
        using TextGrammarCheck::GrammalecteResultWidget::connectNotify;
        using TextGrammarCheck::GrammalecteResultWidget::contextMenuEvent;
        using TextGrammarCheck::GrammalecteResultWidget::customEvent;
        using TextGrammarCheck::GrammalecteResultWidget::disconnectNotify;
        using TextGrammarCheck::GrammalecteResultWidget::dragEnterEvent;
        using TextGrammarCheck::GrammalecteResultWidget::dragLeaveEvent;
        using TextGrammarCheck::GrammalecteResultWidget::dragMoveEvent;
        using TextGrammarCheck::GrammalecteResultWidget::dropEvent;
        using TextGrammarCheck::GrammalecteResultWidget::enterEvent;
        using TextGrammarCheck::GrammalecteResultWidget::event;
        using TextGrammarCheck::GrammalecteResultWidget::focusInEvent;
        using TextGrammarCheck::GrammalecteResultWidget::focusNextPrevChild;
        using TextGrammarCheck::GrammalecteResultWidget::focusOutEvent;
        using TextGrammarCheck::GrammalecteResultWidget::hideEvent;
        using TextGrammarCheck::GrammalecteResultWidget::initPainter;
        using TextGrammarCheck::GrammalecteResultWidget::inputMethodEvent;
        using TextGrammarCheck::GrammalecteResultWidget::keyPressEvent;
        using TextGrammarCheck::GrammalecteResultWidget::keyReleaseEvent;
        using TextGrammarCheck::GrammalecteResultWidget::leaveEvent;
        using TextGrammarCheck::GrammalecteResultWidget::metric;
        using TextGrammarCheck::GrammalecteResultWidget::mouseDoubleClickEvent;
        using TextGrammarCheck::GrammalecteResultWidget::mouseMoveEvent;
        using TextGrammarCheck::GrammalecteResultWidget::mousePressEvent;
        using TextGrammarCheck::GrammalecteResultWidget::mouseReleaseEvent;
        using TextGrammarCheck::GrammalecteResultWidget::moveEvent;
        using TextGrammarCheck::GrammalecteResultWidget::nativeEvent;
        using TextGrammarCheck::GrammalecteResultWidget::paintEvent;
        using TextGrammarCheck::GrammalecteResultWidget::redirected;
        using TextGrammarCheck::GrammalecteResultWidget::resizeEvent;
        using TextGrammarCheck::GrammalecteResultWidget::sharedPainter;
        using TextGrammarCheck::GrammalecteResultWidget::showEvent;
        using TextGrammarCheck::GrammalecteResultWidget::tabletEvent;
        using TextGrammarCheck::GrammalecteResultWidget::timerEvent;
        using TextGrammarCheck::GrammalecteResultWidget::wheelEvent;
    };

    VirtualTextGrammarCheckGrammalecteResultWidget(QWidget* parent) : TextGrammarCheck::GrammalecteResultWidget(parent) {};
    VirtualTextGrammarCheckGrammalecteResultWidget() : TextGrammarCheck::GrammalecteResultWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammalecteresultwidget_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammalecteresultwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammalecteresultwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammalecteresultwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammalecteresultwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        if (textgrammarcheck__grammalecteresultwidget_checkgrammar_callback) {
            textgrammarcheck__grammalecteresultwidget_checkgrammar_callback(this);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::checkGrammar();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__grammalecteresultwidget_addextrawidget_callback) {
            textgrammarcheck__grammalecteresultwidget_addextrawidget_callback(this);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammalecteresultwidget_devtype_callback) {
            int callback_ret = textgrammarcheck__grammalecteresultwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammalecteresultwidget_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__grammalecteresultwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammalecteresultwidget_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteresultwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammalecteresultwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__grammalecteresultwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__grammalecteresultwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammalecteresultwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__grammalecteresultwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammalecteresultwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammalecteresultwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__grammalecteresultwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__grammalecteresultwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__grammalecteresultwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammalecteResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammalecteresultwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__grammalecteresultwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammalecteresultwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__grammalecteresultwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammalecteresultwidget_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__grammalecteresultwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__grammalecteresultwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__grammalecteresultwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammalecteResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__grammalecteresultwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammalecteresultwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammalecteResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammalecteresultwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammalecteresultwidget_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteresultwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammalecteresultwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammalecteResultWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperAddExtraWidget(TextGrammarCheck::GrammalecteResultWidget* self);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMousePressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperWheelEvent(TextGrammarCheck::GrammalecteResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperKeyPressEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperFocusInEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperFocusOutEvent(TextGrammarCheck::GrammalecteResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperEnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperLeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperPaintEvent(TextGrammarCheck::GrammalecteResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperResizeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperCloseEvent(TextGrammarCheck::GrammalecteResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperContextMenuEvent(TextGrammarCheck::GrammalecteResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperTabletEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperActionEvent(TextGrammarCheck::GrammalecteResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragEnterEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragMoveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDropEvent(TextGrammarCheck::GrammalecteResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperShowEvent(TextGrammarCheck::GrammalecteResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperHideEvent(TextGrammarCheck::GrammalecteResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperNativeEvent(TextGrammarCheck::GrammalecteResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperChangeEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammalecteResultWidget_SuperMetric(const TextGrammarCheck::GrammalecteResultWidget* self, int param1);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperInitPainter(const TextGrammarCheck::GrammalecteResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammalecteResultWidget_SuperRedirected(const TextGrammarCheck::GrammalecteResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammalecteResultWidget_SuperSharedPainter(const TextGrammarCheck::GrammalecteResultWidget* self);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperInputMethodEvent(TextGrammarCheck::GrammalecteResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammalecteResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammalecteResultWidget* self, bool next);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperTimerEvent(TextGrammarCheck::GrammalecteResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperChildEvent(TextGrammarCheck::GrammalecteResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperCustomEvent(TextGrammarCheck::GrammalecteResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperConnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammalecteResultWidget_SuperDisconnectNotify(TextGrammarCheck::GrammalecteResultWidget* self, const QMetaMethod* signal);
};

#endif
