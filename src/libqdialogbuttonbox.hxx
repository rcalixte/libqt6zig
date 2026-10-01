#pragma once
#ifndef LIBQDIALOGBUTTONBOX_HXX
#define LIBQDIALOGBUTTONBOX_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDialogButtonBox
class VirtualQDialogButtonBox final : public QDialogButtonBox {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDialogButtonBox_MetaObject_Callback = QMetaObject* (*)(const QDialogButtonBox*);
    using QDialogButtonBox_Metacast_Callback = void* (*)(QDialogButtonBox*, const char*);
    using QDialogButtonBox_Metacall_Callback = int (*)(QDialogButtonBox*, int, int, void**);
    using QDialogButtonBox_ChangeEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_Event_Callback = bool (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_DevType_Callback = int (*)(const QDialogButtonBox*);
    using QDialogButtonBox_SetVisible_Callback = void (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_SizeHint_Callback = QSize* (*)(const QDialogButtonBox*);
    using QDialogButtonBox_MinimumSizeHint_Callback = QSize* (*)(const QDialogButtonBox*);
    using QDialogButtonBox_HeightForWidth_Callback = int (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_HasHeightForWidth_Callback = bool (*)(const QDialogButtonBox*);
    using QDialogButtonBox_PaintEngine_Callback = QPaintEngine* (*)(const QDialogButtonBox*);
    using QDialogButtonBox_MousePressEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseReleaseEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseDoubleClickEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseMoveEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_WheelEvent_Callback = void (*)(QDialogButtonBox*, QWheelEvent*);
    using QDialogButtonBox_KeyPressEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_KeyReleaseEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_FocusInEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_FocusOutEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_EnterEvent_Callback = void (*)(QDialogButtonBox*, QEnterEvent*);
    using QDialogButtonBox_LeaveEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_PaintEvent_Callback = void (*)(QDialogButtonBox*, QPaintEvent*);
    using QDialogButtonBox_MoveEvent_Callback = void (*)(QDialogButtonBox*, QMoveEvent*);
    using QDialogButtonBox_ResizeEvent_Callback = void (*)(QDialogButtonBox*, QResizeEvent*);
    using QDialogButtonBox_CloseEvent_Callback = void (*)(QDialogButtonBox*, QCloseEvent*);
    using QDialogButtonBox_ContextMenuEvent_Callback = void (*)(QDialogButtonBox*, QContextMenuEvent*);
    using QDialogButtonBox_TabletEvent_Callback = void (*)(QDialogButtonBox*, QTabletEvent*);
    using QDialogButtonBox_ActionEvent_Callback = void (*)(QDialogButtonBox*, QActionEvent*);
    using QDialogButtonBox_DragEnterEvent_Callback = void (*)(QDialogButtonBox*, QDragEnterEvent*);
    using QDialogButtonBox_DragMoveEvent_Callback = void (*)(QDialogButtonBox*, QDragMoveEvent*);
    using QDialogButtonBox_DragLeaveEvent_Callback = void (*)(QDialogButtonBox*, QDragLeaveEvent*);
    using QDialogButtonBox_DropEvent_Callback = void (*)(QDialogButtonBox*, QDropEvent*);
    using QDialogButtonBox_ShowEvent_Callback = void (*)(QDialogButtonBox*, QShowEvent*);
    using QDialogButtonBox_HideEvent_Callback = void (*)(QDialogButtonBox*, QHideEvent*);
    using QDialogButtonBox_NativeEvent_Callback = bool (*)(QDialogButtonBox*, libqt_string, void*, intptr_t*);
    using QDialogButtonBox_Metric_Callback = int (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_InitPainter_Callback = void (*)(const QDialogButtonBox*, QPainter*);
    using QDialogButtonBox_Redirected_Callback = QPaintDevice* (*)(const QDialogButtonBox*, QPoint*);
    using QDialogButtonBox_SharedPainter_Callback = QPainter* (*)(const QDialogButtonBox*);
    using QDialogButtonBox_InputMethodEvent_Callback = void (*)(QDialogButtonBox*, QInputMethodEvent*);
    using QDialogButtonBox_InputMethodQuery_Callback = QVariant* (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_FocusNextPrevChild_Callback = bool (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_EventFilter_Callback = bool (*)(QDialogButtonBox*, QObject*, QEvent*);
    using QDialogButtonBox_TimerEvent_Callback = void (*)(QDialogButtonBox*, QTimerEvent*);
    using QDialogButtonBox_ChildEvent_Callback = void (*)(QDialogButtonBox*, QChildEvent*);
    using QDialogButtonBox_CustomEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_ConnectNotify_Callback = void (*)(QDialogButtonBox*, QMetaMethod*);
    using QDialogButtonBox_DisconnectNotify_Callback = void (*)(QDialogButtonBox*, QMetaMethod*);
    using QDialogButtonBox::create;
    using QDialogButtonBox::destroy;
    using QDialogButtonBox::focusNextChild;
    using QDialogButtonBox::focusPreviousChild;
    using QDialogButtonBox::getDecodedMetricF;
    using QDialogButtonBox::isSignalConnected;
    using QDialogButtonBox::receivers;
    using QDialogButtonBox::sender;
    using QDialogButtonBox::senderSignalIndex;
    using QDialogButtonBox::updateMicroFocus;

    // Instance callback storage
    QDialogButtonBox_MetaObject_Callback qdialogbuttonbox_metaobject_callback = nullptr;
    QDialogButtonBox_Metacast_Callback qdialogbuttonbox_metacast_callback = nullptr;
    QDialogButtonBox_Metacall_Callback qdialogbuttonbox_metacall_callback = nullptr;
    QDialogButtonBox_ChangeEvent_Callback qdialogbuttonbox_changeevent_callback = nullptr;
    QDialogButtonBox_Event_Callback qdialogbuttonbox_event_callback = nullptr;
    QDialogButtonBox_DevType_Callback qdialogbuttonbox_devtype_callback = nullptr;
    QDialogButtonBox_SetVisible_Callback qdialogbuttonbox_setvisible_callback = nullptr;
    QDialogButtonBox_SizeHint_Callback qdialogbuttonbox_sizehint_callback = nullptr;
    QDialogButtonBox_MinimumSizeHint_Callback qdialogbuttonbox_minimumsizehint_callback = nullptr;
    QDialogButtonBox_HeightForWidth_Callback qdialogbuttonbox_heightforwidth_callback = nullptr;
    QDialogButtonBox_HasHeightForWidth_Callback qdialogbuttonbox_hasheightforwidth_callback = nullptr;
    QDialogButtonBox_PaintEngine_Callback qdialogbuttonbox_paintengine_callback = nullptr;
    QDialogButtonBox_MousePressEvent_Callback qdialogbuttonbox_mousepressevent_callback = nullptr;
    QDialogButtonBox_MouseReleaseEvent_Callback qdialogbuttonbox_mousereleaseevent_callback = nullptr;
    QDialogButtonBox_MouseDoubleClickEvent_Callback qdialogbuttonbox_mousedoubleclickevent_callback = nullptr;
    QDialogButtonBox_MouseMoveEvent_Callback qdialogbuttonbox_mousemoveevent_callback = nullptr;
    QDialogButtonBox_WheelEvent_Callback qdialogbuttonbox_wheelevent_callback = nullptr;
    QDialogButtonBox_KeyPressEvent_Callback qdialogbuttonbox_keypressevent_callback = nullptr;
    QDialogButtonBox_KeyReleaseEvent_Callback qdialogbuttonbox_keyreleaseevent_callback = nullptr;
    QDialogButtonBox_FocusInEvent_Callback qdialogbuttonbox_focusinevent_callback = nullptr;
    QDialogButtonBox_FocusOutEvent_Callback qdialogbuttonbox_focusoutevent_callback = nullptr;
    QDialogButtonBox_EnterEvent_Callback qdialogbuttonbox_enterevent_callback = nullptr;
    QDialogButtonBox_LeaveEvent_Callback qdialogbuttonbox_leaveevent_callback = nullptr;
    QDialogButtonBox_PaintEvent_Callback qdialogbuttonbox_paintevent_callback = nullptr;
    QDialogButtonBox_MoveEvent_Callback qdialogbuttonbox_moveevent_callback = nullptr;
    QDialogButtonBox_ResizeEvent_Callback qdialogbuttonbox_resizeevent_callback = nullptr;
    QDialogButtonBox_CloseEvent_Callback qdialogbuttonbox_closeevent_callback = nullptr;
    QDialogButtonBox_ContextMenuEvent_Callback qdialogbuttonbox_contextmenuevent_callback = nullptr;
    QDialogButtonBox_TabletEvent_Callback qdialogbuttonbox_tabletevent_callback = nullptr;
    QDialogButtonBox_ActionEvent_Callback qdialogbuttonbox_actionevent_callback = nullptr;
    QDialogButtonBox_DragEnterEvent_Callback qdialogbuttonbox_dragenterevent_callback = nullptr;
    QDialogButtonBox_DragMoveEvent_Callback qdialogbuttonbox_dragmoveevent_callback = nullptr;
    QDialogButtonBox_DragLeaveEvent_Callback qdialogbuttonbox_dragleaveevent_callback = nullptr;
    QDialogButtonBox_DropEvent_Callback qdialogbuttonbox_dropevent_callback = nullptr;
    QDialogButtonBox_ShowEvent_Callback qdialogbuttonbox_showevent_callback = nullptr;
    QDialogButtonBox_HideEvent_Callback qdialogbuttonbox_hideevent_callback = nullptr;
    QDialogButtonBox_NativeEvent_Callback qdialogbuttonbox_nativeevent_callback = nullptr;
    QDialogButtonBox_Metric_Callback qdialogbuttonbox_metric_callback = nullptr;
    QDialogButtonBox_InitPainter_Callback qdialogbuttonbox_initpainter_callback = nullptr;
    QDialogButtonBox_Redirected_Callback qdialogbuttonbox_redirected_callback = nullptr;
    QDialogButtonBox_SharedPainter_Callback qdialogbuttonbox_sharedpainter_callback = nullptr;
    QDialogButtonBox_InputMethodEvent_Callback qdialogbuttonbox_inputmethodevent_callback = nullptr;
    QDialogButtonBox_InputMethodQuery_Callback qdialogbuttonbox_inputmethodquery_callback = nullptr;
    QDialogButtonBox_FocusNextPrevChild_Callback qdialogbuttonbox_focusnextprevchild_callback = nullptr;
    QDialogButtonBox_EventFilter_Callback qdialogbuttonbox_eventfilter_callback = nullptr;
    QDialogButtonBox_TimerEvent_Callback qdialogbuttonbox_timerevent_callback = nullptr;
    QDialogButtonBox_ChildEvent_Callback qdialogbuttonbox_childevent_callback = nullptr;
    QDialogButtonBox_CustomEvent_Callback qdialogbuttonbox_customevent_callback = nullptr;
    QDialogButtonBox_ConnectNotify_Callback qdialogbuttonbox_connectnotify_callback = nullptr;
    QDialogButtonBox_DisconnectNotify_Callback qdialogbuttonbox_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QDialogButtonBox {
        using QDialogButtonBox::actionEvent;
        using QDialogButtonBox::changeEvent;
        using QDialogButtonBox::childEvent;
        using QDialogButtonBox::closeEvent;
        using QDialogButtonBox::connectNotify;
        using QDialogButtonBox::contextMenuEvent;
        using QDialogButtonBox::customEvent;
        using QDialogButtonBox::disconnectNotify;
        using QDialogButtonBox::dragEnterEvent;
        using QDialogButtonBox::dragLeaveEvent;
        using QDialogButtonBox::dragMoveEvent;
        using QDialogButtonBox::dropEvent;
        using QDialogButtonBox::enterEvent;
        using QDialogButtonBox::event;
        using QDialogButtonBox::focusInEvent;
        using QDialogButtonBox::focusNextPrevChild;
        using QDialogButtonBox::focusOutEvent;
        using QDialogButtonBox::hideEvent;
        using QDialogButtonBox::initPainter;
        using QDialogButtonBox::inputMethodEvent;
        using QDialogButtonBox::keyPressEvent;
        using QDialogButtonBox::keyReleaseEvent;
        using QDialogButtonBox::leaveEvent;
        using QDialogButtonBox::metric;
        using QDialogButtonBox::mouseDoubleClickEvent;
        using QDialogButtonBox::mouseMoveEvent;
        using QDialogButtonBox::mousePressEvent;
        using QDialogButtonBox::mouseReleaseEvent;
        using QDialogButtonBox::moveEvent;
        using QDialogButtonBox::nativeEvent;
        using QDialogButtonBox::paintEvent;
        using QDialogButtonBox::redirected;
        using QDialogButtonBox::resizeEvent;
        using QDialogButtonBox::sharedPainter;
        using QDialogButtonBox::showEvent;
        using QDialogButtonBox::tabletEvent;
        using QDialogButtonBox::timerEvent;
        using QDialogButtonBox::wheelEvent;
    };

    VirtualQDialogButtonBox(QWidget* parent) : QDialogButtonBox(parent) {};
    VirtualQDialogButtonBox() : QDialogButtonBox() {};
    VirtualQDialogButtonBox(Qt::Orientation orientation) : QDialogButtonBox(orientation) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons) : QDialogButtonBox(buttons) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation) : QDialogButtonBox(buttons, orientation) {};
    VirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(orientation, parent) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, QWidget* parent) : QDialogButtonBox(buttons, parent) {};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(buttons, orientation, parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qdialogbuttonbox_metaobject_callback) {
            QMetaObject* callback_ret = qdialogbuttonbox_metaobject_callback(this);
            return callback_ret;
        }
        return QDialogButtonBox::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qdialogbuttonbox_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qdialogbuttonbox_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdialogbuttonbox_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qdialogbuttonbox_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdialogbuttonbox_changeevent_callback) {
            QEvent* cbval1 = event;
            qdialogbuttonbox_changeevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::changeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdialogbuttonbox_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qdialogbuttonbox_event_callback(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdialogbuttonbox_devtype_callback) {
            int callback_ret = qdialogbuttonbox_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdialogbuttonbox_setvisible_callback) {
            bool cbval1 = visible;
            qdialogbuttonbox_setvisible_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdialogbuttonbox_sizehint_callback) {
            QSize* callback_ret = qdialogbuttonbox_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialogButtonBox::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdialogbuttonbox_minimumsizehint_callback) {
            QSize* callback_ret = qdialogbuttonbox_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialogButtonBox::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdialogbuttonbox_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qdialogbuttonbox_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdialogbuttonbox_hasheightforwidth_callback) {
            bool callback_ret = qdialogbuttonbox_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QDialogButtonBox::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdialogbuttonbox_paintengine_callback) {
            QPaintEngine* callback_ret = qdialogbuttonbox_paintengine_callback(this);
            return callback_ret;
        }
        return QDialogButtonBox::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialogbuttonbox_mousepressevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialogbuttonbox_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialogbuttonbox_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qdialogbuttonbox_mousemoveevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdialogbuttonbox_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qdialogbuttonbox_wheelevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qdialogbuttonbox_keypressevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qdialogbuttonbox_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qdialogbuttonbox_focusinevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qdialogbuttonbox_focusoutevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdialogbuttonbox_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qdialogbuttonbox_enterevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdialogbuttonbox_leaveevent_callback) {
            QEvent* cbval1 = event;
            qdialogbuttonbox_leaveevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdialogbuttonbox_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qdialogbuttonbox_paintevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdialogbuttonbox_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qdialogbuttonbox_moveevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdialogbuttonbox_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qdialogbuttonbox_resizeevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdialogbuttonbox_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qdialogbuttonbox_closeevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdialogbuttonbox_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qdialogbuttonbox_contextmenuevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdialogbuttonbox_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qdialogbuttonbox_tabletevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdialogbuttonbox_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qdialogbuttonbox_actionevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdialogbuttonbox_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qdialogbuttonbox_dragenterevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdialogbuttonbox_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qdialogbuttonbox_dragmoveevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdialogbuttonbox_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qdialogbuttonbox_dragleaveevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdialogbuttonbox_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qdialogbuttonbox_dropevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdialogbuttonbox_showevent_callback) {
            QShowEvent* cbval1 = event;
            qdialogbuttonbox_showevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdialogbuttonbox_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qdialogbuttonbox_hideevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdialogbuttonbox_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qdialogbuttonbox_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QDialogButtonBox::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdialogbuttonbox_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qdialogbuttonbox_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QDialogButtonBox::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdialogbuttonbox_initpainter_callback) {
            QPainter* cbval1 = painter;
            qdialogbuttonbox_initpainter_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdialogbuttonbox_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qdialogbuttonbox_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdialogbuttonbox_sharedpainter_callback) {
            QPainter* callback_ret = qdialogbuttonbox_sharedpainter_callback(this);
            return callback_ret;
        }
        return QDialogButtonBox::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdialogbuttonbox_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qdialogbuttonbox_inputmethodevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdialogbuttonbox_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qdialogbuttonbox_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QDialogButtonBox::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdialogbuttonbox_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qdialogbuttonbox_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QDialogButtonBox::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdialogbuttonbox_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qdialogbuttonbox_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QDialogButtonBox::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdialogbuttonbox_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qdialogbuttonbox_timerevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdialogbuttonbox_childevent_callback) {
            QChildEvent* cbval1 = event;
            qdialogbuttonbox_childevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdialogbuttonbox_customevent_callback) {
            QEvent* cbval1 = event;
            qdialogbuttonbox_customevent_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdialogbuttonbox_connectnotify_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qdialogbuttonbox_disconnectnotify_callback(this, cbval1);
            return;
        }
        QDialogButtonBox::disconnectNotify(signal);
    }

