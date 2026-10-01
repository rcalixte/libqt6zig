#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechWidget
class VirtualTextEditTextToSpeechTextToSpeechWidget final : public TextEditTextToSpeech::TextToSpeechWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechWidget*, const char*);
    using TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechWidget*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QWheelEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QPaintEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QResizeEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QCloseEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QContextMenuEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QTabletEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QActionEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDragLeaveEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QDropEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QShowEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QHideEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, libqt_string, void*, intptr_t*);
    using TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback = void (*)(const TextEditTextToSpeech__TextToSpeechWidget*, QPainter*);
    using TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback = QPaintDevice* (*)(const TextEditTextToSpeech__TextToSpeechWidget*, QPoint*);
    using TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback = QPainter* (*)(const TextEditTextToSpeech__TextToSpeechWidget*);
    using TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QInputMethodEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback = QVariant* (*)(const TextEditTextToSpeech__TextToSpeechWidget*, int);
    using TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechWidget*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechWidget*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechWidget::create;
    using TextEditTextToSpeech::TextToSpeechWidget::destroy;
    using TextEditTextToSpeech::TextToSpeechWidget::focusNextChild;
    using TextEditTextToSpeech::TextToSpeechWidget::focusPreviousChild;
    using TextEditTextToSpeech::TextToSpeechWidget::getDecodedMetricF;
    using TextEditTextToSpeech::TextToSpeechWidget::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechWidget::receivers;
    using TextEditTextToSpeech::TextToSpeechWidget::sender;
    using TextEditTextToSpeech::TextToSpeechWidget::senderSignalIndex;
    using TextEditTextToSpeech::TextToSpeechWidget::updateMicroFocus;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechWidget_MetaObject_Callback textedittexttospeech__texttospeechwidget_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metacast_Callback textedittexttospeech__texttospeechwidget_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metacall_Callback textedittexttospeech__texttospeechwidget_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DevType_Callback textedittexttospeech__texttospeechwidget_devtype_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SetVisible_Callback textedittexttospeech__texttospeechwidget_setvisible_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SizeHint_Callback textedittexttospeech__texttospeechwidget_sizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MinimumSizeHint_Callback textedittexttospeech__texttospeechwidget_minimumsizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HeightForWidth_Callback textedittexttospeech__texttospeechwidget_heightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HasHeightForWidth_Callback textedittexttospeech__texttospeechwidget_hasheightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_PaintEngine_Callback textedittexttospeech__texttospeechwidget_paintengine_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Event_Callback textedittexttospeech__texttospeechwidget_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MousePressEvent_Callback textedittexttospeech__texttospeechwidget_mousepressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseReleaseEvent_Callback textedittexttospeech__texttospeechwidget_mousereleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseDoubleClickEvent_Callback textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MouseMoveEvent_Callback textedittexttospeech__texttospeechwidget_mousemoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_WheelEvent_Callback textedittexttospeech__texttospeechwidget_wheelevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_KeyPressEvent_Callback textedittexttospeech__texttospeechwidget_keypressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_KeyReleaseEvent_Callback textedittexttospeech__texttospeechwidget_keyreleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusInEvent_Callback textedittexttospeech__texttospeechwidget_focusinevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusOutEvent_Callback textedittexttospeech__texttospeechwidget_focusoutevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_EnterEvent_Callback textedittexttospeech__texttospeechwidget_enterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_LeaveEvent_Callback textedittexttospeech__texttospeechwidget_leaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_PaintEvent_Callback textedittexttospeech__texttospeechwidget_paintevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_MoveEvent_Callback textedittexttospeech__texttospeechwidget_moveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ResizeEvent_Callback textedittexttospeech__texttospeechwidget_resizeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_CloseEvent_Callback textedittexttospeech__texttospeechwidget_closeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ContextMenuEvent_Callback textedittexttospeech__texttospeechwidget_contextmenuevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_TabletEvent_Callback textedittexttospeech__texttospeechwidget_tabletevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ActionEvent_Callback textedittexttospeech__texttospeechwidget_actionevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragEnterEvent_Callback textedittexttospeech__texttospeechwidget_dragenterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragMoveEvent_Callback textedittexttospeech__texttospeechwidget_dragmoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DragLeaveEvent_Callback textedittexttospeech__texttospeechwidget_dragleaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DropEvent_Callback textedittexttospeech__texttospeechwidget_dropevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ShowEvent_Callback textedittexttospeech__texttospeechwidget_showevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_HideEvent_Callback textedittexttospeech__texttospeechwidget_hideevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_NativeEvent_Callback textedittexttospeech__texttospeechwidget_nativeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ChangeEvent_Callback textedittexttospeech__texttospeechwidget_changeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Metric_Callback textedittexttospeech__texttospeechwidget_metric_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InitPainter_Callback textedittexttospeech__texttospeechwidget_initpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_Redirected_Callback textedittexttospeech__texttospeechwidget_redirected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_SharedPainter_Callback textedittexttospeech__texttospeechwidget_sharedpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InputMethodEvent_Callback textedittexttospeech__texttospeechwidget_inputmethodevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_InputMethodQuery_Callback textedittexttospeech__texttospeechwidget_inputmethodquery_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_FocusNextPrevChild_Callback textedittexttospeech__texttospeechwidget_focusnextprevchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_EventFilter_Callback textedittexttospeech__texttospeechwidget_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_TimerEvent_Callback textedittexttospeech__texttospeechwidget_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ChildEvent_Callback textedittexttospeech__texttospeechwidget_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_CustomEvent_Callback textedittexttospeech__texttospeechwidget_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_ConnectNotify_Callback textedittexttospeech__texttospeechwidget_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechWidget_DisconnectNotify_Callback textedittexttospeech__texttospeechwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechWidget {
        using TextEditTextToSpeech::TextToSpeechWidget::actionEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::changeEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::childEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::closeEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::connectNotify;
        using TextEditTextToSpeech::TextToSpeechWidget::contextMenuEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::customEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechWidget::dragEnterEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::dragLeaveEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::dragMoveEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::dropEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::enterEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::event;
        using TextEditTextToSpeech::TextToSpeechWidget::focusInEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::focusNextPrevChild;
        using TextEditTextToSpeech::TextToSpeechWidget::focusOutEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::hideEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::initPainter;
        using TextEditTextToSpeech::TextToSpeechWidget::inputMethodEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::keyPressEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::keyReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::leaveEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::metric;
        using TextEditTextToSpeech::TextToSpeechWidget::mouseDoubleClickEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::mouseMoveEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::mousePressEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::mouseReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::moveEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::nativeEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::paintEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::redirected;
        using TextEditTextToSpeech::TextToSpeechWidget::resizeEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::sharedPainter;
        using TextEditTextToSpeech::TextToSpeechWidget::showEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::tabletEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::timerEvent;
        using TextEditTextToSpeech::TextToSpeechWidget::wheelEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechWidget(QWidget* parent) : TextEditTextToSpeech::TextToSpeechWidget(parent) {};
    VirtualTextEditTextToSpeechTextToSpeechWidget() : TextEditTextToSpeech::TextToSpeechWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechwidget_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textedittexttospeech__texttospeechwidget_devtype_callback) {
            int callback_ret = textedittexttospeech__texttospeechwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textedittexttospeech__texttospeechwidget_setvisible_callback) {
            bool cbval1 = visible;
            textedittexttospeech__texttospeechwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textedittexttospeech__texttospeechwidget_sizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textedittexttospeech__texttospeechwidget_minimumsizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textedittexttospeech__texttospeechwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textedittexttospeech__texttospeechwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textedittexttospeech__texttospeechwidget_hasheightforwidth_callback) {
            bool callback_ret = textedittexttospeech__texttospeechwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textedittexttospeech__texttospeechwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textedittexttospeech__texttospeechwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_showevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textedittexttospeech__texttospeechwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textedittexttospeech__texttospeechwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textedittexttospeech__texttospeechwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textedittexttospeech__texttospeechwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textedittexttospeech__texttospeechwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textedittexttospeech__texttospeechwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textedittexttospeech__texttospeechwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textedittexttospeech__texttospeechwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textedittexttospeech__texttospeechwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textedittexttospeech__texttospeechwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textedittexttospeech__texttospeechwidget_sharedpainter_callback) {
            QPainter* callback_ret = textedittexttospeech__texttospeechwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textedittexttospeech__texttospeechwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textedittexttospeech__texttospeechwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textedittexttospeech__texttospeechwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textedittexttospeech__texttospeechwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textedittexttospeech__texttospeechwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textedittexttospeech__texttospeechwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textedittexttospeech__texttospeechwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechwidget_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMousePressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMouseMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperWheelEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyPressEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperKeyReleaseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusInEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperFocusOutEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperEnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperLeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperPaintEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperResizeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QResizeEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperCloseEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QCloseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperContextMenuEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QContextMenuEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperTabletEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperActionEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragEnterEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragMoveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDragLeaveEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDropEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperShowEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QShowEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperHideEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QHideEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperNativeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperChangeEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* param1);
    friend int TextEditTextToSpeech__TextToSpeechWidget_SuperMetric(const TextEditTextToSpeech::TextToSpeechWidget* self, int param1);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperInitPainter(const TextEditTextToSpeech::TextToSpeechWidget* self, QPainter* painter);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechWidget_SuperRedirected(const TextEditTextToSpeech::TextToSpeechWidget* self, QPoint* offset);
    friend QPainter* TextEditTextToSpeech__TextToSpeechWidget_SuperSharedPainter(const TextEditTextToSpeech::TextToSpeechWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperInputMethodEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QInputMethodEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechWidget_SuperFocusNextPrevChild(TextEditTextToSpeech::TextToSpeechWidget* self, bool next);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperChildEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechWidget_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechWidget* self, const QMetaMethod* signal);
};

#endif
