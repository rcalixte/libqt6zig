#pragma once
#ifndef DESIGNER_LIBABSTRACTOBJECTINSPECTOR_HXX
#define DESIGNER_LIBABSTRACTOBJECTINSPECTOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerObjectInspectorInterface
class VirtualQDesignerObjectInspectorInterface : public QDesignerObjectInspectorInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerObjectInspectorInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_Metacast_Callback = void* (*)(QDesignerObjectInspectorInterface*, const char*);
    using QDesignerObjectInspectorInterface_Metacall_Callback = int (*)(QDesignerObjectInspectorInterface*, int, int, void**);
    using QDesignerObjectInspectorInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_SetFormWindow_Callback = void (*)(QDesignerObjectInspectorInterface*, QDesignerFormWindowInterface*);
    using QDesignerObjectInspectorInterface_DevType_Callback = int (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_SetVisible_Callback = void (*)(QDesignerObjectInspectorInterface*, bool);
    using QDesignerObjectInspectorInterface_SizeHint_Callback = QSize* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_MinimumSizeHint_Callback = QSize* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_HeightForWidth_Callback = int (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_HasHeightForWidth_Callback = bool (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_PaintEngine_Callback = QPaintEngine* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_Event_Callback = bool (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_MousePressEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_MouseMoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMouseEvent*);
    using QDesignerObjectInspectorInterface_WheelEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QWheelEvent*);
    using QDesignerObjectInspectorInterface_KeyPressEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QKeyEvent*);
    using QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QKeyEvent*);
    using QDesignerObjectInspectorInterface_FocusInEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QFocusEvent*);
    using QDesignerObjectInspectorInterface_FocusOutEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QFocusEvent*);
    using QDesignerObjectInspectorInterface_EnterEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEnterEvent*);
    using QDesignerObjectInspectorInterface_LeaveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_PaintEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QPaintEvent*);
    using QDesignerObjectInspectorInterface_MoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QMoveEvent*);
    using QDesignerObjectInspectorInterface_ResizeEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QResizeEvent*);
    using QDesignerObjectInspectorInterface_CloseEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QCloseEvent*);
    using QDesignerObjectInspectorInterface_ContextMenuEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QContextMenuEvent*);
    using QDesignerObjectInspectorInterface_TabletEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QTabletEvent*);
    using QDesignerObjectInspectorInterface_ActionEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QActionEvent*);
    using QDesignerObjectInspectorInterface_DragEnterEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragEnterEvent*);
    using QDesignerObjectInspectorInterface_DragMoveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragMoveEvent*);
    using QDesignerObjectInspectorInterface_DragLeaveEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDragLeaveEvent*);
    using QDesignerObjectInspectorInterface_DropEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QDropEvent*);
    using QDesignerObjectInspectorInterface_ShowEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QShowEvent*);
    using QDesignerObjectInspectorInterface_HideEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QHideEvent*);
    using QDesignerObjectInspectorInterface_NativeEvent_Callback = bool (*)(QDesignerObjectInspectorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerObjectInspectorInterface_ChangeEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_Metric_Callback = int (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_InitPainter_Callback = void (*)(const QDesignerObjectInspectorInterface*, QPainter*);
    using QDesignerObjectInspectorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerObjectInspectorInterface*, QPoint*);
    using QDesignerObjectInspectorInterface_SharedPainter_Callback = QPainter* (*)(const QDesignerObjectInspectorInterface*);
    using QDesignerObjectInspectorInterface_InputMethodEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QInputMethodEvent*);
    using QDesignerObjectInspectorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerObjectInspectorInterface*, int);
    using QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerObjectInspectorInterface*, bool);
    using QDesignerObjectInspectorInterface_EventFilter_Callback = bool (*)(QDesignerObjectInspectorInterface*, QObject*, QEvent*);
    using QDesignerObjectInspectorInterface_TimerEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QTimerEvent*);
    using QDesignerObjectInspectorInterface_ChildEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QChildEvent*);
    using QDesignerObjectInspectorInterface_CustomEvent_Callback = void (*)(QDesignerObjectInspectorInterface*, QEvent*);
    using QDesignerObjectInspectorInterface_ConnectNotify_Callback = void (*)(QDesignerObjectInspectorInterface*, QMetaMethod*);
    using QDesignerObjectInspectorInterface_DisconnectNotify_Callback = void (*)(QDesignerObjectInspectorInterface*, QMetaMethod*);
    using QDesignerObjectInspectorInterface::create;
    using QDesignerObjectInspectorInterface::destroy;
    using QDesignerObjectInspectorInterface::focusNextChild;
    using QDesignerObjectInspectorInterface::focusPreviousChild;
    using QDesignerObjectInspectorInterface::getDecodedMetricF;
    using QDesignerObjectInspectorInterface::isSignalConnected;
    using QDesignerObjectInspectorInterface::receivers;
    using QDesignerObjectInspectorInterface::sender;
    using QDesignerObjectInspectorInterface::senderSignalIndex;
    using QDesignerObjectInspectorInterface::updateMicroFocus;

    // Instance callback storage
    QDesignerObjectInspectorInterface_MetaObject_Callback qdesignerobjectinspectorinterface_metaobject_callback = nullptr;
    QDesignerObjectInspectorInterface_Metacast_Callback qdesignerobjectinspectorinterface_metacast_callback = nullptr;
    QDesignerObjectInspectorInterface_Metacall_Callback qdesignerobjectinspectorinterface_metacall_callback = nullptr;
    QDesignerObjectInspectorInterface_Core_Callback qdesignerobjectinspectorinterface_core_callback = nullptr;
    QDesignerObjectInspectorInterface_SetFormWindow_Callback qdesignerobjectinspectorinterface_setformwindow_callback = nullptr;
    QDesignerObjectInspectorInterface_DevType_Callback qdesignerobjectinspectorinterface_devtype_callback = nullptr;
    QDesignerObjectInspectorInterface_SetVisible_Callback qdesignerobjectinspectorinterface_setvisible_callback = nullptr;
    QDesignerObjectInspectorInterface_SizeHint_Callback qdesignerobjectinspectorinterface_sizehint_callback = nullptr;
    QDesignerObjectInspectorInterface_MinimumSizeHint_Callback qdesignerobjectinspectorinterface_minimumsizehint_callback = nullptr;
    QDesignerObjectInspectorInterface_HeightForWidth_Callback qdesignerobjectinspectorinterface_heightforwidth_callback = nullptr;
    QDesignerObjectInspectorInterface_HasHeightForWidth_Callback qdesignerobjectinspectorinterface_hasheightforwidth_callback = nullptr;
    QDesignerObjectInspectorInterface_PaintEngine_Callback qdesignerobjectinspectorinterface_paintengine_callback = nullptr;
    QDesignerObjectInspectorInterface_Event_Callback qdesignerobjectinspectorinterface_event_callback = nullptr;
    QDesignerObjectInspectorInterface_MousePressEvent_Callback qdesignerobjectinspectorinterface_mousepressevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseReleaseEvent_Callback qdesignerobjectinspectorinterface_mousereleaseevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseDoubleClickEvent_Callback qdesignerobjectinspectorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MouseMoveEvent_Callback qdesignerobjectinspectorinterface_mousemoveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_WheelEvent_Callback qdesignerobjectinspectorinterface_wheelevent_callback = nullptr;
    QDesignerObjectInspectorInterface_KeyPressEvent_Callback qdesignerobjectinspectorinterface_keypressevent_callback = nullptr;
    QDesignerObjectInspectorInterface_KeyReleaseEvent_Callback qdesignerobjectinspectorinterface_keyreleaseevent_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusInEvent_Callback qdesignerobjectinspectorinterface_focusinevent_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusOutEvent_Callback qdesignerobjectinspectorinterface_focusoutevent_callback = nullptr;
    QDesignerObjectInspectorInterface_EnterEvent_Callback qdesignerobjectinspectorinterface_enterevent_callback = nullptr;
    QDesignerObjectInspectorInterface_LeaveEvent_Callback qdesignerobjectinspectorinterface_leaveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_PaintEvent_Callback qdesignerobjectinspectorinterface_paintevent_callback = nullptr;
    QDesignerObjectInspectorInterface_MoveEvent_Callback qdesignerobjectinspectorinterface_moveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ResizeEvent_Callback qdesignerobjectinspectorinterface_resizeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_CloseEvent_Callback qdesignerobjectinspectorinterface_closeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ContextMenuEvent_Callback qdesignerobjectinspectorinterface_contextmenuevent_callback = nullptr;
    QDesignerObjectInspectorInterface_TabletEvent_Callback qdesignerobjectinspectorinterface_tabletevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ActionEvent_Callback qdesignerobjectinspectorinterface_actionevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragEnterEvent_Callback qdesignerobjectinspectorinterface_dragenterevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragMoveEvent_Callback qdesignerobjectinspectorinterface_dragmoveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DragLeaveEvent_Callback qdesignerobjectinspectorinterface_dragleaveevent_callback = nullptr;
    QDesignerObjectInspectorInterface_DropEvent_Callback qdesignerobjectinspectorinterface_dropevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ShowEvent_Callback qdesignerobjectinspectorinterface_showevent_callback = nullptr;
    QDesignerObjectInspectorInterface_HideEvent_Callback qdesignerobjectinspectorinterface_hideevent_callback = nullptr;
    QDesignerObjectInspectorInterface_NativeEvent_Callback qdesignerobjectinspectorinterface_nativeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ChangeEvent_Callback qdesignerobjectinspectorinterface_changeevent_callback = nullptr;
    QDesignerObjectInspectorInterface_Metric_Callback qdesignerobjectinspectorinterface_metric_callback = nullptr;
    QDesignerObjectInspectorInterface_InitPainter_Callback qdesignerobjectinspectorinterface_initpainter_callback = nullptr;
    QDesignerObjectInspectorInterface_Redirected_Callback qdesignerobjectinspectorinterface_redirected_callback = nullptr;
    QDesignerObjectInspectorInterface_SharedPainter_Callback qdesignerobjectinspectorinterface_sharedpainter_callback = nullptr;
    QDesignerObjectInspectorInterface_InputMethodEvent_Callback qdesignerobjectinspectorinterface_inputmethodevent_callback = nullptr;
    QDesignerObjectInspectorInterface_InputMethodQuery_Callback qdesignerobjectinspectorinterface_inputmethodquery_callback = nullptr;
    QDesignerObjectInspectorInterface_FocusNextPrevChild_Callback qdesignerobjectinspectorinterface_focusnextprevchild_callback = nullptr;
    QDesignerObjectInspectorInterface_EventFilter_Callback qdesignerobjectinspectorinterface_eventfilter_callback = nullptr;
    QDesignerObjectInspectorInterface_TimerEvent_Callback qdesignerobjectinspectorinterface_timerevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ChildEvent_Callback qdesignerobjectinspectorinterface_childevent_callback = nullptr;
    QDesignerObjectInspectorInterface_CustomEvent_Callback qdesignerobjectinspectorinterface_customevent_callback = nullptr;
    QDesignerObjectInspectorInterface_ConnectNotify_Callback qdesignerobjectinspectorinterface_connectnotify_callback = nullptr;
    QDesignerObjectInspectorInterface_DisconnectNotify_Callback qdesignerobjectinspectorinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerObjectInspectorInterface {
        using QDesignerObjectInspectorInterface::actionEvent;
        using QDesignerObjectInspectorInterface::changeEvent;
        using QDesignerObjectInspectorInterface::childEvent;
        using QDesignerObjectInspectorInterface::closeEvent;
        using QDesignerObjectInspectorInterface::connectNotify;
        using QDesignerObjectInspectorInterface::contextMenuEvent;
        using QDesignerObjectInspectorInterface::customEvent;
        using QDesignerObjectInspectorInterface::disconnectNotify;
        using QDesignerObjectInspectorInterface::dragEnterEvent;
        using QDesignerObjectInspectorInterface::dragLeaveEvent;
        using QDesignerObjectInspectorInterface::dragMoveEvent;
        using QDesignerObjectInspectorInterface::dropEvent;
        using QDesignerObjectInspectorInterface::enterEvent;
        using QDesignerObjectInspectorInterface::event;
        using QDesignerObjectInspectorInterface::focusInEvent;
        using QDesignerObjectInspectorInterface::focusNextPrevChild;
        using QDesignerObjectInspectorInterface::focusOutEvent;
        using QDesignerObjectInspectorInterface::hideEvent;
        using QDesignerObjectInspectorInterface::initPainter;
        using QDesignerObjectInspectorInterface::inputMethodEvent;
        using QDesignerObjectInspectorInterface::keyPressEvent;
        using QDesignerObjectInspectorInterface::keyReleaseEvent;
        using QDesignerObjectInspectorInterface::leaveEvent;
        using QDesignerObjectInspectorInterface::metric;
        using QDesignerObjectInspectorInterface::mouseDoubleClickEvent;
        using QDesignerObjectInspectorInterface::mouseMoveEvent;
        using QDesignerObjectInspectorInterface::mousePressEvent;
        using QDesignerObjectInspectorInterface::mouseReleaseEvent;
        using QDesignerObjectInspectorInterface::moveEvent;
        using QDesignerObjectInspectorInterface::nativeEvent;
        using QDesignerObjectInspectorInterface::paintEvent;
        using QDesignerObjectInspectorInterface::redirected;
        using QDesignerObjectInspectorInterface::resizeEvent;
        using QDesignerObjectInspectorInterface::sharedPainter;
        using QDesignerObjectInspectorInterface::showEvent;
        using QDesignerObjectInspectorInterface::tabletEvent;
        using QDesignerObjectInspectorInterface::timerEvent;
        using QDesignerObjectInspectorInterface::wheelEvent;
    };

    VirtualQDesignerObjectInspectorInterface(QWidget* parent) : QDesignerObjectInspectorInterface(parent) {};
    VirtualQDesignerObjectInspectorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerObjectInspectorInterface(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesignerobjectinspectorinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesignerobjectinspectorinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesignerobjectinspectorinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesignerobjectinspectorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesignerobjectinspectorinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesignerobjectinspectorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerObjectInspectorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesignerobjectinspectorinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesignerobjectinspectorinterface_core_callback(this);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesignerobjectinspectorinterface_setformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesignerobjectinspectorinterface_setformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerObjectInspectorInterface::setFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesignerobjectinspectorinterface_devtype_callback) {
            int callback_ret = qdesignerobjectinspectorinterface_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerObjectInspectorInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesignerobjectinspectorinterface_setvisible_callback) {
            bool cbval1 = visible;
            qdesignerobjectinspectorinterface_setvisible_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesignerobjectinspectorinterface_sizehint_callback) {
            QSize* callback_ret = qdesignerobjectinspectorinterface_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerObjectInspectorInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesignerobjectinspectorinterface_minimumsizehint_callback) {
            QSize* callback_ret = qdesignerobjectinspectorinterface_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerObjectInspectorInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesignerobjectinspectorinterface_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdesignerobjectinspectorinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerObjectInspectorInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesignerobjectinspectorinterface_hasheightforwidth_callback) {
            bool callback_ret = qdesignerobjectinspectorinterface_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesignerobjectinspectorinterface_paintengine_callback) {
            QPaintEngine* callback_ret = qdesignerobjectinspectorinterface_paintengine_callback(this);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesignerobjectinspectorinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_mousepressevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesignerobjectinspectorinterface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesignerobjectinspectorinterface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_wheelevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesignerobjectinspectorinterface_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_keypressevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesignerobjectinspectorinterface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesignerobjectinspectorinterface_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_focusinevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesignerobjectinspectorinterface_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_focusoutevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesignerobjectinspectorinterface_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_enterevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_leaveevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesignerobjectinspectorinterface_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_paintevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesignerobjectinspectorinterface_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_moveevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesignerobjectinspectorinterface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_resizeevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesignerobjectinspectorinterface_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_closeevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesignerobjectinspectorinterface_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesignerobjectinspectorinterface_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_tabletevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesignerobjectinspectorinterface_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_actionevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_dragenterevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesignerobjectinspectorinterface_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesignerobjectinspectorinterface_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_dropevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesignerobjectinspectorinterface_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_showevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesignerobjectinspectorinterface_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_hideevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesignerobjectinspectorinterface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdesignerobjectinspectorinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesignerobjectinspectorinterface_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdesignerobjectinspectorinterface_changeevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesignerobjectinspectorinterface_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdesignerobjectinspectorinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerObjectInspectorInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesignerobjectinspectorinterface_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdesignerobjectinspectorinterface_initpainter_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesignerobjectinspectorinterface_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdesignerobjectinspectorinterface_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesignerobjectinspectorinterface_sharedpainter_callback) {
            QPainter* callback_ret = qdesignerobjectinspectorinterface_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesignerobjectinspectorinterface_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdesignerobjectinspectorinterface_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesignerobjectinspectorinterface_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdesignerobjectinspectorinterface_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerObjectInspectorInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesignerobjectinspectorinterface_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdesignerobjectinspectorinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesignerobjectinspectorinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesignerobjectinspectorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerObjectInspectorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesignerobjectinspectorinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesignerobjectinspectorinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesignerobjectinspectorinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesignerobjectinspectorinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesignerobjectinspectorinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerobjectinspectorinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesignerobjectinspectorinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesignerobjectinspectorinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerObjectInspectorInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDesignerObjectInspectorInterface_SuperEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperMousePressEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperMouseReleaseEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperMouseDoubleClickEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperMouseMoveEvent(QDesignerObjectInspectorInterface* self, QMouseEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperWheelEvent(QDesignerObjectInspectorInterface* self, QWheelEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperKeyPressEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperKeyReleaseEvent(QDesignerObjectInspectorInterface* self, QKeyEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperFocusInEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperFocusOutEvent(QDesignerObjectInspectorInterface* self, QFocusEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperEnterEvent(QDesignerObjectInspectorInterface* self, QEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperLeaveEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperPaintEvent(QDesignerObjectInspectorInterface* self, QPaintEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperMoveEvent(QDesignerObjectInspectorInterface* self, QMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperResizeEvent(QDesignerObjectInspectorInterface* self, QResizeEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperCloseEvent(QDesignerObjectInspectorInterface* self, QCloseEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperContextMenuEvent(QDesignerObjectInspectorInterface* self, QContextMenuEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperTabletEvent(QDesignerObjectInspectorInterface* self, QTabletEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperActionEvent(QDesignerObjectInspectorInterface* self, QActionEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperDragEnterEvent(QDesignerObjectInspectorInterface* self, QDragEnterEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperDragMoveEvent(QDesignerObjectInspectorInterface* self, QDragMoveEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperDragLeaveEvent(QDesignerObjectInspectorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperDropEvent(QDesignerObjectInspectorInterface* self, QDropEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperShowEvent(QDesignerObjectInspectorInterface* self, QShowEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperHideEvent(QDesignerObjectInspectorInterface* self, QHideEvent* event);
    friend bool QDesignerObjectInspectorInterface_SuperNativeEvent(QDesignerObjectInspectorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerObjectInspectorInterface_SuperChangeEvent(QDesignerObjectInspectorInterface* self, QEvent* param1);
    friend int QDesignerObjectInspectorInterface_SuperMetric(const QDesignerObjectInspectorInterface* self, int param1);
    friend void QDesignerObjectInspectorInterface_SuperInitPainter(const QDesignerObjectInspectorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerObjectInspectorInterface_SuperRedirected(const QDesignerObjectInspectorInterface* self, QPoint* offset);
    friend QPainter* QDesignerObjectInspectorInterface_SuperSharedPainter(const QDesignerObjectInspectorInterface* self);
    friend void QDesignerObjectInspectorInterface_SuperInputMethodEvent(QDesignerObjectInspectorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerObjectInspectorInterface_SuperFocusNextPrevChild(QDesignerObjectInspectorInterface* self, bool next);
    friend void QDesignerObjectInspectorInterface_SuperTimerEvent(QDesignerObjectInspectorInterface* self, QTimerEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperChildEvent(QDesignerObjectInspectorInterface* self, QChildEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperCustomEvent(QDesignerObjectInspectorInterface* self, QEvent* event);
    friend void QDesignerObjectInspectorInterface_SuperConnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
    friend void QDesignerObjectInspectorInterface_SuperDisconnectNotify(QDesignerObjectInspectorInterface* self, const QMetaMethod* signal);
};

#endif
