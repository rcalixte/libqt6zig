#pragma once
#ifndef LIBQRUBBERBAND_HXX
#define LIBQRUBBERBAND_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRubberBand
class VirtualQRubberBand final : public QRubberBand {
  public:
    // Virtual class public types (including callbacks and access types)
    using QRubberBand_MetaObject_Callback = QMetaObject* (*)(const QRubberBand*);
    using QRubberBand_Metacast_Callback = void* (*)(QRubberBand*, const char*);
    using QRubberBand_Metacall_Callback = int (*)(QRubberBand*, int, int, void**);
    using QRubberBand_Event_Callback = bool (*)(QRubberBand*, QEvent*);
    using QRubberBand_PaintEvent_Callback = void (*)(QRubberBand*, QPaintEvent*);
    using QRubberBand_ChangeEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ShowEvent_Callback = void (*)(QRubberBand*, QShowEvent*);
    using QRubberBand_ResizeEvent_Callback = void (*)(QRubberBand*, QResizeEvent*);
    using QRubberBand_MoveEvent_Callback = void (*)(QRubberBand*, QMoveEvent*);
    using QRubberBand_InitStyleOption_Callback = void (*)(const QRubberBand*, QStyleOptionRubberBand*);
    using QRubberBand_DevType_Callback = int (*)(const QRubberBand*);
    using QRubberBand_SetVisible_Callback = void (*)(QRubberBand*, bool);
    using QRubberBand_SizeHint_Callback = QSize* (*)(const QRubberBand*);
    using QRubberBand_MinimumSizeHint_Callback = QSize* (*)(const QRubberBand*);
    using QRubberBand_HeightForWidth_Callback = int (*)(const QRubberBand*, int);
    using QRubberBand_HasHeightForWidth_Callback = bool (*)(const QRubberBand*);
    using QRubberBand_PaintEngine_Callback = QPaintEngine* (*)(const QRubberBand*);
    using QRubberBand_MousePressEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseReleaseEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseDoubleClickEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_MouseMoveEvent_Callback = void (*)(QRubberBand*, QMouseEvent*);
    using QRubberBand_WheelEvent_Callback = void (*)(QRubberBand*, QWheelEvent*);
    using QRubberBand_KeyPressEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_KeyReleaseEvent_Callback = void (*)(QRubberBand*, QKeyEvent*);
    using QRubberBand_FocusInEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_FocusOutEvent_Callback = void (*)(QRubberBand*, QFocusEvent*);
    using QRubberBand_EnterEvent_Callback = void (*)(QRubberBand*, QEnterEvent*);
    using QRubberBand_LeaveEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_CloseEvent_Callback = void (*)(QRubberBand*, QCloseEvent*);
    using QRubberBand_ContextMenuEvent_Callback = void (*)(QRubberBand*, QContextMenuEvent*);
    using QRubberBand_TabletEvent_Callback = void (*)(QRubberBand*, QTabletEvent*);
    using QRubberBand_ActionEvent_Callback = void (*)(QRubberBand*, QActionEvent*);
    using QRubberBand_DragEnterEvent_Callback = void (*)(QRubberBand*, QDragEnterEvent*);
    using QRubberBand_DragMoveEvent_Callback = void (*)(QRubberBand*, QDragMoveEvent*);
    using QRubberBand_DragLeaveEvent_Callback = void (*)(QRubberBand*, QDragLeaveEvent*);
    using QRubberBand_DropEvent_Callback = void (*)(QRubberBand*, QDropEvent*);
    using QRubberBand_HideEvent_Callback = void (*)(QRubberBand*, QHideEvent*);
    using QRubberBand_NativeEvent_Callback = bool (*)(QRubberBand*, libqt_string, void*, intptr_t*);
    using QRubberBand_Metric_Callback = int (*)(const QRubberBand*, int);
    using QRubberBand_InitPainter_Callback = void (*)(const QRubberBand*, QPainter*);
    using QRubberBand_Redirected_Callback = QPaintDevice* (*)(const QRubberBand*, QPoint*);
    using QRubberBand_SharedPainter_Callback = QPainter* (*)(const QRubberBand*);
    using QRubberBand_InputMethodEvent_Callback = void (*)(QRubberBand*, QInputMethodEvent*);
    using QRubberBand_InputMethodQuery_Callback = QVariant* (*)(const QRubberBand*, int);
    using QRubberBand_FocusNextPrevChild_Callback = bool (*)(QRubberBand*, bool);
    using QRubberBand_EventFilter_Callback = bool (*)(QRubberBand*, QObject*, QEvent*);
    using QRubberBand_TimerEvent_Callback = void (*)(QRubberBand*, QTimerEvent*);
    using QRubberBand_ChildEvent_Callback = void (*)(QRubberBand*, QChildEvent*);
    using QRubberBand_CustomEvent_Callback = void (*)(QRubberBand*, QEvent*);
    using QRubberBand_ConnectNotify_Callback = void (*)(QRubberBand*, QMetaMethod*);
    using QRubberBand_DisconnectNotify_Callback = void (*)(QRubberBand*, QMetaMethod*);
    using QRubberBand::create;
    using QRubberBand::destroy;
    using QRubberBand::focusNextChild;
    using QRubberBand::focusPreviousChild;
    using QRubberBand::getDecodedMetricF;
    using QRubberBand::isSignalConnected;
    using QRubberBand::receivers;
    using QRubberBand::sender;
    using QRubberBand::senderSignalIndex;
    using QRubberBand::updateMicroFocus;

