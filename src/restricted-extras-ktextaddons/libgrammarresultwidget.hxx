#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARRESULTWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBGRAMMARRESULTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::GrammarResultWidget
class VirtualTextGrammarCheckGrammarResultWidget : public TextGrammarCheck::GrammarResultWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__GrammarResultWidget_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__GrammarResultWidget*, const char*);
    using TextGrammarCheck__GrammarResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__GrammarResultWidget*, int, int, void**);
    using TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_DevType_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, bool);
    using TextGrammarCheck__GrammarResultWidget_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_Event_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMouseEvent*);
    using TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QWheelEvent*);
    using TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QKeyEvent*);
    using TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QFocusEvent*);
    using TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEnterEvent*);
    using TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QPaintEvent*);
    using TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMoveEvent*);
    using TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QResizeEvent*);
    using TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QCloseEvent*);
    using TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QTabletEvent*);
    using TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QActionEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__GrammarResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QDropEvent*);
    using TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QShowEvent*);
    using TextGrammarCheck__GrammarResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QHideEvent*);
    using TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__GrammarResultWidget*, QPainter*);
    using TextGrammarCheck__GrammarResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__GrammarResultWidget*, QPoint*);
    using TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__GrammarResultWidget*);
    using TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__GrammarResultWidget*, int);
    using TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, bool);
    using TextGrammarCheck__GrammarResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__GrammarResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QTimerEvent*);
    using TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QChildEvent*);
    using TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QEvent*);
    using TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMetaMethod*);
    using TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__GrammarResultWidget*, QMetaMethod*);
    using TextGrammarCheck::GrammarResultWidget::create;
    using TextGrammarCheck::GrammarResultWidget::destroy;
    using TextGrammarCheck::GrammarResultWidget::focusNextChild;
    using TextGrammarCheck::GrammarResultWidget::focusPreviousChild;
    using TextGrammarCheck::GrammarResultWidget::getDecodedMetricF;
    using TextGrammarCheck::GrammarResultWidget::isSignalConnected;
    using TextGrammarCheck::GrammarResultWidget::receivers;
    using TextGrammarCheck::GrammarResultWidget::sender;
    using TextGrammarCheck::GrammarResultWidget::senderSignalIndex;
    using TextGrammarCheck::GrammarResultWidget::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__GrammarResultWidget_MetaObject_Callback textgrammarcheck__grammarresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metacast_Callback textgrammarcheck__grammarresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metacall_Callback textgrammarcheck__grammarresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CheckGrammar_Callback textgrammarcheck__grammarresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_AddExtraWidget_Callback textgrammarcheck__grammarresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DevType_Callback textgrammarcheck__grammarresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SetVisible_Callback textgrammarcheck__grammarresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SizeHint_Callback textgrammarcheck__grammarresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MinimumSizeHint_Callback textgrammarcheck__grammarresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HeightForWidth_Callback textgrammarcheck__grammarresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HasHeightForWidth_Callback textgrammarcheck__grammarresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_PaintEngine_Callback textgrammarcheck__grammarresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Event_Callback textgrammarcheck__grammarresultwidget_event_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MousePressEvent_Callback textgrammarcheck__grammarresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseReleaseEvent_Callback textgrammarcheck__grammarresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MouseMoveEvent_Callback textgrammarcheck__grammarresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_WheelEvent_Callback textgrammarcheck__grammarresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_KeyPressEvent_Callback textgrammarcheck__grammarresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_KeyReleaseEvent_Callback textgrammarcheck__grammarresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusInEvent_Callback textgrammarcheck__grammarresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusOutEvent_Callback textgrammarcheck__grammarresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_EnterEvent_Callback textgrammarcheck__grammarresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_LeaveEvent_Callback textgrammarcheck__grammarresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_PaintEvent_Callback textgrammarcheck__grammarresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_MoveEvent_Callback textgrammarcheck__grammarresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ResizeEvent_Callback textgrammarcheck__grammarresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CloseEvent_Callback textgrammarcheck__grammarresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ContextMenuEvent_Callback textgrammarcheck__grammarresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_TabletEvent_Callback textgrammarcheck__grammarresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ActionEvent_Callback textgrammarcheck__grammarresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragEnterEvent_Callback textgrammarcheck__grammarresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragMoveEvent_Callback textgrammarcheck__grammarresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DragLeaveEvent_Callback textgrammarcheck__grammarresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DropEvent_Callback textgrammarcheck__grammarresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ShowEvent_Callback textgrammarcheck__grammarresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_HideEvent_Callback textgrammarcheck__grammarresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_NativeEvent_Callback textgrammarcheck__grammarresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ChangeEvent_Callback textgrammarcheck__grammarresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Metric_Callback textgrammarcheck__grammarresultwidget_metric_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InitPainter_Callback textgrammarcheck__grammarresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_Redirected_Callback textgrammarcheck__grammarresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_SharedPainter_Callback textgrammarcheck__grammarresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InputMethodEvent_Callback textgrammarcheck__grammarresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_InputMethodQuery_Callback textgrammarcheck__grammarresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_FocusNextPrevChild_Callback textgrammarcheck__grammarresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_EventFilter_Callback textgrammarcheck__grammarresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_TimerEvent_Callback textgrammarcheck__grammarresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ChildEvent_Callback textgrammarcheck__grammarresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_CustomEvent_Callback textgrammarcheck__grammarresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_ConnectNotify_Callback textgrammarcheck__grammarresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__GrammarResultWidget_DisconnectNotify_Callback textgrammarcheck__grammarresultwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::GrammarResultWidget {
        using TextGrammarCheck::GrammarResultWidget::actionEvent;
        using TextGrammarCheck::GrammarResultWidget::addExtraWidget;
        using TextGrammarCheck::GrammarResultWidget::changeEvent;
        using TextGrammarCheck::GrammarResultWidget::childEvent;
        using TextGrammarCheck::GrammarResultWidget::closeEvent;
        using TextGrammarCheck::GrammarResultWidget::connectNotify;
        using TextGrammarCheck::GrammarResultWidget::contextMenuEvent;
        using TextGrammarCheck::GrammarResultWidget::customEvent;
        using TextGrammarCheck::GrammarResultWidget::disconnectNotify;
        using TextGrammarCheck::GrammarResultWidget::dragEnterEvent;
        using TextGrammarCheck::GrammarResultWidget::dragLeaveEvent;
        using TextGrammarCheck::GrammarResultWidget::dragMoveEvent;
        using TextGrammarCheck::GrammarResultWidget::dropEvent;
        using TextGrammarCheck::GrammarResultWidget::enterEvent;
        using TextGrammarCheck::GrammarResultWidget::event;
        using TextGrammarCheck::GrammarResultWidget::focusInEvent;
        using TextGrammarCheck::GrammarResultWidget::focusNextPrevChild;
        using TextGrammarCheck::GrammarResultWidget::focusOutEvent;
        using TextGrammarCheck::GrammarResultWidget::hideEvent;
        using TextGrammarCheck::GrammarResultWidget::initPainter;
        using TextGrammarCheck::GrammarResultWidget::inputMethodEvent;
        using TextGrammarCheck::GrammarResultWidget::keyPressEvent;
        using TextGrammarCheck::GrammarResultWidget::keyReleaseEvent;
        using TextGrammarCheck::GrammarResultWidget::leaveEvent;
        using TextGrammarCheck::GrammarResultWidget::metric;
        using TextGrammarCheck::GrammarResultWidget::mouseDoubleClickEvent;
        using TextGrammarCheck::GrammarResultWidget::mouseMoveEvent;
        using TextGrammarCheck::GrammarResultWidget::mousePressEvent;
        using TextGrammarCheck::GrammarResultWidget::mouseReleaseEvent;
        using TextGrammarCheck::GrammarResultWidget::moveEvent;
        using TextGrammarCheck::GrammarResultWidget::nativeEvent;
        using TextGrammarCheck::GrammarResultWidget::paintEvent;
        using TextGrammarCheck::GrammarResultWidget::redirected;
        using TextGrammarCheck::GrammarResultWidget::resizeEvent;
        using TextGrammarCheck::GrammarResultWidget::sharedPainter;
        using TextGrammarCheck::GrammarResultWidget::showEvent;
        using TextGrammarCheck::GrammarResultWidget::tabletEvent;
        using TextGrammarCheck::GrammarResultWidget::timerEvent;
        using TextGrammarCheck::GrammarResultWidget::wheelEvent;
    };

    VirtualTextGrammarCheckGrammarResultWidget(QWidget* parent) : TextGrammarCheck::GrammarResultWidget(parent) {};
    VirtualTextGrammarCheckGrammarResultWidget() : TextGrammarCheck::GrammarResultWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__grammarresultwidget_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__grammarresultwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__grammarresultwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__grammarresultwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__grammarresultwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__grammarresultwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        if (textgrammarcheck__grammarresultwidget_checkgrammar_callback) {
            textgrammarcheck__grammarresultwidget_checkgrammar_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method TextGrammarCheck::GrammarResultWidget::checkGrammar called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__grammarresultwidget_addextrawidget_callback) {
            textgrammarcheck__grammarresultwidget_addextrawidget_callback(this);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__grammarresultwidget_devtype_callback) {
            int callback_ret = textgrammarcheck__grammarresultwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__grammarresultwidget_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__grammarresultwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__grammarresultwidget_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammarresultwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__grammarresultwidget_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__grammarresultwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__grammarresultwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__grammarresultwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__grammarresultwidget_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__grammarresultwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__grammarresultwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__grammarresultwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__grammarresultwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__grammarresultwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__grammarresultwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__grammarresultwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__grammarresultwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__grammarresultwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__grammarresultwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__GrammarResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__grammarresultwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__grammarresultwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__grammarresultwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__grammarresultwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__grammarresultwidget_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__grammarresultwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__grammarresultwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__grammarresultwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__grammarresultwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__grammarresultwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__GrammarResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__grammarresultwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__grammarresultwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__grammarresultwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__GrammarResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__grammarresultwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__grammarresultwidget_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresultwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammarresultwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__grammarresultwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__grammarresultwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__GrammarResultWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__GrammarResultWidget_SuperAddExtraWidget(TextGrammarCheck::GrammarResultWidget* self);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMousePressEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMouseMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperWheelEvent(TextGrammarCheck::GrammarResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperKeyPressEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::GrammarResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperFocusInEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperFocusOutEvent(TextGrammarCheck::GrammarResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperEnterEvent(TextGrammarCheck::GrammarResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperLeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperPaintEvent(TextGrammarCheck::GrammarResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperResizeEvent(TextGrammarCheck::GrammarResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperCloseEvent(TextGrammarCheck::GrammarResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperContextMenuEvent(TextGrammarCheck::GrammarResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperTabletEvent(TextGrammarCheck::GrammarResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperActionEvent(TextGrammarCheck::GrammarResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragEnterEvent(TextGrammarCheck::GrammarResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragMoveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDragLeaveEvent(TextGrammarCheck::GrammarResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDropEvent(TextGrammarCheck::GrammarResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperShowEvent(TextGrammarCheck::GrammarResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperHideEvent(TextGrammarCheck::GrammarResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperNativeEvent(TextGrammarCheck::GrammarResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__GrammarResultWidget_SuperChangeEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__GrammarResultWidget_SuperMetric(const TextGrammarCheck::GrammarResultWidget* self, int param1);
    friend void TextGrammarCheck__GrammarResultWidget_SuperInitPainter(const TextGrammarCheck::GrammarResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__GrammarResultWidget_SuperRedirected(const TextGrammarCheck::GrammarResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__GrammarResultWidget_SuperSharedPainter(const TextGrammarCheck::GrammarResultWidget* self);
    friend void TextGrammarCheck__GrammarResultWidget_SuperInputMethodEvent(TextGrammarCheck::GrammarResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__GrammarResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::GrammarResultWidget* self, bool next);
    friend void TextGrammarCheck__GrammarResultWidget_SuperTimerEvent(TextGrammarCheck::GrammarResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperChildEvent(TextGrammarCheck::GrammarResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperCustomEvent(TextGrammarCheck::GrammarResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__GrammarResultWidget_SuperConnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__GrammarResultWidget_SuperDisconnectNotify(TextGrammarCheck::GrammarResultWidget* self, const QMetaMethod* signal);
};

#endif
