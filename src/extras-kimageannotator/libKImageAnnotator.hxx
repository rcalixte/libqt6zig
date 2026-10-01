#pragma once
#ifndef EXTRAS_KIMAGEANNOTATOR_LIBKIMAGEANNOTATOR_HXX
#define EXTRAS_KIMAGEANNOTATOR_LIBKIMAGEANNOTATOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of kImageAnnotator::KImageAnnotator
class VirtualkImageAnnotatorKImageAnnotator final : public kImageAnnotator::KImageAnnotator {
  public:
    // Virtual class public types (including callbacks and access types)
    using kImageAnnotator__KImageAnnotator_MetaObject_Callback = QMetaObject* (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_Metacast_Callback = void* (*)(kImageAnnotator__KImageAnnotator*, const char*);
    using kImageAnnotator__KImageAnnotator_Metacall_Callback = int (*)(kImageAnnotator__KImageAnnotator*, int, int, void**);
    using kImageAnnotator__KImageAnnotator_SizeHint_Callback = QSize* (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_DevType_Callback = int (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_SetVisible_Callback = void (*)(kImageAnnotator__KImageAnnotator*, bool);
    using kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback = QSize* (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_HeightForWidth_Callback = int (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback = bool (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_PaintEngine_Callback = QPaintEngine* (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_Event_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_MousePressEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMouseEvent*);
    using kImageAnnotator__KImageAnnotator_WheelEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QWheelEvent*);
    using kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QKeyEvent*);
    using kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QKeyEvent*);
    using kImageAnnotator__KImageAnnotator_FocusInEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QFocusEvent*);
    using kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QFocusEvent*);
    using kImageAnnotator__KImageAnnotator_EnterEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEnterEvent*);
    using kImageAnnotator__KImageAnnotator_LeaveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_PaintEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QPaintEvent*);
    using kImageAnnotator__KImageAnnotator_MoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMoveEvent*);
    using kImageAnnotator__KImageAnnotator_ResizeEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QResizeEvent*);
    using kImageAnnotator__KImageAnnotator_CloseEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QCloseEvent*);
    using kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QContextMenuEvent*);
    using kImageAnnotator__KImageAnnotator_TabletEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QTabletEvent*);
    using kImageAnnotator__KImageAnnotator_ActionEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QActionEvent*);
    using kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragEnterEvent*);
    using kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragMoveEvent*);
    using kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDragLeaveEvent*);
    using kImageAnnotator__KImageAnnotator_DropEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QDropEvent*);
    using kImageAnnotator__KImageAnnotator_ShowEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QShowEvent*);
    using kImageAnnotator__KImageAnnotator_HideEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QHideEvent*);
    using kImageAnnotator__KImageAnnotator_NativeEvent_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, libqt_string, void*, intptr_t*);
    using kImageAnnotator__KImageAnnotator_ChangeEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_Metric_Callback = int (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_InitPainter_Callback = void (*)(const kImageAnnotator__KImageAnnotator*, QPainter*);
    using kImageAnnotator__KImageAnnotator_Redirected_Callback = QPaintDevice* (*)(const kImageAnnotator__KImageAnnotator*, QPoint*);
    using kImageAnnotator__KImageAnnotator_SharedPainter_Callback = QPainter* (*)(const kImageAnnotator__KImageAnnotator*);
    using kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QInputMethodEvent*);
    using kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback = QVariant* (*)(const kImageAnnotator__KImageAnnotator*, int);
    using kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, bool);
    using kImageAnnotator__KImageAnnotator_EventFilter_Callback = bool (*)(kImageAnnotator__KImageAnnotator*, QObject*, QEvent*);
    using kImageAnnotator__KImageAnnotator_TimerEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QTimerEvent*);
    using kImageAnnotator__KImageAnnotator_ChildEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QChildEvent*);
    using kImageAnnotator__KImageAnnotator_CustomEvent_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QEvent*);
    using kImageAnnotator__KImageAnnotator_ConnectNotify_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMetaMethod*);
    using kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback = void (*)(kImageAnnotator__KImageAnnotator*, QMetaMethod*);
    using kImageAnnotator::KImageAnnotator::create;
    using kImageAnnotator::KImageAnnotator::destroy;
    using kImageAnnotator::KImageAnnotator::focusNextChild;
    using kImageAnnotator::KImageAnnotator::focusPreviousChild;
    using kImageAnnotator::KImageAnnotator::getDecodedMetricF;
    using kImageAnnotator::KImageAnnotator::isSignalConnected;
    using kImageAnnotator::KImageAnnotator::receivers;
    using kImageAnnotator::KImageAnnotator::sender;
    using kImageAnnotator::KImageAnnotator::senderSignalIndex;
    using kImageAnnotator::KImageAnnotator::updateMicroFocus;

    // Instance callback storage
    kImageAnnotator__KImageAnnotator_MetaObject_Callback kimageannotator__kimageannotator_metaobject_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metacast_Callback kimageannotator__kimageannotator_metacast_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metacall_Callback kimageannotator__kimageannotator_metacall_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SizeHint_Callback kimageannotator__kimageannotator_sizehint_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DevType_Callback kimageannotator__kimageannotator_devtype_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SetVisible_Callback kimageannotator__kimageannotator_setvisible_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MinimumSizeHint_Callback kimageannotator__kimageannotator_minimumsizehint_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HeightForWidth_Callback kimageannotator__kimageannotator_heightforwidth_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HasHeightForWidth_Callback kimageannotator__kimageannotator_hasheightforwidth_callback = nullptr;
    kImageAnnotator__KImageAnnotator_PaintEngine_Callback kimageannotator__kimageannotator_paintengine_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Event_Callback kimageannotator__kimageannotator_event_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MousePressEvent_Callback kimageannotator__kimageannotator_mousepressevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseReleaseEvent_Callback kimageannotator__kimageannotator_mousereleaseevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseDoubleClickEvent_Callback kimageannotator__kimageannotator_mousedoubleclickevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MouseMoveEvent_Callback kimageannotator__kimageannotator_mousemoveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_WheelEvent_Callback kimageannotator__kimageannotator_wheelevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_KeyPressEvent_Callback kimageannotator__kimageannotator_keypressevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_KeyReleaseEvent_Callback kimageannotator__kimageannotator_keyreleaseevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusInEvent_Callback kimageannotator__kimageannotator_focusinevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusOutEvent_Callback kimageannotator__kimageannotator_focusoutevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_EnterEvent_Callback kimageannotator__kimageannotator_enterevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_LeaveEvent_Callback kimageannotator__kimageannotator_leaveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_PaintEvent_Callback kimageannotator__kimageannotator_paintevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_MoveEvent_Callback kimageannotator__kimageannotator_moveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ResizeEvent_Callback kimageannotator__kimageannotator_resizeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_CloseEvent_Callback kimageannotator__kimageannotator_closeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ContextMenuEvent_Callback kimageannotator__kimageannotator_contextmenuevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_TabletEvent_Callback kimageannotator__kimageannotator_tabletevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ActionEvent_Callback kimageannotator__kimageannotator_actionevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragEnterEvent_Callback kimageannotator__kimageannotator_dragenterevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragMoveEvent_Callback kimageannotator__kimageannotator_dragmoveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DragLeaveEvent_Callback kimageannotator__kimageannotator_dragleaveevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DropEvent_Callback kimageannotator__kimageannotator_dropevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ShowEvent_Callback kimageannotator__kimageannotator_showevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_HideEvent_Callback kimageannotator__kimageannotator_hideevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_NativeEvent_Callback kimageannotator__kimageannotator_nativeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ChangeEvent_Callback kimageannotator__kimageannotator_changeevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Metric_Callback kimageannotator__kimageannotator_metric_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InitPainter_Callback kimageannotator__kimageannotator_initpainter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_Redirected_Callback kimageannotator__kimageannotator_redirected_callback = nullptr;
    kImageAnnotator__KImageAnnotator_SharedPainter_Callback kimageannotator__kimageannotator_sharedpainter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InputMethodEvent_Callback kimageannotator__kimageannotator_inputmethodevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_InputMethodQuery_Callback kimageannotator__kimageannotator_inputmethodquery_callback = nullptr;
    kImageAnnotator__KImageAnnotator_FocusNextPrevChild_Callback kimageannotator__kimageannotator_focusnextprevchild_callback = nullptr;
    kImageAnnotator__KImageAnnotator_EventFilter_Callback kimageannotator__kimageannotator_eventfilter_callback = nullptr;
    kImageAnnotator__KImageAnnotator_TimerEvent_Callback kimageannotator__kimageannotator_timerevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ChildEvent_Callback kimageannotator__kimageannotator_childevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_CustomEvent_Callback kimageannotator__kimageannotator_customevent_callback = nullptr;
    kImageAnnotator__KImageAnnotator_ConnectNotify_Callback kimageannotator__kimageannotator_connectnotify_callback = nullptr;
    kImageAnnotator__KImageAnnotator_DisconnectNotify_Callback kimageannotator__kimageannotator_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : kImageAnnotator::KImageAnnotator {
        using kImageAnnotator::KImageAnnotator::actionEvent;
        using kImageAnnotator::KImageAnnotator::changeEvent;
        using kImageAnnotator::KImageAnnotator::childEvent;
        using kImageAnnotator::KImageAnnotator::closeEvent;
        using kImageAnnotator::KImageAnnotator::connectNotify;
        using kImageAnnotator::KImageAnnotator::contextMenuEvent;
        using kImageAnnotator::KImageAnnotator::customEvent;
        using kImageAnnotator::KImageAnnotator::disconnectNotify;
        using kImageAnnotator::KImageAnnotator::dragEnterEvent;
        using kImageAnnotator::KImageAnnotator::dragLeaveEvent;
        using kImageAnnotator::KImageAnnotator::dragMoveEvent;
        using kImageAnnotator::KImageAnnotator::dropEvent;
        using kImageAnnotator::KImageAnnotator::enterEvent;
        using kImageAnnotator::KImageAnnotator::event;
        using kImageAnnotator::KImageAnnotator::focusInEvent;
        using kImageAnnotator::KImageAnnotator::focusNextPrevChild;
        using kImageAnnotator::KImageAnnotator::focusOutEvent;
        using kImageAnnotator::KImageAnnotator::hideEvent;
        using kImageAnnotator::KImageAnnotator::initPainter;
        using kImageAnnotator::KImageAnnotator::inputMethodEvent;
        using kImageAnnotator::KImageAnnotator::keyPressEvent;
        using kImageAnnotator::KImageAnnotator::keyReleaseEvent;
        using kImageAnnotator::KImageAnnotator::leaveEvent;
        using kImageAnnotator::KImageAnnotator::metric;
        using kImageAnnotator::KImageAnnotator::mouseDoubleClickEvent;
        using kImageAnnotator::KImageAnnotator::mouseMoveEvent;
        using kImageAnnotator::KImageAnnotator::mousePressEvent;
        using kImageAnnotator::KImageAnnotator::mouseReleaseEvent;
        using kImageAnnotator::KImageAnnotator::moveEvent;
        using kImageAnnotator::KImageAnnotator::nativeEvent;
        using kImageAnnotator::KImageAnnotator::paintEvent;
        using kImageAnnotator::KImageAnnotator::redirected;
        using kImageAnnotator::KImageAnnotator::resizeEvent;
        using kImageAnnotator::KImageAnnotator::sharedPainter;
        using kImageAnnotator::KImageAnnotator::showEvent;
        using kImageAnnotator::KImageAnnotator::tabletEvent;
        using kImageAnnotator::KImageAnnotator::timerEvent;
        using kImageAnnotator::KImageAnnotator::wheelEvent;
    };

    VirtualkImageAnnotatorKImageAnnotator() : kImageAnnotator::KImageAnnotator() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kimageannotator__kimageannotator_metaobject_callback) {
            QMetaObject* callback_ret = kimageannotator__kimageannotator_metaobject_callback(this);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kimageannotator__kimageannotator_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kimageannotator__kimageannotator_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kimageannotator__kimageannotator_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kimageannotator__kimageannotator_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kimageannotator__kimageannotator_sizehint_callback) {
            QSize* callback_ret = kimageannotator__kimageannotator_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kImageAnnotator__KImageAnnotator::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kimageannotator__kimageannotator_devtype_callback) {
            int callback_ret = kimageannotator__kimageannotator_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kimageannotator__kimageannotator_setvisible_callback) {
            bool cbval1 = visible;
            kimageannotator__kimageannotator_setvisible_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kimageannotator__kimageannotator_minimumsizehint_callback) {
            QSize* callback_ret = kimageannotator__kimageannotator_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kImageAnnotator__KImageAnnotator::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kimageannotator__kimageannotator_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kimageannotator__kimageannotator_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kimageannotator__kimageannotator_hasheightforwidth_callback) {
            bool callback_ret = kimageannotator__kimageannotator_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kimageannotator__kimageannotator_paintengine_callback) {
            QPaintEngine* callback_ret = kimageannotator__kimageannotator_paintengine_callback(this);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kimageannotator__kimageannotator_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kimageannotator__kimageannotator_event_callback(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kimageannotator__kimageannotator_mousepressevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kimageannotator__kimageannotator_mousereleaseevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kimageannotator__kimageannotator_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kimageannotator__kimageannotator_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kimageannotator__kimageannotator_mousemoveevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kimageannotator__kimageannotator_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kimageannotator__kimageannotator_wheelevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kimageannotator__kimageannotator_keypressevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kimageannotator__kimageannotator_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kimageannotator__kimageannotator_keyreleaseevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kimageannotator__kimageannotator_focusinevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kimageannotator__kimageannotator_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kimageannotator__kimageannotator_focusoutevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kimageannotator__kimageannotator_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kimageannotator__kimageannotator_enterevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_leaveevent_callback) {
            QEvent* cbval1 = event;
            kimageannotator__kimageannotator_leaveevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kimageannotator__kimageannotator_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kimageannotator__kimageannotator_paintevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kimageannotator__kimageannotator_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kimageannotator__kimageannotator_moveevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kimageannotator__kimageannotator_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kimageannotator__kimageannotator_resizeevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kimageannotator__kimageannotator_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kimageannotator__kimageannotator_closeevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kimageannotator__kimageannotator_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kimageannotator__kimageannotator_contextmenuevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kimageannotator__kimageannotator_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kimageannotator__kimageannotator_tabletevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kimageannotator__kimageannotator_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kimageannotator__kimageannotator_actionevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kimageannotator__kimageannotator_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kimageannotator__kimageannotator_dragenterevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kimageannotator__kimageannotator_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kimageannotator__kimageannotator_dragmoveevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kimageannotator__kimageannotator_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kimageannotator__kimageannotator_dragleaveevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kimageannotator__kimageannotator_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kimageannotator__kimageannotator_dropevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kimageannotator__kimageannotator_showevent_callback) {
            QShowEvent* cbval1 = event;
            kimageannotator__kimageannotator_showevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kimageannotator__kimageannotator_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kimageannotator__kimageannotator_hideevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kimageannotator__kimageannotator_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kimageannotator__kimageannotator_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kimageannotator__kimageannotator_changeevent_callback) {
            QEvent* cbval1 = param1;
            kimageannotator__kimageannotator_changeevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kimageannotator__kimageannotator_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kimageannotator__kimageannotator_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return kImageAnnotator__KImageAnnotator::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kimageannotator__kimageannotator_initpainter_callback) {
            QPainter* cbval1 = painter;
            kimageannotator__kimageannotator_initpainter_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kimageannotator__kimageannotator_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kimageannotator__kimageannotator_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kimageannotator__kimageannotator_sharedpainter_callback) {
            QPainter* callback_ret = kimageannotator__kimageannotator_sharedpainter_callback(this);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kimageannotator__kimageannotator_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kimageannotator__kimageannotator_inputmethodevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kimageannotator__kimageannotator_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kimageannotator__kimageannotator_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return kImageAnnotator__KImageAnnotator::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kimageannotator__kimageannotator_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kimageannotator__kimageannotator_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (kimageannotator__kimageannotator_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = kimageannotator__kimageannotator_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return kImageAnnotator__KImageAnnotator::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kimageannotator__kimageannotator_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kimageannotator__kimageannotator_timerevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kimageannotator__kimageannotator_childevent_callback) {
            QChildEvent* cbval1 = event;
            kimageannotator__kimageannotator_childevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kimageannotator__kimageannotator_customevent_callback) {
            QEvent* cbval1 = event;
            kimageannotator__kimageannotator_customevent_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kimageannotator__kimageannotator_connectnotify_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kimageannotator__kimageannotator_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kimageannotator__kimageannotator_disconnectnotify_callback(this, cbval1);
            return;
        }
        kImageAnnotator__KImageAnnotator::disconnectNotify(signal);
    }

    // Friend functions
    friend bool kImageAnnotator__KImageAnnotator_SuperEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMousePressEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseReleaseEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseDoubleClickEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMouseMoveEvent(kImageAnnotator::KImageAnnotator* self, QMouseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperWheelEvent(kImageAnnotator::KImageAnnotator* self, QWheelEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperKeyPressEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperKeyReleaseEvent(kImageAnnotator::KImageAnnotator* self, QKeyEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperFocusInEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperFocusOutEvent(kImageAnnotator::KImageAnnotator* self, QFocusEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperEnterEvent(kImageAnnotator::KImageAnnotator* self, QEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperLeaveEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperPaintEvent(kImageAnnotator::KImageAnnotator* self, QPaintEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperMoveEvent(kImageAnnotator::KImageAnnotator* self, QMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperResizeEvent(kImageAnnotator::KImageAnnotator* self, QResizeEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperCloseEvent(kImageAnnotator::KImageAnnotator* self, QCloseEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperContextMenuEvent(kImageAnnotator::KImageAnnotator* self, QContextMenuEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperTabletEvent(kImageAnnotator::KImageAnnotator* self, QTabletEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperActionEvent(kImageAnnotator::KImageAnnotator* self, QActionEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragEnterEvent(kImageAnnotator::KImageAnnotator* self, QDragEnterEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragMoveEvent(kImageAnnotator::KImageAnnotator* self, QDragMoveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDragLeaveEvent(kImageAnnotator::KImageAnnotator* self, QDragLeaveEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperDropEvent(kImageAnnotator::KImageAnnotator* self, QDropEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperShowEvent(kImageAnnotator::KImageAnnotator* self, QShowEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperHideEvent(kImageAnnotator::KImageAnnotator* self, QHideEvent* event);
    friend bool kImageAnnotator__KImageAnnotator_SuperNativeEvent(kImageAnnotator::KImageAnnotator* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void kImageAnnotator__KImageAnnotator_SuperChangeEvent(kImageAnnotator::KImageAnnotator* self, QEvent* param1);
    friend int kImageAnnotator__KImageAnnotator_SuperMetric(const kImageAnnotator::KImageAnnotator* self, int param1);
    friend void kImageAnnotator__KImageAnnotator_SuperInitPainter(const kImageAnnotator::KImageAnnotator* self, QPainter* painter);
    friend QPaintDevice* kImageAnnotator__KImageAnnotator_SuperRedirected(const kImageAnnotator::KImageAnnotator* self, QPoint* offset);
    friend QPainter* kImageAnnotator__KImageAnnotator_SuperSharedPainter(const kImageAnnotator::KImageAnnotator* self);
    friend void kImageAnnotator__KImageAnnotator_SuperInputMethodEvent(kImageAnnotator::KImageAnnotator* self, QInputMethodEvent* param1);
    friend bool kImageAnnotator__KImageAnnotator_SuperFocusNextPrevChild(kImageAnnotator::KImageAnnotator* self, bool next);
    friend void kImageAnnotator__KImageAnnotator_SuperTimerEvent(kImageAnnotator::KImageAnnotator* self, QTimerEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperChildEvent(kImageAnnotator::KImageAnnotator* self, QChildEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperCustomEvent(kImageAnnotator::KImageAnnotator* self, QEvent* event);
    friend void kImageAnnotator__KImageAnnotator_SuperConnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
    friend void kImageAnnotator__KImageAnnotator_SuperDisconnectNotify(kImageAnnotator::KImageAnnotator* self, const QMetaMethod* signal);
};

#endif