    // Instance callback storage
    QRubberBand_MetaObject_Callback qrubberband_metaobject_callback = nullptr;
    QRubberBand_Metacast_Callback qrubberband_metacast_callback = nullptr;
    QRubberBand_Metacall_Callback qrubberband_metacall_callback = nullptr;
    QRubberBand_Event_Callback qrubberband_event_callback = nullptr;
    QRubberBand_PaintEvent_Callback qrubberband_paintevent_callback = nullptr;
    QRubberBand_ChangeEvent_Callback qrubberband_changeevent_callback = nullptr;
    QRubberBand_ShowEvent_Callback qrubberband_showevent_callback = nullptr;
    QRubberBand_ResizeEvent_Callback qrubberband_resizeevent_callback = nullptr;
    QRubberBand_MoveEvent_Callback qrubberband_moveevent_callback = nullptr;
    QRubberBand_InitStyleOption_Callback qrubberband_initstyleoption_callback = nullptr;
    QRubberBand_DevType_Callback qrubberband_devtype_callback = nullptr;
    QRubberBand_SetVisible_Callback qrubberband_setvisible_callback = nullptr;
    QRubberBand_SizeHint_Callback qrubberband_sizehint_callback = nullptr;
    QRubberBand_MinimumSizeHint_Callback qrubberband_minimumsizehint_callback = nullptr;
    QRubberBand_HeightForWidth_Callback qrubberband_heightforwidth_callback = nullptr;
    QRubberBand_HasHeightForWidth_Callback qrubberband_hasheightforwidth_callback = nullptr;
    QRubberBand_PaintEngine_Callback qrubberband_paintengine_callback = nullptr;
    QRubberBand_MousePressEvent_Callback qrubberband_mousepressevent_callback = nullptr;
    QRubberBand_MouseReleaseEvent_Callback qrubberband_mousereleaseevent_callback = nullptr;
    QRubberBand_MouseDoubleClickEvent_Callback qrubberband_mousedoubleclickevent_callback = nullptr;
    QRubberBand_MouseMoveEvent_Callback qrubberband_mousemoveevent_callback = nullptr;
    QRubberBand_WheelEvent_Callback qrubberband_wheelevent_callback = nullptr;
    QRubberBand_KeyPressEvent_Callback qrubberband_keypressevent_callback = nullptr;
    QRubberBand_KeyReleaseEvent_Callback qrubberband_keyreleaseevent_callback = nullptr;
    QRubberBand_FocusInEvent_Callback qrubberband_focusinevent_callback = nullptr;
    QRubberBand_FocusOutEvent_Callback qrubberband_focusoutevent_callback = nullptr;
    QRubberBand_EnterEvent_Callback qrubberband_enterevent_callback = nullptr;
    QRubberBand_LeaveEvent_Callback qrubberband_leaveevent_callback = nullptr;
    QRubberBand_CloseEvent_Callback qrubberband_closeevent_callback = nullptr;
    QRubberBand_ContextMenuEvent_Callback qrubberband_contextmenuevent_callback = nullptr;
    QRubberBand_TabletEvent_Callback qrubberband_tabletevent_callback = nullptr;
    QRubberBand_ActionEvent_Callback qrubberband_actionevent_callback = nullptr;
    QRubberBand_DragEnterEvent_Callback qrubberband_dragenterevent_callback = nullptr;
    QRubberBand_DragMoveEvent_Callback qrubberband_dragmoveevent_callback = nullptr;
    QRubberBand_DragLeaveEvent_Callback qrubberband_dragleaveevent_callback = nullptr;
    QRubberBand_DropEvent_Callback qrubberband_dropevent_callback = nullptr;
    QRubberBand_HideEvent_Callback qrubberband_hideevent_callback = nullptr;
    QRubberBand_NativeEvent_Callback qrubberband_nativeevent_callback = nullptr;
    QRubberBand_Metric_Callback qrubberband_metric_callback = nullptr;
    QRubberBand_InitPainter_Callback qrubberband_initpainter_callback = nullptr;
    QRubberBand_Redirected_Callback qrubberband_redirected_callback = nullptr;
    QRubberBand_SharedPainter_Callback qrubberband_sharedpainter_callback = nullptr;
    QRubberBand_InputMethodEvent_Callback qrubberband_inputmethodevent_callback = nullptr;
    QRubberBand_InputMethodQuery_Callback qrubberband_inputmethodquery_callback = nullptr;
    QRubberBand_FocusNextPrevChild_Callback qrubberband_focusnextprevchild_callback = nullptr;
    QRubberBand_EventFilter_Callback qrubberband_eventfilter_callback = nullptr;
    QRubberBand_TimerEvent_Callback qrubberband_timerevent_callback = nullptr;
    QRubberBand_ChildEvent_Callback qrubberband_childevent_callback = nullptr;
    QRubberBand_CustomEvent_Callback qrubberband_customevent_callback = nullptr;
    QRubberBand_ConnectNotify_Callback qrubberband_connectnotify_callback = nullptr;
    QRubberBand_DisconnectNotify_Callback qrubberband_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QRubberBand {
        using QRubberBand::actionEvent;
        using QRubberBand::changeEvent;
        using QRubberBand::childEvent;
        using QRubberBand::closeEvent;
        using QRubberBand::connectNotify;
        using QRubberBand::contextMenuEvent;
        using QRubberBand::customEvent;
        using QRubberBand::disconnectNotify;
        using QRubberBand::dragEnterEvent;
        using QRubberBand::dragLeaveEvent;
        using QRubberBand::dragMoveEvent;
        using QRubberBand::dropEvent;
        using QRubberBand::enterEvent;
        using QRubberBand::event;
        using QRubberBand::focusInEvent;
        using QRubberBand::focusNextPrevChild;
        using QRubberBand::focusOutEvent;
        using QRubberBand::hideEvent;
        using QRubberBand::initPainter;
        using QRubberBand::initStyleOption;
        using QRubberBand::inputMethodEvent;
        using QRubberBand::keyPressEvent;
        using QRubberBand::keyReleaseEvent;
        using QRubberBand::leaveEvent;
        using QRubberBand::metric;
        using QRubberBand::mouseDoubleClickEvent;
        using QRubberBand::mouseMoveEvent;
        using QRubberBand::mousePressEvent;
        using QRubberBand::mouseReleaseEvent;
        using QRubberBand::moveEvent;
        using QRubberBand::nativeEvent;
        using QRubberBand::paintEvent;
        using QRubberBand::redirected;
        using QRubberBand::resizeEvent;
        using QRubberBand::sharedPainter;
        using QRubberBand::showEvent;
        using QRubberBand::tabletEvent;
        using QRubberBand::timerEvent;
        using QRubberBand::wheelEvent;
    };