    // Friend functions
    friend void QDialogButtonBox_SuperChangeEvent(QDialogButtonBox* self, QEvent* event);
    friend bool QDialogButtonBox_SuperEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperMousePressEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperMouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event);
    friend void QDialogButtonBox_SuperWheelEvent(QDialogButtonBox* self, QWheelEvent* event);
    friend void QDialogButtonBox_SuperKeyPressEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_SuperKeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event);
    friend void QDialogButtonBox_SuperFocusInEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_SuperFocusOutEvent(QDialogButtonBox* self, QFocusEvent* event);
    friend void QDialogButtonBox_SuperEnterEvent(QDialogButtonBox* self, QEnterEvent* event);
    friend void QDialogButtonBox_SuperLeaveEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperPaintEvent(QDialogButtonBox* self, QPaintEvent* event);
    friend void QDialogButtonBox_SuperMoveEvent(QDialogButtonBox* self, QMoveEvent* event);
    friend void QDialogButtonBox_SuperResizeEvent(QDialogButtonBox* self, QResizeEvent* event);
    friend void QDialogButtonBox_SuperCloseEvent(QDialogButtonBox* self, QCloseEvent* event);
    friend void QDialogButtonBox_SuperContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event);
    friend void QDialogButtonBox_SuperTabletEvent(QDialogButtonBox* self, QTabletEvent* event);
    friend void QDialogButtonBox_SuperActionEvent(QDialogButtonBox* self, QActionEvent* event);
    friend void QDialogButtonBox_SuperDragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event);
    friend void QDialogButtonBox_SuperDragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event);
    friend void QDialogButtonBox_SuperDragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event);
    friend void QDialogButtonBox_SuperDropEvent(QDialogButtonBox* self, QDropEvent* event);
    friend void QDialogButtonBox_SuperShowEvent(QDialogButtonBox* self, QShowEvent* event);
    friend void QDialogButtonBox_SuperHideEvent(QDialogButtonBox* self, QHideEvent* event);
    friend bool QDialogButtonBox_SuperNativeEvent(QDialogButtonBox* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QDialogButtonBox_SuperMetric(const QDialogButtonBox* self, int param1);
    friend void QDialogButtonBox_SuperInitPainter(const QDialogButtonBox* self, QPainter* painter);
    friend QPaintDevice* QDialogButtonBox_SuperRedirected(const QDialogButtonBox* self, QPoint* offset);
    friend QPainter* QDialogButtonBox_SuperSharedPainter(const QDialogButtonBox* self);
    friend void QDialogButtonBox_SuperInputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1);
    friend bool QDialogButtonBox_SuperFocusNextPrevChild(QDialogButtonBox* self, bool next);
    friend void QDialogButtonBox_SuperTimerEvent(QDialogButtonBox* self, QTimerEvent* event);
    friend void QDialogButtonBox_SuperChildEvent(QDialogButtonBox* self, QChildEvent* event);
    friend void QDialogButtonBox_SuperCustomEvent(QDialogButtonBox* self, QEvent* event);
    friend void QDialogButtonBox_SuperConnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
    friend void QDialogButtonBox_SuperDisconnectNotify(QDialogButtonBox* self, const QMetaMethod* signal);
};

#endif
