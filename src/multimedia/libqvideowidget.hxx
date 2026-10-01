#pragma once
#ifndef MULTIMEDIA_LIBQVIDEOWIDGET_HXX
#define MULTIMEDIA_LIBQVIDEOWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoWidget
class VirtualQVideoWidget final : public QVideoWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVideoWidget_MetaObject_Callback = QMetaObject* (*)(const QVideoWidget*);
    using QVideoWidget_Metacast_Callback = void* (*)(QVideoWidget*, const char*);
    using QVideoWidget_Metacall_Callback = int (*)(QVideoWidget*, int, int, void**);
    using QVideoWidget_SizeHint_Callback = QSize* (*)(const QVideoWidget*);
    using QVideoWidget_Event_Callback = bool (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_ShowEvent_Callback = void (*)(QVideoWidget*, QShowEvent*);
    using QVideoWidget_HideEvent_Callback = void (*)(QVideoWidget*, QHideEvent*);
    using QVideoWidget_ResizeEvent_Callback = void (*)(QVideoWidget*, QResizeEvent*);
    using QVideoWidget_MoveEvent_Callback = void (*)(QVideoWidget*, QMoveEvent*);
    using QVideoWidget_DevType_Callback = int (*)(const QVideoWidget*);
    using QVideoWidget_SetVisible_Callback = void (*)(QVideoWidget*, bool);
    using QVideoWidget_MinimumSizeHint_Callback = QSize* (*)(const QVideoWidget*);
    using QVideoWidget_HeightForWidth_Callback = int (*)(const QVideoWidget*, int);
    using QVideoWidget_HasHeightForWidth_Callback = bool (*)(const QVideoWidget*);
    using QVideoWidget_PaintEngine_Callback = QPaintEngine* (*)(const QVideoWidget*);
    using QVideoWidget_MousePressEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseReleaseEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseDoubleClickEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseMoveEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_WheelEvent_Callback = void (*)(QVideoWidget*, QWheelEvent*);
    using QVideoWidget_KeyPressEvent_Callback = void (*)(QVideoWidget*, QKeyEvent*);
    using QVideoWidget_KeyReleaseEvent_Callback = void (*)(QVideoWidget*, QKeyEvent*);
    using QVideoWidget_FocusInEvent_Callback = void (*)(QVideoWidget*, QFocusEvent*);
    using QVideoWidget_FocusOutEvent_Callback = void (*)(QVideoWidget*, QFocusEvent*);
    using QVideoWidget_EnterEvent_Callback = void (*)(QVideoWidget*, QEnterEvent*);
    using QVideoWidget_LeaveEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_PaintEvent_Callback = void (*)(QVideoWidget*, QPaintEvent*);
    using QVideoWidget_CloseEvent_Callback = void (*)(QVideoWidget*, QCloseEvent*);
    using QVideoWidget_ContextMenuEvent_Callback = void (*)(QVideoWidget*, QContextMenuEvent*);
    using QVideoWidget_TabletEvent_Callback = void (*)(QVideoWidget*, QTabletEvent*);
    using QVideoWidget_ActionEvent_Callback = void (*)(QVideoWidget*, QActionEvent*);
    using QVideoWidget_DragEnterEvent_Callback = void (*)(QVideoWidget*, QDragEnterEvent*);
    using QVideoWidget_DragMoveEvent_Callback = void (*)(QVideoWidget*, QDragMoveEvent*);
    using QVideoWidget_DragLeaveEvent_Callback = void (*)(QVideoWidget*, QDragLeaveEvent*);
    using QVideoWidget_DropEvent_Callback = void (*)(QVideoWidget*, QDropEvent*);
    using QVideoWidget_NativeEvent_Callback = bool (*)(QVideoWidget*, libqt_string, void*, intptr_t*);
    using QVideoWidget_ChangeEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_Metric_Callback = int (*)(const QVideoWidget*, int);
    using QVideoWidget_InitPainter_Callback = void (*)(const QVideoWidget*, QPainter*);
    using QVideoWidget_Redirected_Callback = QPaintDevice* (*)(const QVideoWidget*, QPoint*);
    using QVideoWidget_SharedPainter_Callback = QPainter* (*)(const QVideoWidget*);
    using QVideoWidget_InputMethodEvent_Callback = void (*)(QVideoWidget*, QInputMethodEvent*);
    using QVideoWidget_InputMethodQuery_Callback = QVariant* (*)(const QVideoWidget*, int);
    using QVideoWidget_FocusNextPrevChild_Callback = bool (*)(QVideoWidget*, bool);
    using QVideoWidget_EventFilter_Callback = bool (*)(QVideoWidget*, QObject*, QEvent*);
    using QVideoWidget_TimerEvent_Callback = void (*)(QVideoWidget*, QTimerEvent*);
    using QVideoWidget_ChildEvent_Callback = void (*)(QVideoWidget*, QChildEvent*);
    using QVideoWidget_CustomEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_ConnectNotify_Callback = void (*)(QVideoWidget*, QMetaMethod*);
    using QVideoWidget_DisconnectNotify_Callback = void (*)(QVideoWidget*, QMetaMethod*);
    using QVideoWidget::create;
    using QVideoWidget::destroy;
    using QVideoWidget::focusNextChild;
    using QVideoWidget::focusPreviousChild;
    using QVideoWidget::getDecodedMetricF;
    using QVideoWidget::isSignalConnected;
    using QVideoWidget::receivers;
    using QVideoWidget::sender;
    using QVideoWidget::senderSignalIndex;
    using QVideoWidget::updateMicroFocus;

    // Instance callback storage
    QVideoWidget_MetaObject_Callback qvideowidget_metaobject_callback = nullptr;
    QVideoWidget_Metacast_Callback qvideowidget_metacast_callback = nullptr;
    QVideoWidget_Metacall_Callback qvideowidget_metacall_callback = nullptr;
    QVideoWidget_SizeHint_Callback qvideowidget_sizehint_callback = nullptr;
    QVideoWidget_Event_Callback qvideowidget_event_callback = nullptr;
    QVideoWidget_ShowEvent_Callback qvideowidget_showevent_callback = nullptr;
    QVideoWidget_HideEvent_Callback qvideowidget_hideevent_callback = nullptr;
    QVideoWidget_ResizeEvent_Callback qvideowidget_resizeevent_callback = nullptr;
    QVideoWidget_MoveEvent_Callback qvideowidget_moveevent_callback = nullptr;
    QVideoWidget_DevType_Callback qvideowidget_devtype_callback = nullptr;
    QVideoWidget_SetVisible_Callback qvideowidget_setvisible_callback = nullptr;
    QVideoWidget_MinimumSizeHint_Callback qvideowidget_minimumsizehint_callback = nullptr;
    QVideoWidget_HeightForWidth_Callback qvideowidget_heightforwidth_callback = nullptr;
    QVideoWidget_HasHeightForWidth_Callback qvideowidget_hasheightforwidth_callback = nullptr;
    QVideoWidget_PaintEngine_Callback qvideowidget_paintengine_callback = nullptr;
    QVideoWidget_MousePressEvent_Callback qvideowidget_mousepressevent_callback = nullptr;
    QVideoWidget_MouseReleaseEvent_Callback qvideowidget_mousereleaseevent_callback = nullptr;
    QVideoWidget_MouseDoubleClickEvent_Callback qvideowidget_mousedoubleclickevent_callback = nullptr;
    QVideoWidget_MouseMoveEvent_Callback qvideowidget_mousemoveevent_callback = nullptr;
    QVideoWidget_WheelEvent_Callback qvideowidget_wheelevent_callback = nullptr;
    QVideoWidget_KeyPressEvent_Callback qvideowidget_keypressevent_callback = nullptr;
    QVideoWidget_KeyReleaseEvent_Callback qvideowidget_keyreleaseevent_callback = nullptr;
    QVideoWidget_FocusInEvent_Callback qvideowidget_focusinevent_callback = nullptr;
    QVideoWidget_FocusOutEvent_Callback qvideowidget_focusoutevent_callback = nullptr;
    QVideoWidget_EnterEvent_Callback qvideowidget_enterevent_callback = nullptr;
    QVideoWidget_LeaveEvent_Callback qvideowidget_leaveevent_callback = nullptr;
    QVideoWidget_PaintEvent_Callback qvideowidget_paintevent_callback = nullptr;
    QVideoWidget_CloseEvent_Callback qvideowidget_closeevent_callback = nullptr;
    QVideoWidget_ContextMenuEvent_Callback qvideowidget_contextmenuevent_callback = nullptr;
    QVideoWidget_TabletEvent_Callback qvideowidget_tabletevent_callback = nullptr;
    QVideoWidget_ActionEvent_Callback qvideowidget_actionevent_callback = nullptr;
    QVideoWidget_DragEnterEvent_Callback qvideowidget_dragenterevent_callback = nullptr;
    QVideoWidget_DragMoveEvent_Callback qvideowidget_dragmoveevent_callback = nullptr;
    QVideoWidget_DragLeaveEvent_Callback qvideowidget_dragleaveevent_callback = nullptr;
    QVideoWidget_DropEvent_Callback qvideowidget_dropevent_callback = nullptr;
    QVideoWidget_NativeEvent_Callback qvideowidget_nativeevent_callback = nullptr;
    QVideoWidget_ChangeEvent_Callback qvideowidget_changeevent_callback = nullptr;
    QVideoWidget_Metric_Callback qvideowidget_metric_callback = nullptr;
    QVideoWidget_InitPainter_Callback qvideowidget_initpainter_callback = nullptr;
    QVideoWidget_Redirected_Callback qvideowidget_redirected_callback = nullptr;
    QVideoWidget_SharedPainter_Callback qvideowidget_sharedpainter_callback = nullptr;
    QVideoWidget_InputMethodEvent_Callback qvideowidget_inputmethodevent_callback = nullptr;
    QVideoWidget_InputMethodQuery_Callback qvideowidget_inputmethodquery_callback = nullptr;
    QVideoWidget_FocusNextPrevChild_Callback qvideowidget_focusnextprevchild_callback = nullptr;
    QVideoWidget_EventFilter_Callback qvideowidget_eventfilter_callback = nullptr;
    QVideoWidget_TimerEvent_Callback qvideowidget_timerevent_callback = nullptr;
    QVideoWidget_ChildEvent_Callback qvideowidget_childevent_callback = nullptr;
    QVideoWidget_CustomEvent_Callback qvideowidget_customevent_callback = nullptr;
    QVideoWidget_ConnectNotify_Callback qvideowidget_connectnotify_callback = nullptr;
    QVideoWidget_DisconnectNotify_Callback qvideowidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVideoWidget {
        using QVideoWidget::actionEvent;
        using QVideoWidget::changeEvent;
        using QVideoWidget::childEvent;
        using QVideoWidget::closeEvent;
        using QVideoWidget::connectNotify;
        using QVideoWidget::contextMenuEvent;
        using QVideoWidget::customEvent;
        using QVideoWidget::disconnectNotify;
        using QVideoWidget::dragEnterEvent;
        using QVideoWidget::dragLeaveEvent;
        using QVideoWidget::dragMoveEvent;
        using QVideoWidget::dropEvent;
        using QVideoWidget::enterEvent;
        using QVideoWidget::event;
        using QVideoWidget::focusInEvent;
        using QVideoWidget::focusNextPrevChild;
        using QVideoWidget::focusOutEvent;
        using QVideoWidget::hideEvent;
        using QVideoWidget::initPainter;
        using QVideoWidget::inputMethodEvent;
        using QVideoWidget::keyPressEvent;
        using QVideoWidget::keyReleaseEvent;
        using QVideoWidget::leaveEvent;
        using QVideoWidget::metric;
        using QVideoWidget::mouseDoubleClickEvent;
        using QVideoWidget::mouseMoveEvent;
        using QVideoWidget::mousePressEvent;
        using QVideoWidget::mouseReleaseEvent;
        using QVideoWidget::moveEvent;
        using QVideoWidget::nativeEvent;
        using QVideoWidget::paintEvent;
        using QVideoWidget::redirected;
        using QVideoWidget::resizeEvent;
        using QVideoWidget::sharedPainter;
        using QVideoWidget::showEvent;
        using QVideoWidget::tabletEvent;
        using QVideoWidget::timerEvent;
        using QVideoWidget::wheelEvent;
    };

    VirtualQVideoWidget(QWidget* parent) : QVideoWidget(parent) {};
    VirtualQVideoWidget() : QVideoWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvideowidget_metaobject_callback) {
            QMetaObject* callback_ret = qvideowidget_metaobject_callback(this);
            return callback_ret;
        }
        return QVideoWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvideowidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvideowidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideowidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvideowidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVideoWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qvideowidget_sizehint_callback) {
            QSize* callback_ret = qvideowidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVideoWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideowidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvideowidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qvideowidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            qvideowidget_showevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qvideowidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qvideowidget_hideevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qvideowidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            qvideowidget_resizeevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qvideowidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qvideowidget_moveevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qvideowidget_devtype_callback) {
            int callback_ret = qvideowidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QVideoWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qvideowidget_setvisible_callback) {
            bool cbval1 = visible;
            qvideowidget_setvisible_callback(this, cbval1);
            return;
        }
        QVideoWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qvideowidget_minimumsizehint_callback) {
            QSize* callback_ret = qvideowidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVideoWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qvideowidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qvideowidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVideoWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qvideowidget_hasheightforwidth_callback) {
            bool callback_ret = qvideowidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QVideoWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qvideowidget_paintengine_callback) {
            QPaintEngine* callback_ret = qvideowidget_paintengine_callback(this);
            return callback_ret;
        }
        return QVideoWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qvideowidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qvideowidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qvideowidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qvideowidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qvideowidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qvideowidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qvideowidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qvideowidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qvideowidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qvideowidget_wheelevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qvideowidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            qvideowidget_keypressevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qvideowidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qvideowidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qvideowidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qvideowidget_focusinevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qvideowidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qvideowidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qvideowidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qvideowidget_enterevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qvideowidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qvideowidget_leaveevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qvideowidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            qvideowidget_paintevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qvideowidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qvideowidget_closeevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qvideowidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qvideowidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qvideowidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qvideowidget_tabletevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qvideowidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qvideowidget_actionevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qvideowidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qvideowidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qvideowidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qvideowidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qvideowidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qvideowidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qvideowidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qvideowidget_dropevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qvideowidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qvideowidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QVideoWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qvideowidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qvideowidget_changeevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qvideowidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qvideowidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVideoWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qvideowidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qvideowidget_initpainter_callback(this, cbval1);
            return;
        }
        QVideoWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qvideowidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qvideowidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qvideowidget_sharedpainter_callback) {
            QPainter* callback_ret = qvideowidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QVideoWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qvideowidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qvideowidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qvideowidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qvideowidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVideoWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qvideowidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qvideowidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QVideoWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideowidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvideowidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVideoWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideowidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvideowidget_timerevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideowidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvideowidget_childevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideowidget_customevent_callback) {
            QEvent* cbval1 = event;
            qvideowidget_customevent_callback(this, cbval1);
            return;
        }
        QVideoWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideowidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideowidget_connectnotify_callback(this, cbval1);
            return;
        }
        QVideoWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideowidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvideowidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVideoWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QVideoWidget_SuperEvent(QVideoWidget* self, QEvent* event);
    friend void QVideoWidget_SuperShowEvent(QVideoWidget* self, QShowEvent* event);
    friend void QVideoWidget_SuperHideEvent(QVideoWidget* self, QHideEvent* event);
    friend void QVideoWidget_SuperResizeEvent(QVideoWidget* self, QResizeEvent* event);
    friend void QVideoWidget_SuperMoveEvent(QVideoWidget* self, QMoveEvent* event);
    friend void QVideoWidget_SuperMousePressEvent(QVideoWidget* self, QMouseEvent* event);
    friend void QVideoWidget_SuperMouseReleaseEvent(QVideoWidget* self, QMouseEvent* event);
    friend void QVideoWidget_SuperMouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event);
    friend void QVideoWidget_SuperMouseMoveEvent(QVideoWidget* self, QMouseEvent* event);
    friend void QVideoWidget_SuperWheelEvent(QVideoWidget* self, QWheelEvent* event);
    friend void QVideoWidget_SuperKeyPressEvent(QVideoWidget* self, QKeyEvent* event);
    friend void QVideoWidget_SuperKeyReleaseEvent(QVideoWidget* self, QKeyEvent* event);
    friend void QVideoWidget_SuperFocusInEvent(QVideoWidget* self, QFocusEvent* event);
    friend void QVideoWidget_SuperFocusOutEvent(QVideoWidget* self, QFocusEvent* event);
    friend void QVideoWidget_SuperEnterEvent(QVideoWidget* self, QEnterEvent* event);
    friend void QVideoWidget_SuperLeaveEvent(QVideoWidget* self, QEvent* event);
    friend void QVideoWidget_SuperPaintEvent(QVideoWidget* self, QPaintEvent* event);
    friend void QVideoWidget_SuperCloseEvent(QVideoWidget* self, QCloseEvent* event);
    friend void QVideoWidget_SuperContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event);
    friend void QVideoWidget_SuperTabletEvent(QVideoWidget* self, QTabletEvent* event);
    friend void QVideoWidget_SuperActionEvent(QVideoWidget* self, QActionEvent* event);
    friend void QVideoWidget_SuperDragEnterEvent(QVideoWidget* self, QDragEnterEvent* event);
    friend void QVideoWidget_SuperDragMoveEvent(QVideoWidget* self, QDragMoveEvent* event);
    friend void QVideoWidget_SuperDragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event);
    friend void QVideoWidget_SuperDropEvent(QVideoWidget* self, QDropEvent* event);
    friend bool QVideoWidget_SuperNativeEvent(QVideoWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void QVideoWidget_SuperChangeEvent(QVideoWidget* self, QEvent* param1);
    friend int QVideoWidget_SuperMetric(const QVideoWidget* self, int param1);
    friend void QVideoWidget_SuperInitPainter(const QVideoWidget* self, QPainter* painter);
    friend QPaintDevice* QVideoWidget_SuperRedirected(const QVideoWidget* self, QPoint* offset);
    friend QPainter* QVideoWidget_SuperSharedPainter(const QVideoWidget* self);
    friend void QVideoWidget_SuperInputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1);
    friend bool QVideoWidget_SuperFocusNextPrevChild(QVideoWidget* self, bool next);
    friend void QVideoWidget_SuperTimerEvent(QVideoWidget* self, QTimerEvent* event);
    friend void QVideoWidget_SuperChildEvent(QVideoWidget* self, QChildEvent* event);
    friend void QVideoWidget_SuperCustomEvent(QVideoWidget* self, QEvent* event);
    friend void QVideoWidget_SuperConnectNotify(QVideoWidget* self, const QMetaMethod* signal);
    friend void QVideoWidget_SuperDisconnectNotify(QVideoWidget* self, const QMetaMethod* signal);
};

#endif
