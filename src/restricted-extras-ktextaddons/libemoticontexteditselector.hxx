#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONTEXTEDITSELECTOR_HXX
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBEMOTICONTEXTEDITSELECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of TextEmoticonsWidgets::EmoticonTextEditSelector
class VirtualTextEmoticonsWidgetsEmoticonTextEditSelector final : public TextEmoticonsWidgets::EmoticonTextEditSelector {
  public:
    // Virtual class public types (including callbacks and access types)
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_Callback = QMetaObject* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_Callback = void* (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, const char*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_Callback = int (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, int, int, void**);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DevType_Callback = int (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, bool);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_Callback = QSize* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_Callback = QSize* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_Callback = int (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*, int);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_Callback = bool (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_Callback = QPaintEngine* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_Event_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMouseEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMouseEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMouseEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMouseEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QWheelEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QKeyEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QKeyEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QFocusEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QFocusEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QEnterEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QPaintEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMoveEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QResizeEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QCloseEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QContextMenuEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QTabletEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QActionEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QDragEnterEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QDragMoveEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QDragLeaveEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QDropEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QShowEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QHideEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, libqt_string, void*, intptr_t*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_Metric_Callback = int (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*, int);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_Callback = void (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*, QPainter*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_Callback = QPaintDevice* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*, QPoint*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_Callback = QPainter* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QInputMethodEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_Callback = QVariant* (*)(const TextEmoticonsWidgets__EmoticonTextEditSelector*, int);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, bool);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_Callback = bool (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QObject*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QTimerEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QChildEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QEvent*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMetaMethod*);
    using TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_Callback = void (*)(TextEmoticonsWidgets__EmoticonTextEditSelector*, QMetaMethod*);
    using TextEmoticonsWidgets::EmoticonTextEditSelector::create;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::destroy;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextChild;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::focusPreviousChild;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::getDecodedMetricF;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::isSignalConnected;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::receivers;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::sender;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::senderSignalIndex;
    using TextEmoticonsWidgets::EmoticonTextEditSelector::updateMicroFocus;

    // Instance callback storage
    TextEmoticonsWidgets__EmoticonTextEditSelector_MetaObject_Callback textemoticonswidgets__emoticontexteditselector_metaobject_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_Metacast_Callback textemoticonswidgets__emoticontexteditselector_metacast_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_Metacall_Callback textemoticonswidgets__emoticontexteditselector_metacall_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DevType_Callback textemoticonswidgets__emoticontexteditselector_devtype_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_SetVisible_Callback textemoticonswidgets__emoticontexteditselector_setvisible_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_SizeHint_Callback textemoticonswidgets__emoticontexteditselector_sizehint_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MinimumSizeHint_Callback textemoticonswidgets__emoticontexteditselector_minimumsizehint_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_HeightForWidth_Callback textemoticonswidgets__emoticontexteditselector_heightforwidth_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_HasHeightForWidth_Callback textemoticonswidgets__emoticontexteditselector_hasheightforwidth_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEngine_Callback textemoticonswidgets__emoticontexteditselector_paintengine_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_Event_Callback textemoticonswidgets__emoticontexteditselector_event_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MousePressEvent_Callback textemoticonswidgets__emoticontexteditselector_mousepressevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MouseReleaseEvent_Callback textemoticonswidgets__emoticontexteditselector_mousereleaseevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MouseDoubleClickEvent_Callback textemoticonswidgets__emoticontexteditselector_mousedoubleclickevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MouseMoveEvent_Callback textemoticonswidgets__emoticontexteditselector_mousemoveevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_WheelEvent_Callback textemoticonswidgets__emoticontexteditselector_wheelevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_KeyPressEvent_Callback textemoticonswidgets__emoticontexteditselector_keypressevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_KeyReleaseEvent_Callback textemoticonswidgets__emoticontexteditselector_keyreleaseevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_FocusInEvent_Callback textemoticonswidgets__emoticontexteditselector_focusinevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_FocusOutEvent_Callback textemoticonswidgets__emoticontexteditselector_focusoutevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_EnterEvent_Callback textemoticonswidgets__emoticontexteditselector_enterevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_LeaveEvent_Callback textemoticonswidgets__emoticontexteditselector_leaveevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_PaintEvent_Callback textemoticonswidgets__emoticontexteditselector_paintevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_MoveEvent_Callback textemoticonswidgets__emoticontexteditselector_moveevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ResizeEvent_Callback textemoticonswidgets__emoticontexteditselector_resizeevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_CloseEvent_Callback textemoticonswidgets__emoticontexteditselector_closeevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ContextMenuEvent_Callback textemoticonswidgets__emoticontexteditselector_contextmenuevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_TabletEvent_Callback textemoticonswidgets__emoticontexteditselector_tabletevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ActionEvent_Callback textemoticonswidgets__emoticontexteditselector_actionevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DragEnterEvent_Callback textemoticonswidgets__emoticontexteditselector_dragenterevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DragMoveEvent_Callback textemoticonswidgets__emoticontexteditselector_dragmoveevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DragLeaveEvent_Callback textemoticonswidgets__emoticontexteditselector_dragleaveevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DropEvent_Callback textemoticonswidgets__emoticontexteditselector_dropevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ShowEvent_Callback textemoticonswidgets__emoticontexteditselector_showevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_HideEvent_Callback textemoticonswidgets__emoticontexteditselector_hideevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_NativeEvent_Callback textemoticonswidgets__emoticontexteditselector_nativeevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ChangeEvent_Callback textemoticonswidgets__emoticontexteditselector_changeevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_Metric_Callback textemoticonswidgets__emoticontexteditselector_metric_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_InitPainter_Callback textemoticonswidgets__emoticontexteditselector_initpainter_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_Redirected_Callback textemoticonswidgets__emoticontexteditselector_redirected_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_SharedPainter_Callback textemoticonswidgets__emoticontexteditselector_sharedpainter_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodEvent_Callback textemoticonswidgets__emoticontexteditselector_inputmethodevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_InputMethodQuery_Callback textemoticonswidgets__emoticontexteditselector_inputmethodquery_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_FocusNextPrevChild_Callback textemoticonswidgets__emoticontexteditselector_focusnextprevchild_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_EventFilter_Callback textemoticonswidgets__emoticontexteditselector_eventfilter_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_TimerEvent_Callback textemoticonswidgets__emoticontexteditselector_timerevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ChildEvent_Callback textemoticonswidgets__emoticontexteditselector_childevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_CustomEvent_Callback textemoticonswidgets__emoticontexteditselector_customevent_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_ConnectNotify_Callback textemoticonswidgets__emoticontexteditselector_connectnotify_callback = nullptr;
    TextEmoticonsWidgets__EmoticonTextEditSelector_DisconnectNotify_Callback textemoticonswidgets__emoticontexteditselector_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : TextEmoticonsWidgets::EmoticonTextEditSelector {
        using TextEmoticonsWidgets::EmoticonTextEditSelector::actionEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::changeEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::childEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::closeEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::connectNotify;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::contextMenuEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::customEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::disconnectNotify;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::dragEnterEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::dragLeaveEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::dragMoveEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::dropEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::enterEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::event;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::focusInEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::focusNextPrevChild;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::focusOutEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::hideEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::initPainter;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::inputMethodEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::keyPressEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::keyReleaseEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::leaveEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::metric;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::mouseDoubleClickEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::mouseMoveEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::mousePressEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::mouseReleaseEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::moveEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::nativeEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::paintEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::redirected;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::resizeEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::sharedPainter;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::showEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::tabletEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::timerEvent;
        using TextEmoticonsWidgets::EmoticonTextEditSelector::wheelEvent;
    };

    VirtualTextEmoticonsWidgetsEmoticonTextEditSelector(QWidget* parent) : TextEmoticonsWidgets::EmoticonTextEditSelector(parent) {};
    VirtualTextEmoticonsWidgetsEmoticonTextEditSelector() : TextEmoticonsWidgets::EmoticonTextEditSelector() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (textemoticonswidgets__emoticontexteditselector_metaobject_callback) {
            QMetaObject* callback_ret = textemoticonswidgets__emoticontexteditselector_metaobject_callback(this);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (textemoticonswidgets__emoticontexteditselector_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = textemoticonswidgets__emoticontexteditselector_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (textemoticonswidgets__emoticontexteditselector_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = textemoticonswidgets__emoticontexteditselector_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (textemoticonswidgets__emoticontexteditselector_devtype_callback) {
            int callback_ret = textemoticonswidgets__emoticontexteditselector_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (textemoticonswidgets__emoticontexteditselector_setvisible_callback) {
            bool cbval1 = visible;
            textemoticonswidgets__emoticontexteditselector_setvisible_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (textemoticonswidgets__emoticontexteditselector_sizehint_callback) {
            QSize* callback_ret = textemoticonswidgets__emoticontexteditselector_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (textemoticonswidgets__emoticontexteditselector_minimumsizehint_callback) {
            QSize* callback_ret = textemoticonswidgets__emoticontexteditselector_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (textemoticonswidgets__emoticontexteditselector_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = textemoticonswidgets__emoticontexteditselector_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (textemoticonswidgets__emoticontexteditselector_hasheightforwidth_callback) {
            bool callback_ret = textemoticonswidgets__emoticontexteditselector_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (textemoticonswidgets__emoticontexteditselector_paintengine_callback) {
            QPaintEngine* callback_ret = textemoticonswidgets__emoticontexteditselector_paintengine_callback(this);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = textemoticonswidgets__emoticontexteditselector_event_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_mousepressevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_mousereleaseevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_mousemoveevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_wheelevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_keypressevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_keyreleaseevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_focusinevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_focusoutevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_enterevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_leaveevent_callback) {
            QEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_leaveevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_paintevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_moveevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_resizeevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_closeevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_contextmenuevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_tabletevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_actionevent_callback) {
            QActionEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_actionevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_dragenterevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_dragmoveevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_dragleaveevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_dropevent_callback) {
            QDropEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_dropevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_showevent_callback) {
            QShowEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_showevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_hideevent_callback) {
            QHideEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_hideevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (textemoticonswidgets__emoticontexteditselector_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = textemoticonswidgets__emoticontexteditselector_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (textemoticonswidgets__emoticontexteditselector_changeevent_callback) {
            QEvent* cbval1 = param1;
            textemoticonswidgets__emoticontexteditselector_changeevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (textemoticonswidgets__emoticontexteditselector_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = textemoticonswidgets__emoticontexteditselector_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (textemoticonswidgets__emoticontexteditselector_initpainter_callback) {
            QPainter* cbval1 = painter;
            textemoticonswidgets__emoticontexteditselector_initpainter_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (textemoticonswidgets__emoticontexteditselector_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = textemoticonswidgets__emoticontexteditselector_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (textemoticonswidgets__emoticontexteditselector_sharedpainter_callback) {
            QPainter* callback_ret = textemoticonswidgets__emoticontexteditselector_sharedpainter_callback(this);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (textemoticonswidgets__emoticontexteditselector_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            textemoticonswidgets__emoticontexteditselector_inputmethodevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (textemoticonswidgets__emoticontexteditselector_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = textemoticonswidgets__emoticontexteditselector_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (textemoticonswidgets__emoticontexteditselector_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = textemoticonswidgets__emoticontexteditselector_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = textemoticonswidgets__emoticontexteditselector_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return TextEmoticonsWidgets__EmoticonTextEditSelector::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_timerevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_childevent_callback) {
            QChildEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_childevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (textemoticonswidgets__emoticontexteditselector_customevent_callback) {
            QEvent* cbval1 = event;
            textemoticonswidgets__emoticontexteditselector_customevent_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditselector_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonswidgets__emoticontexteditselector_connectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (textemoticonswidgets__emoticontexteditselector_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            textemoticonswidgets__emoticontexteditselector_disconnectnotify_callback(this, cbval1);
            return;
        }
        TextEmoticonsWidgets__EmoticonTextEditSelector::disconnectNotify(signal);
    }

    // Friend functions
    friend bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMousePressEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QMouseEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseReleaseEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QMouseEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseDoubleClickEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QMouseEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMouseMoveEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QMouseEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperWheelEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QWheelEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyPressEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QKeyEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperKeyReleaseEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QKeyEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusInEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QFocusEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusOutEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QFocusEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperEnterEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QEnterEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperLeaveEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperPaintEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QPaintEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMoveEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QMoveEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperResizeEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QResizeEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCloseEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QCloseEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperContextMenuEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QContextMenuEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTabletEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QTabletEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperActionEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QActionEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragEnterEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QDragEnterEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragMoveEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QDragMoveEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDragLeaveEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QDragLeaveEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDropEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QDropEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperShowEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QShowEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperHideEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QHideEvent* event);
    friend bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperNativeEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChangeEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QEvent* param1);
    friend int TextEmoticonsWidgets__EmoticonTextEditSelector_SuperMetric(const TextEmoticonsWidgets::EmoticonTextEditSelector* self, int param1);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInitPainter(const TextEmoticonsWidgets::EmoticonTextEditSelector* self, QPainter* painter);
    friend QPaintDevice* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperRedirected(const TextEmoticonsWidgets::EmoticonTextEditSelector* self, QPoint* offset);
    friend QPainter* TextEmoticonsWidgets__EmoticonTextEditSelector_SuperSharedPainter(const TextEmoticonsWidgets::EmoticonTextEditSelector* self);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperInputMethodEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QInputMethodEvent* param1);
    friend bool TextEmoticonsWidgets__EmoticonTextEditSelector_SuperFocusNextPrevChild(TextEmoticonsWidgets::EmoticonTextEditSelector* self, bool next);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperTimerEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QTimerEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperChildEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QChildEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperCustomEvent(TextEmoticonsWidgets::EmoticonTextEditSelector* self, QEvent* event);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperConnectNotify(TextEmoticonsWidgets::EmoticonTextEditSelector* self, const QMetaMethod* signal);
    friend void TextEmoticonsWidgets__EmoticonTextEditSelector_SuperDisconnectNotify(TextEmoticonsWidgets::EmoticonTextEditSelector* self, const QMetaMethod* signal);
};

#endif
