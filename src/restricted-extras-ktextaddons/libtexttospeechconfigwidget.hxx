#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONFIGWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONFIGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechConfigWidget
class VirtualTextEditTextToSpeechTextToSpeechConfigWidget final : public TextEditTextToSpeech::TextToSpeechConfigWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, const char*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DevType_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*, int);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QWheelEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QPaintEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QResizeEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QCloseEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QContextMenuEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QTabletEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QActionEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QDragEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QDragMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QDragLeaveEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QDropEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QShowEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QHideEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, libqt_string, void*, intptr_t*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_Metric_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*, int);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_Callback = void (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*, QPainter*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_Callback = QPaintDevice* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*, QPoint*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_Callback = QPainter* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QInputMethodEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const TextEditTextToSpeech__TextToSpeechConfigWidget*, int);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechConfigWidget*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechConfigWidget::create;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::destroy;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextChild;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::focusPreviousChild;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::getDecodedMetricF;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::receivers;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::sender;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::senderSignalIndex;
    using TextEditTextToSpeech::TextToSpeechConfigWidget::updateMicroFocus;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechConfigWidget_MetaObject_Callback textedittexttospeech__texttospeechconfigwidget_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_Metacast_Callback textedittexttospeech__texttospeechconfigwidget_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_Metacall_Callback textedittexttospeech__texttospeechconfigwidget_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DevType_Callback textedittexttospeech__texttospeechconfigwidget_devtype_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_SetVisible_Callback textedittexttospeech__texttospeechconfigwidget_setvisible_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_SizeHint_Callback textedittexttospeech__texttospeechconfigwidget_sizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MinimumSizeHint_Callback textedittexttospeech__texttospeechconfigwidget_minimumsizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_HeightForWidth_Callback textedittexttospeech__texttospeechconfigwidget_heightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_HasHeightForWidth_Callback textedittexttospeech__texttospeechconfigwidget_hasheightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEngine_Callback textedittexttospeech__texttospeechconfigwidget_paintengine_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_Event_Callback textedittexttospeech__texttospeechconfigwidget_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MousePressEvent_Callback textedittexttospeech__texttospeechconfigwidget_mousepressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseReleaseEvent_Callback textedittexttospeech__texttospeechconfigwidget_mousereleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseDoubleClickEvent_Callback textedittexttospeech__texttospeechconfigwidget_mousedoubleclickevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MouseMoveEvent_Callback textedittexttospeech__texttospeechconfigwidget_mousemoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_WheelEvent_Callback textedittexttospeech__texttospeechconfigwidget_wheelevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_KeyPressEvent_Callback textedittexttospeech__texttospeechconfigwidget_keypressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_KeyReleaseEvent_Callback textedittexttospeech__texttospeechconfigwidget_keyreleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_FocusInEvent_Callback textedittexttospeech__texttospeechconfigwidget_focusinevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_FocusOutEvent_Callback textedittexttospeech__texttospeechconfigwidget_focusoutevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_EnterEvent_Callback textedittexttospeech__texttospeechconfigwidget_enterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_LeaveEvent_Callback textedittexttospeech__texttospeechconfigwidget_leaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_PaintEvent_Callback textedittexttospeech__texttospeechconfigwidget_paintevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_MoveEvent_Callback textedittexttospeech__texttospeechconfigwidget_moveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ResizeEvent_Callback textedittexttospeech__texttospeechconfigwidget_resizeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_CloseEvent_Callback textedittexttospeech__texttospeechconfigwidget_closeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ContextMenuEvent_Callback textedittexttospeech__texttospeechconfigwidget_contextmenuevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_TabletEvent_Callback textedittexttospeech__texttospeechconfigwidget_tabletevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ActionEvent_Callback textedittexttospeech__texttospeechconfigwidget_actionevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragEnterEvent_Callback textedittexttospeech__texttospeechconfigwidget_dragenterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragMoveEvent_Callback textedittexttospeech__texttospeechconfigwidget_dragmoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DragLeaveEvent_Callback textedittexttospeech__texttospeechconfigwidget_dragleaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DropEvent_Callback textedittexttospeech__texttospeechconfigwidget_dropevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ShowEvent_Callback textedittexttospeech__texttospeechconfigwidget_showevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_HideEvent_Callback textedittexttospeech__texttospeechconfigwidget_hideevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_NativeEvent_Callback textedittexttospeech__texttospeechconfigwidget_nativeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ChangeEvent_Callback textedittexttospeech__texttospeechconfigwidget_changeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_Metric_Callback textedittexttospeech__texttospeechconfigwidget_metric_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_InitPainter_Callback textedittexttospeech__texttospeechconfigwidget_initpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_Redirected_Callback textedittexttospeech__texttospeechconfigwidget_redirected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_SharedPainter_Callback textedittexttospeech__texttospeechconfigwidget_sharedpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodEvent_Callback textedittexttospeech__texttospeechconfigwidget_inputmethodevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_InputMethodQuery_Callback textedittexttospeech__texttospeechconfigwidget_inputmethodquery_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_FocusNextPrevChild_Callback textedittexttospeech__texttospeechconfigwidget_focusnextprevchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_EventFilter_Callback textedittexttospeech__texttospeechconfigwidget_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_TimerEvent_Callback textedittexttospeech__texttospeechconfigwidget_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ChildEvent_Callback textedittexttospeech__texttospeechconfigwidget_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_CustomEvent_Callback textedittexttospeech__texttospeechconfigwidget_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_ConnectNotify_Callback textedittexttospeech__texttospeechconfigwidget_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechConfigWidget_DisconnectNotify_Callback textedittexttospeech__texttospeechconfigwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechConfigWidget {
        using TextEditTextToSpeech::TextToSpeechConfigWidget::actionEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::changeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::childEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::closeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::connectNotify;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::contextMenuEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::customEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::dragEnterEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::dragLeaveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::dragMoveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::dropEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::enterEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::event;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::focusInEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::focusNextPrevChild;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::focusOutEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::hideEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::initPainter;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::inputMethodEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::keyPressEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::keyReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::leaveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::metric;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::mouseDoubleClickEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::mouseMoveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::mousePressEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::mouseReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::moveEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::nativeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::paintEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::redirected;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::resizeEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::sharedPainter;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::showEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::tabletEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::timerEvent;
        using TextEditTextToSpeech::TextToSpeechConfigWidget::wheelEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechConfigWidget(QWidget* parent) : TextEditTextToSpeech::TextToSpeechConfigWidget(parent) {};
    VirtualTextEditTextToSpeechTextToSpeechConfigWidget() : TextEditTextToSpeech::TextToSpeechConfigWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechconfigwidget_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechconfigwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechconfigwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechconfigwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechconfigwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechconfigwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textedittexttospeech__texttospeechconfigwidget_devtype_callback) {
            int callback_ret = textedittexttospeech__texttospeechconfigwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textedittexttospeech__texttospeechconfigwidget_setvisible_callback) {
            bool cbval1 = visible;
            textedittexttospeech__texttospeechconfigwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textedittexttospeech__texttospeechconfigwidget_sizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechconfigwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textedittexttospeech__texttospeechconfigwidget_minimumsizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechconfigwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textedittexttospeech__texttospeechconfigwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textedittexttospeech__texttospeechconfigwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textedittexttospeech__texttospeechconfigwidget_hasheightforwidth_callback) {
            bool callback_ret = textedittexttospeech__texttospeechconfigwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textedittexttospeech__texttospeechconfigwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textedittexttospeech__texttospeechconfigwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechconfigwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_showevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textedittexttospeech__texttospeechconfigwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textedittexttospeech__texttospeechconfigwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textedittexttospeech__texttospeechconfigwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textedittexttospeech__texttospeechconfigwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textedittexttospeech__texttospeechconfigwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textedittexttospeech__texttospeechconfigwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textedittexttospeech__texttospeechconfigwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textedittexttospeech__texttospeechconfigwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textedittexttospeech__texttospeechconfigwidget_sharedpainter_callback) {
            QPainter* callback_ret = textedittexttospeech__texttospeechconfigwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textedittexttospeech__texttospeechconfigwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textedittexttospeech__texttospeechconfigwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textedittexttospeech__texttospeechconfigwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textedittexttospeech__texttospeechconfigwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textedittexttospeech__texttospeechconfigwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textedittexttospeech__texttospeechconfigwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textedittexttospeech__texttospeechconfigwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechconfigwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechconfigwidget_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechconfigwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechconfigwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechconfigwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechconfigwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechConfigWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMousePressEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseReleaseEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMouseMoveEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperWheelEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyPressEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperKeyReleaseEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusInEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusOutEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperEnterEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperLeaveEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperPaintEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMoveEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperResizeEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QResizeEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCloseEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QCloseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperContextMenuEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QContextMenuEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTabletEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperActionEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragEnterEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragMoveEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDragLeaveEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDropEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperShowEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QShowEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperHideEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QHideEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperNativeEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChangeEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QEvent* param1);
    friend int TextEditTextToSpeech__TextToSpeechConfigWidget_SuperMetric(const TextEditTextToSpeech::TextToSpeechConfigWidget* self, int param1);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInitPainter(const TextEditTextToSpeech::TextToSpeechConfigWidget* self, QPainter* painter);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperRedirected(const TextEditTextToSpeech::TextToSpeechConfigWidget* self, QPoint* offset);
    friend QPainter* TextEditTextToSpeech__TextToSpeechConfigWidget_SuperSharedPainter(const TextEditTextToSpeech::TextToSpeechConfigWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperInputMethodEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QInputMethodEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechConfigWidget_SuperFocusNextPrevChild(TextEditTextToSpeech::TextToSpeechConfigWidget* self, bool next);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperChildEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechConfigWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechConfigWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechConfigWidget_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechConfigWidget* self, const QMetaMethod* signal);
};

#endif
