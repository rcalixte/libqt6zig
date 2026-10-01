#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGURELISTSWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBTRANSLATORCONFIGURELISTSWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextTranslator::TranslatorConfigureListsWidget
class VirtualTextTranslatorTranslatorConfigureListsWidget final : public TextTranslator::TranslatorConfigureListsWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextTranslator__TranslatorConfigureListsWidget_MetaObject_Callback = QMetaObject* (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_Metacast_Callback = void* (*)(TextTranslator__TranslatorConfigureListsWidget*, const char*);
    using TextTranslator__TranslatorConfigureListsWidget_Metacall_Callback = int (*)(TextTranslator__TranslatorConfigureListsWidget*, int, int, void**);
    using TextTranslator__TranslatorConfigureListsWidget_DevType_Callback = int (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_SetVisible_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, bool);
    using TextTranslator__TranslatorConfigureListsWidget_SizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_Callback = QSize* (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_HeightForWidth_Callback = int (*)(const TextTranslator__TranslatorConfigureListsWidget*, int);
    using TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_Callback = bool (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_Event_Callback = bool (*)(TextTranslator__TranslatorConfigureListsWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_MousePressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMouseEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_WheelEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QWheelEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QKeyEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_FocusInEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QFocusEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_EnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QEnterEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_LeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_PaintEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QPaintEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_MoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMoveEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ResizeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QResizeEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_CloseEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QCloseEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QContextMenuEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_TabletEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QTabletEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ActionEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QActionEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QDragEnterEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QDragMoveEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QDragLeaveEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_DropEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QDropEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ShowEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QShowEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_HideEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QHideEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_NativeEvent_Callback = bool (*)(TextTranslator__TranslatorConfigureListsWidget*, libqt_string, void*, intptr_t*);
    using TextTranslator__TranslatorConfigureListsWidget_ChangeEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_Metric_Callback = int (*)(const TextTranslator__TranslatorConfigureListsWidget*, int);
    using TextTranslator__TranslatorConfigureListsWidget_InitPainter_Callback = void (*)(const TextTranslator__TranslatorConfigureListsWidget*, QPainter*);
    using TextTranslator__TranslatorConfigureListsWidget_Redirected_Callback = QPaintDevice* (*)(const TextTranslator__TranslatorConfigureListsWidget*, QPoint*);
    using TextTranslator__TranslatorConfigureListsWidget_SharedPainter_Callback = QPainter* (*)(const TextTranslator__TranslatorConfigureListsWidget*);
    using TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QInputMethodEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_Callback = QVariant* (*)(const TextTranslator__TranslatorConfigureListsWidget*, int);
    using TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_Callback = bool (*)(TextTranslator__TranslatorConfigureListsWidget*, bool);
    using TextTranslator__TranslatorConfigureListsWidget_EventFilter_Callback = bool (*)(TextTranslator__TranslatorConfigureListsWidget*, QObject*, QEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_TimerEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QTimerEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ChildEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QChildEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_CustomEvent_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QEvent*);
    using TextTranslator__TranslatorConfigureListsWidget_ConnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMetaMethod*);
    using TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_Callback = void (*)(TextTranslator__TranslatorConfigureListsWidget*, QMetaMethod*);
    using TextTranslator::TranslatorConfigureListsWidget::create;
    using TextTranslator::TranslatorConfigureListsWidget::destroy;
    using TextTranslator::TranslatorConfigureListsWidget::focusNextChild;
    using TextTranslator::TranslatorConfigureListsWidget::focusPreviousChild;
    using TextTranslator::TranslatorConfigureListsWidget::getDecodedMetricF;
    using TextTranslator::TranslatorConfigureListsWidget::isSignalConnected;
    using TextTranslator::TranslatorConfigureListsWidget::receivers;
    using TextTranslator::TranslatorConfigureListsWidget::sender;
    using TextTranslator::TranslatorConfigureListsWidget::senderSignalIndex;
    using TextTranslator::TranslatorConfigureListsWidget::updateMicroFocus;

    // Instance callback storage
    TextTranslator__TranslatorConfigureListsWidget_MetaObject_Callback texttranslator__translatorconfigurelistswidget_metaobject_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_Metacast_Callback texttranslator__translatorconfigurelistswidget_metacast_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_Metacall_Callback texttranslator__translatorconfigurelistswidget_metacall_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DevType_Callback texttranslator__translatorconfigurelistswidget_devtype_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_SetVisible_Callback texttranslator__translatorconfigurelistswidget_setvisible_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_SizeHint_Callback texttranslator__translatorconfigurelistswidget_sizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MinimumSizeHint_Callback texttranslator__translatorconfigurelistswidget_minimumsizehint_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_HeightForWidth_Callback texttranslator__translatorconfigurelistswidget_heightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_HasHeightForWidth_Callback texttranslator__translatorconfigurelistswidget_hasheightforwidth_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_PaintEngine_Callback texttranslator__translatorconfigurelistswidget_paintengine_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_Event_Callback texttranslator__translatorconfigurelistswidget_event_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MousePressEvent_Callback texttranslator__translatorconfigurelistswidget_mousepressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MouseReleaseEvent_Callback texttranslator__translatorconfigurelistswidget_mousereleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MouseDoubleClickEvent_Callback texttranslator__translatorconfigurelistswidget_mousedoubleclickevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MouseMoveEvent_Callback texttranslator__translatorconfigurelistswidget_mousemoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_WheelEvent_Callback texttranslator__translatorconfigurelistswidget_wheelevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_KeyPressEvent_Callback texttranslator__translatorconfigurelistswidget_keypressevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_KeyReleaseEvent_Callback texttranslator__translatorconfigurelistswidget_keyreleaseevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_FocusInEvent_Callback texttranslator__translatorconfigurelistswidget_focusinevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_FocusOutEvent_Callback texttranslator__translatorconfigurelistswidget_focusoutevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_EnterEvent_Callback texttranslator__translatorconfigurelistswidget_enterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_LeaveEvent_Callback texttranslator__translatorconfigurelistswidget_leaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_PaintEvent_Callback texttranslator__translatorconfigurelistswidget_paintevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_MoveEvent_Callback texttranslator__translatorconfigurelistswidget_moveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ResizeEvent_Callback texttranslator__translatorconfigurelistswidget_resizeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_CloseEvent_Callback texttranslator__translatorconfigurelistswidget_closeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ContextMenuEvent_Callback texttranslator__translatorconfigurelistswidget_contextmenuevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_TabletEvent_Callback texttranslator__translatorconfigurelistswidget_tabletevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ActionEvent_Callback texttranslator__translatorconfigurelistswidget_actionevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DragEnterEvent_Callback texttranslator__translatorconfigurelistswidget_dragenterevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DragMoveEvent_Callback texttranslator__translatorconfigurelistswidget_dragmoveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DragLeaveEvent_Callback texttranslator__translatorconfigurelistswidget_dragleaveevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DropEvent_Callback texttranslator__translatorconfigurelistswidget_dropevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ShowEvent_Callback texttranslator__translatorconfigurelistswidget_showevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_HideEvent_Callback texttranslator__translatorconfigurelistswidget_hideevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_NativeEvent_Callback texttranslator__translatorconfigurelistswidget_nativeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ChangeEvent_Callback texttranslator__translatorconfigurelistswidget_changeevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_Metric_Callback texttranslator__translatorconfigurelistswidget_metric_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_InitPainter_Callback texttranslator__translatorconfigurelistswidget_initpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_Redirected_Callback texttranslator__translatorconfigurelistswidget_redirected_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_SharedPainter_Callback texttranslator__translatorconfigurelistswidget_sharedpainter_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_InputMethodEvent_Callback texttranslator__translatorconfigurelistswidget_inputmethodevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_InputMethodQuery_Callback texttranslator__translatorconfigurelistswidget_inputmethodquery_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_FocusNextPrevChild_Callback texttranslator__translatorconfigurelistswidget_focusnextprevchild_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_EventFilter_Callback texttranslator__translatorconfigurelistswidget_eventfilter_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_TimerEvent_Callback texttranslator__translatorconfigurelistswidget_timerevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ChildEvent_Callback texttranslator__translatorconfigurelistswidget_childevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_CustomEvent_Callback texttranslator__translatorconfigurelistswidget_customevent_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_ConnectNotify_Callback texttranslator__translatorconfigurelistswidget_connectnotify_callback = nullptr;
    TextTranslator__TranslatorConfigureListsWidget_DisconnectNotify_Callback texttranslator__translatorconfigurelistswidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextTranslator::TranslatorConfigureListsWidget {
        using TextTranslator::TranslatorConfigureListsWidget::actionEvent;
        using TextTranslator::TranslatorConfigureListsWidget::changeEvent;
        using TextTranslator::TranslatorConfigureListsWidget::childEvent;
        using TextTranslator::TranslatorConfigureListsWidget::closeEvent;
        using TextTranslator::TranslatorConfigureListsWidget::connectNotify;
        using TextTranslator::TranslatorConfigureListsWidget::contextMenuEvent;
        using TextTranslator::TranslatorConfigureListsWidget::customEvent;
        using TextTranslator::TranslatorConfigureListsWidget::disconnectNotify;
        using TextTranslator::TranslatorConfigureListsWidget::dragEnterEvent;
        using TextTranslator::TranslatorConfigureListsWidget::dragLeaveEvent;
        using TextTranslator::TranslatorConfigureListsWidget::dragMoveEvent;
        using TextTranslator::TranslatorConfigureListsWidget::dropEvent;
        using TextTranslator::TranslatorConfigureListsWidget::enterEvent;
        using TextTranslator::TranslatorConfigureListsWidget::event;
        using TextTranslator::TranslatorConfigureListsWidget::focusInEvent;
        using TextTranslator::TranslatorConfigureListsWidget::focusNextPrevChild;
        using TextTranslator::TranslatorConfigureListsWidget::focusOutEvent;
        using TextTranslator::TranslatorConfigureListsWidget::hideEvent;
        using TextTranslator::TranslatorConfigureListsWidget::initPainter;
        using TextTranslator::TranslatorConfigureListsWidget::inputMethodEvent;
        using TextTranslator::TranslatorConfigureListsWidget::keyPressEvent;
        using TextTranslator::TranslatorConfigureListsWidget::keyReleaseEvent;
        using TextTranslator::TranslatorConfigureListsWidget::leaveEvent;
        using TextTranslator::TranslatorConfigureListsWidget::metric;
        using TextTranslator::TranslatorConfigureListsWidget::mouseDoubleClickEvent;
        using TextTranslator::TranslatorConfigureListsWidget::mouseMoveEvent;
        using TextTranslator::TranslatorConfigureListsWidget::mousePressEvent;
        using TextTranslator::TranslatorConfigureListsWidget::mouseReleaseEvent;
        using TextTranslator::TranslatorConfigureListsWidget::moveEvent;
        using TextTranslator::TranslatorConfigureListsWidget::nativeEvent;
        using TextTranslator::TranslatorConfigureListsWidget::paintEvent;
        using TextTranslator::TranslatorConfigureListsWidget::redirected;
        using TextTranslator::TranslatorConfigureListsWidget::resizeEvent;
        using TextTranslator::TranslatorConfigureListsWidget::sharedPainter;
        using TextTranslator::TranslatorConfigureListsWidget::showEvent;
        using TextTranslator::TranslatorConfigureListsWidget::tabletEvent;
        using TextTranslator::TranslatorConfigureListsWidget::timerEvent;
        using TextTranslator::TranslatorConfigureListsWidget::wheelEvent;
    };

    VirtualTextTranslatorTranslatorConfigureListsWidget(QWidget* parent) : TextTranslator::TranslatorConfigureListsWidget(parent) {};
    VirtualTextTranslatorTranslatorConfigureListsWidget() : TextTranslator::TranslatorConfigureListsWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (texttranslator__translatorconfigurelistswidget_metaobject_callback) {
            QMetaObject* callback_ret = texttranslator__translatorconfigurelistswidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (texttranslator__translatorconfigurelistswidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = texttranslator__translatorconfigurelistswidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (texttranslator__translatorconfigurelistswidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = texttranslator__translatorconfigurelistswidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureListsWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (texttranslator__translatorconfigurelistswidget_devtype_callback) {
            int callback_ret = texttranslator__translatorconfigurelistswidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureListsWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (texttranslator__translatorconfigurelistswidget_setvisible_callback) {
            bool cbval1 = visible;
            texttranslator__translatorconfigurelistswidget_setvisible_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (texttranslator__translatorconfigurelistswidget_sizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfigurelistswidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureListsWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (texttranslator__translatorconfigurelistswidget_minimumsizehint_callback) {
            QSize* callback_ret = texttranslator__translatorconfigurelistswidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureListsWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (texttranslator__translatorconfigurelistswidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = texttranslator__translatorconfigurelistswidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureListsWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (texttranslator__translatorconfigurelistswidget_hasheightforwidth_callback) {
            bool callback_ret = texttranslator__translatorconfigurelistswidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (texttranslator__translatorconfigurelistswidget_paintengine_callback) {
            QPaintEngine* callback_ret = texttranslator__translatorconfigurelistswidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = texttranslator__translatorconfigurelistswidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_enterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_paintevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_moveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_closeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_actionevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_dropevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_showevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_hideevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (texttranslator__translatorconfigurelistswidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = texttranslator__translatorconfigurelistswidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (texttranslator__translatorconfigurelistswidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            texttranslator__translatorconfigurelistswidget_changeevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (texttranslator__translatorconfigurelistswidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = texttranslator__translatorconfigurelistswidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextTranslator__TranslatorConfigureListsWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (texttranslator__translatorconfigurelistswidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            texttranslator__translatorconfigurelistswidget_initpainter_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (texttranslator__translatorconfigurelistswidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = texttranslator__translatorconfigurelistswidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (texttranslator__translatorconfigurelistswidget_sharedpainter_callback) {
            QPainter* callback_ret = texttranslator__translatorconfigurelistswidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (texttranslator__translatorconfigurelistswidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            texttranslator__translatorconfigurelistswidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (texttranslator__translatorconfigurelistswidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = texttranslator__translatorconfigurelistswidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextTranslator__TranslatorConfigureListsWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (texttranslator__translatorconfigurelistswidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = texttranslator__translatorconfigurelistswidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = texttranslator__translatorconfigurelistswidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextTranslator__TranslatorConfigureListsWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_timerevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_childevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (texttranslator__translatorconfigurelistswidget_customevent_callback) {
            QEvent* cbval1 = event;
            texttranslator__translatorconfigurelistswidget_customevent_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfigurelistswidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfigurelistswidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (texttranslator__translatorconfigurelistswidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            texttranslator__translatorconfigurelistswidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextTranslator__TranslatorConfigureListsWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextTranslator__TranslatorConfigureListsWidget_SuperEvent(TextTranslator::TranslatorConfigureListsWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperMousePressEvent(TextTranslator::TranslatorConfigureListsWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperMouseReleaseEvent(TextTranslator::TranslatorConfigureListsWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperMouseDoubleClickEvent(TextTranslator::TranslatorConfigureListsWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperMouseMoveEvent(TextTranslator::TranslatorConfigureListsWidget* self, QMouseEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperWheelEvent(TextTranslator::TranslatorConfigureListsWidget* self, QWheelEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperKeyPressEvent(TextTranslator::TranslatorConfigureListsWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperKeyReleaseEvent(TextTranslator::TranslatorConfigureListsWidget* self, QKeyEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperFocusInEvent(TextTranslator::TranslatorConfigureListsWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperFocusOutEvent(TextTranslator::TranslatorConfigureListsWidget* self, QFocusEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperEnterEvent(TextTranslator::TranslatorConfigureListsWidget* self, QEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperLeaveEvent(TextTranslator::TranslatorConfigureListsWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperPaintEvent(TextTranslator::TranslatorConfigureListsWidget* self, QPaintEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperMoveEvent(TextTranslator::TranslatorConfigureListsWidget* self, QMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperResizeEvent(TextTranslator::TranslatorConfigureListsWidget* self, QResizeEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperCloseEvent(TextTranslator::TranslatorConfigureListsWidget* self, QCloseEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperContextMenuEvent(TextTranslator::TranslatorConfigureListsWidget* self, QContextMenuEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperTabletEvent(TextTranslator::TranslatorConfigureListsWidget* self, QTabletEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperActionEvent(TextTranslator::TranslatorConfigureListsWidget* self, QActionEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperDragEnterEvent(TextTranslator::TranslatorConfigureListsWidget* self, QDragEnterEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperDragMoveEvent(TextTranslator::TranslatorConfigureListsWidget* self, QDragMoveEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperDragLeaveEvent(TextTranslator::TranslatorConfigureListsWidget* self, QDragLeaveEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperDropEvent(TextTranslator::TranslatorConfigureListsWidget* self, QDropEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperShowEvent(TextTranslator::TranslatorConfigureListsWidget* self, QShowEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperHideEvent(TextTranslator::TranslatorConfigureListsWidget* self, QHideEvent* event);
    friend bool TextTranslator__TranslatorConfigureListsWidget_SuperNativeEvent(TextTranslator::TranslatorConfigureListsWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperChangeEvent(TextTranslator::TranslatorConfigureListsWidget* self, QEvent* param1);
    friend int TextTranslator__TranslatorConfigureListsWidget_SuperMetric(const TextTranslator::TranslatorConfigureListsWidget* self, int param1);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperInitPainter(const TextTranslator::TranslatorConfigureListsWidget* self, QPainter* painter);
    friend QPaintDevice* TextTranslator__TranslatorConfigureListsWidget_SuperRedirected(const TextTranslator::TranslatorConfigureListsWidget* self, QPoint* offset);
    friend QPainter* TextTranslator__TranslatorConfigureListsWidget_SuperSharedPainter(const TextTranslator::TranslatorConfigureListsWidget* self);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperInputMethodEvent(TextTranslator::TranslatorConfigureListsWidget* self, QInputMethodEvent* param1);
    friend bool TextTranslator__TranslatorConfigureListsWidget_SuperFocusNextPrevChild(TextTranslator::TranslatorConfigureListsWidget* self, bool next);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperTimerEvent(TextTranslator::TranslatorConfigureListsWidget* self, QTimerEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperChildEvent(TextTranslator::TranslatorConfigureListsWidget* self, QChildEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperCustomEvent(TextTranslator::TranslatorConfigureListsWidget* self, QEvent* event);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperConnectNotify(TextTranslator::TranslatorConfigureListsWidget* self, const QMetaMethod* signal);
    friend void TextTranslator__TranslatorConfigureListsWidget_SuperDisconnectNotify(TextTranslator::TranslatorConfigureListsWidget* self, const QMetaMethod* signal);
};

#endif