    VirtualQRubberBand(QRubberBand::Shape param1) : QRubberBand(param1) {};
    VirtualQRubberBand(QRubberBand::Shape param1, QWidget* param2) : QRubberBand(param1, param2) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qrubberband_metaobject_callback) {
            QMetaObject* callback_ret = qrubberband_metaobject_callback(this);
            return callback_ret;
        }
        return QRubberBand::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qrubberband_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qrubberband_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qrubberband_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qrubberband_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qrubberband_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qrubberband_event_callback(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qrubberband_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qrubberband_paintevent_callback(this, cbval1);
            return;
        }
        QRubberBand::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qrubberband_changeevent_callback) {
            QEvent* cbval1 = param1;
            qrubberband_changeevent_callback(this, cbval1);
            return;
        }
        QRubberBand::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qrubberband_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qrubberband_showevent_callback(this, cbval1);
            return;
        }
        QRubberBand::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qrubberband_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qrubberband_resizeevent_callback(this, cbval1);
            return;
        }
        QRubberBand::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* param1) override {
        if (qrubberband_moveevent_callback) {
            QMoveEvent* cbval1 = param1;
            qrubberband_moveevent_callback(this, cbval1);
            return;
        }
        QRubberBand::moveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionRubberBand* option) const override {
        if (qrubberband_initstyleoption_callback) {
            QStyleOptionRubberBand* cbval1 = option;
            qrubberband_initstyleoption_callback(this, cbval1);
            return;
        }
        QRubberBand::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qrubberband_devtype_callback) {
            int callback_ret = qrubberband_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qrubberband_setvisible_callback) {
            bool cbval1 = visible;
            qrubberband_setvisible_callback(this, cbval1);
            return;
        }
        QRubberBand::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qrubberband_sizehint_callback) {
            QSize* callback_ret = qrubberband_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRubberBand::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qrubberband_minimumsizehint_callback) {
            QSize* callback_ret = qrubberband_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRubberBand::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qrubberband_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qrubberband_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qrubberband_hasheightforwidth_callback) {
            bool callback_ret = qrubberband_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QRubberBand::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qrubberband_paintengine_callback) {
            QPaintEngine* callback_ret = qrubberband_paintengine_callback(this);
            return callback_ret;
        }
        return QRubberBand::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qrubberband_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qrubberband_mousepressevent_callback(this, cbval1);
            return;
        }
        QRubberBand::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qrubberband_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qrubberband_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QRubberBand::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qrubberband_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qrubberband_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QRubberBand::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qrubberband_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qrubberband_mousemoveevent_callback(this, cbval1);
            return;
        }
        QRubberBand::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qrubberband_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qrubberband_wheelevent_callback(this, cbval1);
            return;
        }
        QRubberBand::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qrubberband_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qrubberband_keypressevent_callback(this, cbval1);
            return;
        }
        QRubberBand::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qrubberband_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qrubberband_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QRubberBand::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qrubberband_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qrubberband_focusinevent_callback(this, cbval1);
            return;
        }
        QRubberBand::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qrubberband_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qrubberband_focusoutevent_callback(this, cbval1);
            return;
        }
        QRubberBand::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qrubberband_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qrubberband_enterevent_callback(this, cbval1);
            return;
        }
        QRubberBand::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qrubberband_leaveevent_callback) {
            QEvent* cbval1 = event;
            qrubberband_leaveevent_callback(this, cbval1);
            return;
        }
        QRubberBand::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qrubberband_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qrubberband_closeevent_callback(this, cbval1);
            return;
        }
        QRubberBand::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qrubberband_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qrubberband_contextmenuevent_callback(this, cbval1);
            return;
        }
        QRubberBand::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qrubberband_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qrubberband_tabletevent_callback(this, cbval1);
            return;
        }
        QRubberBand::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qrubberband_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qrubberband_actionevent_callback(this, cbval1);
            return;
        }
        QRubberBand::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qrubberband_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qrubberband_dragenterevent_callback(this, cbval1);
            return;
        }
        QRubberBand::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qrubberband_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qrubberband_dragmoveevent_callback(this, cbval1);
            return;
        }
        QRubberBand::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qrubberband_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qrubberband_dragleaveevent_callback(this, cbval1);
            return;
        }
        QRubberBand::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qrubberband_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qrubberband_dropevent_callback(this, cbval1);
            return;
        }
        QRubberBand::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qrubberband_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qrubberband_hideevent_callback(this, cbval1);
            return;
        }
        QRubberBand::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qrubberband_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qrubberband_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QRubberBand::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qrubberband_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qrubberband_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QRubberBand::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qrubberband_initpainter_callback) {
            QPainter* cbval1 = painter;
            qrubberband_initpainter_callback(this, cbval1);
            return;
        }
        QRubberBand::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qrubberband_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qrubberband_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qrubberband_sharedpainter_callback) {
            QPainter* callback_ret = qrubberband_sharedpainter_callback(this);
            return callback_ret;
        }
        return QRubberBand::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qrubberband_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qrubberband_inputmethodevent_callback(this, cbval1);
            return;
        }
        QRubberBand::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qrubberband_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qrubberband_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QRubberBand::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qrubberband_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qrubberband_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QRubberBand::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qrubberband_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qrubberband_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QRubberBand::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qrubberband_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qrubberband_timerevent_callback(this, cbval1);
            return;
        }
        QRubberBand::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qrubberband_childevent_callback) {
            QChildEvent* cbval1 = event;
            qrubberband_childevent_callback(this, cbval1);
            return;
        }
        QRubberBand::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qrubberband_customevent_callback) {
            QEvent* cbval1 = event;
            qrubberband_customevent_callback(this, cbval1);
            return;
        }
        QRubberBand::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qrubberband_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrubberband_connectnotify_callback(this, cbval1);
            return;
        }
        QRubberBand::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qrubberband_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qrubberband_disconnectnotify_callback(this, cbval1);
            return;
        }
        QRubberBand::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QRubberBand_SuperEvent(QRubberBand* self, QEvent* e);
    friend void QRubberBand_SuperPaintEvent(QRubberBand* self, QPaintEvent* param1);
    friend void QRubberBand_SuperChangeEvent(QRubberBand* self, QEvent* param1);
    friend void QRubberBand_SuperShowEvent(QRubberBand* self, QShowEvent* param1);
    friend void QRubberBand_SuperResizeEvent(QRubberBand* self, QResizeEvent* param1);
    friend void QRubberBand_SuperMoveEvent(QRubberBand* self, QMoveEvent* param1);
    friend void QRubberBand_SuperInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option);
    friend void QRubberBand_SuperMousePressEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseReleaseEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperMouseMoveEvent(QRubberBand* self, QMouseEvent* event);
    friend void QRubberBand_SuperWheelEvent(QRubberBand* self, QWheelEvent* event);
    friend void QRubberBand_SuperKeyPressEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_SuperKeyReleaseEvent(QRubberBand* self, QKeyEvent* event);
    friend void QRubberBand_SuperFocusInEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_SuperFocusOutEvent(QRubberBand* self, QFocusEvent* event);
    friend void QRubberBand_SuperEnterEvent(QRubberBand* self, QEnterEvent* event);
    friend void QRubberBand_SuperLeaveEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_SuperCloseEvent(QRubberBand* self, QCloseEvent* event);
    friend void QRubberBand_SuperContextMenuEvent(QRubberBand* self, QContextMenuEvent* event);
    friend void QRubberBand_SuperTabletEvent(QRubberBand* self, QTabletEvent* event);
    friend void QRubberBand_SuperActionEvent(QRubberBand* self, QActionEvent* event);
    friend void QRubberBand_SuperDragEnterEvent(QRubberBand* self, QDragEnterEvent* event);
    friend void QRubberBand_SuperDragMoveEvent(QRubberBand* self, QDragMoveEvent* event);
    friend void QRubberBand_SuperDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event);
    friend void QRubberBand_SuperDropEvent(QRubberBand* self, QDropEvent* event);
    friend void QRubberBand_SuperHideEvent(QRubberBand* self, QHideEvent* event);
    friend bool QRubberBand_SuperNativeEvent(QRubberBand* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QRubberBand_SuperMetric(const QRubberBand* self, int param1);
    friend void QRubberBand_SuperInitPainter(const QRubberBand* self, QPainter* painter);
    friend QPaintDevice* QRubberBand_SuperRedirected(const QRubberBand* self, QPoint* offset);
    friend QPainter* QRubberBand_SuperSharedPainter(const QRubberBand* self);
    friend void QRubberBand_SuperInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1);
    friend bool QRubberBand_SuperFocusNextPrevChild(QRubberBand* self, bool next);
    friend void QRubberBand_SuperTimerEvent(QRubberBand* self, QTimerEvent* event);
    friend void QRubberBand_SuperChildEvent(QRubberBand* self, QChildEvent* event);
    friend void QRubberBand_SuperCustomEvent(QRubberBand* self, QEvent* event);
    friend void QRubberBand_SuperConnectNotify(QRubberBand* self, const QMetaMethod* signal);
    friend void QRubberBand_SuperDisconnectNotify(QRubberBand* self, const QMetaMethod* signal);
};

#endif
