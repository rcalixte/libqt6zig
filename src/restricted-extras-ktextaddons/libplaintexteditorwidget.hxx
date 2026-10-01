#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITORWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTEDITORWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::PlainTextEditorWidget
class VirtualTextCustomEditorPlainTextEditorWidget final : public TextCustomEditor::PlainTextEditorWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_Metacast_Callback = void* (*)(TextCustomEditor__PlainTextEditorWidget*, const char*);
    using TextCustomEditor__PlainTextEditorWidget_Metacall_Callback = int (*)(TextCustomEditor__PlainTextEditorWidget*, int, int, void**);
    using TextCustomEditor__PlainTextEditorWidget_DevType_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, bool);
    using TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_Event_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QWheelEvent*);
    using TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEnterEvent*);
    using TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QPaintEvent*);
    using TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMoveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QResizeEvent*);
    using TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QCloseEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QContextMenuEvent*);
    using TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QTabletEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QActionEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragEnterEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragMoveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDragLeaveEvent*);
    using TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QDropEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QShowEvent*);
    using TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QHideEvent*);
    using TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_Metric_Callback = int (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback = void (*)(const TextCustomEditor__PlainTextEditorWidget*, QPainter*);
    using TextCustomEditor__PlainTextEditorWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__PlainTextEditorWidget*, QPoint*);
    using TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__PlainTextEditorWidget*);
    using TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QInputMethodEvent*);
    using TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__PlainTextEditorWidget*, int);
    using TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, bool);
    using TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback = bool (*)(TextCustomEditor__PlainTextEditorWidget*, QObject*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QTimerEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QChildEvent*);
    using TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QEvent*);
    using TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__PlainTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor::PlainTextEditorWidget::create;
    using TextCustomEditor::PlainTextEditorWidget::destroy;
    using TextCustomEditor::PlainTextEditorWidget::focusNextChild;
    using TextCustomEditor::PlainTextEditorWidget::focusPreviousChild;
    using TextCustomEditor::PlainTextEditorWidget::getDecodedMetricF;
    using TextCustomEditor::PlainTextEditorWidget::isSignalConnected;
    using TextCustomEditor::PlainTextEditorWidget::receivers;
    using TextCustomEditor::PlainTextEditorWidget::sender;
    using TextCustomEditor::PlainTextEditorWidget::senderSignalIndex;
    using TextCustomEditor::PlainTextEditorWidget::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__PlainTextEditorWidget_MetaObject_Callback textcustomeditor__plaintexteditorwidget_metaobject_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metacast_Callback textcustomeditor__plaintexteditorwidget_metacast_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metacall_Callback textcustomeditor__plaintexteditorwidget_metacall_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DevType_Callback textcustomeditor__plaintexteditorwidget_devtype_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SetVisible_Callback textcustomeditor__plaintexteditorwidget_setvisible_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SizeHint_Callback textcustomeditor__plaintexteditorwidget_sizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MinimumSizeHint_Callback textcustomeditor__plaintexteditorwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HeightForWidth_Callback textcustomeditor__plaintexteditorwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HasHeightForWidth_Callback textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_PaintEngine_Callback textcustomeditor__plaintexteditorwidget_paintengine_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Event_Callback textcustomeditor__plaintexteditorwidget_event_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MousePressEvent_Callback textcustomeditor__plaintexteditorwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseReleaseEvent_Callback textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseDoubleClickEvent_Callback textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MouseMoveEvent_Callback textcustomeditor__plaintexteditorwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_WheelEvent_Callback textcustomeditor__plaintexteditorwidget_wheelevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_KeyPressEvent_Callback textcustomeditor__plaintexteditorwidget_keypressevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_KeyReleaseEvent_Callback textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusInEvent_Callback textcustomeditor__plaintexteditorwidget_focusinevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusOutEvent_Callback textcustomeditor__plaintexteditorwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_EnterEvent_Callback textcustomeditor__plaintexteditorwidget_enterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_LeaveEvent_Callback textcustomeditor__plaintexteditorwidget_leaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_PaintEvent_Callback textcustomeditor__plaintexteditorwidget_paintevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_MoveEvent_Callback textcustomeditor__plaintexteditorwidget_moveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ResizeEvent_Callback textcustomeditor__plaintexteditorwidget_resizeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_CloseEvent_Callback textcustomeditor__plaintexteditorwidget_closeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ContextMenuEvent_Callback textcustomeditor__plaintexteditorwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_TabletEvent_Callback textcustomeditor__plaintexteditorwidget_tabletevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ActionEvent_Callback textcustomeditor__plaintexteditorwidget_actionevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragEnterEvent_Callback textcustomeditor__plaintexteditorwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragMoveEvent_Callback textcustomeditor__plaintexteditorwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DragLeaveEvent_Callback textcustomeditor__plaintexteditorwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DropEvent_Callback textcustomeditor__plaintexteditorwidget_dropevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ShowEvent_Callback textcustomeditor__plaintexteditorwidget_showevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_HideEvent_Callback textcustomeditor__plaintexteditorwidget_hideevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_NativeEvent_Callback textcustomeditor__plaintexteditorwidget_nativeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ChangeEvent_Callback textcustomeditor__plaintexteditorwidget_changeevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Metric_Callback textcustomeditor__plaintexteditorwidget_metric_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InitPainter_Callback textcustomeditor__plaintexteditorwidget_initpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_Redirected_Callback textcustomeditor__plaintexteditorwidget_redirected_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_SharedPainter_Callback textcustomeditor__plaintexteditorwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InputMethodEvent_Callback textcustomeditor__plaintexteditorwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_InputMethodQuery_Callback textcustomeditor__plaintexteditorwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_FocusNextPrevChild_Callback textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_EventFilter_Callback textcustomeditor__plaintexteditorwidget_eventfilter_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_TimerEvent_Callback textcustomeditor__plaintexteditorwidget_timerevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ChildEvent_Callback textcustomeditor__plaintexteditorwidget_childevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_CustomEvent_Callback textcustomeditor__plaintexteditorwidget_customevent_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_ConnectNotify_Callback textcustomeditor__plaintexteditorwidget_connectnotify_callback = nullptr;
    TextCustomEditor__PlainTextEditorWidget_DisconnectNotify_Callback textcustomeditor__plaintexteditorwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::PlainTextEditorWidget {
        using TextCustomEditor::PlainTextEditorWidget::actionEvent;
        using TextCustomEditor::PlainTextEditorWidget::changeEvent;
        using TextCustomEditor::PlainTextEditorWidget::childEvent;
        using TextCustomEditor::PlainTextEditorWidget::closeEvent;
        using TextCustomEditor::PlainTextEditorWidget::connectNotify;
        using TextCustomEditor::PlainTextEditorWidget::contextMenuEvent;
        using TextCustomEditor::PlainTextEditorWidget::customEvent;
        using TextCustomEditor::PlainTextEditorWidget::disconnectNotify;
        using TextCustomEditor::PlainTextEditorWidget::dragEnterEvent;
        using TextCustomEditor::PlainTextEditorWidget::dragLeaveEvent;
        using TextCustomEditor::PlainTextEditorWidget::dragMoveEvent;
        using TextCustomEditor::PlainTextEditorWidget::dropEvent;
        using TextCustomEditor::PlainTextEditorWidget::enterEvent;
        using TextCustomEditor::PlainTextEditorWidget::event;
        using TextCustomEditor::PlainTextEditorWidget::focusInEvent;
        using TextCustomEditor::PlainTextEditorWidget::focusNextPrevChild;
        using TextCustomEditor::PlainTextEditorWidget::focusOutEvent;
        using TextCustomEditor::PlainTextEditorWidget::hideEvent;
        using TextCustomEditor::PlainTextEditorWidget::initPainter;
        using TextCustomEditor::PlainTextEditorWidget::inputMethodEvent;
        using TextCustomEditor::PlainTextEditorWidget::keyPressEvent;
        using TextCustomEditor::PlainTextEditorWidget::keyReleaseEvent;
        using TextCustomEditor::PlainTextEditorWidget::leaveEvent;
        using TextCustomEditor::PlainTextEditorWidget::metric;
        using TextCustomEditor::PlainTextEditorWidget::mouseDoubleClickEvent;
        using TextCustomEditor::PlainTextEditorWidget::mouseMoveEvent;
        using TextCustomEditor::PlainTextEditorWidget::mousePressEvent;
        using TextCustomEditor::PlainTextEditorWidget::mouseReleaseEvent;
        using TextCustomEditor::PlainTextEditorWidget::moveEvent;
        using TextCustomEditor::PlainTextEditorWidget::nativeEvent;
        using TextCustomEditor::PlainTextEditorWidget::paintEvent;
        using TextCustomEditor::PlainTextEditorWidget::redirected;
        using TextCustomEditor::PlainTextEditorWidget::resizeEvent;
        using TextCustomEditor::PlainTextEditorWidget::sharedPainter;
        using TextCustomEditor::PlainTextEditorWidget::showEvent;
        using TextCustomEditor::PlainTextEditorWidget::tabletEvent;
        using TextCustomEditor::PlainTextEditorWidget::timerEvent;
        using TextCustomEditor::PlainTextEditorWidget::wheelEvent;
    };

    VirtualTextCustomEditorPlainTextEditorWidget(QWidget* parent) : TextCustomEditor::PlainTextEditorWidget(parent) {};
    VirtualTextCustomEditorPlainTextEditorWidget() : TextCustomEditor::PlainTextEditorWidget() {};
    VirtualTextCustomEditorPlainTextEditorWidget(TextCustomEditor::PlainTextEditor* customEditor) : TextCustomEditor::PlainTextEditorWidget(customEditor) {};
    VirtualTextCustomEditorPlainTextEditorWidget(TextCustomEditor::PlainTextEditor* customEditor, QWidget* parent) : TextCustomEditor::PlainTextEditorWidget(customEditor, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__plaintexteditorwidget_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__plaintexteditorwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__plaintexteditorwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__plaintexteditorwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__plaintexteditorwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__plaintexteditorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__plaintexteditorwidget_devtype_callback) {
            int callback_ret = textcustomeditor__plaintexteditorwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__plaintexteditorwidget_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__plaintexteditorwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__plaintexteditorwidget_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditorwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__plaintexteditorwidget_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__plaintexteditorwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__plaintexteditorwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__plaintexteditorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__plaintexteditorwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__plaintexteditorwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__plaintexteditorwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textcustomeditor__plaintexteditorwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__plaintexteditorwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__plaintexteditorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__plaintexteditorwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__plaintexteditorwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__plaintexteditorwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__plaintexteditorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__PlainTextEditorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__plaintexteditorwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__plaintexteditorwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__plaintexteditorwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__plaintexteditorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__plaintexteditorwidget_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__plaintexteditorwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__plaintexteditorwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__plaintexteditorwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__plaintexteditorwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__plaintexteditorwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__PlainTextEditorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__plaintexteditorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__plaintexteditorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__PlainTextEditorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__plaintexteditorwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__plaintexteditorwidget_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditorwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditorwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__plaintexteditorwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__plaintexteditorwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__PlainTextEditorWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMousePressEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperWheelEvent(TextCustomEditor::PlainTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperKeyPressEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor::PlainTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperFocusInEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperFocusOutEvent(TextCustomEditor::PlainTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperEnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperLeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperPaintEvent(TextCustomEditor::PlainTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperResizeEvent(TextCustomEditor::PlainTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperCloseEvent(TextCustomEditor::PlainTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperContextMenuEvent(TextCustomEditor::PlainTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperTabletEvent(TextCustomEditor::PlainTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperActionEvent(TextCustomEditor::PlainTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragEnterEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragMoveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor::PlainTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDropEvent(TextCustomEditor::PlainTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperShowEvent(TextCustomEditor::PlainTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperHideEvent(TextCustomEditor::PlainTextEditorWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperNativeEvent(TextCustomEditor::PlainTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperChangeEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* param1);
    friend int TextCustomEditor__PlainTextEditorWidget_SuperMetric(const TextCustomEditor::PlainTextEditorWidget* self, int param1);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperInitPainter(const TextCustomEditor::PlainTextEditorWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__PlainTextEditorWidget_SuperRedirected(const TextCustomEditor::PlainTextEditorWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__PlainTextEditorWidget_SuperSharedPainter(const TextCustomEditor::PlainTextEditorWidget* self);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperInputMethodEvent(TextCustomEditor::PlainTextEditorWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__PlainTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor::PlainTextEditorWidget* self, bool next);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperTimerEvent(TextCustomEditor::PlainTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperChildEvent(TextCustomEditor::PlainTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperCustomEvent(TextCustomEditor::PlainTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperConnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__PlainTextEditorWidget_SuperDisconnectNotify(TextCustomEditor::PlainTextEditorWidget* self, const QMetaMethod* signal);
};

#endif
