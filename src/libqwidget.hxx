#pragma once
#ifndef LIBQWIDGET_HXX
#define LIBQWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QWidget
class VirtualQWidget final : public QWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QWidget_MetaObject_Callback = QMetaObject* (*)(const QWidget*);
    using QWidget_Metacast_Callback = void* (*)(QWidget*, const char*);
    using QWidget_Metacall_Callback = int (*)(QWidget*, int, int, void**);
    using QWidget_DevType_Callback = int (*)(const QWidget*);
    using QWidget_SetVisible_Callback = void (*)(QWidget*, bool);
    using QWidget_SizeHint_Callback = QSize* (*)(const QWidget*);
    using QWidget_MinimumSizeHint_Callback = QSize* (*)(const QWidget*);
    using QWidget_HeightForWidth_Callback = int (*)(const QWidget*, int);
    using QWidget_HasHeightForWidth_Callback = bool (*)(const QWidget*);
    using QWidget_PaintEngine_Callback = QPaintEngine* (*)(const QWidget*);
    using QWidget_Event_Callback = bool (*)(QWidget*, QEvent*);
    using QWidget_MousePressEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseReleaseEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseDoubleClickEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_MouseMoveEvent_Callback = void (*)(QWidget*, QMouseEvent*);
    using QWidget_WheelEvent_Callback = void (*)(QWidget*, QWheelEvent*);
    using QWidget_KeyPressEvent_Callback = void (*)(QWidget*, QKeyEvent*);
    using QWidget_KeyReleaseEvent_Callback = void (*)(QWidget*, QKeyEvent*);
    using QWidget_FocusInEvent_Callback = void (*)(QWidget*, QFocusEvent*);
    using QWidget_FocusOutEvent_Callback = void (*)(QWidget*, QFocusEvent*);
    using QWidget_EnterEvent_Callback = void (*)(QWidget*, QEnterEvent*);
    using QWidget_LeaveEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_PaintEvent_Callback = void (*)(QWidget*, QPaintEvent*);
    using QWidget_MoveEvent_Callback = void (*)(QWidget*, QMoveEvent*);
    using QWidget_ResizeEvent_Callback = void (*)(QWidget*, QResizeEvent*);
    using QWidget_CloseEvent_Callback = void (*)(QWidget*, QCloseEvent*);
    using QWidget_ContextMenuEvent_Callback = void (*)(QWidget*, QContextMenuEvent*);
    using QWidget_TabletEvent_Callback = void (*)(QWidget*, QTabletEvent*);
    using QWidget_ActionEvent_Callback = void (*)(QWidget*, QActionEvent*);
    using QWidget_DragEnterEvent_Callback = void (*)(QWidget*, QDragEnterEvent*);
    using QWidget_DragMoveEvent_Callback = void (*)(QWidget*, QDragMoveEvent*);
    using QWidget_DragLeaveEvent_Callback = void (*)(QWidget*, QDragLeaveEvent*);
    using QWidget_DropEvent_Callback = void (*)(QWidget*, QDropEvent*);
    using QWidget_ShowEvent_Callback = void (*)(QWidget*, QShowEvent*);
    using QWidget_HideEvent_Callback = void (*)(QWidget*, QHideEvent*);
    using QWidget_NativeEvent_Callback = bool (*)(QWidget*, libqt_string, void*, intptr_t*);
    using QWidget_ChangeEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_Metric_Callback = int (*)(const QWidget*, int);
    using QWidget_InitPainter_Callback = void (*)(const QWidget*, QPainter*);
    using QWidget_Redirected_Callback = QPaintDevice* (*)(const QWidget*, QPoint*);
    using QWidget_SharedPainter_Callback = QPainter* (*)(const QWidget*);
    using QWidget_InputMethodEvent_Callback = void (*)(QWidget*, QInputMethodEvent*);
    using QWidget_InputMethodQuery_Callback = QVariant* (*)(const QWidget*, int);
    using QWidget_FocusNextPrevChild_Callback = bool (*)(QWidget*, bool);
    using QWidget_EventFilter_Callback = bool (*)(QWidget*, QObject*, QEvent*);
    using QWidget_TimerEvent_Callback = void (*)(QWidget*, QTimerEvent*);
    using QWidget_ChildEvent_Callback = void (*)(QWidget*, QChildEvent*);
    using QWidget_CustomEvent_Callback = void (*)(QWidget*, QEvent*);
    using QWidget_ConnectNotify_Callback = void (*)(QWidget*, QMetaMethod*);
    using QWidget_DisconnectNotify_Callback = void (*)(QWidget*, QMetaMethod*);
    using QWidget::create;
    using QWidget::destroy;
    using QWidget::focusNextChild;
    using QWidget::focusPreviousChild;
    using QWidget::getDecodedMetricF;
    using QWidget::isSignalConnected;
    using QWidget::receivers;
    using QWidget::sender;
    using QWidget::senderSignalIndex;
    using QWidget::updateMicroFocus;

    // Instance callback storage
    QWidget_MetaObject_Callback qwidget_metaobject_callback = nullptr;
    QWidget_Metacast_Callback qwidget_metacast_callback = nullptr;
    QWidget_Metacall_Callback qwidget_metacall_callback = nullptr;
    QWidget_DevType_Callback qwidget_devtype_callback = nullptr;
    QWidget_SetVisible_Callback qwidget_setvisible_callback = nullptr;
    QWidget_SizeHint_Callback qwidget_sizehint_callback = nullptr;
    QWidget_MinimumSizeHint_Callback qwidget_minimumsizehint_callback = nullptr;
    QWidget_HeightForWidth_Callback qwidget_heightforwidth_callback = nullptr;
    QWidget_HasHeightForWidth_Callback qwidget_hasheightforwidth_callback = nullptr;
    QWidget_PaintEngine_Callback qwidget_paintengine_callback = nullptr;
    QWidget_Event_Callback qwidget_event_callback = nullptr;
    QWidget_MousePressEvent_Callback qwidget_mousepressevent_callback = nullptr;
    QWidget_MouseReleaseEvent_Callback qwidget_mousereleaseevent_callback = nullptr;
    QWidget_MouseDoubleClickEvent_Callback qwidget_mousedoubleclickevent_callback = nullptr;
    QWidget_MouseMoveEvent_Callback qwidget_mousemoveevent_callback = nullptr;
    QWidget_WheelEvent_Callback qwidget_wheelevent_callback = nullptr;
    QWidget_KeyPressEvent_Callback qwidget_keypressevent_callback = nullptr;
    QWidget_KeyReleaseEvent_Callback qwidget_keyreleaseevent_callback = nullptr;
    QWidget_FocusInEvent_Callback qwidget_focusinevent_callback = nullptr;
    QWidget_FocusOutEvent_Callback qwidget_focusoutevent_callback = nullptr;
    QWidget_EnterEvent_Callback qwidget_enterevent_callback = nullptr;
    QWidget_LeaveEvent_Callback qwidget_leaveevent_callback = nullptr;
    QWidget_PaintEvent_Callback qwidget_paintevent_callback = nullptr;
    QWidget_MoveEvent_Callback qwidget_moveevent_callback = nullptr;
    QWidget_ResizeEvent_Callback qwidget_resizeevent_callback = nullptr;
    QWidget_CloseEvent_Callback qwidget_closeevent_callback = nullptr;
    QWidget_ContextMenuEvent_Callback qwidget_contextmenuevent_callback = nullptr;
    QWidget_TabletEvent_Callback qwidget_tabletevent_callback = nullptr;
    QWidget_ActionEvent_Callback qwidget_actionevent_callback = nullptr;
    QWidget_DragEnterEvent_Callback qwidget_dragenterevent_callback = nullptr;
    QWidget_DragMoveEvent_Callback qwidget_dragmoveevent_callback = nullptr;
    QWidget_DragLeaveEvent_Callback qwidget_dragleaveevent_callback = nullptr;
    QWidget_DropEvent_Callback qwidget_dropevent_callback = nullptr;
    QWidget_ShowEvent_Callback qwidget_showevent_callback = nullptr;
    QWidget_HideEvent_Callback qwidget_hideevent_callback = nullptr;
    QWidget_NativeEvent_Callback qwidget_nativeevent_callback = nullptr;
    QWidget_ChangeEvent_Callback qwidget_changeevent_callback = nullptr;
    QWidget_Metric_Callback qwidget_metric_callback = nullptr;
    QWidget_InitPainter_Callback qwidget_initpainter_callback = nullptr;
    QWidget_Redirected_Callback qwidget_redirected_callback = nullptr;
    QWidget_SharedPainter_Callback qwidget_sharedpainter_callback = nullptr;
    QWidget_InputMethodEvent_Callback qwidget_inputmethodevent_callback = nullptr;
    QWidget_InputMethodQuery_Callback qwidget_inputmethodquery_callback = nullptr;
    QWidget_FocusNextPrevChild_Callback qwidget_focusnextprevchild_callback = nullptr;
    QWidget_EventFilter_Callback qwidget_eventfilter_callback = nullptr;
    QWidget_TimerEvent_Callback qwidget_timerevent_callback = nullptr;
    QWidget_ChildEvent_Callback qwidget_childevent_callback = nullptr;
    QWidget_CustomEvent_Callback qwidget_customevent_callback = nullptr;
    QWidget_ConnectNotify_Callback qwidget_connectnotify_callback = nullptr;
    QWidget_DisconnectNotify_Callback qwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QWidget {
        using QWidget::actionEvent;
        using QWidget::changeEvent;
        using QWidget::childEvent;
        using QWidget::closeEvent;
        using QWidget::connectNotify;
        using QWidget::contextMenuEvent;
        using QWidget::customEvent;
        using QWidget::disconnectNotify;
        using QWidget::dragEnterEvent;
        using QWidget::dragLeaveEvent;
        using QWidget::dragMoveEvent;
        using QWidget::dropEvent;
        using QWidget::enterEvent;
        using QWidget::event;
        using QWidget::focusInEvent;
        using QWidget::focusNextPrevChild;
        using QWidget::focusOutEvent;
        using QWidget::hideEvent;
        using QWidget::initPainter;
        using QWidget::inputMethodEvent;
        using QWidget::keyPressEvent;
        using QWidget::keyReleaseEvent;
        using QWidget::leaveEvent;
        using QWidget::metric;
        using QWidget::mouseDoubleClickEvent;
        using QWidget::mouseMoveEvent;
        using QWidget::mousePressEvent;
        using QWidget::mouseReleaseEvent;
        using QWidget::moveEvent;
        using QWidget::nativeEvent;
        using QWidget::paintEvent;
        using QWidget::redirected;
        using QWidget::resizeEvent;
        using QWidget::sharedPainter;
        using QWidget::showEvent;
        using QWidget::tabletEvent;
        using QWidget::timerEvent;
        using QWidget::wheelEvent;
    };

    VirtualQWidget(QWidget* parent) : QWidget(parent) {};
    VirtualQWidget() : QWidget() {};
    VirtualQWidget(QWidget* parent, Qt::WindowFlags f) : QWidget(parent, f) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qwidget_metaobject_callback) {
            QMetaObject* callback_ret = qwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qwidget_devtype_callback) {
            int callback_ret = qwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qwidget_setvisible_callback) {
            bool cbval1 = visible;
            qwidget_setvisible_callback(this, cbval1);
            return;
        }
        QWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qwidget_sizehint_callback) {
            QSize* callback_ret = qwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qwidget_minimumsizehint_callback) {
            QSize* callback_ret = qwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qwidget_hasheightforwidth_callback) {
            bool callback_ret = qwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qwidget_enterevent_callback(this, cbval1);
            return;
        }
        QWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qwidget_paintevent_callback(this, cbval1);
            return;
        }
        QWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qwidget_moveevent_callback(this, cbval1);
            return;
        }
        QWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qwidget_closeevent_callback(this, cbval1);
            return;
        }
        QWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qwidget_actionevent_callback(this, cbval1);
            return;
        }
        QWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qwidget_dropevent_callback(this, cbval1);
            return;
        }
        QWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qwidget_showevent_callback(this, cbval1);
            return;
        }
        QWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qwidget_hideevent_callback(this, cbval1);
            return;
        }
        QWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qwidget_changeevent_callback(this, cbval1);
            return;
        }
        QWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qwidget_initpainter_callback(this, cbval1);
            return;
        }
        QWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qwidget_sharedpainter_callback) {
            QPainter* callback_ret = qwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qwidget_timerevent_callback(this, cbval1);
            return;
        }
        QWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qwidget_childevent_callback(this, cbval1);
            return;
        }
        QWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qwidget_customevent_callback(this, cbval1);
            return;
        }
        QWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QWidget_SuperEvent(QWidget* self, QEvent* event);
    friend void QWidget_SuperMousePressEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_SuperMouseReleaseEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_SuperMouseDoubleClickEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_SuperMouseMoveEvent(QWidget* self, QMouseEvent* event);
    friend void QWidget_SuperWheelEvent(QWidget* self, QWheelEvent* event);
    friend void QWidget_SuperKeyPressEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_SuperKeyReleaseEvent(QWidget* self, QKeyEvent* event);
    friend void QWidget_SuperFocusInEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_SuperFocusOutEvent(QWidget* self, QFocusEvent* event);
    friend void QWidget_SuperEnterEvent(QWidget* self, QEnterEvent* event);
    friend void QWidget_SuperLeaveEvent(QWidget* self, QEvent* event);
    friend void QWidget_SuperPaintEvent(QWidget* self, QPaintEvent* event);
    friend void QWidget_SuperMoveEvent(QWidget* self, QMoveEvent* event);
    friend void QWidget_SuperResizeEvent(QWidget* self, QResizeEvent* event);
    friend void QWidget_SuperCloseEvent(QWidget* self, QCloseEvent* event);
    friend void QWidget_SuperContextMenuEvent(QWidget* self, QContextMenuEvent* event);
    friend void QWidget_SuperTabletEvent(QWidget* self, QTabletEvent* event);
    friend void QWidget_SuperActionEvent(QWidget* self, QActionEvent* event);
    friend void QWidget_SuperDragEnterEvent(QWidget* self, QDragEnterEvent* event);
    friend void QWidget_SuperDragMoveEvent(QWidget* self, QDragMoveEvent* event);
    friend void QWidget_SuperDragLeaveEvent(QWidget* self, QDragLeaveEvent* event);
    friend void QWidget_SuperDropEvent(QWidget* self, QDropEvent* event);
    friend void QWidget_SuperShowEvent(QWidget* self, QShowEvent* event);
    friend void QWidget_SuperHideEvent(QWidget* self, QHideEvent* event);
    friend bool QWidget_SuperNativeEvent(QWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QWidget_SuperChangeEvent(QWidget* self, QEvent* param1);
    friend int QWidget_SuperMetric(const QWidget* self, int param1);
    friend void QWidget_SuperInitPainter(const QWidget* self, QPainter* painter);
    friend QPaintDevice* QWidget_SuperRedirected(const QWidget* self, QPoint* offset);
    friend QPainter* QWidget_SuperSharedPainter(const QWidget* self);
    friend void QWidget_SuperInputMethodEvent(QWidget* self, QInputMethodEvent* param1);
    friend bool QWidget_SuperFocusNextPrevChild(QWidget* self, bool next);
    friend void QWidget_SuperTimerEvent(QWidget* self, QTimerEvent* event);
    friend void QWidget_SuperChildEvent(QWidget* self, QChildEvent* event);
    friend void QWidget_SuperCustomEvent(QWidget* self, QEvent* event);
    friend void QWidget_SuperConnectNotify(QWidget* self, const QMetaMethod* signal);
    friend void QWidget_SuperDisconnectNotify(QWidget* self, const QMetaMethod* signal);
};

#endif
