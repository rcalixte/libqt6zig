#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTGOTOLINEWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTGOTOLINEWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::TextGoToLineWidget
class VirtualTextCustomEditorTextGoToLineWidget final : public TextCustomEditor::TextGoToLineWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__TextGoToLineWidget_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_Metacast_Callback = void* (*)(TextCustomEditor__TextGoToLineWidget*, const char*);
    using TextCustomEditor__TextGoToLineWidget_Metacall_Callback = int (*)(TextCustomEditor__TextGoToLineWidget*, int, int, void**);
    using TextCustomEditor__TextGoToLineWidget_Event_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QShowEvent*);
    using TextCustomEditor__TextGoToLineWidget_EventFilter_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, QObject*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_DevType_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_SetVisible_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, bool);
    using TextCustomEditor__TextGoToLineWidget_SizeHint_Callback = QSize* (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMouseEvent*);
    using TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QWheelEvent*);
    using TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QKeyEvent*);
    using TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QKeyEvent*);
    using TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QFocusEvent*);
    using TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QFocusEvent*);
    using TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEnterEvent*);
    using TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QPaintEvent*);
    using TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMoveEvent*);
    using TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QResizeEvent*);
    using TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QCloseEvent*);
    using TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QContextMenuEvent*);
    using TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QTabletEvent*);
    using TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QActionEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragEnterEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragMoveEvent*);
    using TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDragLeaveEvent*);
    using TextCustomEditor__TextGoToLineWidget_DropEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QDropEvent*);
    using TextCustomEditor__TextGoToLineWidget_HideEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QHideEvent*);
    using TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_Metric_Callback = int (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_InitPainter_Callback = void (*)(const TextCustomEditor__TextGoToLineWidget*, QPainter*);
    using TextCustomEditor__TextGoToLineWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__TextGoToLineWidget*, QPoint*);
    using TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__TextGoToLineWidget*);
    using TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QInputMethodEvent*);
    using TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__TextGoToLineWidget*, int);
    using TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__TextGoToLineWidget*, bool);
    using TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QTimerEvent*);
    using TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QChildEvent*);
    using TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QEvent*);
    using TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMetaMethod*);
    using TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__TextGoToLineWidget*, QMetaMethod*);
    using TextCustomEditor::TextGoToLineWidget::create;
    using TextCustomEditor::TextGoToLineWidget::destroy;
    using TextCustomEditor::TextGoToLineWidget::focusNextChild;
    using TextCustomEditor::TextGoToLineWidget::focusPreviousChild;
    using TextCustomEditor::TextGoToLineWidget::getDecodedMetricF;
    using TextCustomEditor::TextGoToLineWidget::isSignalConnected;
    using TextCustomEditor::TextGoToLineWidget::receivers;
    using TextCustomEditor::TextGoToLineWidget::sender;
    using TextCustomEditor::TextGoToLineWidget::senderSignalIndex;
    using TextCustomEditor::TextGoToLineWidget::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__TextGoToLineWidget_MetaObject_Callback textcustomeditor__textgotolinewidget_metaobject_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metacast_Callback textcustomeditor__textgotolinewidget_metacast_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metacall_Callback textcustomeditor__textgotolinewidget_metacall_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Event_Callback textcustomeditor__textgotolinewidget_event_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ShowEvent_Callback textcustomeditor__textgotolinewidget_showevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_EventFilter_Callback textcustomeditor__textgotolinewidget_eventfilter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DevType_Callback textcustomeditor__textgotolinewidget_devtype_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SetVisible_Callback textcustomeditor__textgotolinewidget_setvisible_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SizeHint_Callback textcustomeditor__textgotolinewidget_sizehint_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MinimumSizeHint_Callback textcustomeditor__textgotolinewidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HeightForWidth_Callback textcustomeditor__textgotolinewidget_heightforwidth_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HasHeightForWidth_Callback textcustomeditor__textgotolinewidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_PaintEngine_Callback textcustomeditor__textgotolinewidget_paintengine_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MousePressEvent_Callback textcustomeditor__textgotolinewidget_mousepressevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseReleaseEvent_Callback textcustomeditor__textgotolinewidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseDoubleClickEvent_Callback textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MouseMoveEvent_Callback textcustomeditor__textgotolinewidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_WheelEvent_Callback textcustomeditor__textgotolinewidget_wheelevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_KeyPressEvent_Callback textcustomeditor__textgotolinewidget_keypressevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_KeyReleaseEvent_Callback textcustomeditor__textgotolinewidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusInEvent_Callback textcustomeditor__textgotolinewidget_focusinevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusOutEvent_Callback textcustomeditor__textgotolinewidget_focusoutevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_EnterEvent_Callback textcustomeditor__textgotolinewidget_enterevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_LeaveEvent_Callback textcustomeditor__textgotolinewidget_leaveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_PaintEvent_Callback textcustomeditor__textgotolinewidget_paintevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_MoveEvent_Callback textcustomeditor__textgotolinewidget_moveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ResizeEvent_Callback textcustomeditor__textgotolinewidget_resizeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_CloseEvent_Callback textcustomeditor__textgotolinewidget_closeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ContextMenuEvent_Callback textcustomeditor__textgotolinewidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_TabletEvent_Callback textcustomeditor__textgotolinewidget_tabletevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ActionEvent_Callback textcustomeditor__textgotolinewidget_actionevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragEnterEvent_Callback textcustomeditor__textgotolinewidget_dragenterevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragMoveEvent_Callback textcustomeditor__textgotolinewidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DragLeaveEvent_Callback textcustomeditor__textgotolinewidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DropEvent_Callback textcustomeditor__textgotolinewidget_dropevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_HideEvent_Callback textcustomeditor__textgotolinewidget_hideevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_NativeEvent_Callback textcustomeditor__textgotolinewidget_nativeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ChangeEvent_Callback textcustomeditor__textgotolinewidget_changeevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Metric_Callback textcustomeditor__textgotolinewidget_metric_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InitPainter_Callback textcustomeditor__textgotolinewidget_initpainter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_Redirected_Callback textcustomeditor__textgotolinewidget_redirected_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_SharedPainter_Callback textcustomeditor__textgotolinewidget_sharedpainter_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InputMethodEvent_Callback textcustomeditor__textgotolinewidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_InputMethodQuery_Callback textcustomeditor__textgotolinewidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_FocusNextPrevChild_Callback textcustomeditor__textgotolinewidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_TimerEvent_Callback textcustomeditor__textgotolinewidget_timerevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ChildEvent_Callback textcustomeditor__textgotolinewidget_childevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_CustomEvent_Callback textcustomeditor__textgotolinewidget_customevent_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_ConnectNotify_Callback textcustomeditor__textgotolinewidget_connectnotify_callback = nullptr;
    TextCustomEditor__TextGoToLineWidget_DisconnectNotify_Callback textcustomeditor__textgotolinewidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::TextGoToLineWidget {
        using TextCustomEditor::TextGoToLineWidget::actionEvent;
        using TextCustomEditor::TextGoToLineWidget::changeEvent;
        using TextCustomEditor::TextGoToLineWidget::childEvent;
        using TextCustomEditor::TextGoToLineWidget::closeEvent;
        using TextCustomEditor::TextGoToLineWidget::connectNotify;
        using TextCustomEditor::TextGoToLineWidget::contextMenuEvent;
        using TextCustomEditor::TextGoToLineWidget::customEvent;
        using TextCustomEditor::TextGoToLineWidget::disconnectNotify;
        using TextCustomEditor::TextGoToLineWidget::dragEnterEvent;
        using TextCustomEditor::TextGoToLineWidget::dragLeaveEvent;
        using TextCustomEditor::TextGoToLineWidget::dragMoveEvent;
        using TextCustomEditor::TextGoToLineWidget::dropEvent;
        using TextCustomEditor::TextGoToLineWidget::enterEvent;
        using TextCustomEditor::TextGoToLineWidget::event;
        using TextCustomEditor::TextGoToLineWidget::eventFilter;
        using TextCustomEditor::TextGoToLineWidget::focusInEvent;
        using TextCustomEditor::TextGoToLineWidget::focusNextPrevChild;
        using TextCustomEditor::TextGoToLineWidget::focusOutEvent;
        using TextCustomEditor::TextGoToLineWidget::hideEvent;
        using TextCustomEditor::TextGoToLineWidget::initPainter;
        using TextCustomEditor::TextGoToLineWidget::inputMethodEvent;
        using TextCustomEditor::TextGoToLineWidget::keyPressEvent;
        using TextCustomEditor::TextGoToLineWidget::keyReleaseEvent;
        using TextCustomEditor::TextGoToLineWidget::leaveEvent;
        using TextCustomEditor::TextGoToLineWidget::metric;
        using TextCustomEditor::TextGoToLineWidget::mouseDoubleClickEvent;
        using TextCustomEditor::TextGoToLineWidget::mouseMoveEvent;
        using TextCustomEditor::TextGoToLineWidget::mousePressEvent;
        using TextCustomEditor::TextGoToLineWidget::mouseReleaseEvent;
        using TextCustomEditor::TextGoToLineWidget::moveEvent;
        using TextCustomEditor::TextGoToLineWidget::nativeEvent;
        using TextCustomEditor::TextGoToLineWidget::paintEvent;
        using TextCustomEditor::TextGoToLineWidget::redirected;
        using TextCustomEditor::TextGoToLineWidget::resizeEvent;
        using TextCustomEditor::TextGoToLineWidget::sharedPainter;
        using TextCustomEditor::TextGoToLineWidget::showEvent;
        using TextCustomEditor::TextGoToLineWidget::tabletEvent;
        using TextCustomEditor::TextGoToLineWidget::timerEvent;
        using TextCustomEditor::TextGoToLineWidget::wheelEvent;
    };

    VirtualTextCustomEditorTextGoToLineWidget(QWidget* parent) : TextCustomEditor::TextGoToLineWidget(parent) {};
    VirtualTextCustomEditorTextGoToLineWidget() : TextCustomEditor::TextGoToLineWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__textgotolinewidget_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__textgotolinewidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__textgotolinewidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__textgotolinewidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__textgotolinewidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__textgotolinewidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (textcustomeditor__textgotolinewidget_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = textcustomeditor__textgotolinewidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (textcustomeditor__textgotolinewidget_showevent_callback) {
            QShowEvent* cbval1 = e;
            textcustomeditor__textgotolinewidget_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::showEvent(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__textgotolinewidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::eventFilter(obj, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__textgotolinewidget_devtype_callback) {
            int callback_ret = textcustomeditor__textgotolinewidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__textgotolinewidget_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__textgotolinewidget_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__textgotolinewidget_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__textgotolinewidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextGoToLineWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__textgotolinewidget_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__textgotolinewidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextGoToLineWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__textgotolinewidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__textgotolinewidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__textgotolinewidget_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__textgotolinewidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__textgotolinewidget_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__textgotolinewidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__textgotolinewidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__textgotolinewidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__textgotolinewidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__textgotolinewidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__textgotolinewidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__textgotolinewidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__textgotolinewidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__textgotolinewidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__textgotolinewidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__textgotolinewidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__textgotolinewidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__textgotolinewidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__textgotolinewidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__textgotolinewidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__textgotolinewidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__textgotolinewidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__textgotolinewidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__textgotolinewidget_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__textgotolinewidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__textgotolinewidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__TextGoToLineWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__textgotolinewidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__textgotolinewidget_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__textgotolinewidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__textgotolinewidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__textgotolinewidget_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__textgotolinewidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__textgotolinewidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__textgotolinewidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__textgotolinewidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__textgotolinewidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__TextGoToLineWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__textgotolinewidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__textgotolinewidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__TextGoToLineWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__textgotolinewidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__textgotolinewidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__textgotolinewidget_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__textgotolinewidget_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__textgotolinewidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__textgotolinewidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__textgotolinewidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__textgotolinewidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__TextGoToLineWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__TextGoToLineWidget_SuperEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* e);
    friend void TextCustomEditor__TextGoToLineWidget_SuperShowEvent(TextCustomEditor::TextGoToLineWidget* self, QShowEvent* e);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperEventFilter(TextCustomEditor::TextGoToLineWidget* self, QObject* obj, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMousePressEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseDoubleClickEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMouseMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperWheelEvent(TextCustomEditor::TextGoToLineWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperKeyPressEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperKeyReleaseEvent(TextCustomEditor::TextGoToLineWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperFocusInEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperFocusOutEvent(TextCustomEditor::TextGoToLineWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperEnterEvent(TextCustomEditor::TextGoToLineWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperLeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperPaintEvent(TextCustomEditor::TextGoToLineWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperResizeEvent(TextCustomEditor::TextGoToLineWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperCloseEvent(TextCustomEditor::TextGoToLineWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperContextMenuEvent(TextCustomEditor::TextGoToLineWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperTabletEvent(TextCustomEditor::TextGoToLineWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperActionEvent(TextCustomEditor::TextGoToLineWidget* self, QActionEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragEnterEvent(TextCustomEditor::TextGoToLineWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragMoveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDragLeaveEvent(TextCustomEditor::TextGoToLineWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDropEvent(TextCustomEditor::TextGoToLineWidget* self, QDropEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperHideEvent(TextCustomEditor::TextGoToLineWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperNativeEvent(TextCustomEditor::TextGoToLineWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__TextGoToLineWidget_SuperChangeEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* param1);
    friend int TextCustomEditor__TextGoToLineWidget_SuperMetric(const TextCustomEditor::TextGoToLineWidget* self, int param1);
    friend void TextCustomEditor__TextGoToLineWidget_SuperInitPainter(const TextCustomEditor::TextGoToLineWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__TextGoToLineWidget_SuperRedirected(const TextCustomEditor::TextGoToLineWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__TextGoToLineWidget_SuperSharedPainter(const TextCustomEditor::TextGoToLineWidget* self);
    friend void TextCustomEditor__TextGoToLineWidget_SuperInputMethodEvent(TextCustomEditor::TextGoToLineWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__TextGoToLineWidget_SuperFocusNextPrevChild(TextCustomEditor::TextGoToLineWidget* self, bool next);
    friend void TextCustomEditor__TextGoToLineWidget_SuperTimerEvent(TextCustomEditor::TextGoToLineWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperChildEvent(TextCustomEditor::TextGoToLineWidget* self, QChildEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperCustomEvent(TextCustomEditor::TextGoToLineWidget* self, QEvent* event);
    friend void TextCustomEditor__TextGoToLineWidget_SuperConnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__TextGoToLineWidget_SuperDisconnectNotify(TextCustomEditor::TextGoToLineWidget* self, const QMetaMethod* signal);
};

#endif
