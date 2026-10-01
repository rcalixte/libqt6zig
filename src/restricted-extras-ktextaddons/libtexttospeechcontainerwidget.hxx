#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONTAINERWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTEXTTOSPEECHCONTAINERWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEditTextToSpeech::TextToSpeechContainerWidget
class VirtualTextEditTextToSpeechTextToSpeechContainerWidget final : public TextEditTextToSpeech::TextToSpeechContainerWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_Callback = QMetaObject* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_Callback = void* (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, const char*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_Callback = int (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, int, int, void**);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DevType_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_Callback = QSize* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*, int);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_Callback = bool (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_Event_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMouseEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QWheelEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QKeyEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QFocusEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QPaintEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QResizeEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QCloseEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QContextMenuEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QTabletEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QActionEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QDragEnterEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QDragMoveEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QDragLeaveEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QDropEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QShowEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QHideEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, libqt_string, void*, intptr_t*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_Metric_Callback = int (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*, int);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_Callback = void (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*, QPainter*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_Callback = QPaintDevice* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*, QPoint*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_Callback = QPainter* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QInputMethodEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_Callback = QVariant* (*)(const TextEditTextToSpeech__TextToSpeechContainerWidget*, int);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, bool);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_Callback = bool (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QObject*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QTimerEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QChildEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QEvent*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMetaMethod*);
    using TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_Callback = void (*)(TextEditTextToSpeech__TextToSpeechContainerWidget*, QMetaMethod*);
    using TextEditTextToSpeech::TextToSpeechContainerWidget::create;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::destroy;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextChild;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::focusPreviousChild;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::getDecodedMetricF;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::isSignalConnected;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::receivers;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::sender;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::senderSignalIndex;
    using TextEditTextToSpeech::TextToSpeechContainerWidget::updateMicroFocus;

    // Instance callback storage
    TextEditTextToSpeech__TextToSpeechContainerWidget_MetaObject_Callback textedittexttospeech__texttospeechcontainerwidget_metaobject_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_Metacast_Callback textedittexttospeech__texttospeechcontainerwidget_metacast_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_Metacall_Callback textedittexttospeech__texttospeechcontainerwidget_metacall_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DevType_Callback textedittexttospeech__texttospeechcontainerwidget_devtype_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_SetVisible_Callback textedittexttospeech__texttospeechcontainerwidget_setvisible_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_SizeHint_Callback textedittexttospeech__texttospeechcontainerwidget_sizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MinimumSizeHint_Callback textedittexttospeech__texttospeechcontainerwidget_minimumsizehint_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_HeightForWidth_Callback textedittexttospeech__texttospeechcontainerwidget_heightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_HasHeightForWidth_Callback textedittexttospeech__texttospeechcontainerwidget_hasheightforwidth_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEngine_Callback textedittexttospeech__texttospeechcontainerwidget_paintengine_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_Event_Callback textedittexttospeech__texttospeechcontainerwidget_event_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MousePressEvent_Callback textedittexttospeech__texttospeechcontainerwidget_mousepressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MouseReleaseEvent_Callback textedittexttospeech__texttospeechcontainerwidget_mousereleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MouseDoubleClickEvent_Callback textedittexttospeech__texttospeechcontainerwidget_mousedoubleclickevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MouseMoveEvent_Callback textedittexttospeech__texttospeechcontainerwidget_mousemoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_WheelEvent_Callback textedittexttospeech__texttospeechcontainerwidget_wheelevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_KeyPressEvent_Callback textedittexttospeech__texttospeechcontainerwidget_keypressevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_KeyReleaseEvent_Callback textedittexttospeech__texttospeechcontainerwidget_keyreleaseevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_FocusInEvent_Callback textedittexttospeech__texttospeechcontainerwidget_focusinevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_FocusOutEvent_Callback textedittexttospeech__texttospeechcontainerwidget_focusoutevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_EnterEvent_Callback textedittexttospeech__texttospeechcontainerwidget_enterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_LeaveEvent_Callback textedittexttospeech__texttospeechcontainerwidget_leaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_PaintEvent_Callback textedittexttospeech__texttospeechcontainerwidget_paintevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_MoveEvent_Callback textedittexttospeech__texttospeechcontainerwidget_moveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ResizeEvent_Callback textedittexttospeech__texttospeechcontainerwidget_resizeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_CloseEvent_Callback textedittexttospeech__texttospeechcontainerwidget_closeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ContextMenuEvent_Callback textedittexttospeech__texttospeechcontainerwidget_contextmenuevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_TabletEvent_Callback textedittexttospeech__texttospeechcontainerwidget_tabletevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ActionEvent_Callback textedittexttospeech__texttospeechcontainerwidget_actionevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DragEnterEvent_Callback textedittexttospeech__texttospeechcontainerwidget_dragenterevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DragMoveEvent_Callback textedittexttospeech__texttospeechcontainerwidget_dragmoveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DragLeaveEvent_Callback textedittexttospeech__texttospeechcontainerwidget_dragleaveevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DropEvent_Callback textedittexttospeech__texttospeechcontainerwidget_dropevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ShowEvent_Callback textedittexttospeech__texttospeechcontainerwidget_showevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_HideEvent_Callback textedittexttospeech__texttospeechcontainerwidget_hideevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_NativeEvent_Callback textedittexttospeech__texttospeechcontainerwidget_nativeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ChangeEvent_Callback textedittexttospeech__texttospeechcontainerwidget_changeevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_Metric_Callback textedittexttospeech__texttospeechcontainerwidget_metric_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_InitPainter_Callback textedittexttospeech__texttospeechcontainerwidget_initpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_Redirected_Callback textedittexttospeech__texttospeechcontainerwidget_redirected_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_SharedPainter_Callback textedittexttospeech__texttospeechcontainerwidget_sharedpainter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodEvent_Callback textedittexttospeech__texttospeechcontainerwidget_inputmethodevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_InputMethodQuery_Callback textedittexttospeech__texttospeechcontainerwidget_inputmethodquery_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_FocusNextPrevChild_Callback textedittexttospeech__texttospeechcontainerwidget_focusnextprevchild_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_EventFilter_Callback textedittexttospeech__texttospeechcontainerwidget_eventfilter_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_TimerEvent_Callback textedittexttospeech__texttospeechcontainerwidget_timerevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ChildEvent_Callback textedittexttospeech__texttospeechcontainerwidget_childevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_CustomEvent_Callback textedittexttospeech__texttospeechcontainerwidget_customevent_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_ConnectNotify_Callback textedittexttospeech__texttospeechcontainerwidget_connectnotify_callback = nullptr;
    TextEditTextToSpeech__TextToSpeechContainerWidget_DisconnectNotify_Callback textedittexttospeech__texttospeechcontainerwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEditTextToSpeech::TextToSpeechContainerWidget {
        using TextEditTextToSpeech::TextToSpeechContainerWidget::actionEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::changeEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::childEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::closeEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::connectNotify;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::contextMenuEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::customEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::disconnectNotify;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::dragEnterEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::dragLeaveEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::dragMoveEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::dropEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::enterEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::event;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::focusInEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::focusNextPrevChild;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::focusOutEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::hideEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::initPainter;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::inputMethodEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::keyPressEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::keyReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::leaveEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::metric;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::mouseDoubleClickEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::mouseMoveEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::mousePressEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::mouseReleaseEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::moveEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::nativeEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::paintEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::redirected;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::resizeEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::sharedPainter;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::showEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::tabletEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::timerEvent;
        using TextEditTextToSpeech::TextToSpeechContainerWidget::wheelEvent;
    };

    VirtualTextEditTextToSpeechTextToSpeechContainerWidget(QWidget* parent) : TextEditTextToSpeech::TextToSpeechContainerWidget(parent) {};
    VirtualTextEditTextToSpeechTextToSpeechContainerWidget() : TextEditTextToSpeech::TextToSpeechContainerWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_metaobject_callback) {
            QMetaObject* callback_ret = textedittexttospeech__texttospeechcontainerwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textedittexttospeech__texttospeechcontainerwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textedittexttospeech__texttospeechcontainerwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textedittexttospeech__texttospeechcontainerwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textedittexttospeech__texttospeechcontainerwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_devtype_callback) {
            int callback_ret = textedittexttospeech__texttospeechcontainerwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textedittexttospeech__texttospeechcontainerwidget_setvisible_callback) {
            bool cbval1 = visible;
            textedittexttospeech__texttospeechcontainerwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_sizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechcontainerwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_minimumsizehint_callback) {
            QSize* callback_ret = textedittexttospeech__texttospeechcontainerwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textedittexttospeech__texttospeechcontainerwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textedittexttospeech__texttospeechcontainerwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_hasheightforwidth_callback) {
            bool callback_ret = textedittexttospeech__texttospeechcontainerwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textedittexttospeech__texttospeechcontainerwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textedittexttospeech__texttospeechcontainerwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_showevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textedittexttospeech__texttospeechcontainerwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textedittexttospeech__texttospeechcontainerwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textedittexttospeech__texttospeechcontainerwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textedittexttospeech__texttospeechcontainerwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textedittexttospeech__texttospeechcontainerwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textedittexttospeech__texttospeechcontainerwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textedittexttospeech__texttospeechcontainerwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textedittexttospeech__texttospeechcontainerwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textedittexttospeech__texttospeechcontainerwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textedittexttospeech__texttospeechcontainerwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textedittexttospeech__texttospeechcontainerwidget_sharedpainter_callback) {
            QPainter* callback_ret = textedittexttospeech__texttospeechcontainerwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textedittexttospeech__texttospeechcontainerwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textedittexttospeech__texttospeechcontainerwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textedittexttospeech__texttospeechcontainerwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textedittexttospeech__texttospeechcontainerwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textedittexttospeech__texttospeechcontainerwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textedittexttospeech__texttospeechcontainerwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textedittexttospeech__texttospeechcontainerwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEditTextToSpeech__TextToSpeechContainerWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_childevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textedittexttospeech__texttospeechcontainerwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textedittexttospeech__texttospeechcontainerwidget_customevent_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechcontainerwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechcontainerwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textedittexttospeech__texttospeechcontainerwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textedittexttospeech__texttospeechcontainerwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEditTextToSpeech__TextToSpeechContainerWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMousePressEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseReleaseEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseDoubleClickEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMouseMoveEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QMouseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperWheelEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QWheelEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyPressEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperKeyReleaseEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QKeyEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusInEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusOutEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QFocusEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperEnterEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperLeaveEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperPaintEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QPaintEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMoveEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperResizeEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QResizeEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCloseEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QCloseEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperContextMenuEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QContextMenuEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTabletEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QTabletEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperActionEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QActionEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragEnterEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QDragEnterEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragMoveEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QDragMoveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDragLeaveEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QDragLeaveEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDropEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QDropEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperShowEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QShowEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperHideEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QHideEvent* event);
    friend bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperNativeEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChangeEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QEvent* param1);
    friend int TextEditTextToSpeech__TextToSpeechContainerWidget_SuperMetric(const TextEditTextToSpeech::TextToSpeechContainerWidget* self, int param1);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInitPainter(const TextEditTextToSpeech::TextToSpeechContainerWidget* self, QPainter* painter);
    friend QPaintDevice* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperRedirected(const TextEditTextToSpeech::TextToSpeechContainerWidget* self, QPoint* offset);
    friend QPainter* TextEditTextToSpeech__TextToSpeechContainerWidget_SuperSharedPainter(const TextEditTextToSpeech::TextToSpeechContainerWidget* self);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperInputMethodEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QInputMethodEvent* param1);
    friend bool TextEditTextToSpeech__TextToSpeechContainerWidget_SuperFocusNextPrevChild(TextEditTextToSpeech::TextToSpeechContainerWidget* self, bool next);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperTimerEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QTimerEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperChildEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QChildEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperCustomEvent(TextEditTextToSpeech::TextToSpeechContainerWidget* self, QEvent* event);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperConnectNotify(TextEditTextToSpeech::TextToSpeechContainerWidget* self, const QMetaMethod* signal);
    friend void TextEditTextToSpeech__TextToSpeechContainerWidget_SuperDisconnectNotify(TextEditTextToSpeech::TextToSpeechContainerWidget* self, const QMetaMethod* signal);
};

#endif
