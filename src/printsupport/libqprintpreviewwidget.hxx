#pragma once
#ifndef PRINTSUPPORT_LIBQPRINTPREVIEWWIDGET_HXX
#define PRINTSUPPORT_LIBQPRINTPREVIEWWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintPreviewWidget
class VirtualQPrintPreviewWidget final : public QPrintPreviewWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QPrintPreviewWidget_MetaObject_Callback = QMetaObject* (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_Metacast_Callback = void* (*)(QPrintPreviewWidget*, const char*);
    using QPrintPreviewWidget_Metacall_Callback = int (*)(QPrintPreviewWidget*, int, int, void**);
    using QPrintPreviewWidget_SetVisible_Callback = void (*)(QPrintPreviewWidget*, bool);
    using QPrintPreviewWidget_DevType_Callback = int (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_SizeHint_Callback = QSize* (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_MinimumSizeHint_Callback = QSize* (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_HeightForWidth_Callback = int (*)(const QPrintPreviewWidget*, int);
    using QPrintPreviewWidget_HasHeightForWidth_Callback = bool (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_PaintEngine_Callback = QPaintEngine* (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_Event_Callback = bool (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_MousePressEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseReleaseEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseDoubleClickEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseMoveEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_WheelEvent_Callback = void (*)(QPrintPreviewWidget*, QWheelEvent*);
    using QPrintPreviewWidget_KeyPressEvent_Callback = void (*)(QPrintPreviewWidget*, QKeyEvent*);
    using QPrintPreviewWidget_KeyReleaseEvent_Callback = void (*)(QPrintPreviewWidget*, QKeyEvent*);
    using QPrintPreviewWidget_FocusInEvent_Callback = void (*)(QPrintPreviewWidget*, QFocusEvent*);
    using QPrintPreviewWidget_FocusOutEvent_Callback = void (*)(QPrintPreviewWidget*, QFocusEvent*);
    using QPrintPreviewWidget_EnterEvent_Callback = void (*)(QPrintPreviewWidget*, QEnterEvent*);
    using QPrintPreviewWidget_LeaveEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_PaintEvent_Callback = void (*)(QPrintPreviewWidget*, QPaintEvent*);
    using QPrintPreviewWidget_MoveEvent_Callback = void (*)(QPrintPreviewWidget*, QMoveEvent*);
    using QPrintPreviewWidget_ResizeEvent_Callback = void (*)(QPrintPreviewWidget*, QResizeEvent*);
    using QPrintPreviewWidget_CloseEvent_Callback = void (*)(QPrintPreviewWidget*, QCloseEvent*);
    using QPrintPreviewWidget_ContextMenuEvent_Callback = void (*)(QPrintPreviewWidget*, QContextMenuEvent*);
    using QPrintPreviewWidget_TabletEvent_Callback = void (*)(QPrintPreviewWidget*, QTabletEvent*);
    using QPrintPreviewWidget_ActionEvent_Callback = void (*)(QPrintPreviewWidget*, QActionEvent*);
    using QPrintPreviewWidget_DragEnterEvent_Callback = void (*)(QPrintPreviewWidget*, QDragEnterEvent*);
    using QPrintPreviewWidget_DragMoveEvent_Callback = void (*)(QPrintPreviewWidget*, QDragMoveEvent*);
    using QPrintPreviewWidget_DragLeaveEvent_Callback = void (*)(QPrintPreviewWidget*, QDragLeaveEvent*);
    using QPrintPreviewWidget_DropEvent_Callback = void (*)(QPrintPreviewWidget*, QDropEvent*);
    using QPrintPreviewWidget_ShowEvent_Callback = void (*)(QPrintPreviewWidget*, QShowEvent*);
    using QPrintPreviewWidget_HideEvent_Callback = void (*)(QPrintPreviewWidget*, QHideEvent*);
    using QPrintPreviewWidget_NativeEvent_Callback = bool (*)(QPrintPreviewWidget*, libqt_string, void*, intptr_t*);
    using QPrintPreviewWidget_ChangeEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_Metric_Callback = int (*)(const QPrintPreviewWidget*, int);
    using QPrintPreviewWidget_InitPainter_Callback = void (*)(const QPrintPreviewWidget*, QPainter*);
    using QPrintPreviewWidget_Redirected_Callback = QPaintDevice* (*)(const QPrintPreviewWidget*, QPoint*);
    using QPrintPreviewWidget_SharedPainter_Callback = QPainter* (*)(const QPrintPreviewWidget*);
    using QPrintPreviewWidget_InputMethodEvent_Callback = void (*)(QPrintPreviewWidget*, QInputMethodEvent*);
    using QPrintPreviewWidget_InputMethodQuery_Callback = QVariant* (*)(const QPrintPreviewWidget*, int);
    using QPrintPreviewWidget_FocusNextPrevChild_Callback = bool (*)(QPrintPreviewWidget*, bool);
    using QPrintPreviewWidget_EventFilter_Callback = bool (*)(QPrintPreviewWidget*, QObject*, QEvent*);
    using QPrintPreviewWidget_TimerEvent_Callback = void (*)(QPrintPreviewWidget*, QTimerEvent*);
    using QPrintPreviewWidget_ChildEvent_Callback = void (*)(QPrintPreviewWidget*, QChildEvent*);
    using QPrintPreviewWidget_CustomEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_ConnectNotify_Callback = void (*)(QPrintPreviewWidget*, QMetaMethod*);
    using QPrintPreviewWidget_DisconnectNotify_Callback = void (*)(QPrintPreviewWidget*, QMetaMethod*);
    using QPrintPreviewWidget::create;
    using QPrintPreviewWidget::destroy;
    using QPrintPreviewWidget::focusNextChild;
    using QPrintPreviewWidget::focusPreviousChild;
    using QPrintPreviewWidget::getDecodedMetricF;
    using QPrintPreviewWidget::isSignalConnected;
    using QPrintPreviewWidget::receivers;
    using QPrintPreviewWidget::sender;
    using QPrintPreviewWidget::senderSignalIndex;
    using QPrintPreviewWidget::updateMicroFocus;

    // Instance callback storage
    QPrintPreviewWidget_MetaObject_Callback qprintpreviewwidget_metaobject_callback = nullptr;
    QPrintPreviewWidget_Metacast_Callback qprintpreviewwidget_metacast_callback = nullptr;
    QPrintPreviewWidget_Metacall_Callback qprintpreviewwidget_metacall_callback = nullptr;
    QPrintPreviewWidget_SetVisible_Callback qprintpreviewwidget_setvisible_callback = nullptr;
    QPrintPreviewWidget_DevType_Callback qprintpreviewwidget_devtype_callback = nullptr;
    QPrintPreviewWidget_SizeHint_Callback qprintpreviewwidget_sizehint_callback = nullptr;
    QPrintPreviewWidget_MinimumSizeHint_Callback qprintpreviewwidget_minimumsizehint_callback = nullptr;
    QPrintPreviewWidget_HeightForWidth_Callback qprintpreviewwidget_heightforwidth_callback = nullptr;
    QPrintPreviewWidget_HasHeightForWidth_Callback qprintpreviewwidget_hasheightforwidth_callback = nullptr;
    QPrintPreviewWidget_PaintEngine_Callback qprintpreviewwidget_paintengine_callback = nullptr;
    QPrintPreviewWidget_Event_Callback qprintpreviewwidget_event_callback = nullptr;
    QPrintPreviewWidget_MousePressEvent_Callback qprintpreviewwidget_mousepressevent_callback = nullptr;
    QPrintPreviewWidget_MouseReleaseEvent_Callback qprintpreviewwidget_mousereleaseevent_callback = nullptr;
    QPrintPreviewWidget_MouseDoubleClickEvent_Callback qprintpreviewwidget_mousedoubleclickevent_callback = nullptr;
    QPrintPreviewWidget_MouseMoveEvent_Callback qprintpreviewwidget_mousemoveevent_callback = nullptr;
    QPrintPreviewWidget_WheelEvent_Callback qprintpreviewwidget_wheelevent_callback = nullptr;
    QPrintPreviewWidget_KeyPressEvent_Callback qprintpreviewwidget_keypressevent_callback = nullptr;
    QPrintPreviewWidget_KeyReleaseEvent_Callback qprintpreviewwidget_keyreleaseevent_callback = nullptr;
    QPrintPreviewWidget_FocusInEvent_Callback qprintpreviewwidget_focusinevent_callback = nullptr;
    QPrintPreviewWidget_FocusOutEvent_Callback qprintpreviewwidget_focusoutevent_callback = nullptr;
    QPrintPreviewWidget_EnterEvent_Callback qprintpreviewwidget_enterevent_callback = nullptr;
    QPrintPreviewWidget_LeaveEvent_Callback qprintpreviewwidget_leaveevent_callback = nullptr;
    QPrintPreviewWidget_PaintEvent_Callback qprintpreviewwidget_paintevent_callback = nullptr;
    QPrintPreviewWidget_MoveEvent_Callback qprintpreviewwidget_moveevent_callback = nullptr;
    QPrintPreviewWidget_ResizeEvent_Callback qprintpreviewwidget_resizeevent_callback = nullptr;
    QPrintPreviewWidget_CloseEvent_Callback qprintpreviewwidget_closeevent_callback = nullptr;
    QPrintPreviewWidget_ContextMenuEvent_Callback qprintpreviewwidget_contextmenuevent_callback = nullptr;
    QPrintPreviewWidget_TabletEvent_Callback qprintpreviewwidget_tabletevent_callback = nullptr;
    QPrintPreviewWidget_ActionEvent_Callback qprintpreviewwidget_actionevent_callback = nullptr;
    QPrintPreviewWidget_DragEnterEvent_Callback qprintpreviewwidget_dragenterevent_callback = nullptr;
    QPrintPreviewWidget_DragMoveEvent_Callback qprintpreviewwidget_dragmoveevent_callback = nullptr;
    QPrintPreviewWidget_DragLeaveEvent_Callback qprintpreviewwidget_dragleaveevent_callback = nullptr;
    QPrintPreviewWidget_DropEvent_Callback qprintpreviewwidget_dropevent_callback = nullptr;
    QPrintPreviewWidget_ShowEvent_Callback qprintpreviewwidget_showevent_callback = nullptr;
    QPrintPreviewWidget_HideEvent_Callback qprintpreviewwidget_hideevent_callback = nullptr;
    QPrintPreviewWidget_NativeEvent_Callback qprintpreviewwidget_nativeevent_callback = nullptr;
    QPrintPreviewWidget_ChangeEvent_Callback qprintpreviewwidget_changeevent_callback = nullptr;
    QPrintPreviewWidget_Metric_Callback qprintpreviewwidget_metric_callback = nullptr;
    QPrintPreviewWidget_InitPainter_Callback qprintpreviewwidget_initpainter_callback = nullptr;
    QPrintPreviewWidget_Redirected_Callback qprintpreviewwidget_redirected_callback = nullptr;
    QPrintPreviewWidget_SharedPainter_Callback qprintpreviewwidget_sharedpainter_callback = nullptr;
    QPrintPreviewWidget_InputMethodEvent_Callback qprintpreviewwidget_inputmethodevent_callback = nullptr;
    QPrintPreviewWidget_InputMethodQuery_Callback qprintpreviewwidget_inputmethodquery_callback = nullptr;
    QPrintPreviewWidget_FocusNextPrevChild_Callback qprintpreviewwidget_focusnextprevchild_callback = nullptr;
    QPrintPreviewWidget_EventFilter_Callback qprintpreviewwidget_eventfilter_callback = nullptr;
    QPrintPreviewWidget_TimerEvent_Callback qprintpreviewwidget_timerevent_callback = nullptr;
    QPrintPreviewWidget_ChildEvent_Callback qprintpreviewwidget_childevent_callback = nullptr;
    QPrintPreviewWidget_CustomEvent_Callback qprintpreviewwidget_customevent_callback = nullptr;
    QPrintPreviewWidget_ConnectNotify_Callback qprintpreviewwidget_connectnotify_callback = nullptr;
    QPrintPreviewWidget_DisconnectNotify_Callback qprintpreviewwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QPrintPreviewWidget {
        using QPrintPreviewWidget::actionEvent;
        using QPrintPreviewWidget::changeEvent;
        using QPrintPreviewWidget::childEvent;
        using QPrintPreviewWidget::closeEvent;
        using QPrintPreviewWidget::connectNotify;
        using QPrintPreviewWidget::contextMenuEvent;
        using QPrintPreviewWidget::customEvent;
        using QPrintPreviewWidget::disconnectNotify;
        using QPrintPreviewWidget::dragEnterEvent;
        using QPrintPreviewWidget::dragLeaveEvent;
        using QPrintPreviewWidget::dragMoveEvent;
        using QPrintPreviewWidget::dropEvent;
        using QPrintPreviewWidget::enterEvent;
        using QPrintPreviewWidget::event;
        using QPrintPreviewWidget::focusInEvent;
        using QPrintPreviewWidget::focusNextPrevChild;
        using QPrintPreviewWidget::focusOutEvent;
        using QPrintPreviewWidget::hideEvent;
        using QPrintPreviewWidget::initPainter;
        using QPrintPreviewWidget::inputMethodEvent;
        using QPrintPreviewWidget::keyPressEvent;
        using QPrintPreviewWidget::keyReleaseEvent;
        using QPrintPreviewWidget::leaveEvent;
        using QPrintPreviewWidget::metric;
        using QPrintPreviewWidget::mouseDoubleClickEvent;
        using QPrintPreviewWidget::mouseMoveEvent;
        using QPrintPreviewWidget::mousePressEvent;
        using QPrintPreviewWidget::mouseReleaseEvent;
        using QPrintPreviewWidget::moveEvent;
        using QPrintPreviewWidget::nativeEvent;
        using QPrintPreviewWidget::paintEvent;
        using QPrintPreviewWidget::redirected;
        using QPrintPreviewWidget::resizeEvent;
        using QPrintPreviewWidget::sharedPainter;
        using QPrintPreviewWidget::showEvent;
        using QPrintPreviewWidget::tabletEvent;
        using QPrintPreviewWidget::timerEvent;
        using QPrintPreviewWidget::wheelEvent;
    };

    VirtualQPrintPreviewWidget(QWidget* parent) : QPrintPreviewWidget(parent) {};
    VirtualQPrintPreviewWidget(QPrinter* printer) : QPrintPreviewWidget(printer) {};
    VirtualQPrintPreviewWidget() : QPrintPreviewWidget() {};
    VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent) : QPrintPreviewWidget(printer, parent) {};
    VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewWidget(printer, parent, flags) {};
    VirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewWidget(parent, flags) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qprintpreviewwidget_metaobject_callback) {
            QMetaObject* callback_ret = qprintpreviewwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QPrintPreviewWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qprintpreviewwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qprintpreviewwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintpreviewwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qprintpreviewwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintpreviewwidget_setvisible_callback) {
            bool cbval1 = visible;
            qprintpreviewwidget_setvisible_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintpreviewwidget_devtype_callback) {
            int callback_ret = qprintpreviewwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintpreviewwidget_sizehint_callback) {
            QSize* callback_ret = qprintpreviewwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintpreviewwidget_minimumsizehint_callback) {
            QSize* callback_ret = qprintpreviewwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintpreviewwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qprintpreviewwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintpreviewwidget_hasheightforwidth_callback) {
            bool callback_ret = qprintpreviewwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QPrintPreviewWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintpreviewwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qprintpreviewwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QPrintPreviewWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintpreviewwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qprintpreviewwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qprintpreviewwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintpreviewwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qprintpreviewwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qprintpreviewwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qprintpreviewwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintpreviewwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qprintpreviewwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintpreviewwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintpreviewwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintpreviewwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qprintpreviewwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintpreviewwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qprintpreviewwidget_enterevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintpreviewwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qprintpreviewwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintpreviewwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qprintpreviewwidget_paintevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintpreviewwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qprintpreviewwidget_moveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprintpreviewwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qprintpreviewwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprintpreviewwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qprintpreviewwidget_closeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qprintpreviewwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qprintpreviewwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintpreviewwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qprintpreviewwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintpreviewwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qprintpreviewwidget_actionevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintpreviewwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qprintpreviewwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintpreviewwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qprintpreviewwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintpreviewwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qprintpreviewwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintpreviewwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qprintpreviewwidget_dropevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprintpreviewwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qprintpreviewwidget_showevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintpreviewwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qprintpreviewwidget_hideevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintpreviewwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qprintpreviewwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QPrintPreviewWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintpreviewwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qprintpreviewwidget_changeevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintpreviewwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qprintpreviewwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QPrintPreviewWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintpreviewwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qprintpreviewwidget_initpainter_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintpreviewwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qprintpreviewwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintpreviewwidget_sharedpainter_callback) {
            QPainter* callback_ret = qprintpreviewwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QPrintPreviewWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintpreviewwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qprintpreviewwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintpreviewwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qprintpreviewwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QPrintPreviewWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintpreviewwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qprintpreviewwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QPrintPreviewWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprintpreviewwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qprintpreviewwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QPrintPreviewWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintpreviewwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qprintpreviewwidget_timerevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintpreviewwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qprintpreviewwidget_childevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintpreviewwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qprintpreviewwidget_customevent_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintpreviewwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qprintpreviewwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QPrintPreviewWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QPrintPreviewWidget_SuperEvent(QPrintPreviewWidget* self, QEvent* event);
    friend void QPrintPreviewWidget_SuperMousePressEvent(QPrintPreviewWidget* self, QMouseEvent* event);
    friend void QPrintPreviewWidget_SuperMouseReleaseEvent(QPrintPreviewWidget* self, QMouseEvent* event);
    friend void QPrintPreviewWidget_SuperMouseDoubleClickEvent(QPrintPreviewWidget* self, QMouseEvent* event);
    friend void QPrintPreviewWidget_SuperMouseMoveEvent(QPrintPreviewWidget* self, QMouseEvent* event);
    friend void QPrintPreviewWidget_SuperWheelEvent(QPrintPreviewWidget* self, QWheelEvent* event);
    friend void QPrintPreviewWidget_SuperKeyPressEvent(QPrintPreviewWidget* self, QKeyEvent* event);
    friend void QPrintPreviewWidget_SuperKeyReleaseEvent(QPrintPreviewWidget* self, QKeyEvent* event);
    friend void QPrintPreviewWidget_SuperFocusInEvent(QPrintPreviewWidget* self, QFocusEvent* event);
    friend void QPrintPreviewWidget_SuperFocusOutEvent(QPrintPreviewWidget* self, QFocusEvent* event);
    friend void QPrintPreviewWidget_SuperEnterEvent(QPrintPreviewWidget* self, QEnterEvent* event);
    friend void QPrintPreviewWidget_SuperLeaveEvent(QPrintPreviewWidget* self, QEvent* event);
    friend void QPrintPreviewWidget_SuperPaintEvent(QPrintPreviewWidget* self, QPaintEvent* event);
    friend void QPrintPreviewWidget_SuperMoveEvent(QPrintPreviewWidget* self, QMoveEvent* event);
    friend void QPrintPreviewWidget_SuperResizeEvent(QPrintPreviewWidget* self, QResizeEvent* event);
    friend void QPrintPreviewWidget_SuperCloseEvent(QPrintPreviewWidget* self, QCloseEvent* event);
    friend void QPrintPreviewWidget_SuperContextMenuEvent(QPrintPreviewWidget* self, QContextMenuEvent* event);
    friend void QPrintPreviewWidget_SuperTabletEvent(QPrintPreviewWidget* self, QTabletEvent* event);
    friend void QPrintPreviewWidget_SuperActionEvent(QPrintPreviewWidget* self, QActionEvent* event);
    friend void QPrintPreviewWidget_SuperDragEnterEvent(QPrintPreviewWidget* self, QDragEnterEvent* event);
    friend void QPrintPreviewWidget_SuperDragMoveEvent(QPrintPreviewWidget* self, QDragMoveEvent* event);
    friend void QPrintPreviewWidget_SuperDragLeaveEvent(QPrintPreviewWidget* self, QDragLeaveEvent* event);
    friend void QPrintPreviewWidget_SuperDropEvent(QPrintPreviewWidget* self, QDropEvent* event);
    friend void QPrintPreviewWidget_SuperShowEvent(QPrintPreviewWidget* self, QShowEvent* event);
    friend void QPrintPreviewWidget_SuperHideEvent(QPrintPreviewWidget* self, QHideEvent* event);
    friend bool QPrintPreviewWidget_SuperNativeEvent(QPrintPreviewWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QPrintPreviewWidget_SuperChangeEvent(QPrintPreviewWidget* self, QEvent* param1);
    friend int QPrintPreviewWidget_SuperMetric(const QPrintPreviewWidget* self, int param1);
    friend void QPrintPreviewWidget_SuperInitPainter(const QPrintPreviewWidget* self, QPainter* painter);
    friend QPaintDevice* QPrintPreviewWidget_SuperRedirected(const QPrintPreviewWidget* self, QPoint* offset);
    friend QPainter* QPrintPreviewWidget_SuperSharedPainter(const QPrintPreviewWidget* self);
    friend void QPrintPreviewWidget_SuperInputMethodEvent(QPrintPreviewWidget* self, QInputMethodEvent* param1);
    friend bool QPrintPreviewWidget_SuperFocusNextPrevChild(QPrintPreviewWidget* self, bool next);
    friend void QPrintPreviewWidget_SuperTimerEvent(QPrintPreviewWidget* self, QTimerEvent* event);
    friend void QPrintPreviewWidget_SuperChildEvent(QPrintPreviewWidget* self, QChildEvent* event);
    friend void QPrintPreviewWidget_SuperCustomEvent(QPrintPreviewWidget* self, QEvent* event);
    friend void QPrintPreviewWidget_SuperConnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
    friend void QPrintPreviewWidget_SuperDisconnectNotify(QPrintPreviewWidget* self, const QMetaMethod* signal);
};

#endif
