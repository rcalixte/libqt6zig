#pragma once
#ifndef LIBQCALENDARWIDGET_HXX
#define LIBQCALENDARWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCalendarWidget
class VirtualQCalendarWidget final : public QCalendarWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCalendarWidget_MetaObject_Callback = QMetaObject* (*)(const QCalendarWidget*);
    using QCalendarWidget_Metacast_Callback = void* (*)(QCalendarWidget*, const char*);
    using QCalendarWidget_Metacall_Callback = int (*)(QCalendarWidget*, int, int, void**);
    using QCalendarWidget_SizeHint_Callback = QSize* (*)(const QCalendarWidget*);
    using QCalendarWidget_MinimumSizeHint_Callback = QSize* (*)(const QCalendarWidget*);
    using QCalendarWidget_Event_Callback = bool (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_EventFilter_Callback = bool (*)(QCalendarWidget*, QObject*, QEvent*);
    using QCalendarWidget_MousePressEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_ResizeEvent_Callback = void (*)(QCalendarWidget*, QResizeEvent*);
    using QCalendarWidget_KeyPressEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_PaintCell_Callback = void (*)(const QCalendarWidget*, QPainter*, QRect*, QDate*);
    using QCalendarWidget_DevType_Callback = int (*)(const QCalendarWidget*);
    using QCalendarWidget_SetVisible_Callback = void (*)(QCalendarWidget*, bool);
    using QCalendarWidget_HeightForWidth_Callback = int (*)(const QCalendarWidget*, int);
    using QCalendarWidget_HasHeightForWidth_Callback = bool (*)(const QCalendarWidget*);
    using QCalendarWidget_PaintEngine_Callback = QPaintEngine* (*)(const QCalendarWidget*);
    using QCalendarWidget_MouseReleaseEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseDoubleClickEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseMoveEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_WheelEvent_Callback = void (*)(QCalendarWidget*, QWheelEvent*);
    using QCalendarWidget_KeyReleaseEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_FocusInEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_FocusOutEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_EnterEvent_Callback = void (*)(QCalendarWidget*, QEnterEvent*);
    using QCalendarWidget_LeaveEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_PaintEvent_Callback = void (*)(QCalendarWidget*, QPaintEvent*);
    using QCalendarWidget_MoveEvent_Callback = void (*)(QCalendarWidget*, QMoveEvent*);
    using QCalendarWidget_CloseEvent_Callback = void (*)(QCalendarWidget*, QCloseEvent*);
    using QCalendarWidget_ContextMenuEvent_Callback = void (*)(QCalendarWidget*, QContextMenuEvent*);
    using QCalendarWidget_TabletEvent_Callback = void (*)(QCalendarWidget*, QTabletEvent*);
    using QCalendarWidget_ActionEvent_Callback = void (*)(QCalendarWidget*, QActionEvent*);
    using QCalendarWidget_DragEnterEvent_Callback = void (*)(QCalendarWidget*, QDragEnterEvent*);
    using QCalendarWidget_DragMoveEvent_Callback = void (*)(QCalendarWidget*, QDragMoveEvent*);
    using QCalendarWidget_DragLeaveEvent_Callback = void (*)(QCalendarWidget*, QDragLeaveEvent*);
    using QCalendarWidget_DropEvent_Callback = void (*)(QCalendarWidget*, QDropEvent*);
    using QCalendarWidget_ShowEvent_Callback = void (*)(QCalendarWidget*, QShowEvent*);
    using QCalendarWidget_HideEvent_Callback = void (*)(QCalendarWidget*, QHideEvent*);
    using QCalendarWidget_NativeEvent_Callback = bool (*)(QCalendarWidget*, libqt_string, void*, intptr_t*);
    using QCalendarWidget_ChangeEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_Metric_Callback = int (*)(const QCalendarWidget*, int);
    using QCalendarWidget_InitPainter_Callback = void (*)(const QCalendarWidget*, QPainter*);
    using QCalendarWidget_Redirected_Callback = QPaintDevice* (*)(const QCalendarWidget*, QPoint*);
    using QCalendarWidget_SharedPainter_Callback = QPainter* (*)(const QCalendarWidget*);
    using QCalendarWidget_InputMethodEvent_Callback = void (*)(QCalendarWidget*, QInputMethodEvent*);
    using QCalendarWidget_InputMethodQuery_Callback = QVariant* (*)(const QCalendarWidget*, int);
    using QCalendarWidget_FocusNextPrevChild_Callback = bool (*)(QCalendarWidget*, bool);
    using QCalendarWidget_TimerEvent_Callback = void (*)(QCalendarWidget*, QTimerEvent*);
    using QCalendarWidget_ChildEvent_Callback = void (*)(QCalendarWidget*, QChildEvent*);
    using QCalendarWidget_CustomEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_ConnectNotify_Callback = void (*)(QCalendarWidget*, QMetaMethod*);
    using QCalendarWidget_DisconnectNotify_Callback = void (*)(QCalendarWidget*, QMetaMethod*);
    using QCalendarWidget::create;
    using QCalendarWidget::destroy;
    using QCalendarWidget::focusNextChild;
    using QCalendarWidget::focusPreviousChild;
    using QCalendarWidget::getDecodedMetricF;
    using QCalendarWidget::isSignalConnected;
    using QCalendarWidget::receivers;
    using QCalendarWidget::sender;
    using QCalendarWidget::senderSignalIndex;
    using QCalendarWidget::updateCell;
    using QCalendarWidget::updateCells;
    using QCalendarWidget::updateMicroFocus;

    // Instance callback storage
    QCalendarWidget_MetaObject_Callback qcalendarwidget_metaobject_callback = nullptr;
    QCalendarWidget_Metacast_Callback qcalendarwidget_metacast_callback = nullptr;
    QCalendarWidget_Metacall_Callback qcalendarwidget_metacall_callback = nullptr;
    QCalendarWidget_SizeHint_Callback qcalendarwidget_sizehint_callback = nullptr;
    QCalendarWidget_MinimumSizeHint_Callback qcalendarwidget_minimumsizehint_callback = nullptr;
    QCalendarWidget_Event_Callback qcalendarwidget_event_callback = nullptr;
    QCalendarWidget_EventFilter_Callback qcalendarwidget_eventfilter_callback = nullptr;
    QCalendarWidget_MousePressEvent_Callback qcalendarwidget_mousepressevent_callback = nullptr;
    QCalendarWidget_ResizeEvent_Callback qcalendarwidget_resizeevent_callback = nullptr;
    QCalendarWidget_KeyPressEvent_Callback qcalendarwidget_keypressevent_callback = nullptr;
    QCalendarWidget_PaintCell_Callback qcalendarwidget_paintcell_callback = nullptr;
    QCalendarWidget_DevType_Callback qcalendarwidget_devtype_callback = nullptr;
    QCalendarWidget_SetVisible_Callback qcalendarwidget_setvisible_callback = nullptr;
    QCalendarWidget_HeightForWidth_Callback qcalendarwidget_heightforwidth_callback = nullptr;
    QCalendarWidget_HasHeightForWidth_Callback qcalendarwidget_hasheightforwidth_callback = nullptr;
    QCalendarWidget_PaintEngine_Callback qcalendarwidget_paintengine_callback = nullptr;
    QCalendarWidget_MouseReleaseEvent_Callback qcalendarwidget_mousereleaseevent_callback = nullptr;
    QCalendarWidget_MouseDoubleClickEvent_Callback qcalendarwidget_mousedoubleclickevent_callback = nullptr;
    QCalendarWidget_MouseMoveEvent_Callback qcalendarwidget_mousemoveevent_callback = nullptr;
    QCalendarWidget_WheelEvent_Callback qcalendarwidget_wheelevent_callback = nullptr;
    QCalendarWidget_KeyReleaseEvent_Callback qcalendarwidget_keyreleaseevent_callback = nullptr;
    QCalendarWidget_FocusInEvent_Callback qcalendarwidget_focusinevent_callback = nullptr;
    QCalendarWidget_FocusOutEvent_Callback qcalendarwidget_focusoutevent_callback = nullptr;
    QCalendarWidget_EnterEvent_Callback qcalendarwidget_enterevent_callback = nullptr;
    QCalendarWidget_LeaveEvent_Callback qcalendarwidget_leaveevent_callback = nullptr;
    QCalendarWidget_PaintEvent_Callback qcalendarwidget_paintevent_callback = nullptr;
    QCalendarWidget_MoveEvent_Callback qcalendarwidget_moveevent_callback = nullptr;
    QCalendarWidget_CloseEvent_Callback qcalendarwidget_closeevent_callback = nullptr;
    QCalendarWidget_ContextMenuEvent_Callback qcalendarwidget_contextmenuevent_callback = nullptr;
    QCalendarWidget_TabletEvent_Callback qcalendarwidget_tabletevent_callback = nullptr;
    QCalendarWidget_ActionEvent_Callback qcalendarwidget_actionevent_callback = nullptr;
    QCalendarWidget_DragEnterEvent_Callback qcalendarwidget_dragenterevent_callback = nullptr;
    QCalendarWidget_DragMoveEvent_Callback qcalendarwidget_dragmoveevent_callback = nullptr;
    QCalendarWidget_DragLeaveEvent_Callback qcalendarwidget_dragleaveevent_callback = nullptr;
    QCalendarWidget_DropEvent_Callback qcalendarwidget_dropevent_callback = nullptr;
    QCalendarWidget_ShowEvent_Callback qcalendarwidget_showevent_callback = nullptr;
    QCalendarWidget_HideEvent_Callback qcalendarwidget_hideevent_callback = nullptr;
    QCalendarWidget_NativeEvent_Callback qcalendarwidget_nativeevent_callback = nullptr;
    QCalendarWidget_ChangeEvent_Callback qcalendarwidget_changeevent_callback = nullptr;
    QCalendarWidget_Metric_Callback qcalendarwidget_metric_callback = nullptr;
    QCalendarWidget_InitPainter_Callback qcalendarwidget_initpainter_callback = nullptr;
    QCalendarWidget_Redirected_Callback qcalendarwidget_redirected_callback = nullptr;
    QCalendarWidget_SharedPainter_Callback qcalendarwidget_sharedpainter_callback = nullptr;
    QCalendarWidget_InputMethodEvent_Callback qcalendarwidget_inputmethodevent_callback = nullptr;
    QCalendarWidget_InputMethodQuery_Callback qcalendarwidget_inputmethodquery_callback = nullptr;
    QCalendarWidget_FocusNextPrevChild_Callback qcalendarwidget_focusnextprevchild_callback = nullptr;
    QCalendarWidget_TimerEvent_Callback qcalendarwidget_timerevent_callback = nullptr;
    QCalendarWidget_ChildEvent_Callback qcalendarwidget_childevent_callback = nullptr;
    QCalendarWidget_CustomEvent_Callback qcalendarwidget_customevent_callback = nullptr;
    QCalendarWidget_ConnectNotify_Callback qcalendarwidget_connectnotify_callback = nullptr;
    QCalendarWidget_DisconnectNotify_Callback qcalendarwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCalendarWidget {
        using QCalendarWidget::actionEvent;
        using QCalendarWidget::changeEvent;
        using QCalendarWidget::childEvent;
        using QCalendarWidget::closeEvent;
        using QCalendarWidget::connectNotify;
        using QCalendarWidget::contextMenuEvent;
        using QCalendarWidget::customEvent;
        using QCalendarWidget::disconnectNotify;
        using QCalendarWidget::dragEnterEvent;
        using QCalendarWidget::dragLeaveEvent;
        using QCalendarWidget::dragMoveEvent;
        using QCalendarWidget::dropEvent;
        using QCalendarWidget::enterEvent;
        using QCalendarWidget::event;
        using QCalendarWidget::eventFilter;
        using QCalendarWidget::focusInEvent;
        using QCalendarWidget::focusNextPrevChild;
        using QCalendarWidget::focusOutEvent;
        using QCalendarWidget::hideEvent;
        using QCalendarWidget::initPainter;
        using QCalendarWidget::inputMethodEvent;
        using QCalendarWidget::keyPressEvent;
        using QCalendarWidget::keyReleaseEvent;
        using QCalendarWidget::leaveEvent;
        using QCalendarWidget::metric;
        using QCalendarWidget::mouseDoubleClickEvent;
        using QCalendarWidget::mouseMoveEvent;
        using QCalendarWidget::mousePressEvent;
        using QCalendarWidget::mouseReleaseEvent;
        using QCalendarWidget::moveEvent;
        using QCalendarWidget::nativeEvent;
        using QCalendarWidget::paintCell;
        using QCalendarWidget::paintEvent;
        using QCalendarWidget::redirected;
        using QCalendarWidget::resizeEvent;
        using QCalendarWidget::sharedPainter;
        using QCalendarWidget::showEvent;
        using QCalendarWidget::tabletEvent;
        using QCalendarWidget::timerEvent;
        using QCalendarWidget::wheelEvent;
    };

    VirtualQCalendarWidget(QWidget* parent) : QCalendarWidget(parent) {};
    VirtualQCalendarWidget() : QCalendarWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcalendarwidget_metaobject_callback) {
            QMetaObject* callback_ret = qcalendarwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QCalendarWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcalendarwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcalendarwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCalendarWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcalendarwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcalendarwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCalendarWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcalendarwidget_sizehint_callback) {
            QSize* callback_ret = qcalendarwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCalendarWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcalendarwidget_minimumsizehint_callback) {
            QSize* callback_ret = qcalendarwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCalendarWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcalendarwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcalendarwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCalendarWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcalendarwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcalendarwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCalendarWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qcalendarwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcalendarwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qcalendarwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qcalendarwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
        if (qcalendarwidget_paintcell_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            QDate* cbval3 = new QDate(date);
            qcalendarwidget_paintcell_callback(this, cbval1, cbval2, cbval3);
            return;
        }
        QCalendarWidget::paintCell(painter, rect, date);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcalendarwidget_devtype_callback) {
            int callback_ret = qcalendarwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QCalendarWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcalendarwidget_setvisible_callback) {
            bool cbval1 = visible;
            qcalendarwidget_setvisible_callback(this, cbval1);
            return;
        }
        QCalendarWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcalendarwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qcalendarwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCalendarWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcalendarwidget_hasheightforwidth_callback) {
            bool callback_ret = qcalendarwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QCalendarWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcalendarwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qcalendarwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QCalendarWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qcalendarwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qcalendarwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qcalendarwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcalendarwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qcalendarwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qcalendarwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qcalendarwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qcalendarwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcalendarwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qcalendarwidget_enterevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcalendarwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qcalendarwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcalendarwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qcalendarwidget_paintevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcalendarwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qcalendarwidget_moveevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcalendarwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qcalendarwidget_closeevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcalendarwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qcalendarwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcalendarwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qcalendarwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcalendarwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qcalendarwidget_actionevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcalendarwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qcalendarwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcalendarwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qcalendarwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcalendarwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qcalendarwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcalendarwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qcalendarwidget_dropevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcalendarwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qcalendarwidget_showevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcalendarwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qcalendarwidget_hideevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcalendarwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qcalendarwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QCalendarWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qcalendarwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qcalendarwidget_changeevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcalendarwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qcalendarwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QCalendarWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcalendarwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qcalendarwidget_initpainter_callback(this, cbval1);
            return;
        }
        QCalendarWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcalendarwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qcalendarwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QCalendarWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcalendarwidget_sharedpainter_callback) {
            QPainter* callback_ret = qcalendarwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QCalendarWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcalendarwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qcalendarwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcalendarwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qcalendarwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCalendarWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcalendarwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qcalendarwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QCalendarWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcalendarwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcalendarwidget_timerevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcalendarwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcalendarwidget_childevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcalendarwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qcalendarwidget_customevent_callback(this, cbval1);
            return;
        }
        QCalendarWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcalendarwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QCalendarWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcalendarwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCalendarWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QCalendarWidget_SuperEvent(QCalendarWidget* self, QEvent* event);
    friend bool QCalendarWidget_SuperEventFilter(QCalendarWidget* self, QObject* watched, QEvent* event);
    friend void QCalendarWidget_SuperMousePressEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_SuperResizeEvent(QCalendarWidget* self, QResizeEvent* event);
    friend void QCalendarWidget_SuperKeyPressEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_SuperPaintCell(const QCalendarWidget* self, QPainter* painter, const QRect* rect, QDate* date);
    friend void QCalendarWidget_SuperMouseReleaseEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_SuperMouseDoubleClickEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_SuperMouseMoveEvent(QCalendarWidget* self, QMouseEvent* event);
    friend void QCalendarWidget_SuperWheelEvent(QCalendarWidget* self, QWheelEvent* event);
    friend void QCalendarWidget_SuperKeyReleaseEvent(QCalendarWidget* self, QKeyEvent* event);
    friend void QCalendarWidget_SuperFocusInEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_SuperFocusOutEvent(QCalendarWidget* self, QFocusEvent* event);
    friend void QCalendarWidget_SuperEnterEvent(QCalendarWidget* self, QEnterEvent* event);
    friend void QCalendarWidget_SuperLeaveEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_SuperPaintEvent(QCalendarWidget* self, QPaintEvent* event);
    friend void QCalendarWidget_SuperMoveEvent(QCalendarWidget* self, QMoveEvent* event);
    friend void QCalendarWidget_SuperCloseEvent(QCalendarWidget* self, QCloseEvent* event);
    friend void QCalendarWidget_SuperContextMenuEvent(QCalendarWidget* self, QContextMenuEvent* event);
    friend void QCalendarWidget_SuperTabletEvent(QCalendarWidget* self, QTabletEvent* event);
    friend void QCalendarWidget_SuperActionEvent(QCalendarWidget* self, QActionEvent* event);
    friend void QCalendarWidget_SuperDragEnterEvent(QCalendarWidget* self, QDragEnterEvent* event);
    friend void QCalendarWidget_SuperDragMoveEvent(QCalendarWidget* self, QDragMoveEvent* event);
    friend void QCalendarWidget_SuperDragLeaveEvent(QCalendarWidget* self, QDragLeaveEvent* event);
    friend void QCalendarWidget_SuperDropEvent(QCalendarWidget* self, QDropEvent* event);
    friend void QCalendarWidget_SuperShowEvent(QCalendarWidget* self, QShowEvent* event);
    friend void QCalendarWidget_SuperHideEvent(QCalendarWidget* self, QHideEvent* event);
    friend bool QCalendarWidget_SuperNativeEvent(QCalendarWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QCalendarWidget_SuperChangeEvent(QCalendarWidget* self, QEvent* param1);
    friend int QCalendarWidget_SuperMetric(const QCalendarWidget* self, int param1);
    friend void QCalendarWidget_SuperInitPainter(const QCalendarWidget* self, QPainter* painter);
    friend QPaintDevice* QCalendarWidget_SuperRedirected(const QCalendarWidget* self, QPoint* offset);
    friend QPainter* QCalendarWidget_SuperSharedPainter(const QCalendarWidget* self);
    friend void QCalendarWidget_SuperInputMethodEvent(QCalendarWidget* self, QInputMethodEvent* param1);
    friend bool QCalendarWidget_SuperFocusNextPrevChild(QCalendarWidget* self, bool next);
    friend void QCalendarWidget_SuperTimerEvent(QCalendarWidget* self, QTimerEvent* event);
    friend void QCalendarWidget_SuperChildEvent(QCalendarWidget* self, QChildEvent* event);
    friend void QCalendarWidget_SuperCustomEvent(QCalendarWidget* self, QEvent* event);
    friend void QCalendarWidget_SuperConnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
    friend void QCalendarWidget_SuperDisconnectNotify(QCalendarWidget* self, const QMetaMethod* signal);
};

#endif
