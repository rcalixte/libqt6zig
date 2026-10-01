#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLRESULTWIDGET_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBLANGUAGETOOLRESULTWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextGrammarCheck::LanguageToolResultWidget
class VirtualTextGrammarCheckLanguageToolResultWidget final : public TextGrammarCheck::LanguageToolResultWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback = QMetaObject* (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback = void* (*)(TextGrammarCheck__LanguageToolResultWidget*, const char*);
    using TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback = int (*)(TextGrammarCheck__LanguageToolResultWidget*, int, int, void**);
    using TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_DevType_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, bool);
    using TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback = QSize* (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback = bool (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback = QPaintEngine* (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_Event_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMouseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QWheelEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QKeyEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QFocusEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEnterEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QPaintEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMoveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QResizeEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QCloseEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QContextMenuEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QTabletEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QActionEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragEnterEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragMoveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDragLeaveEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QDropEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QShowEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QHideEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, libqt_string, void*, intptr_t*);
    using TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_Metric_Callback = int (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback = void (*)(const TextGrammarCheck__LanguageToolResultWidget*, QPainter*);
    using TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback = QPaintDevice* (*)(const TextGrammarCheck__LanguageToolResultWidget*, QPoint*);
    using TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback = QPainter* (*)(const TextGrammarCheck__LanguageToolResultWidget*);
    using TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QInputMethodEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback = QVariant* (*)(const TextGrammarCheck__LanguageToolResultWidget*, int);
    using TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, bool);
    using TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback = bool (*)(TextGrammarCheck__LanguageToolResultWidget*, QObject*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QTimerEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QChildEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QEvent*);
    using TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMetaMethod*);
    using TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback = void (*)(TextGrammarCheck__LanguageToolResultWidget*, QMetaMethod*);
    using TextGrammarCheck::LanguageToolResultWidget::create;
    using TextGrammarCheck::LanguageToolResultWidget::destroy;
    using TextGrammarCheck::LanguageToolResultWidget::focusNextChild;
    using TextGrammarCheck::LanguageToolResultWidget::focusPreviousChild;
    using TextGrammarCheck::LanguageToolResultWidget::getDecodedMetricF;
    using TextGrammarCheck::LanguageToolResultWidget::isSignalConnected;
    using TextGrammarCheck::LanguageToolResultWidget::receivers;
    using TextGrammarCheck::LanguageToolResultWidget::sender;
    using TextGrammarCheck::LanguageToolResultWidget::senderSignalIndex;
    using TextGrammarCheck::LanguageToolResultWidget::updateMicroFocus;

    // Instance callback storage
    TextGrammarCheck__LanguageToolResultWidget_MetaObject_Callback textgrammarcheck__languagetoolresultwidget_metaobject_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metacast_Callback textgrammarcheck__languagetoolresultwidget_metacast_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metacall_Callback textgrammarcheck__languagetoolresultwidget_metacall_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CheckGrammar_Callback textgrammarcheck__languagetoolresultwidget_checkgrammar_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_AddExtraWidget_Callback textgrammarcheck__languagetoolresultwidget_addextrawidget_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DevType_Callback textgrammarcheck__languagetoolresultwidget_devtype_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SetVisible_Callback textgrammarcheck__languagetoolresultwidget_setvisible_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SizeHint_Callback textgrammarcheck__languagetoolresultwidget_sizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MinimumSizeHint_Callback textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HeightForWidth_Callback textgrammarcheck__languagetoolresultwidget_heightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HasHeightForWidth_Callback textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_PaintEngine_Callback textgrammarcheck__languagetoolresultwidget_paintengine_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Event_Callback textgrammarcheck__languagetoolresultwidget_event_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MousePressEvent_Callback textgrammarcheck__languagetoolresultwidget_mousepressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseReleaseEvent_Callback textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseDoubleClickEvent_Callback textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MouseMoveEvent_Callback textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_WheelEvent_Callback textgrammarcheck__languagetoolresultwidget_wheelevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_KeyPressEvent_Callback textgrammarcheck__languagetoolresultwidget_keypressevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_KeyReleaseEvent_Callback textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusInEvent_Callback textgrammarcheck__languagetoolresultwidget_focusinevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusOutEvent_Callback textgrammarcheck__languagetoolresultwidget_focusoutevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_EnterEvent_Callback textgrammarcheck__languagetoolresultwidget_enterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_LeaveEvent_Callback textgrammarcheck__languagetoolresultwidget_leaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_PaintEvent_Callback textgrammarcheck__languagetoolresultwidget_paintevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_MoveEvent_Callback textgrammarcheck__languagetoolresultwidget_moveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ResizeEvent_Callback textgrammarcheck__languagetoolresultwidget_resizeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CloseEvent_Callback textgrammarcheck__languagetoolresultwidget_closeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ContextMenuEvent_Callback textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_TabletEvent_Callback textgrammarcheck__languagetoolresultwidget_tabletevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ActionEvent_Callback textgrammarcheck__languagetoolresultwidget_actionevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragEnterEvent_Callback textgrammarcheck__languagetoolresultwidget_dragenterevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragMoveEvent_Callback textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DragLeaveEvent_Callback textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DropEvent_Callback textgrammarcheck__languagetoolresultwidget_dropevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ShowEvent_Callback textgrammarcheck__languagetoolresultwidget_showevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_HideEvent_Callback textgrammarcheck__languagetoolresultwidget_hideevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_NativeEvent_Callback textgrammarcheck__languagetoolresultwidget_nativeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ChangeEvent_Callback textgrammarcheck__languagetoolresultwidget_changeevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Metric_Callback textgrammarcheck__languagetoolresultwidget_metric_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InitPainter_Callback textgrammarcheck__languagetoolresultwidget_initpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_Redirected_Callback textgrammarcheck__languagetoolresultwidget_redirected_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_SharedPainter_Callback textgrammarcheck__languagetoolresultwidget_sharedpainter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InputMethodEvent_Callback textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_InputMethodQuery_Callback textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_FocusNextPrevChild_Callback textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_EventFilter_Callback textgrammarcheck__languagetoolresultwidget_eventfilter_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_TimerEvent_Callback textgrammarcheck__languagetoolresultwidget_timerevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ChildEvent_Callback textgrammarcheck__languagetoolresultwidget_childevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_CustomEvent_Callback textgrammarcheck__languagetoolresultwidget_customevent_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_ConnectNotify_Callback textgrammarcheck__languagetoolresultwidget_connectnotify_callback = nullptr;
    TextGrammarCheck__LanguageToolResultWidget_DisconnectNotify_Callback textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextGrammarCheck::LanguageToolResultWidget {
        using TextGrammarCheck::LanguageToolResultWidget::actionEvent;
        using TextGrammarCheck::LanguageToolResultWidget::addExtraWidget;
        using TextGrammarCheck::LanguageToolResultWidget::changeEvent;
        using TextGrammarCheck::LanguageToolResultWidget::childEvent;
        using TextGrammarCheck::LanguageToolResultWidget::closeEvent;
        using TextGrammarCheck::LanguageToolResultWidget::connectNotify;
        using TextGrammarCheck::LanguageToolResultWidget::contextMenuEvent;
        using TextGrammarCheck::LanguageToolResultWidget::customEvent;
        using TextGrammarCheck::LanguageToolResultWidget::disconnectNotify;
        using TextGrammarCheck::LanguageToolResultWidget::dragEnterEvent;
        using TextGrammarCheck::LanguageToolResultWidget::dragLeaveEvent;
        using TextGrammarCheck::LanguageToolResultWidget::dragMoveEvent;
        using TextGrammarCheck::LanguageToolResultWidget::dropEvent;
        using TextGrammarCheck::LanguageToolResultWidget::enterEvent;
        using TextGrammarCheck::LanguageToolResultWidget::event;
        using TextGrammarCheck::LanguageToolResultWidget::focusInEvent;
        using TextGrammarCheck::LanguageToolResultWidget::focusNextPrevChild;
        using TextGrammarCheck::LanguageToolResultWidget::focusOutEvent;
        using TextGrammarCheck::LanguageToolResultWidget::hideEvent;
        using TextGrammarCheck::LanguageToolResultWidget::initPainter;
        using TextGrammarCheck::LanguageToolResultWidget::inputMethodEvent;
        using TextGrammarCheck::LanguageToolResultWidget::keyPressEvent;
        using TextGrammarCheck::LanguageToolResultWidget::keyReleaseEvent;
        using TextGrammarCheck::LanguageToolResultWidget::leaveEvent;
        using TextGrammarCheck::LanguageToolResultWidget::metric;
        using TextGrammarCheck::LanguageToolResultWidget::mouseDoubleClickEvent;
        using TextGrammarCheck::LanguageToolResultWidget::mouseMoveEvent;
        using TextGrammarCheck::LanguageToolResultWidget::mousePressEvent;
        using TextGrammarCheck::LanguageToolResultWidget::mouseReleaseEvent;
        using TextGrammarCheck::LanguageToolResultWidget::moveEvent;
        using TextGrammarCheck::LanguageToolResultWidget::nativeEvent;
        using TextGrammarCheck::LanguageToolResultWidget::paintEvent;
        using TextGrammarCheck::LanguageToolResultWidget::redirected;
        using TextGrammarCheck::LanguageToolResultWidget::resizeEvent;
        using TextGrammarCheck::LanguageToolResultWidget::sharedPainter;
        using TextGrammarCheck::LanguageToolResultWidget::showEvent;
        using TextGrammarCheck::LanguageToolResultWidget::tabletEvent;
        using TextGrammarCheck::LanguageToolResultWidget::timerEvent;
        using TextGrammarCheck::LanguageToolResultWidget::wheelEvent;
    };

    VirtualTextGrammarCheckLanguageToolResultWidget(QWidget* parent) : TextGrammarCheck::LanguageToolResultWidget(parent) {};
    VirtualTextGrammarCheckLanguageToolResultWidget() : TextGrammarCheck::LanguageToolResultWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textgrammarcheck__languagetoolresultwidget_metaobject_callback) {
            QMetaObject* callback_ret = textgrammarcheck__languagetoolresultwidget_metaobject_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textgrammarcheck__languagetoolresultwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textgrammarcheck__languagetoolresultwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textgrammarcheck__languagetoolresultwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkGrammar() override {
        if (textgrammarcheck__languagetoolresultwidget_checkgrammar_callback) {
            textgrammarcheck__languagetoolresultwidget_checkgrammar_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::checkGrammar();
    }

    // Virtual method for C ABI access and custom callback
    virtual void addExtraWidget() override {
        if (textgrammarcheck__languagetoolresultwidget_addextrawidget_callback) {
            textgrammarcheck__languagetoolresultwidget_addextrawidget_callback(this);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::addExtraWidget();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textgrammarcheck__languagetoolresultwidget_devtype_callback) {
            int callback_ret = textgrammarcheck__languagetoolresultwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textgrammarcheck__languagetoolresultwidget_setvisible_callback) {
            bool cbval1 = visible;
            textgrammarcheck__languagetoolresultwidget_setvisible_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textgrammarcheck__languagetoolresultwidget_sizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolresultwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolResultWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback) {
            QSize* callback_ret = textgrammarcheck__languagetoolresultwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolResultWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textgrammarcheck__languagetoolresultwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback) {
            bool callback_ret = textgrammarcheck__languagetoolresultwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textgrammarcheck__languagetoolresultwidget_paintengine_callback) {
            QPaintEngine* callback_ret = textgrammarcheck__languagetoolresultwidget_paintengine_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textgrammarcheck__languagetoolresultwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_wheelevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_keypressevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_focusinevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_enterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_leaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_paintevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_moveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_resizeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_closeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_tabletevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_actionevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_dropevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_showevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_hideevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textgrammarcheck__languagetoolresultwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textgrammarcheck__languagetoolresultwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            textgrammarcheck__languagetoolresultwidget_changeevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textgrammarcheck__languagetoolresultwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextGrammarCheck__LanguageToolResultWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textgrammarcheck__languagetoolresultwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            textgrammarcheck__languagetoolresultwidget_initpainter_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textgrammarcheck__languagetoolresultwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textgrammarcheck__languagetoolresultwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textgrammarcheck__languagetoolresultwidget_sharedpainter_callback) {
            QPainter* callback_ret = textgrammarcheck__languagetoolresultwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textgrammarcheck__languagetoolresultwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textgrammarcheck__languagetoolresultwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextGrammarCheck__LanguageToolResultWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textgrammarcheck__languagetoolresultwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textgrammarcheck__languagetoolresultwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextGrammarCheck__LanguageToolResultWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_timerevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_childevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textgrammarcheck__languagetoolresultwidget_customevent_callback) {
            QEvent* cbval1 = event;
            textgrammarcheck__languagetoolresultwidget_customevent_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolresultwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolresultwidget_connectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textgrammarcheck__languagetoolresultwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextGrammarCheck__LanguageToolResultWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperAddExtraWidget(TextGrammarCheck::LanguageToolResultWidget* self);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMousePressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseDoubleClickEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMouseMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMouseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperWheelEvent(TextGrammarCheck::LanguageToolResultWidget* self, QWheelEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperKeyPressEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperKeyReleaseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QKeyEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperFocusInEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperFocusOutEvent(TextGrammarCheck::LanguageToolResultWidget* self, QFocusEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperEnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperLeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperPaintEvent(TextGrammarCheck::LanguageToolResultWidget* self, QPaintEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperResizeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QResizeEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperCloseEvent(TextGrammarCheck::LanguageToolResultWidget* self, QCloseEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperContextMenuEvent(TextGrammarCheck::LanguageToolResultWidget* self, QContextMenuEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperTabletEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTabletEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperActionEvent(TextGrammarCheck::LanguageToolResultWidget* self, QActionEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragEnterEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragEnterEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragMoveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragMoveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDragLeaveEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDragLeaveEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDropEvent(TextGrammarCheck::LanguageToolResultWidget* self, QDropEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperShowEvent(TextGrammarCheck::LanguageToolResultWidget* self, QShowEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperHideEvent(TextGrammarCheck::LanguageToolResultWidget* self, QHideEvent* event);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperNativeEvent(TextGrammarCheck::LanguageToolResultWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperChangeEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* param1);
    friend int TextGrammarCheck__LanguageToolResultWidget_SuperMetric(const TextGrammarCheck::LanguageToolResultWidget* self, int param1);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperInitPainter(const TextGrammarCheck::LanguageToolResultWidget* self, QPainter* painter);
    friend QPaintDevice* TextGrammarCheck__LanguageToolResultWidget_SuperRedirected(const TextGrammarCheck::LanguageToolResultWidget* self, QPoint* offset);
    friend QPainter* TextGrammarCheck__LanguageToolResultWidget_SuperSharedPainter(const TextGrammarCheck::LanguageToolResultWidget* self);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperInputMethodEvent(TextGrammarCheck::LanguageToolResultWidget* self, QInputMethodEvent* param1);
    friend bool TextGrammarCheck__LanguageToolResultWidget_SuperFocusNextPrevChild(TextGrammarCheck::LanguageToolResultWidget* self, bool next);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperTimerEvent(TextGrammarCheck::LanguageToolResultWidget* self, QTimerEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperChildEvent(TextGrammarCheck::LanguageToolResultWidget* self, QChildEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperCustomEvent(TextGrammarCheck::LanguageToolResultWidget* self, QEvent* event);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperConnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
    friend void TextGrammarCheck__LanguageToolResultWidget_SuperDisconnectNotify(TextGrammarCheck::LanguageToolResultWidget* self, const QMetaMethod* signal);
};

#endif
