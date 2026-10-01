#pragma once
#ifndef DESIGNER_LIBABSTRACTACTIONEDITOR_HXX
#define DESIGNER_LIBABSTRACTACTIONEDITOR_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerActionEditorInterface
class VirtualQDesignerActionEditorInterface : public QDesignerActionEditorInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerActionEditorInterface_MetaObject_Callback = QMetaObject* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_Metacast_Callback = void* (*)(QDesignerActionEditorInterface*, const char*);
    using QDesignerActionEditorInterface_Metacall_Callback = int (*)(QDesignerActionEditorInterface*, int, int, void**);
    using QDesignerActionEditorInterface_Core_Callback = QDesignerFormEditorInterface* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_ManageAction_Callback = void (*)(QDesignerActionEditorInterface*, QAction*);
    using QDesignerActionEditorInterface_UnmanageAction_Callback = void (*)(QDesignerActionEditorInterface*, QAction*);
    using QDesignerActionEditorInterface_SetFormWindow_Callback = void (*)(QDesignerActionEditorInterface*, QDesignerFormWindowInterface*);
    using QDesignerActionEditorInterface_DevType_Callback = int (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_SetVisible_Callback = void (*)(QDesignerActionEditorInterface*, bool);
    using QDesignerActionEditorInterface_SizeHint_Callback = QSize* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_MinimumSizeHint_Callback = QSize* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_HeightForWidth_Callback = int (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_HasHeightForWidth_Callback = bool (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_PaintEngine_Callback = QPaintEngine* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_Event_Callback = bool (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_MousePressEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseReleaseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_MouseMoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMouseEvent*);
    using QDesignerActionEditorInterface_WheelEvent_Callback = void (*)(QDesignerActionEditorInterface*, QWheelEvent*);
    using QDesignerActionEditorInterface_KeyPressEvent_Callback = void (*)(QDesignerActionEditorInterface*, QKeyEvent*);
    using QDesignerActionEditorInterface_KeyReleaseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QKeyEvent*);
    using QDesignerActionEditorInterface_FocusInEvent_Callback = void (*)(QDesignerActionEditorInterface*, QFocusEvent*);
    using QDesignerActionEditorInterface_FocusOutEvent_Callback = void (*)(QDesignerActionEditorInterface*, QFocusEvent*);
    using QDesignerActionEditorInterface_EnterEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEnterEvent*);
    using QDesignerActionEditorInterface_LeaveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_PaintEvent_Callback = void (*)(QDesignerActionEditorInterface*, QPaintEvent*);
    using QDesignerActionEditorInterface_MoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QMoveEvent*);
    using QDesignerActionEditorInterface_ResizeEvent_Callback = void (*)(QDesignerActionEditorInterface*, QResizeEvent*);
    using QDesignerActionEditorInterface_CloseEvent_Callback = void (*)(QDesignerActionEditorInterface*, QCloseEvent*);
    using QDesignerActionEditorInterface_ContextMenuEvent_Callback = void (*)(QDesignerActionEditorInterface*, QContextMenuEvent*);
    using QDesignerActionEditorInterface_TabletEvent_Callback = void (*)(QDesignerActionEditorInterface*, QTabletEvent*);
    using QDesignerActionEditorInterface_ActionEvent_Callback = void (*)(QDesignerActionEditorInterface*, QActionEvent*);
    using QDesignerActionEditorInterface_DragEnterEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragEnterEvent*);
    using QDesignerActionEditorInterface_DragMoveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragMoveEvent*);
    using QDesignerActionEditorInterface_DragLeaveEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDragLeaveEvent*);
    using QDesignerActionEditorInterface_DropEvent_Callback = void (*)(QDesignerActionEditorInterface*, QDropEvent*);
    using QDesignerActionEditorInterface_ShowEvent_Callback = void (*)(QDesignerActionEditorInterface*, QShowEvent*);
    using QDesignerActionEditorInterface_HideEvent_Callback = void (*)(QDesignerActionEditorInterface*, QHideEvent*);
    using QDesignerActionEditorInterface_NativeEvent_Callback = bool (*)(QDesignerActionEditorInterface*, libqt_string, void*, intptr_t*);
    using QDesignerActionEditorInterface_ChangeEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_Metric_Callback = int (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_InitPainter_Callback = void (*)(const QDesignerActionEditorInterface*, QPainter*);
    using QDesignerActionEditorInterface_Redirected_Callback = QPaintDevice* (*)(const QDesignerActionEditorInterface*, QPoint*);
    using QDesignerActionEditorInterface_SharedPainter_Callback = QPainter* (*)(const QDesignerActionEditorInterface*);
    using QDesignerActionEditorInterface_InputMethodEvent_Callback = void (*)(QDesignerActionEditorInterface*, QInputMethodEvent*);
    using QDesignerActionEditorInterface_InputMethodQuery_Callback = QVariant* (*)(const QDesignerActionEditorInterface*, int);
    using QDesignerActionEditorInterface_FocusNextPrevChild_Callback = bool (*)(QDesignerActionEditorInterface*, bool);
    using QDesignerActionEditorInterface_EventFilter_Callback = bool (*)(QDesignerActionEditorInterface*, QObject*, QEvent*);
    using QDesignerActionEditorInterface_TimerEvent_Callback = void (*)(QDesignerActionEditorInterface*, QTimerEvent*);
    using QDesignerActionEditorInterface_ChildEvent_Callback = void (*)(QDesignerActionEditorInterface*, QChildEvent*);
    using QDesignerActionEditorInterface_CustomEvent_Callback = void (*)(QDesignerActionEditorInterface*, QEvent*);
    using QDesignerActionEditorInterface_ConnectNotify_Callback = void (*)(QDesignerActionEditorInterface*, QMetaMethod*);
    using QDesignerActionEditorInterface_DisconnectNotify_Callback = void (*)(QDesignerActionEditorInterface*, QMetaMethod*);
    using QDesignerActionEditorInterface::create;
    using QDesignerActionEditorInterface::destroy;
    using QDesignerActionEditorInterface::focusNextChild;
    using QDesignerActionEditorInterface::focusPreviousChild;
    using QDesignerActionEditorInterface::getDecodedMetricF;
    using QDesignerActionEditorInterface::isSignalConnected;
    using QDesignerActionEditorInterface::receivers;
    using QDesignerActionEditorInterface::sender;
    using QDesignerActionEditorInterface::senderSignalIndex;
    using QDesignerActionEditorInterface::updateMicroFocus;

    // Instance callback storage
    QDesignerActionEditorInterface_MetaObject_Callback qdesigneractioneditorinterface_metaobject_callback = nullptr;
    QDesignerActionEditorInterface_Metacast_Callback qdesigneractioneditorinterface_metacast_callback = nullptr;
    QDesignerActionEditorInterface_Metacall_Callback qdesigneractioneditorinterface_metacall_callback = nullptr;
    QDesignerActionEditorInterface_Core_Callback qdesigneractioneditorinterface_core_callback = nullptr;
    QDesignerActionEditorInterface_ManageAction_Callback qdesigneractioneditorinterface_manageaction_callback = nullptr;
    QDesignerActionEditorInterface_UnmanageAction_Callback qdesigneractioneditorinterface_unmanageaction_callback = nullptr;
    QDesignerActionEditorInterface_SetFormWindow_Callback qdesigneractioneditorinterface_setformwindow_callback = nullptr;
    QDesignerActionEditorInterface_DevType_Callback qdesigneractioneditorinterface_devtype_callback = nullptr;
    QDesignerActionEditorInterface_SetVisible_Callback qdesigneractioneditorinterface_setvisible_callback = nullptr;
    QDesignerActionEditorInterface_SizeHint_Callback qdesigneractioneditorinterface_sizehint_callback = nullptr;
    QDesignerActionEditorInterface_MinimumSizeHint_Callback qdesigneractioneditorinterface_minimumsizehint_callback = nullptr;
    QDesignerActionEditorInterface_HeightForWidth_Callback qdesigneractioneditorinterface_heightforwidth_callback = nullptr;
    QDesignerActionEditorInterface_HasHeightForWidth_Callback qdesigneractioneditorinterface_hasheightforwidth_callback = nullptr;
    QDesignerActionEditorInterface_PaintEngine_Callback qdesigneractioneditorinterface_paintengine_callback = nullptr;
    QDesignerActionEditorInterface_Event_Callback qdesigneractioneditorinterface_event_callback = nullptr;
    QDesignerActionEditorInterface_MousePressEvent_Callback qdesigneractioneditorinterface_mousepressevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseReleaseEvent_Callback qdesigneractioneditorinterface_mousereleaseevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseDoubleClickEvent_Callback qdesigneractioneditorinterface_mousedoubleclickevent_callback = nullptr;
    QDesignerActionEditorInterface_MouseMoveEvent_Callback qdesigneractioneditorinterface_mousemoveevent_callback = nullptr;
    QDesignerActionEditorInterface_WheelEvent_Callback qdesigneractioneditorinterface_wheelevent_callback = nullptr;
    QDesignerActionEditorInterface_KeyPressEvent_Callback qdesigneractioneditorinterface_keypressevent_callback = nullptr;
    QDesignerActionEditorInterface_KeyReleaseEvent_Callback qdesigneractioneditorinterface_keyreleaseevent_callback = nullptr;
    QDesignerActionEditorInterface_FocusInEvent_Callback qdesigneractioneditorinterface_focusinevent_callback = nullptr;
    QDesignerActionEditorInterface_FocusOutEvent_Callback qdesigneractioneditorinterface_focusoutevent_callback = nullptr;
    QDesignerActionEditorInterface_EnterEvent_Callback qdesigneractioneditorinterface_enterevent_callback = nullptr;
    QDesignerActionEditorInterface_LeaveEvent_Callback qdesigneractioneditorinterface_leaveevent_callback = nullptr;
    QDesignerActionEditorInterface_PaintEvent_Callback qdesigneractioneditorinterface_paintevent_callback = nullptr;
    QDesignerActionEditorInterface_MoveEvent_Callback qdesigneractioneditorinterface_moveevent_callback = nullptr;
    QDesignerActionEditorInterface_ResizeEvent_Callback qdesigneractioneditorinterface_resizeevent_callback = nullptr;
    QDesignerActionEditorInterface_CloseEvent_Callback qdesigneractioneditorinterface_closeevent_callback = nullptr;
    QDesignerActionEditorInterface_ContextMenuEvent_Callback qdesigneractioneditorinterface_contextmenuevent_callback = nullptr;
    QDesignerActionEditorInterface_TabletEvent_Callback qdesigneractioneditorinterface_tabletevent_callback = nullptr;
    QDesignerActionEditorInterface_ActionEvent_Callback qdesigneractioneditorinterface_actionevent_callback = nullptr;
    QDesignerActionEditorInterface_DragEnterEvent_Callback qdesigneractioneditorinterface_dragenterevent_callback = nullptr;
    QDesignerActionEditorInterface_DragMoveEvent_Callback qdesigneractioneditorinterface_dragmoveevent_callback = nullptr;
    QDesignerActionEditorInterface_DragLeaveEvent_Callback qdesigneractioneditorinterface_dragleaveevent_callback = nullptr;
    QDesignerActionEditorInterface_DropEvent_Callback qdesigneractioneditorinterface_dropevent_callback = nullptr;
    QDesignerActionEditorInterface_ShowEvent_Callback qdesigneractioneditorinterface_showevent_callback = nullptr;
    QDesignerActionEditorInterface_HideEvent_Callback qdesigneractioneditorinterface_hideevent_callback = nullptr;
    QDesignerActionEditorInterface_NativeEvent_Callback qdesigneractioneditorinterface_nativeevent_callback = nullptr;
    QDesignerActionEditorInterface_ChangeEvent_Callback qdesigneractioneditorinterface_changeevent_callback = nullptr;
    QDesignerActionEditorInterface_Metric_Callback qdesigneractioneditorinterface_metric_callback = nullptr;
    QDesignerActionEditorInterface_InitPainter_Callback qdesigneractioneditorinterface_initpainter_callback = nullptr;
    QDesignerActionEditorInterface_Redirected_Callback qdesigneractioneditorinterface_redirected_callback = nullptr;
    QDesignerActionEditorInterface_SharedPainter_Callback qdesigneractioneditorinterface_sharedpainter_callback = nullptr;
    QDesignerActionEditorInterface_InputMethodEvent_Callback qdesigneractioneditorinterface_inputmethodevent_callback = nullptr;
    QDesignerActionEditorInterface_InputMethodQuery_Callback qdesigneractioneditorinterface_inputmethodquery_callback = nullptr;
    QDesignerActionEditorInterface_FocusNextPrevChild_Callback qdesigneractioneditorinterface_focusnextprevchild_callback = nullptr;
    QDesignerActionEditorInterface_EventFilter_Callback qdesigneractioneditorinterface_eventfilter_callback = nullptr;
    QDesignerActionEditorInterface_TimerEvent_Callback qdesigneractioneditorinterface_timerevent_callback = nullptr;
    QDesignerActionEditorInterface_ChildEvent_Callback qdesigneractioneditorinterface_childevent_callback = nullptr;
    QDesignerActionEditorInterface_CustomEvent_Callback qdesigneractioneditorinterface_customevent_callback = nullptr;
    QDesignerActionEditorInterface_ConnectNotify_Callback qdesigneractioneditorinterface_connectnotify_callback = nullptr;
    QDesignerActionEditorInterface_DisconnectNotify_Callback qdesigneractioneditorinterface_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDesignerActionEditorInterface {
        using QDesignerActionEditorInterface::actionEvent;
        using QDesignerActionEditorInterface::changeEvent;
        using QDesignerActionEditorInterface::childEvent;
        using QDesignerActionEditorInterface::closeEvent;
        using QDesignerActionEditorInterface::connectNotify;
        using QDesignerActionEditorInterface::contextMenuEvent;
        using QDesignerActionEditorInterface::customEvent;
        using QDesignerActionEditorInterface::disconnectNotify;
        using QDesignerActionEditorInterface::dragEnterEvent;
        using QDesignerActionEditorInterface::dragLeaveEvent;
        using QDesignerActionEditorInterface::dragMoveEvent;
        using QDesignerActionEditorInterface::dropEvent;
        using QDesignerActionEditorInterface::enterEvent;
        using QDesignerActionEditorInterface::event;
        using QDesignerActionEditorInterface::focusInEvent;
        using QDesignerActionEditorInterface::focusNextPrevChild;
        using QDesignerActionEditorInterface::focusOutEvent;
        using QDesignerActionEditorInterface::hideEvent;
        using QDesignerActionEditorInterface::initPainter;
        using QDesignerActionEditorInterface::inputMethodEvent;
        using QDesignerActionEditorInterface::keyPressEvent;
        using QDesignerActionEditorInterface::keyReleaseEvent;
        using QDesignerActionEditorInterface::leaveEvent;
        using QDesignerActionEditorInterface::metric;
        using QDesignerActionEditorInterface::mouseDoubleClickEvent;
        using QDesignerActionEditorInterface::mouseMoveEvent;
        using QDesignerActionEditorInterface::mousePressEvent;
        using QDesignerActionEditorInterface::mouseReleaseEvent;
        using QDesignerActionEditorInterface::moveEvent;
        using QDesignerActionEditorInterface::nativeEvent;
        using QDesignerActionEditorInterface::paintEvent;
        using QDesignerActionEditorInterface::redirected;
        using QDesignerActionEditorInterface::resizeEvent;
        using QDesignerActionEditorInterface::sharedPainter;
        using QDesignerActionEditorInterface::showEvent;
        using QDesignerActionEditorInterface::tabletEvent;
        using QDesignerActionEditorInterface::timerEvent;
        using QDesignerActionEditorInterface::wheelEvent;
    };

    VirtualQDesignerActionEditorInterface(QWidget* parent) : QDesignerActionEditorInterface(parent) {};
    VirtualQDesignerActionEditorInterface(QWidget* parent, Qt::WindowFlags flags) : QDesignerActionEditorInterface(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdesigneractioneditorinterface_metaobject_callback) {
            QMetaObject* callback_ret = qdesigneractioneditorinterface_metaobject_callback(this);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdesigneractioneditorinterface_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdesigneractioneditorinterface_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdesigneractioneditorinterface_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdesigneractioneditorinterface_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDesignerActionEditorInterface::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QDesignerFormEditorInterface* core() const override {
        if (qdesigneractioneditorinterface_core_callback) {
            QDesignerFormEditorInterface* callback_ret = qdesigneractioneditorinterface_core_callback(this);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::core();
    }

    // Virtual method for C ABI access and custom callback
    virtual void manageAction(QAction* action) override {
        if (qdesigneractioneditorinterface_manageaction_callback) {
            QAction* cbval1 = action;
            qdesigneractioneditorinterface_manageaction_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerActionEditorInterface::manageAction called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void unmanageAction(QAction* action) override {
        if (qdesigneractioneditorinterface_unmanageaction_callback) {
            QAction* cbval1 = action;
            qdesigneractioneditorinterface_unmanageaction_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerActionEditorInterface::unmanageAction called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
        if (qdesigneractioneditorinterface_setformwindow_callback) {
            QDesignerFormWindowInterface* cbval1 = formWindow;
            qdesigneractioneditorinterface_setformwindow_callback(this, cbval1);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerActionEditorInterface::setFormWindow called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdesigneractioneditorinterface_devtype_callback) {
            int callback_ret = qdesigneractioneditorinterface_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDesignerActionEditorInterface::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdesigneractioneditorinterface_setvisible_callback) {
            bool cbval1 = visible;
            qdesigneractioneditorinterface_setvisible_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdesigneractioneditorinterface_sizehint_callback) {
            QSize* callback_ret = qdesigneractioneditorinterface_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerActionEditorInterface::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdesigneractioneditorinterface_minimumsizehint_callback) {
            QSize* callback_ret = qdesigneractioneditorinterface_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerActionEditorInterface::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdesigneractioneditorinterface_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdesigneractioneditorinterface_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerActionEditorInterface::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdesigneractioneditorinterface_hasheightforwidth_callback) {
            bool callback_ret = qdesigneractioneditorinterface_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdesigneractioneditorinterface_paintengine_callback) {
            QPaintEngine* callback_ret = qdesigneractioneditorinterface_paintengine_callback(this);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdesigneractioneditorinterface_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdesigneractioneditorinterface_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesigneractioneditorinterface_mousepressevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesigneractioneditorinterface_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesigneractioneditorinterface_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdesigneractioneditorinterface_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdesigneractioneditorinterface_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdesigneractioneditorinterface_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdesigneractioneditorinterface_wheelevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdesigneractioneditorinterface_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesigneractioneditorinterface_keypressevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdesigneractioneditorinterface_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdesigneractioneditorinterface_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdesigneractioneditorinterface_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesigneractioneditorinterface_focusinevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdesigneractioneditorinterface_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdesigneractioneditorinterface_focusoutevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdesigneractioneditorinterface_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdesigneractioneditorinterface_enterevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdesigneractioneditorinterface_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdesigneractioneditorinterface_leaveevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdesigneractioneditorinterface_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdesigneractioneditorinterface_paintevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdesigneractioneditorinterface_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdesigneractioneditorinterface_moveevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdesigneractioneditorinterface_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdesigneractioneditorinterface_resizeevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdesigneractioneditorinterface_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdesigneractioneditorinterface_closeevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdesigneractioneditorinterface_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdesigneractioneditorinterface_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdesigneractioneditorinterface_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdesigneractioneditorinterface_tabletevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdesigneractioneditorinterface_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdesigneractioneditorinterface_actionevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdesigneractioneditorinterface_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdesigneractioneditorinterface_dragenterevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdesigneractioneditorinterface_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdesigneractioneditorinterface_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdesigneractioneditorinterface_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdesigneractioneditorinterface_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdesigneractioneditorinterface_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdesigneractioneditorinterface_dropevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdesigneractioneditorinterface_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdesigneractioneditorinterface_showevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdesigneractioneditorinterface_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdesigneractioneditorinterface_hideevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdesigneractioneditorinterface_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdesigneractioneditorinterface_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdesigneractioneditorinterface_changeevent_callback) {
            QEvent* cbval1 = param1;
            qdesigneractioneditorinterface_changeevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdesigneractioneditorinterface_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdesigneractioneditorinterface_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDesignerActionEditorInterface::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdesigneractioneditorinterface_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdesigneractioneditorinterface_initpainter_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdesigneractioneditorinterface_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdesigneractioneditorinterface_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdesigneractioneditorinterface_sharedpainter_callback) {
            QPainter* callback_ret = qdesigneractioneditorinterface_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdesigneractioneditorinterface_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdesigneractioneditorinterface_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdesigneractioneditorinterface_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdesigneractioneditorinterface_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDesignerActionEditorInterface::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdesigneractioneditorinterface_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdesigneractioneditorinterface_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdesigneractioneditorinterface_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdesigneractioneditorinterface_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDesignerActionEditorInterface::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdesigneractioneditorinterface_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdesigneractioneditorinterface_timerevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdesigneractioneditorinterface_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdesigneractioneditorinterface_childevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdesigneractioneditorinterface_customevent_callback) {
            QEvent* cbval1 = event;
            qdesigneractioneditorinterface_customevent_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdesigneractioneditorinterface_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesigneractioneditorinterface_connectnotify_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdesigneractioneditorinterface_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdesigneractioneditorinterface_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDesignerActionEditorInterface::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QDesignerActionEditorInterface_SuperEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_SuperMousePressEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_SuperMouseReleaseEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_SuperMouseDoubleClickEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_SuperMouseMoveEvent(QDesignerActionEditorInterface* self, QMouseEvent* event);
    friend void QDesignerActionEditorInterface_SuperWheelEvent(QDesignerActionEditorInterface* self, QWheelEvent* event);
    friend void QDesignerActionEditorInterface_SuperKeyPressEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_SuperKeyReleaseEvent(QDesignerActionEditorInterface* self, QKeyEvent* event);
    friend void QDesignerActionEditorInterface_SuperFocusInEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_SuperFocusOutEvent(QDesignerActionEditorInterface* self, QFocusEvent* event);
    friend void QDesignerActionEditorInterface_SuperEnterEvent(QDesignerActionEditorInterface* self, QEnterEvent* event);
    friend void QDesignerActionEditorInterface_SuperLeaveEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_SuperPaintEvent(QDesignerActionEditorInterface* self, QPaintEvent* event);
    friend void QDesignerActionEditorInterface_SuperMoveEvent(QDesignerActionEditorInterface* self, QMoveEvent* event);
    friend void QDesignerActionEditorInterface_SuperResizeEvent(QDesignerActionEditorInterface* self, QResizeEvent* event);
    friend void QDesignerActionEditorInterface_SuperCloseEvent(QDesignerActionEditorInterface* self, QCloseEvent* event);
    friend void QDesignerActionEditorInterface_SuperContextMenuEvent(QDesignerActionEditorInterface* self, QContextMenuEvent* event);
    friend void QDesignerActionEditorInterface_SuperTabletEvent(QDesignerActionEditorInterface* self, QTabletEvent* event);
    friend void QDesignerActionEditorInterface_SuperActionEvent(QDesignerActionEditorInterface* self, QActionEvent* event);
    friend void QDesignerActionEditorInterface_SuperDragEnterEvent(QDesignerActionEditorInterface* self, QDragEnterEvent* event);
    friend void QDesignerActionEditorInterface_SuperDragMoveEvent(QDesignerActionEditorInterface* self, QDragMoveEvent* event);
    friend void QDesignerActionEditorInterface_SuperDragLeaveEvent(QDesignerActionEditorInterface* self, QDragLeaveEvent* event);
    friend void QDesignerActionEditorInterface_SuperDropEvent(QDesignerActionEditorInterface* self, QDropEvent* event);
    friend void QDesignerActionEditorInterface_SuperShowEvent(QDesignerActionEditorInterface* self, QShowEvent* event);
    friend void QDesignerActionEditorInterface_SuperHideEvent(QDesignerActionEditorInterface* self, QHideEvent* event);
    friend bool QDesignerActionEditorInterface_SuperNativeEvent(QDesignerActionEditorInterface* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QDesignerActionEditorInterface_SuperChangeEvent(QDesignerActionEditorInterface* self, QEvent* param1);
    friend int QDesignerActionEditorInterface_SuperMetric(const QDesignerActionEditorInterface* self, int param1);
    friend void QDesignerActionEditorInterface_SuperInitPainter(const QDesignerActionEditorInterface* self, QPainter* painter);
    friend QPaintDevice* QDesignerActionEditorInterface_SuperRedirected(const QDesignerActionEditorInterface* self, QPoint* offset);
    friend QPainter* QDesignerActionEditorInterface_SuperSharedPainter(const QDesignerActionEditorInterface* self);
    friend void QDesignerActionEditorInterface_SuperInputMethodEvent(QDesignerActionEditorInterface* self, QInputMethodEvent* param1);
    friend bool QDesignerActionEditorInterface_SuperFocusNextPrevChild(QDesignerActionEditorInterface* self, bool next);
    friend void QDesignerActionEditorInterface_SuperTimerEvent(QDesignerActionEditorInterface* self, QTimerEvent* event);
    friend void QDesignerActionEditorInterface_SuperChildEvent(QDesignerActionEditorInterface* self, QChildEvent* event);
    friend void QDesignerActionEditorInterface_SuperCustomEvent(QDesignerActionEditorInterface* self, QEvent* event);
    friend void QDesignerActionEditorInterface_SuperConnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
    friend void QDesignerActionEditorInterface_SuperDisconnectNotify(QDesignerActionEditorInterface* self, const QMetaMethod* signal);
};

#endif
