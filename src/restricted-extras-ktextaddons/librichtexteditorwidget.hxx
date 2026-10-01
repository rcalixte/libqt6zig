#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITORWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTEDITORWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextEditorWidget
class VirtualTextCustomEditorRichTextEditorWidget final : public TextCustomEditor::RichTextEditorWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextEditorWidget_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_Metacast_Callback = void* (*)(TextCustomEditor__RichTextEditorWidget*, const char*);
    using TextCustomEditor__RichTextEditorWidget_Metacall_Callback = int (*)(TextCustomEditor__RichTextEditorWidget*, int, int, void**);
    using TextCustomEditor__RichTextEditorWidget_DevType_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_SetVisible_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, bool);
    using TextCustomEditor__RichTextEditorWidget_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_Event_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QWheelEvent*);
    using TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEnterEvent*);
    using TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QPaintEvent*);
    using TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMoveEvent*);
    using TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QResizeEvent*);
    using TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QCloseEvent*);
    using TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QContextMenuEvent*);
    using TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QTabletEvent*);
    using TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QActionEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragEnterEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragMoveEvent*);
    using TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextEditorWidget_DropEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QDropEvent*);
    using TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QShowEvent*);
    using TextCustomEditor__RichTextEditorWidget_HideEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QHideEvent*);
    using TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_Metric_Callback = int (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextEditorWidget*, QPainter*);
    using TextCustomEditor__RichTextEditorWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextEditorWidget*, QPoint*);
    using TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextEditorWidget*);
    using TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QInputMethodEvent*);
    using TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextEditorWidget*, int);
    using TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, bool);
    using TextCustomEditor__RichTextEditorWidget_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextEditorWidget*, QObject*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QTimerEvent*);
    using TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QChildEvent*);
    using TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QEvent*);
    using TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextEditorWidget*, QMetaMethod*);
    using TextCustomEditor::RichTextEditorWidget::create;
    using TextCustomEditor::RichTextEditorWidget::destroy;
    using TextCustomEditor::RichTextEditorWidget::focusNextChild;
    using TextCustomEditor::RichTextEditorWidget::focusPreviousChild;
    using TextCustomEditor::RichTextEditorWidget::getDecodedMetricF;
    using TextCustomEditor::RichTextEditorWidget::isSignalConnected;
    using TextCustomEditor::RichTextEditorWidget::receivers;
    using TextCustomEditor::RichTextEditorWidget::sender;
    using TextCustomEditor::RichTextEditorWidget::senderSignalIndex;
    using TextCustomEditor::RichTextEditorWidget::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__RichTextEditorWidget_MetaObject_Callback textcustomeditor__richtexteditorwidget_metaobject_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metacast_Callback textcustomeditor__richtexteditorwidget_metacast_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metacall_Callback textcustomeditor__richtexteditorwidget_metacall_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DevType_Callback textcustomeditor__richtexteditorwidget_devtype_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SetVisible_Callback textcustomeditor__richtexteditorwidget_setvisible_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SizeHint_Callback textcustomeditor__richtexteditorwidget_sizehint_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MinimumSizeHint_Callback textcustomeditor__richtexteditorwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HeightForWidth_Callback textcustomeditor__richtexteditorwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HasHeightForWidth_Callback textcustomeditor__richtexteditorwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_PaintEngine_Callback textcustomeditor__richtexteditorwidget_paintengine_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Event_Callback textcustomeditor__richtexteditorwidget_event_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MousePressEvent_Callback textcustomeditor__richtexteditorwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseReleaseEvent_Callback textcustomeditor__richtexteditorwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseDoubleClickEvent_Callback textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MouseMoveEvent_Callback textcustomeditor__richtexteditorwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_WheelEvent_Callback textcustomeditor__richtexteditorwidget_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_KeyPressEvent_Callback textcustomeditor__richtexteditorwidget_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_KeyReleaseEvent_Callback textcustomeditor__richtexteditorwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusInEvent_Callback textcustomeditor__richtexteditorwidget_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusOutEvent_Callback textcustomeditor__richtexteditorwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_EnterEvent_Callback textcustomeditor__richtexteditorwidget_enterevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_LeaveEvent_Callback textcustomeditor__richtexteditorwidget_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_PaintEvent_Callback textcustomeditor__richtexteditorwidget_paintevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_MoveEvent_Callback textcustomeditor__richtexteditorwidget_moveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ResizeEvent_Callback textcustomeditor__richtexteditorwidget_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_CloseEvent_Callback textcustomeditor__richtexteditorwidget_closeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ContextMenuEvent_Callback textcustomeditor__richtexteditorwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_TabletEvent_Callback textcustomeditor__richtexteditorwidget_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ActionEvent_Callback textcustomeditor__richtexteditorwidget_actionevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragEnterEvent_Callback textcustomeditor__richtexteditorwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragMoveEvent_Callback textcustomeditor__richtexteditorwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DragLeaveEvent_Callback textcustomeditor__richtexteditorwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DropEvent_Callback textcustomeditor__richtexteditorwidget_dropevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ShowEvent_Callback textcustomeditor__richtexteditorwidget_showevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_HideEvent_Callback textcustomeditor__richtexteditorwidget_hideevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_NativeEvent_Callback textcustomeditor__richtexteditorwidget_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ChangeEvent_Callback textcustomeditor__richtexteditorwidget_changeevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Metric_Callback textcustomeditor__richtexteditorwidget_metric_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InitPainter_Callback textcustomeditor__richtexteditorwidget_initpainter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_Redirected_Callback textcustomeditor__richtexteditorwidget_redirected_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_SharedPainter_Callback textcustomeditor__richtexteditorwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InputMethodEvent_Callback textcustomeditor__richtexteditorwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_InputMethodQuery_Callback textcustomeditor__richtexteditorwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_FocusNextPrevChild_Callback textcustomeditor__richtexteditorwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_EventFilter_Callback textcustomeditor__richtexteditorwidget_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_TimerEvent_Callback textcustomeditor__richtexteditorwidget_timerevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ChildEvent_Callback textcustomeditor__richtexteditorwidget_childevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_CustomEvent_Callback textcustomeditor__richtexteditorwidget_customevent_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_ConnectNotify_Callback textcustomeditor__richtexteditorwidget_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextEditorWidget_DisconnectNotify_Callback textcustomeditor__richtexteditorwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextEditorWidget {
        using TextCustomEditor::RichTextEditorWidget::actionEvent;
        using TextCustomEditor::RichTextEditorWidget::changeEvent;
        using TextCustomEditor::RichTextEditorWidget::childEvent;
        using TextCustomEditor::RichTextEditorWidget::closeEvent;
        using TextCustomEditor::RichTextEditorWidget::connectNotify;
        using TextCustomEditor::RichTextEditorWidget::contextMenuEvent;
        using TextCustomEditor::RichTextEditorWidget::customEvent;
        using TextCustomEditor::RichTextEditorWidget::disconnectNotify;
        using TextCustomEditor::RichTextEditorWidget::dragEnterEvent;
        using TextCustomEditor::RichTextEditorWidget::dragLeaveEvent;
        using TextCustomEditor::RichTextEditorWidget::dragMoveEvent;
        using TextCustomEditor::RichTextEditorWidget::dropEvent;
        using TextCustomEditor::RichTextEditorWidget::enterEvent;
        using TextCustomEditor::RichTextEditorWidget::event;
        using TextCustomEditor::RichTextEditorWidget::focusInEvent;
        using TextCustomEditor::RichTextEditorWidget::focusNextPrevChild;
        using TextCustomEditor::RichTextEditorWidget::focusOutEvent;
        using TextCustomEditor::RichTextEditorWidget::hideEvent;
        using TextCustomEditor::RichTextEditorWidget::initPainter;
        using TextCustomEditor::RichTextEditorWidget::inputMethodEvent;
        using TextCustomEditor::RichTextEditorWidget::keyPressEvent;
        using TextCustomEditor::RichTextEditorWidget::keyReleaseEvent;
        using TextCustomEditor::RichTextEditorWidget::leaveEvent;
        using TextCustomEditor::RichTextEditorWidget::metric;
        using TextCustomEditor::RichTextEditorWidget::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextEditorWidget::mouseMoveEvent;
        using TextCustomEditor::RichTextEditorWidget::mousePressEvent;
        using TextCustomEditor::RichTextEditorWidget::mouseReleaseEvent;
        using TextCustomEditor::RichTextEditorWidget::moveEvent;
        using TextCustomEditor::RichTextEditorWidget::nativeEvent;
        using TextCustomEditor::RichTextEditorWidget::paintEvent;
        using TextCustomEditor::RichTextEditorWidget::redirected;
        using TextCustomEditor::RichTextEditorWidget::resizeEvent;
        using TextCustomEditor::RichTextEditorWidget::sharedPainter;
        using TextCustomEditor::RichTextEditorWidget::showEvent;
        using TextCustomEditor::RichTextEditorWidget::tabletEvent;
        using TextCustomEditor::RichTextEditorWidget::timerEvent;
        using TextCustomEditor::RichTextEditorWidget::wheelEvent;
    };

    VirtualTextCustomEditorRichTextEditorWidget(QWidget* parent) : TextCustomEditor::RichTextEditorWidget(parent) {};
    VirtualTextCustomEditorRichTextEditorWidget() : TextCustomEditor::RichTextEditorWidget() {};
    VirtualTextCustomEditorRichTextEditorWidget(TextCustomEditor::RichTextEditor* customEditor) : TextCustomEditor::RichTextEditorWidget(customEditor) {};
    VirtualTextCustomEditorRichTextEditorWidget(TextCustomEditor::RichTextEditor* customEditor, QWidget* parent) : TextCustomEditor::RichTextEditorWidget(customEditor, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtexteditorwidget_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtexteditorwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtexteditorwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtexteditorwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtexteditorwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtexteditorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtexteditorwidget_devtype_callback) {
            int callback_ret = textcustomeditor__richtexteditorwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtexteditorwidget_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtexteditorwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtexteditorwidget_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditorwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtexteditorwidget_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtexteditorwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtexteditorwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtexteditorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtexteditorwidget_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtexteditorwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtexteditorwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtexteditorwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textcustomeditor__richtexteditorwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtexteditorwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtexteditorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtexteditorwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__richtexteditorwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtexteditorwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtexteditorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextEditorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtexteditorwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtexteditorwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtexteditorwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtexteditorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtexteditorwidget_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtexteditorwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtexteditorwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtexteditorwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtexteditorwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__richtexteditorwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextEditorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtexteditorwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtexteditorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__richtexteditorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextEditorWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtexteditorwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtexteditorwidget_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditorwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditorwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtexteditorwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtexteditorwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextEditorWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextEditorWidget_SuperEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMousePressEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMouseMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperWheelEvent(TextCustomEditor::RichTextEditorWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperKeyPressEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperKeyReleaseEvent(TextCustomEditor::RichTextEditorWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperFocusInEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperFocusOutEvent(TextCustomEditor::RichTextEditorWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperEnterEvent(TextCustomEditor::RichTextEditorWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperLeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperPaintEvent(TextCustomEditor::RichTextEditorWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperResizeEvent(TextCustomEditor::RichTextEditorWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperCloseEvent(TextCustomEditor::RichTextEditorWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperContextMenuEvent(TextCustomEditor::RichTextEditorWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperTabletEvent(TextCustomEditor::RichTextEditorWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperActionEvent(TextCustomEditor::RichTextEditorWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragEnterEvent(TextCustomEditor::RichTextEditorWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragMoveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDragLeaveEvent(TextCustomEditor::RichTextEditorWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDropEvent(TextCustomEditor::RichTextEditorWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperShowEvent(TextCustomEditor::RichTextEditorWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperHideEvent(TextCustomEditor::RichTextEditorWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperNativeEvent(TextCustomEditor::RichTextEditorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextEditorWidget_SuperChangeEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* param1);
    friend int TextCustomEditor__RichTextEditorWidget_SuperMetric(const TextCustomEditor::RichTextEditorWidget* self, int param1);
    friend void TextCustomEditor__RichTextEditorWidget_SuperInitPainter(const TextCustomEditor::RichTextEditorWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextEditorWidget_SuperRedirected(const TextCustomEditor::RichTextEditorWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextEditorWidget_SuperSharedPainter(const TextCustomEditor::RichTextEditorWidget* self);
    friend void TextCustomEditor__RichTextEditorWidget_SuperInputMethodEvent(TextCustomEditor::RichTextEditorWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextEditorWidget_SuperFocusNextPrevChild(TextCustomEditor::RichTextEditorWidget* self, bool next);
    friend void TextCustomEditor__RichTextEditorWidget_SuperTimerEvent(TextCustomEditor::RichTextEditorWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperChildEvent(TextCustomEditor::RichTextEditorWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperCustomEvent(TextCustomEditor::RichTextEditorWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextEditorWidget_SuperConnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextEditorWidget_SuperDisconnectNotify(TextCustomEditor::RichTextEditorWidget* self, const QMetaMethod* signal);
};

#endif
