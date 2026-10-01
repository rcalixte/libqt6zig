#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextCustomEditor::RichTextBrowserWidget
class VirtualTextCustomEditorRichTextBrowserWidget final : public TextCustomEditor::RichTextBrowserWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback = QMetaObject* (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_Metacast_Callback = void* (*)(TextCustomEditor__RichTextBrowserWidget*, const char*);
    using TextCustomEditor__RichTextBrowserWidget_Metacall_Callback = int (*)(TextCustomEditor__RichTextBrowserWidget*, int, int, void**);
    using TextCustomEditor__RichTextBrowserWidget_DevType_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, bool);
    using TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback = QSize* (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback = bool (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_Event_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMouseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QWheelEvent*);
    using TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QKeyEvent*);
    using TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QFocusEvent*);
    using TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEnterEvent*);
    using TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QPaintEvent*);
    using TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMoveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QResizeEvent*);
    using TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QCloseEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QContextMenuEvent*);
    using TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QTabletEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QActionEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragEnterEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragMoveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDragLeaveEvent*);
    using TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QDropEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QShowEvent*);
    using TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QHideEvent*);
    using TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, libqt_string, void*, intptr_t*);
    using TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_Metric_Callback = int (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback = void (*)(const TextCustomEditor__RichTextBrowserWidget*, QPainter*);
    using TextCustomEditor__RichTextBrowserWidget_Redirected_Callback = QPaintDevice* (*)(const TextCustomEditor__RichTextBrowserWidget*, QPoint*);
    using TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback = QPainter* (*)(const TextCustomEditor__RichTextBrowserWidget*);
    using TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QInputMethodEvent*);
    using TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback = QVariant* (*)(const TextCustomEditor__RichTextBrowserWidget*, int);
    using TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, bool);
    using TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback = bool (*)(TextCustomEditor__RichTextBrowserWidget*, QObject*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QTimerEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QChildEvent*);
    using TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QEvent*);
    using TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMetaMethod*);
    using TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback = void (*)(TextCustomEditor__RichTextBrowserWidget*, QMetaMethod*);
    using TextCustomEditor::RichTextBrowserWidget::create;
    using TextCustomEditor::RichTextBrowserWidget::destroy;
    using TextCustomEditor::RichTextBrowserWidget::focusNextChild;
    using TextCustomEditor::RichTextBrowserWidget::focusPreviousChild;
    using TextCustomEditor::RichTextBrowserWidget::getDecodedMetricF;
    using TextCustomEditor::RichTextBrowserWidget::isSignalConnected;
    using TextCustomEditor::RichTextBrowserWidget::receivers;
    using TextCustomEditor::RichTextBrowserWidget::sender;
    using TextCustomEditor::RichTextBrowserWidget::senderSignalIndex;
    using TextCustomEditor::RichTextBrowserWidget::updateMicroFocus;

    // Instance callback storage
    TextCustomEditor__RichTextBrowserWidget_MetaObject_Callback textcustomeditor__richtextbrowserwidget_metaobject_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metacast_Callback textcustomeditor__richtextbrowserwidget_metacast_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metacall_Callback textcustomeditor__richtextbrowserwidget_metacall_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DevType_Callback textcustomeditor__richtextbrowserwidget_devtype_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SetVisible_Callback textcustomeditor__richtextbrowserwidget_setvisible_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SizeHint_Callback textcustomeditor__richtextbrowserwidget_sizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MinimumSizeHint_Callback textcustomeditor__richtextbrowserwidget_minimumsizehint_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HeightForWidth_Callback textcustomeditor__richtextbrowserwidget_heightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HasHeightForWidth_Callback textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_PaintEngine_Callback textcustomeditor__richtextbrowserwidget_paintengine_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Event_Callback textcustomeditor__richtextbrowserwidget_event_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MousePressEvent_Callback textcustomeditor__richtextbrowserwidget_mousepressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseReleaseEvent_Callback textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseDoubleClickEvent_Callback textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MouseMoveEvent_Callback textcustomeditor__richtextbrowserwidget_mousemoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_WheelEvent_Callback textcustomeditor__richtextbrowserwidget_wheelevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_KeyPressEvent_Callback textcustomeditor__richtextbrowserwidget_keypressevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_KeyReleaseEvent_Callback textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusInEvent_Callback textcustomeditor__richtextbrowserwidget_focusinevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusOutEvent_Callback textcustomeditor__richtextbrowserwidget_focusoutevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_EnterEvent_Callback textcustomeditor__richtextbrowserwidget_enterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_LeaveEvent_Callback textcustomeditor__richtextbrowserwidget_leaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_PaintEvent_Callback textcustomeditor__richtextbrowserwidget_paintevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_MoveEvent_Callback textcustomeditor__richtextbrowserwidget_moveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ResizeEvent_Callback textcustomeditor__richtextbrowserwidget_resizeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_CloseEvent_Callback textcustomeditor__richtextbrowserwidget_closeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ContextMenuEvent_Callback textcustomeditor__richtextbrowserwidget_contextmenuevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_TabletEvent_Callback textcustomeditor__richtextbrowserwidget_tabletevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ActionEvent_Callback textcustomeditor__richtextbrowserwidget_actionevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragEnterEvent_Callback textcustomeditor__richtextbrowserwidget_dragenterevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragMoveEvent_Callback textcustomeditor__richtextbrowserwidget_dragmoveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DragLeaveEvent_Callback textcustomeditor__richtextbrowserwidget_dragleaveevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DropEvent_Callback textcustomeditor__richtextbrowserwidget_dropevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ShowEvent_Callback textcustomeditor__richtextbrowserwidget_showevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_HideEvent_Callback textcustomeditor__richtextbrowserwidget_hideevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_NativeEvent_Callback textcustomeditor__richtextbrowserwidget_nativeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ChangeEvent_Callback textcustomeditor__richtextbrowserwidget_changeevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Metric_Callback textcustomeditor__richtextbrowserwidget_metric_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InitPainter_Callback textcustomeditor__richtextbrowserwidget_initpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_Redirected_Callback textcustomeditor__richtextbrowserwidget_redirected_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_SharedPainter_Callback textcustomeditor__richtextbrowserwidget_sharedpainter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InputMethodEvent_Callback textcustomeditor__richtextbrowserwidget_inputmethodevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_InputMethodQuery_Callback textcustomeditor__richtextbrowserwidget_inputmethodquery_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_FocusNextPrevChild_Callback textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_EventFilter_Callback textcustomeditor__richtextbrowserwidget_eventfilter_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_TimerEvent_Callback textcustomeditor__richtextbrowserwidget_timerevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ChildEvent_Callback textcustomeditor__richtextbrowserwidget_childevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_CustomEvent_Callback textcustomeditor__richtextbrowserwidget_customevent_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_ConnectNotify_Callback textcustomeditor__richtextbrowserwidget_connectnotify_callback = nullptr;
    TextCustomEditor__RichTextBrowserWidget_DisconnectNotify_Callback textcustomeditor__richtextbrowserwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextCustomEditor::RichTextBrowserWidget {
        using TextCustomEditor::RichTextBrowserWidget::actionEvent;
        using TextCustomEditor::RichTextBrowserWidget::changeEvent;
        using TextCustomEditor::RichTextBrowserWidget::childEvent;
        using TextCustomEditor::RichTextBrowserWidget::closeEvent;
        using TextCustomEditor::RichTextBrowserWidget::connectNotify;
        using TextCustomEditor::RichTextBrowserWidget::contextMenuEvent;
        using TextCustomEditor::RichTextBrowserWidget::customEvent;
        using TextCustomEditor::RichTextBrowserWidget::disconnectNotify;
        using TextCustomEditor::RichTextBrowserWidget::dragEnterEvent;
        using TextCustomEditor::RichTextBrowserWidget::dragLeaveEvent;
        using TextCustomEditor::RichTextBrowserWidget::dragMoveEvent;
        using TextCustomEditor::RichTextBrowserWidget::dropEvent;
        using TextCustomEditor::RichTextBrowserWidget::enterEvent;
        using TextCustomEditor::RichTextBrowserWidget::event;
        using TextCustomEditor::RichTextBrowserWidget::focusInEvent;
        using TextCustomEditor::RichTextBrowserWidget::focusNextPrevChild;
        using TextCustomEditor::RichTextBrowserWidget::focusOutEvent;
        using TextCustomEditor::RichTextBrowserWidget::hideEvent;
        using TextCustomEditor::RichTextBrowserWidget::initPainter;
        using TextCustomEditor::RichTextBrowserWidget::inputMethodEvent;
        using TextCustomEditor::RichTextBrowserWidget::keyPressEvent;
        using TextCustomEditor::RichTextBrowserWidget::keyReleaseEvent;
        using TextCustomEditor::RichTextBrowserWidget::leaveEvent;
        using TextCustomEditor::RichTextBrowserWidget::metric;
        using TextCustomEditor::RichTextBrowserWidget::mouseDoubleClickEvent;
        using TextCustomEditor::RichTextBrowserWidget::mouseMoveEvent;
        using TextCustomEditor::RichTextBrowserWidget::mousePressEvent;
        using TextCustomEditor::RichTextBrowserWidget::mouseReleaseEvent;
        using TextCustomEditor::RichTextBrowserWidget::moveEvent;
        using TextCustomEditor::RichTextBrowserWidget::nativeEvent;
        using TextCustomEditor::RichTextBrowserWidget::paintEvent;
        using TextCustomEditor::RichTextBrowserWidget::redirected;
        using TextCustomEditor::RichTextBrowserWidget::resizeEvent;
        using TextCustomEditor::RichTextBrowserWidget::sharedPainter;
        using TextCustomEditor::RichTextBrowserWidget::showEvent;
        using TextCustomEditor::RichTextBrowserWidget::tabletEvent;
        using TextCustomEditor::RichTextBrowserWidget::timerEvent;
        using TextCustomEditor::RichTextBrowserWidget::wheelEvent;
    };

    VirtualTextCustomEditorRichTextBrowserWidget(QWidget* parent) : TextCustomEditor::RichTextBrowserWidget(parent) {};
    VirtualTextCustomEditorRichTextBrowserWidget() : TextCustomEditor::RichTextBrowserWidget() {};
    VirtualTextCustomEditorRichTextBrowserWidget(TextCustomEditor::RichTextBrowser* customEditor) : TextCustomEditor::RichTextBrowserWidget(customEditor) {};
    VirtualTextCustomEditorRichTextBrowserWidget(TextCustomEditor::RichTextBrowser* customEditor, QWidget* parent) : TextCustomEditor::RichTextBrowserWidget(customEditor, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textcustomeditor__richtextbrowserwidget_metaobject_callback) {
            QMetaObject* callback_ret = textcustomeditor__richtextbrowserwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textcustomeditor__richtextbrowserwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textcustomeditor__richtextbrowserwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textcustomeditor__richtextbrowserwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textcustomeditor__richtextbrowserwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textcustomeditor__richtextbrowserwidget_devtype_callback) {
            int callback_ret = textcustomeditor__richtextbrowserwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textcustomeditor__richtextbrowserwidget_setvisible_callback) {
            bool cbval1 = visible;
            textcustomeditor__richtextbrowserwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textcustomeditor__richtextbrowserwidget_sizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowserwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textcustomeditor__richtextbrowserwidget_minimumsizehint_callback) {
            QSize* callback_ret = textcustomeditor__richtextbrowserwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textcustomeditor__richtextbrowserwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textcustomeditor__richtextbrowserwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback) {
            bool callback_ret = textcustomeditor__richtextbrowserwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textcustomeditor__richtextbrowserwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textcustomeditor__richtextbrowserwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textcustomeditor__richtextbrowserwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_showevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textcustomeditor__richtextbrowserwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textcustomeditor__richtextbrowserwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textcustomeditor__richtextbrowserwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textcustomeditor__richtextbrowserwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textcustomeditor__richtextbrowserwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textcustomeditor__richtextbrowserwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextCustomEditor__RichTextBrowserWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textcustomeditor__richtextbrowserwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textcustomeditor__richtextbrowserwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textcustomeditor__richtextbrowserwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textcustomeditor__richtextbrowserwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textcustomeditor__richtextbrowserwidget_sharedpainter_callback) {
            QPainter* callback_ret = textcustomeditor__richtextbrowserwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textcustomeditor__richtextbrowserwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textcustomeditor__richtextbrowserwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textcustomeditor__richtextbrowserwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textcustomeditor__richtextbrowserwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextCustomEditor__RichTextBrowserWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textcustomeditor__richtextbrowserwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textcustomeditor__richtextbrowserwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextCustomEditor__RichTextBrowserWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_childevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textcustomeditor__richtextbrowserwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textcustomeditor__richtextbrowserwidget_customevent_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowserwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textcustomeditor__richtextbrowserwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textcustomeditor__richtextbrowserwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextCustomEditor__RichTextBrowserWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMousePressEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseDoubleClickEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMouseMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMouseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperWheelEvent(TextCustomEditor::RichTextBrowserWidget* self, QWheelEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperKeyPressEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperKeyReleaseEvent(TextCustomEditor::RichTextBrowserWidget* self, QKeyEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperFocusInEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperFocusOutEvent(TextCustomEditor::RichTextBrowserWidget* self, QFocusEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperEnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperLeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperPaintEvent(TextCustomEditor::RichTextBrowserWidget* self, QPaintEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperResizeEvent(TextCustomEditor::RichTextBrowserWidget* self, QResizeEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperCloseEvent(TextCustomEditor::RichTextBrowserWidget* self, QCloseEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperContextMenuEvent(TextCustomEditor::RichTextBrowserWidget* self, QContextMenuEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperTabletEvent(TextCustomEditor::RichTextBrowserWidget* self, QTabletEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperActionEvent(TextCustomEditor::RichTextBrowserWidget* self, QActionEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragEnterEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragEnterEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragMoveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragMoveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDragLeaveEvent(TextCustomEditor::RichTextBrowserWidget* self, QDragLeaveEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDropEvent(TextCustomEditor::RichTextBrowserWidget* self, QDropEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperShowEvent(TextCustomEditor::RichTextBrowserWidget* self, QShowEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperHideEvent(TextCustomEditor::RichTextBrowserWidget* self, QHideEvent* event);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperNativeEvent(TextCustomEditor::RichTextBrowserWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperChangeEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* param1);
    friend int TextCustomEditor__RichTextBrowserWidget_SuperMetric(const TextCustomEditor::RichTextBrowserWidget* self, int param1);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperInitPainter(const TextCustomEditor::RichTextBrowserWidget* self, QPainter* painter);
    friend QPaintDevice* TextCustomEditor__RichTextBrowserWidget_SuperRedirected(const TextCustomEditor::RichTextBrowserWidget* self, QPoint* offset);
    friend QPainter* TextCustomEditor__RichTextBrowserWidget_SuperSharedPainter(const TextCustomEditor::RichTextBrowserWidget* self);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperInputMethodEvent(TextCustomEditor::RichTextBrowserWidget* self, QInputMethodEvent* param1);
    friend bool TextCustomEditor__RichTextBrowserWidget_SuperFocusNextPrevChild(TextCustomEditor::RichTextBrowserWidget* self, bool next);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperTimerEvent(TextCustomEditor::RichTextBrowserWidget* self, QTimerEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperChildEvent(TextCustomEditor::RichTextBrowserWidget* self, QChildEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperCustomEvent(TextCustomEditor::RichTextBrowserWidget* self, QEvent* event);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperConnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
    friend void TextCustomEditor__RichTextBrowserWidget_SuperDisconnectNotify(TextCustomEditor::RichTextBrowserWidget* self, const QMetaMethod* signal);
};

#endif
