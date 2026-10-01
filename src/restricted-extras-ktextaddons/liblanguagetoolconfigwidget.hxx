#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCONFIGWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLCONFIGWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolConfigWidget
class VirtualTextGrammarCheckLanguageToolConfigWidget final : public TextGrammarCheck::LanguageToolConfigWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolConfigWidget*, const char*);
    using TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolConfigWidget*, int, int, void**);
    using TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, bool);
    using TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QActionEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QDropEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QShowEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QHideEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolConfigWidget*, QPainter*);
    using TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolConfigWidget*, QPoint*);
    using TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__LanguageToolConfigWidget*);
    using TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolConfigWidget*, int);
    using TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, bool);
    using TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolConfigWidget*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QChildEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolConfigWidget*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolConfigWidget::create;
    using TextGrammarCheck::LanguageToolConfigWidget::destroy;
    using TextGrammarCheck::LanguageToolConfigWidget::focusNextChild;
    using TextGrammarCheck::LanguageToolConfigWidget::focusPreviousChild;
    using TextGrammarCheck::LanguageToolConfigWidget::getDecodedMetricF;
    using TextGrammarCheck::LanguageToolConfigWidget::isSignalConnected;
    using TextGrammarCheck::LanguageToolConfigWidget::receivers;
    using TextGrammarCheck::LanguageToolConfigWidget::sender;
    using TextGrammarCheck::LanguageToolConfigWidget::senderSignalIndex;
    using TextGrammarCheck::LanguageToolConfigWidget::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__LanguageToolConfigWidget_MetaObject_Callback textgrammarcheck__languagetoolconfigwidget_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metacast_Callback textgrammarcheck__languagetoolconfigwidget_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metacall_Callback textgrammarcheck__languagetoolconfigwidget_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DevType_Callback textgrammarcheck__languagetoolconfigwidget_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SetVisible_Callback textgrammarcheck__languagetoolconfigwidget_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SizeHint_Callback textgrammarcheck__languagetoolconfigwidget_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MinimumSizeHint_Callback textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HeightForWidth_Callback textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HasHeightForWidth_Callback textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_PaintEngine_Callback textgrammarcheck__languagetoolconfigwidget_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Event_Callback textgrammarcheck__languagetoolconfigwidget_event_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MousePressEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseReleaseEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MouseMoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_WheelEvent_Callback textgrammarcheck__languagetoolconfigwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_KeyPressEvent_Callback textgrammarcheck__languagetoolconfigwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_KeyReleaseEvent_Callback textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusInEvent_Callback textgrammarcheck__languagetoolconfigwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusOutEvent_Callback textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_EnterEvent_Callback textgrammarcheck__languagetoolconfigwidget_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_LeaveEvent_Callback textgrammarcheck__languagetoolconfigwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_PaintEvent_Callback textgrammarcheck__languagetoolconfigwidget_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_MoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ResizeEvent_Callback textgrammarcheck__languagetoolconfigwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_CloseEvent_Callback textgrammarcheck__languagetoolconfigwidget_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ContextMenuEvent_Callback textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_TabletEvent_Callback textgrammarcheck__languagetoolconfigwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ActionEvent_Callback textgrammarcheck__languagetoolconfigwidget_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragEnterEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragMoveEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DragLeaveEvent_Callback textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DropEvent_Callback textgrammarcheck__languagetoolconfigwidget_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ShowEvent_Callback textgrammarcheck__languagetoolconfigwidget_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_HideEvent_Callback textgrammarcheck__languagetoolconfigwidget_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_NativeEvent_Callback textgrammarcheck__languagetoolconfigwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ChangeEvent_Callback textgrammarcheck__languagetoolconfigwidget_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Metric_Callback textgrammarcheck__languagetoolconfigwidget_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InitPainter_Callback textgrammarcheck__languagetoolconfigwidget_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_Redirected_Callback textgrammarcheck__languagetoolconfigwidget_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_SharedPainter_Callback textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InputMethodEvent_Callback textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_InputMethodQuery_Callback textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_FocusNextPrevChild_Callback textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_EventFilter_Callback textgrammarcheck__languagetoolconfigwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_TimerEvent_Callback textgrammarcheck__languagetoolconfigwidget_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ChildEvent_Callback textgrammarcheck__languagetoolconfigwidget_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_CustomEvent_Callback textgrammarcheck__languagetoolconfigwidget_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_ConnectNotify_Callback textgrammarcheck__languagetoolconfigwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolConfigWidget_DisconnectNotify_Callback textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolConfigWidget {
        using TextGrammarCheck::LanguageToolConfigWidget::actionEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::changeEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::childEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::closeEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::connectNotify;
        using TextGrammarCheck::LanguageToolConfigWidget::contextMenuEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::customEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::disconnectNotify;
        using TextGrammarCheck::LanguageToolConfigWidget::dragEnterEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::dragLeaveEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::dragMoveEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::dropEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::enterEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::event;
        using TextGrammarCheck::LanguageToolConfigWidget::focusInEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::focusNextPrevChild;
        using TextGrammarCheck::LanguageToolConfigWidget::focusOutEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::hideEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::initPainter;
        using TextGrammarCheck::LanguageToolConfigWidget::inputMethodEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::keyPressEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::keyReleaseEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::leaveEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::metric;
        using TextGrammarCheck::LanguageToolConfigWidget::mouseDoubleClickEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::mouseMoveEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::mousePressEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::mouseReleaseEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::moveEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::nativeEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::paintEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::redirected;
        using TextGrammarCheck::LanguageToolConfigWidget::resizeEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::sharedPainter;
        using TextGrammarCheck::LanguageToolConfigWidget::showEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::tabletEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::timerEvent;
        using TextGrammarCheck::LanguageToolConfigWidget::wheelEvent;
    };

    VirtualTextGrammarCheckLanguageToolConfigWidget(QWidget* parent) : TextGrammarCheck::LanguageToolConfigWidget(parent) {};
    VirtualTextGrammarCheckLanguageToolConfigWidget() : TextGrammarCheck::LanguageToolConfigWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolconfigwidget_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolconfigwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolconfigwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolconfigwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolconfigwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolconfigwidget_devtype_callback) {
            int callback_ret = textgrammarcheck__languagetoolconfigwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolconfigwidget_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__languagetoolconfigwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolconfigwidget_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolconfigwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolconfigwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__languagetoolconfigwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__languagetoolconfigwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolconfigwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__languagetoolconfigwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolconfigwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolconfigwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__languagetoolconfigwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__languagetoolconfigwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolConfigWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolconfigwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__languagetoolconfigwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolconfigwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__languagetoolconfigwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__languagetoolconfigwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__languagetoolconfigwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__languagetoolconfigwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__languagetoolconfigwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__languagetoolconfigwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolConfigWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolconfigwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolconfigwidget_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolconfigwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolconfigwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolConfigWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMousePressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperWheelEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyPressEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusInEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperFocusOutEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperEnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperLeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperPaintEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperResizeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperCloseEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperContextMenuEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperTabletEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperActionEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragEnterEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragMoveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDropEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperShowEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperHideEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperNativeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperChangeEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolConfigWidget_SuperMetric(const TextGrammarCheck::LanguageToolConfigWidget* self, int param1);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperInitPainter(const TextGrammarCheck::LanguageToolConfigWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolConfigWidget_SuperRedirected(const TextGrammarCheck::LanguageToolConfigWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolConfigWidget_SuperSharedPainter(const TextGrammarCheck::LanguageToolConfigWidget* self);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperInputMethodEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolConfigWidget_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolConfigWidget* self, bool next);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperTimerEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperChildEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperCustomEvent(TextGrammarCheck::LanguageToolConfigWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperConnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolConfigWidget_SuperDisconnectNotify(TextGrammarCheck::LanguageToolConfigWidget* self, const QMetaMethod* signal);
};

#endif
