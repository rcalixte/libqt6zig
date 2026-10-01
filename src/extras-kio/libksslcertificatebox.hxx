#pragma once
#ifndef EXTRAS_KIO_LIBKSSLCERTIFICATEBOX_HXX
#define EXTRAS_KIO_LIBKSSLCERTIFICATEBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KSslCertificateBox
class VirtualKSslCertificateBox final : public KSslCertificateBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using KSslCertificateBox_MetaObject_Callback = QMetaObject* (*)(const KSslCertificateBox*);
    using KSslCertificateBox_Metacast_Callback = void* (*)(KSslCertificateBox*, const char*);
    using KSslCertificateBox_Metacall_Callback = int (*)(KSslCertificateBox*, int, int, void**);
    using KSslCertificateBox_DevType_Callback = int (*)(const KSslCertificateBox*);
    using KSslCertificateBox_SetVisible_Callback = void (*)(KSslCertificateBox*, bool);
    using KSslCertificateBox_SizeHint_Callback = QSize* (*)(const KSslCertificateBox*);
    using KSslCertificateBox_MinimumSizeHint_Callback = QSize* (*)(const KSslCertificateBox*);
    using KSslCertificateBox_HeightForWidth_Callback = int (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_HasHeightForWidth_Callback = bool (*)(const KSslCertificateBox*);
    using KSslCertificateBox_PaintEngine_Callback = QPaintEngine* (*)(const KSslCertificateBox*);
    using KSslCertificateBox_Event_Callback = bool (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_MousePressEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseReleaseEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseDoubleClickEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_MouseMoveEvent_Callback = void (*)(KSslCertificateBox*, QMouseEvent*);
    using KSslCertificateBox_WheelEvent_Callback = void (*)(KSslCertificateBox*, QWheelEvent*);
    using KSslCertificateBox_KeyPressEvent_Callback = void (*)(KSslCertificateBox*, QKeyEvent*);
    using KSslCertificateBox_KeyReleaseEvent_Callback = void (*)(KSslCertificateBox*, QKeyEvent*);
    using KSslCertificateBox_FocusInEvent_Callback = void (*)(KSslCertificateBox*, QFocusEvent*);
    using KSslCertificateBox_FocusOutEvent_Callback = void (*)(KSslCertificateBox*, QFocusEvent*);
    using KSslCertificateBox_EnterEvent_Callback = void (*)(KSslCertificateBox*, QEnterEvent*);
    using KSslCertificateBox_LeaveEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_PaintEvent_Callback = void (*)(KSslCertificateBox*, QPaintEvent*);
    using KSslCertificateBox_MoveEvent_Callback = void (*)(KSslCertificateBox*, QMoveEvent*);
    using KSslCertificateBox_ResizeEvent_Callback = void (*)(KSslCertificateBox*, QResizeEvent*);
    using KSslCertificateBox_CloseEvent_Callback = void (*)(KSslCertificateBox*, QCloseEvent*);
    using KSslCertificateBox_ContextMenuEvent_Callback = void (*)(KSslCertificateBox*, QContextMenuEvent*);
    using KSslCertificateBox_TabletEvent_Callback = void (*)(KSslCertificateBox*, QTabletEvent*);
    using KSslCertificateBox_ActionEvent_Callback = void (*)(KSslCertificateBox*, QActionEvent*);
    using KSslCertificateBox_DragEnterEvent_Callback = void (*)(KSslCertificateBox*, QDragEnterEvent*);
    using KSslCertificateBox_DragMoveEvent_Callback = void (*)(KSslCertificateBox*, QDragMoveEvent*);
    using KSslCertificateBox_DragLeaveEvent_Callback = void (*)(KSslCertificateBox*, QDragLeaveEvent*);
    using KSslCertificateBox_DropEvent_Callback = void (*)(KSslCertificateBox*, QDropEvent*);
    using KSslCertificateBox_ShowEvent_Callback = void (*)(KSslCertificateBox*, QShowEvent*);
    using KSslCertificateBox_HideEvent_Callback = void (*)(KSslCertificateBox*, QHideEvent*);
    using KSslCertificateBox_NativeEvent_Callback = bool (*)(KSslCertificateBox*, libqt_string, void*, intptr_t*);
    using KSslCertificateBox_ChangeEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_Metric_Callback = int (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_InitPainter_Callback = void (*)(const KSslCertificateBox*, QPainter*);
    using KSslCertificateBox_Redirected_Callback = QPaintDevice* (*)(const KSslCertificateBox*, QPoint*);
    using KSslCertificateBox_SharedPainter_Callback = QPainter* (*)(const KSslCertificateBox*);
    using KSslCertificateBox_InputMethodEvent_Callback = void (*)(KSslCertificateBox*, QInputMethodEvent*);
    using KSslCertificateBox_InputMethodQuery_Callback = QVariant* (*)(const KSslCertificateBox*, int);
    using KSslCertificateBox_FocusNextPrevChild_Callback = bool (*)(KSslCertificateBox*, bool);
    using KSslCertificateBox_EventFilter_Callback = bool (*)(KSslCertificateBox*, QObject*, QEvent*);
    using KSslCertificateBox_TimerEvent_Callback = void (*)(KSslCertificateBox*, QTimerEvent*);
    using KSslCertificateBox_ChildEvent_Callback = void (*)(KSslCertificateBox*, QChildEvent*);
    using KSslCertificateBox_CustomEvent_Callback = void (*)(KSslCertificateBox*, QEvent*);
    using KSslCertificateBox_ConnectNotify_Callback = void (*)(KSslCertificateBox*, QMetaMethod*);
    using KSslCertificateBox_DisconnectNotify_Callback = void (*)(KSslCertificateBox*, QMetaMethod*);
    using KSslCertificateBox::create;
    using KSslCertificateBox::destroy;
    using KSslCertificateBox::focusNextChild;
    using KSslCertificateBox::focusPreviousChild;
    using KSslCertificateBox::getDecodedMetricF;
    using KSslCertificateBox::isSignalConnected;
    using KSslCertificateBox::receivers;
    using KSslCertificateBox::sender;
    using KSslCertificateBox::senderSignalIndex;
    using KSslCertificateBox::updateMicroFocus;

    // Instance callback storage
    KSslCertificateBox_MetaObject_Callback ksslcertificatebox_metaobject_callback = nullptr;
    KSslCertificateBox_Metacast_Callback ksslcertificatebox_metacast_callback = nullptr;
    KSslCertificateBox_Metacall_Callback ksslcertificatebox_metacall_callback = nullptr;
    KSslCertificateBox_DevType_Callback ksslcertificatebox_devtype_callback = nullptr;
    KSslCertificateBox_SetVisible_Callback ksslcertificatebox_setvisible_callback = nullptr;
    KSslCertificateBox_SizeHint_Callback ksslcertificatebox_sizehint_callback = nullptr;
    KSslCertificateBox_MinimumSizeHint_Callback ksslcertificatebox_minimumsizehint_callback = nullptr;
    KSslCertificateBox_HeightForWidth_Callback ksslcertificatebox_heightforwidth_callback = nullptr;
    KSslCertificateBox_HasHeightForWidth_Callback ksslcertificatebox_hasheightforwidth_callback = nullptr;
    KSslCertificateBox_PaintEngine_Callback ksslcertificatebox_paintengine_callback = nullptr;
    KSslCertificateBox_Event_Callback ksslcertificatebox_event_callback = nullptr;
    KSslCertificateBox_MousePressEvent_Callback ksslcertificatebox_mousepressevent_callback = nullptr;
    KSslCertificateBox_MouseReleaseEvent_Callback ksslcertificatebox_mousereleaseevent_callback = nullptr;
    KSslCertificateBox_MouseDoubleClickEvent_Callback ksslcertificatebox_mousedoubleclickevent_callback = nullptr;
    KSslCertificateBox_MouseMoveEvent_Callback ksslcertificatebox_mousemoveevent_callback = nullptr;
    KSslCertificateBox_WheelEvent_Callback ksslcertificatebox_wheelevent_callback = nullptr;
    KSslCertificateBox_KeyPressEvent_Callback ksslcertificatebox_keypressevent_callback = nullptr;
    KSslCertificateBox_KeyReleaseEvent_Callback ksslcertificatebox_keyreleaseevent_callback = nullptr;
    KSslCertificateBox_FocusInEvent_Callback ksslcertificatebox_focusinevent_callback = nullptr;
    KSslCertificateBox_FocusOutEvent_Callback ksslcertificatebox_focusoutevent_callback = nullptr;
    KSslCertificateBox_EnterEvent_Callback ksslcertificatebox_enterevent_callback = nullptr;
    KSslCertificateBox_LeaveEvent_Callback ksslcertificatebox_leaveevent_callback = nullptr;
    KSslCertificateBox_PaintEvent_Callback ksslcertificatebox_paintevent_callback = nullptr;
    KSslCertificateBox_MoveEvent_Callback ksslcertificatebox_moveevent_callback = nullptr;
    KSslCertificateBox_ResizeEvent_Callback ksslcertificatebox_resizeevent_callback = nullptr;
    KSslCertificateBox_CloseEvent_Callback ksslcertificatebox_closeevent_callback = nullptr;
    KSslCertificateBox_ContextMenuEvent_Callback ksslcertificatebox_contextmenuevent_callback = nullptr;
    KSslCertificateBox_TabletEvent_Callback ksslcertificatebox_tabletevent_callback = nullptr;
    KSslCertificateBox_ActionEvent_Callback ksslcertificatebox_actionevent_callback = nullptr;
    KSslCertificateBox_DragEnterEvent_Callback ksslcertificatebox_dragenterevent_callback = nullptr;
    KSslCertificateBox_DragMoveEvent_Callback ksslcertificatebox_dragmoveevent_callback = nullptr;
    KSslCertificateBox_DragLeaveEvent_Callback ksslcertificatebox_dragleaveevent_callback = nullptr;
    KSslCertificateBox_DropEvent_Callback ksslcertificatebox_dropevent_callback = nullptr;
    KSslCertificateBox_ShowEvent_Callback ksslcertificatebox_showevent_callback = nullptr;
    KSslCertificateBox_HideEvent_Callback ksslcertificatebox_hideevent_callback = nullptr;
    KSslCertificateBox_NativeEvent_Callback ksslcertificatebox_nativeevent_callback = nullptr;
    KSslCertificateBox_ChangeEvent_Callback ksslcertificatebox_changeevent_callback = nullptr;
    KSslCertificateBox_Metric_Callback ksslcertificatebox_metric_callback = nullptr;
    KSslCertificateBox_InitPainter_Callback ksslcertificatebox_initpainter_callback = nullptr;
    KSslCertificateBox_Redirected_Callback ksslcertificatebox_redirected_callback = nullptr;
    KSslCertificateBox_SharedPainter_Callback ksslcertificatebox_sharedpainter_callback = nullptr;
    KSslCertificateBox_InputMethodEvent_Callback ksslcertificatebox_inputmethodevent_callback = nullptr;
    KSslCertificateBox_InputMethodQuery_Callback ksslcertificatebox_inputmethodquery_callback = nullptr;
    KSslCertificateBox_FocusNextPrevChild_Callback ksslcertificatebox_focusnextprevchild_callback = nullptr;
    KSslCertificateBox_EventFilter_Callback ksslcertificatebox_eventfilter_callback = nullptr;
    KSslCertificateBox_TimerEvent_Callback ksslcertificatebox_timerevent_callback = nullptr;
    KSslCertificateBox_ChildEvent_Callback ksslcertificatebox_childevent_callback = nullptr;
    KSslCertificateBox_CustomEvent_Callback ksslcertificatebox_customevent_callback = nullptr;
    KSslCertificateBox_ConnectNotify_Callback ksslcertificatebox_connectnotify_callback = nullptr;
    KSslCertificateBox_DisconnectNotify_Callback ksslcertificatebox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KSslCertificateBox {
        using KSslCertificateBox::actionEvent;
        using KSslCertificateBox::changeEvent;
        using KSslCertificateBox::childEvent;
        using KSslCertificateBox::closeEvent;
        using KSslCertificateBox::connectNotify;
        using KSslCertificateBox::contextMenuEvent;
        using KSslCertificateBox::customEvent;
        using KSslCertificateBox::disconnectNotify;
        using KSslCertificateBox::dragEnterEvent;
        using KSslCertificateBox::dragLeaveEvent;
        using KSslCertificateBox::dragMoveEvent;
        using KSslCertificateBox::dropEvent;
        using KSslCertificateBox::enterEvent;
        using KSslCertificateBox::event;
        using KSslCertificateBox::focusInEvent;
        using KSslCertificateBox::focusNextPrevChild;
        using KSslCertificateBox::focusOutEvent;
        using KSslCertificateBox::hideEvent;
        using KSslCertificateBox::initPainter;
        using KSslCertificateBox::inputMethodEvent;
        using KSslCertificateBox::keyPressEvent;
        using KSslCertificateBox::keyReleaseEvent;
        using KSslCertificateBox::leaveEvent;
        using KSslCertificateBox::metric;
        using KSslCertificateBox::mouseDoubleClickEvent;
        using KSslCertificateBox::mouseMoveEvent;
        using KSslCertificateBox::mousePressEvent;
        using KSslCertificateBox::mouseReleaseEvent;
        using KSslCertificateBox::moveEvent;
        using KSslCertificateBox::nativeEvent;
        using KSslCertificateBox::paintEvent;
        using KSslCertificateBox::redirected;
        using KSslCertificateBox::resizeEvent;
        using KSslCertificateBox::sharedPainter;
        using KSslCertificateBox::showEvent;
        using KSslCertificateBox::tabletEvent;
        using KSslCertificateBox::timerEvent;
        using KSslCertificateBox::wheelEvent;
    };

    VirtualKSslCertificateBox(QWidget* parent) : KSslCertificateBox(parent) {};
    VirtualKSslCertificateBox() : KSslCertificateBox() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (ksslcertificatebox_metaobject_callback) {
            QMetaObject* callback_ret = ksslcertificatebox_metaobject_callback(this);
            return callback_ret;
        }
        return KSslCertificateBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (ksslcertificatebox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = ksslcertificatebox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (ksslcertificatebox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = ksslcertificatebox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (ksslcertificatebox_devtype_callback) {
            int callback_ret = ksslcertificatebox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (ksslcertificatebox_setvisible_callback) {
            bool cbval1 = visible;
            ksslcertificatebox_setvisible_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (ksslcertificatebox_sizehint_callback) {
            QSize* callback_ret = ksslcertificatebox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslCertificateBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (ksslcertificatebox_minimumsizehint_callback) {
            QSize* callback_ret = ksslcertificatebox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslCertificateBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (ksslcertificatebox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = ksslcertificatebox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (ksslcertificatebox_hasheightforwidth_callback) {
            bool callback_ret = ksslcertificatebox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KSslCertificateBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (ksslcertificatebox_paintengine_callback) {
            QPaintEngine* callback_ret = ksslcertificatebox_paintengine_callback(this);
            return callback_ret;
        }
        return KSslCertificateBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (ksslcertificatebox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = ksslcertificatebox_event_callback(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslcertificatebox_mousepressevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslcertificatebox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslcertificatebox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (ksslcertificatebox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            ksslcertificatebox_mousemoveevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (ksslcertificatebox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            ksslcertificatebox_wheelevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            ksslcertificatebox_keypressevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (ksslcertificatebox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            ksslcertificatebox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            ksslcertificatebox_focusinevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (ksslcertificatebox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            ksslcertificatebox_focusoutevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (ksslcertificatebox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            ksslcertificatebox_enterevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (ksslcertificatebox_leaveevent_callback) {
            QEvent* cbval1 = event;
            ksslcertificatebox_leaveevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (ksslcertificatebox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            ksslcertificatebox_paintevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (ksslcertificatebox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            ksslcertificatebox_moveevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (ksslcertificatebox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            ksslcertificatebox_resizeevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (ksslcertificatebox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            ksslcertificatebox_closeevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (ksslcertificatebox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            ksslcertificatebox_contextmenuevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (ksslcertificatebox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            ksslcertificatebox_tabletevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (ksslcertificatebox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            ksslcertificatebox_actionevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (ksslcertificatebox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            ksslcertificatebox_dragenterevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (ksslcertificatebox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            ksslcertificatebox_dragmoveevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (ksslcertificatebox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            ksslcertificatebox_dragleaveevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (ksslcertificatebox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            ksslcertificatebox_dropevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (ksslcertificatebox_showevent_callback) {
            QShowEvent* cbval1 = event;
            ksslcertificatebox_showevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (ksslcertificatebox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            ksslcertificatebox_hideevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (ksslcertificatebox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = ksslcertificatebox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KSslCertificateBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (ksslcertificatebox_changeevent_callback) {
            QEvent* cbval1 = param1;
            ksslcertificatebox_changeevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (ksslcertificatebox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = ksslcertificatebox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KSslCertificateBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (ksslcertificatebox_initpainter_callback) {
            QPainter* cbval1 = painter;
            ksslcertificatebox_initpainter_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (ksslcertificatebox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = ksslcertificatebox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (ksslcertificatebox_sharedpainter_callback) {
            QPainter* callback_ret = ksslcertificatebox_sharedpainter_callback(this);
            return callback_ret;
        }
        return KSslCertificateBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (ksslcertificatebox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            ksslcertificatebox_inputmethodevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (ksslcertificatebox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = ksslcertificatebox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KSslCertificateBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (ksslcertificatebox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = ksslcertificatebox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KSslCertificateBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (ksslcertificatebox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = ksslcertificatebox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KSslCertificateBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (ksslcertificatebox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            ksslcertificatebox_timerevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (ksslcertificatebox_childevent_callback) {
            QChildEvent* cbval1 = event;
            ksslcertificatebox_childevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (ksslcertificatebox_customevent_callback) {
            QEvent* cbval1 = event;
            ksslcertificatebox_customevent_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksslcertificatebox_connectnotify_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (ksslcertificatebox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            ksslcertificatebox_disconnectnotify_callback(this, cbval1);
            return;
        }
        KSslCertificateBox::disconnectNotify(signal);
    }

    // Friend functions
    friend bool KSslCertificateBox_SuperEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_SuperMousePressEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseReleaseEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseDoubleClickEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperMouseMoveEvent(KSslCertificateBox* self, QMouseEvent* event);
    friend void KSslCertificateBox_SuperWheelEvent(KSslCertificateBox* self, QWheelEvent* event);
    friend void KSslCertificateBox_SuperKeyPressEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_SuperKeyReleaseEvent(KSslCertificateBox* self, QKeyEvent* event);
    friend void KSslCertificateBox_SuperFocusInEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_SuperFocusOutEvent(KSslCertificateBox* self, QFocusEvent* event);
    friend void KSslCertificateBox_SuperEnterEvent(KSslCertificateBox* self, QEnterEvent* event);
    friend void KSslCertificateBox_SuperLeaveEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_SuperPaintEvent(KSslCertificateBox* self, QPaintEvent* event);
    friend void KSslCertificateBox_SuperMoveEvent(KSslCertificateBox* self, QMoveEvent* event);
    friend void KSslCertificateBox_SuperResizeEvent(KSslCertificateBox* self, QResizeEvent* event);
    friend void KSslCertificateBox_SuperCloseEvent(KSslCertificateBox* self, QCloseEvent* event);
    friend void KSslCertificateBox_SuperContextMenuEvent(KSslCertificateBox* self, QContextMenuEvent* event);
    friend void KSslCertificateBox_SuperTabletEvent(KSslCertificateBox* self, QTabletEvent* event);
    friend void KSslCertificateBox_SuperActionEvent(KSslCertificateBox* self, QActionEvent* event);
    friend void KSslCertificateBox_SuperDragEnterEvent(KSslCertificateBox* self, QDragEnterEvent* event);
    friend void KSslCertificateBox_SuperDragMoveEvent(KSslCertificateBox* self, QDragMoveEvent* event);
    friend void KSslCertificateBox_SuperDragLeaveEvent(KSslCertificateBox* self, QDragLeaveEvent* event);
    friend void KSslCertificateBox_SuperDropEvent(KSslCertificateBox* self, QDropEvent* event);
    friend void KSslCertificateBox_SuperShowEvent(KSslCertificateBox* self, QShowEvent* event);
    friend void KSslCertificateBox_SuperHideEvent(KSslCertificateBox* self, QHideEvent* event);
    friend bool KSslCertificateBox_SuperNativeEvent(KSslCertificateBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KSslCertificateBox_SuperChangeEvent(KSslCertificateBox* self, QEvent* param1);
    friend int KSslCertificateBox_SuperMetric(const KSslCertificateBox* self, int param1);
    friend void KSslCertificateBox_SuperInitPainter(const KSslCertificateBox* self, QPainter* painter);
    friend QPaintDevice* KSslCertificateBox_SuperRedirected(const KSslCertificateBox* self, QPoint* offset);
    friend QPainter* KSslCertificateBox_SuperSharedPainter(const KSslCertificateBox* self);
    friend void KSslCertificateBox_SuperInputMethodEvent(KSslCertificateBox* self, QInputMethodEvent* param1);
    friend bool KSslCertificateBox_SuperFocusNextPrevChild(KSslCertificateBox* self, bool next);
    friend void KSslCertificateBox_SuperTimerEvent(KSslCertificateBox* self, QTimerEvent* event);
    friend void KSslCertificateBox_SuperChildEvent(KSslCertificateBox* self, QChildEvent* event);
    friend void KSslCertificateBox_SuperCustomEvent(KSslCertificateBox* self, QEvent* event);
    friend void KSslCertificateBox_SuperConnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
    friend void KSslCertificateBox_SuperDisconnectNotify(KSslCertificateBox* self, const QMetaMethod* signal);
};

#endif
