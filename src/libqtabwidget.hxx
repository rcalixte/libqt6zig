#pragma once
#ifndef LIBQTABWIDGET_HXX
#define LIBQTABWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTabWidget
class VirtualQTabWidget final : public QTabWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using QTabWidget_MetaObject_Callback = QMetaObject* (*)(const QTabWidget*);
    using QTabWidget_Metacast_Callback = void* (*)(QTabWidget*, const char*);
    using QTabWidget_Metacall_Callback = int (*)(QTabWidget*, int, int, void**);
    using QTabWidget_SizeHint_Callback = QSize* (*)(const QTabWidget*);
    using QTabWidget_MinimumSizeHint_Callback = QSize* (*)(const QTabWidget*);
    using QTabWidget_HeightForWidth_Callback = int (*)(const QTabWidget*, int);
    using QTabWidget_HasHeightForWidth_Callback = bool (*)(const QTabWidget*);
    using QTabWidget_TabInserted_Callback = void (*)(QTabWidget*, int);
    using QTabWidget_TabRemoved_Callback = void (*)(QTabWidget*, int);
    using QTabWidget_ShowEvent_Callback = void (*)(QTabWidget*, QShowEvent*);
    using QTabWidget_ResizeEvent_Callback = void (*)(QTabWidget*, QResizeEvent*);
    using QTabWidget_KeyPressEvent_Callback = void (*)(QTabWidget*, QKeyEvent*);
    using QTabWidget_PaintEvent_Callback = void (*)(QTabWidget*, QPaintEvent*);
    using QTabWidget_ChangeEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_Event_Callback = bool (*)(QTabWidget*, QEvent*);
    using QTabWidget_InitStyleOption_Callback = void (*)(const QTabWidget*, QStyleOptionTabWidgetFrame*);
    using QTabWidget_DevType_Callback = int (*)(const QTabWidget*);
    using QTabWidget_SetVisible_Callback = void (*)(QTabWidget*, bool);
    using QTabWidget_PaintEngine_Callback = QPaintEngine* (*)(const QTabWidget*);
    using QTabWidget_MousePressEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseReleaseEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseDoubleClickEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_MouseMoveEvent_Callback = void (*)(QTabWidget*, QMouseEvent*);
    using QTabWidget_WheelEvent_Callback = void (*)(QTabWidget*, QWheelEvent*);
    using QTabWidget_KeyReleaseEvent_Callback = void (*)(QTabWidget*, QKeyEvent*);
    using QTabWidget_FocusInEvent_Callback = void (*)(QTabWidget*, QFocusEvent*);
    using QTabWidget_FocusOutEvent_Callback = void (*)(QTabWidget*, QFocusEvent*);
    using QTabWidget_EnterEvent_Callback = void (*)(QTabWidget*, QEnterEvent*);
    using QTabWidget_LeaveEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_MoveEvent_Callback = void (*)(QTabWidget*, QMoveEvent*);
    using QTabWidget_CloseEvent_Callback = void (*)(QTabWidget*, QCloseEvent*);
    using QTabWidget_ContextMenuEvent_Callback = void (*)(QTabWidget*, QContextMenuEvent*);
    using QTabWidget_TabletEvent_Callback = void (*)(QTabWidget*, QTabletEvent*);
    using QTabWidget_ActionEvent_Callback = void (*)(QTabWidget*, QActionEvent*);
    using QTabWidget_DragEnterEvent_Callback = void (*)(QTabWidget*, QDragEnterEvent*);
    using QTabWidget_DragMoveEvent_Callback = void (*)(QTabWidget*, QDragMoveEvent*);
    using QTabWidget_DragLeaveEvent_Callback = void (*)(QTabWidget*, QDragLeaveEvent*);
    using QTabWidget_DropEvent_Callback = void (*)(QTabWidget*, QDropEvent*);
    using QTabWidget_HideEvent_Callback = void (*)(QTabWidget*, QHideEvent*);
    using QTabWidget_NativeEvent_Callback = bool (*)(QTabWidget*, libqt_string, void*, intptr_t*);
    using QTabWidget_Metric_Callback = int (*)(const QTabWidget*, int);
    using QTabWidget_InitPainter_Callback = void (*)(const QTabWidget*, QPainter*);
    using QTabWidget_Redirected_Callback = QPaintDevice* (*)(const QTabWidget*, QPoint*);
    using QTabWidget_SharedPainter_Callback = QPainter* (*)(const QTabWidget*);
    using QTabWidget_InputMethodEvent_Callback = void (*)(QTabWidget*, QInputMethodEvent*);
    using QTabWidget_InputMethodQuery_Callback = QVariant* (*)(const QTabWidget*, int);
    using QTabWidget_FocusNextPrevChild_Callback = bool (*)(QTabWidget*, bool);
    using QTabWidget_EventFilter_Callback = bool (*)(QTabWidget*, QObject*, QEvent*);
    using QTabWidget_TimerEvent_Callback = void (*)(QTabWidget*, QTimerEvent*);
    using QTabWidget_ChildEvent_Callback = void (*)(QTabWidget*, QChildEvent*);
    using QTabWidget_CustomEvent_Callback = void (*)(QTabWidget*, QEvent*);
    using QTabWidget_ConnectNotify_Callback = void (*)(QTabWidget*, QMetaMethod*);
    using QTabWidget_DisconnectNotify_Callback = void (*)(QTabWidget*, QMetaMethod*);
    using QTabWidget::create;
    using QTabWidget::destroy;
    using QTabWidget::focusNextChild;
    using QTabWidget::focusPreviousChild;
    using QTabWidget::getDecodedMetricF;
    using QTabWidget::isSignalConnected;
    using QTabWidget::receivers;
    using QTabWidget::sender;
    using QTabWidget::senderSignalIndex;
    using QTabWidget::setTabBar;
    using QTabWidget::updateMicroFocus;

    // Instance callback storage
    QTabWidget_MetaObject_Callback qtabwidget_metaobject_callback = nullptr;
    QTabWidget_Metacast_Callback qtabwidget_metacast_callback = nullptr;
    QTabWidget_Metacall_Callback qtabwidget_metacall_callback = nullptr;
    QTabWidget_SizeHint_Callback qtabwidget_sizehint_callback = nullptr;
    QTabWidget_MinimumSizeHint_Callback qtabwidget_minimumsizehint_callback = nullptr;
    QTabWidget_HeightForWidth_Callback qtabwidget_heightforwidth_callback = nullptr;
    QTabWidget_HasHeightForWidth_Callback qtabwidget_hasheightforwidth_callback = nullptr;
    QTabWidget_TabInserted_Callback qtabwidget_tabinserted_callback = nullptr;
    QTabWidget_TabRemoved_Callback qtabwidget_tabremoved_callback = nullptr;
    QTabWidget_ShowEvent_Callback qtabwidget_showevent_callback = nullptr;
    QTabWidget_ResizeEvent_Callback qtabwidget_resizeevent_callback = nullptr;
    QTabWidget_KeyPressEvent_Callback qtabwidget_keypressevent_callback = nullptr;
    QTabWidget_PaintEvent_Callback qtabwidget_paintevent_callback = nullptr;
    QTabWidget_ChangeEvent_Callback qtabwidget_changeevent_callback = nullptr;
    QTabWidget_Event_Callback qtabwidget_event_callback = nullptr;
    QTabWidget_InitStyleOption_Callback qtabwidget_initstyleoption_callback = nullptr;
    QTabWidget_DevType_Callback qtabwidget_devtype_callback = nullptr;
    QTabWidget_SetVisible_Callback qtabwidget_setvisible_callback = nullptr;
    QTabWidget_PaintEngine_Callback qtabwidget_paintengine_callback = nullptr;
    QTabWidget_MousePressEvent_Callback qtabwidget_mousepressevent_callback = nullptr;
    QTabWidget_MouseReleaseEvent_Callback qtabwidget_mousereleaseevent_callback = nullptr;
    QTabWidget_MouseDoubleClickEvent_Callback qtabwidget_mousedoubleclickevent_callback = nullptr;
    QTabWidget_MouseMoveEvent_Callback qtabwidget_mousemoveevent_callback = nullptr;
    QTabWidget_WheelEvent_Callback qtabwidget_wheelevent_callback = nullptr;
    QTabWidget_KeyReleaseEvent_Callback qtabwidget_keyreleaseevent_callback = nullptr;
    QTabWidget_FocusInEvent_Callback qtabwidget_focusinevent_callback = nullptr;
    QTabWidget_FocusOutEvent_Callback qtabwidget_focusoutevent_callback = nullptr;
    QTabWidget_EnterEvent_Callback qtabwidget_enterevent_callback = nullptr;
    QTabWidget_LeaveEvent_Callback qtabwidget_leaveevent_callback = nullptr;
    QTabWidget_MoveEvent_Callback qtabwidget_moveevent_callback = nullptr;
    QTabWidget_CloseEvent_Callback qtabwidget_closeevent_callback = nullptr;
    QTabWidget_ContextMenuEvent_Callback qtabwidget_contextmenuevent_callback = nullptr;
    QTabWidget_TabletEvent_Callback qtabwidget_tabletevent_callback = nullptr;
    QTabWidget_ActionEvent_Callback qtabwidget_actionevent_callback = nullptr;
    QTabWidget_DragEnterEvent_Callback qtabwidget_dragenterevent_callback = nullptr;
    QTabWidget_DragMoveEvent_Callback qtabwidget_dragmoveevent_callback = nullptr;
    QTabWidget_DragLeaveEvent_Callback qtabwidget_dragleaveevent_callback = nullptr;
    QTabWidget_DropEvent_Callback qtabwidget_dropevent_callback = nullptr;
    QTabWidget_HideEvent_Callback qtabwidget_hideevent_callback = nullptr;
    QTabWidget_NativeEvent_Callback qtabwidget_nativeevent_callback = nullptr;
    QTabWidget_Metric_Callback qtabwidget_metric_callback = nullptr;
    QTabWidget_InitPainter_Callback qtabwidget_initpainter_callback = nullptr;
    QTabWidget_Redirected_Callback qtabwidget_redirected_callback = nullptr;
    QTabWidget_SharedPainter_Callback qtabwidget_sharedpainter_callback = nullptr;
    QTabWidget_InputMethodEvent_Callback qtabwidget_inputmethodevent_callback = nullptr;
    QTabWidget_InputMethodQuery_Callback qtabwidget_inputmethodquery_callback = nullptr;
    QTabWidget_FocusNextPrevChild_Callback qtabwidget_focusnextprevchild_callback = nullptr;
    QTabWidget_EventFilter_Callback qtabwidget_eventfilter_callback = nullptr;
    QTabWidget_TimerEvent_Callback qtabwidget_timerevent_callback = nullptr;
    QTabWidget_ChildEvent_Callback qtabwidget_childevent_callback = nullptr;
    QTabWidget_CustomEvent_Callback qtabwidget_customevent_callback = nullptr;
    QTabWidget_ConnectNotify_Callback qtabwidget_connectnotify_callback = nullptr;
    QTabWidget_DisconnectNotify_Callback qtabwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QTabWidget {
        using QTabWidget::actionEvent;
        using QTabWidget::changeEvent;
        using QTabWidget::childEvent;
        using QTabWidget::closeEvent;
        using QTabWidget::connectNotify;
        using QTabWidget::contextMenuEvent;
        using QTabWidget::customEvent;
        using QTabWidget::disconnectNotify;
        using QTabWidget::dragEnterEvent;
        using QTabWidget::dragLeaveEvent;
        using QTabWidget::dragMoveEvent;
        using QTabWidget::dropEvent;
        using QTabWidget::enterEvent;
        using QTabWidget::event;
        using QTabWidget::focusInEvent;
        using QTabWidget::focusNextPrevChild;
        using QTabWidget::focusOutEvent;
        using QTabWidget::hideEvent;
        using QTabWidget::initPainter;
        using QTabWidget::initStyleOption;
        using QTabWidget::inputMethodEvent;
        using QTabWidget::keyPressEvent;
        using QTabWidget::keyReleaseEvent;
        using QTabWidget::leaveEvent;
        using QTabWidget::metric;
        using QTabWidget::mouseDoubleClickEvent;
        using QTabWidget::mouseMoveEvent;
        using QTabWidget::mousePressEvent;
        using QTabWidget::mouseReleaseEvent;
        using QTabWidget::moveEvent;
        using QTabWidget::nativeEvent;
        using QTabWidget::paintEvent;
        using QTabWidget::redirected;
        using QTabWidget::resizeEvent;
        using QTabWidget::sharedPainter;
        using QTabWidget::showEvent;
        using QTabWidget::tabInserted;
        using QTabWidget::tabletEvent;
        using QTabWidget::tabRemoved;
        using QTabWidget::timerEvent;
        using QTabWidget::wheelEvent;
    };

    VirtualQTabWidget(QWidget* parent) : QTabWidget(parent) {};
    VirtualQTabWidget() : QTabWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qtabwidget_metaobject_callback) {
            QMetaObject* callback_ret = qtabwidget_metaobject_callback(this);
            return callback_ret;
        }
        return QTabWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qtabwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qtabwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QTabWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtabwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qtabwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QTabWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtabwidget_sizehint_callback) {
            QSize* callback_ret = qtabwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtabwidget_minimumsizehint_callback) {
            QSize* callback_ret = qtabwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qtabwidget_heightforwidth_callback) {
            int cbval1 = width;
            int callback_ret = qtabwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTabWidget::heightForWidth(width);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtabwidget_hasheightforwidth_callback) {
            bool callback_ret = qtabwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QTabWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabInserted(int index) override {
        if (qtabwidget_tabinserted_callback) {
            int cbval1 = index;
            qtabwidget_tabinserted_callback(this, cbval1);
            return;
        }
        QTabWidget::tabInserted(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabRemoved(int index) override {
        if (qtabwidget_tabremoved_callback) {
            int cbval1 = index;
            qtabwidget_tabremoved_callback(this, cbval1);
            return;
        }
        QTabWidget::tabRemoved(index);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtabwidget_showevent_callback) {
            QShowEvent* cbval1 = param1;
            qtabwidget_showevent_callback(this, cbval1);
            return;
        }
        QTabWidget::showEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qtabwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qtabwidget_resizeevent_callback(this, cbval1);
            return;
        }
        QTabWidget::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qtabwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qtabwidget_keypressevent_callback(this, cbval1);
            return;
        }
        QTabWidget::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtabwidget_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qtabwidget_paintevent_callback(this, cbval1);
            return;
        }
        QTabWidget::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtabwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            qtabwidget_changeevent_callback(this, cbval1);
            return;
        }
        QTabWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qtabwidget_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qtabwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return QTabWidget::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionTabWidgetFrame* option) const override {
        if (qtabwidget_initstyleoption_callback) {
            QStyleOptionTabWidgetFrame* cbval1 = option;
            qtabwidget_initstyleoption_callback(this, cbval1);
            return;
        }
        QTabWidget::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtabwidget_devtype_callback) {
            int callback_ret = qtabwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QTabWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtabwidget_setvisible_callback) {
            bool cbval1 = visible;
            qtabwidget_setvisible_callback(this, cbval1);
            return;
        }
        QTabWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtabwidget_paintengine_callback) {
            QPaintEngine* callback_ret = qtabwidget_paintengine_callback(this);
            return callback_ret;
        }
        return QTabWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtabwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            qtabwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        QTabWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtabwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            qtabwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QTabWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtabwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            qtabwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QTabWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtabwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            qtabwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        QTabWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtabwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            qtabwidget_wheelevent_callback(this, cbval1);
            return;
        }
        QTabWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtabwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qtabwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QTabWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtabwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qtabwidget_focusinevent_callback(this, cbval1);
            return;
        }
        QTabWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtabwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qtabwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        QTabWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtabwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qtabwidget_enterevent_callback(this, cbval1);
            return;
        }
        QTabWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtabwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            qtabwidget_leaveevent_callback(this, cbval1);
            return;
        }
        QTabWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtabwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qtabwidget_moveevent_callback(this, cbval1);
            return;
        }
        QTabWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtabwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qtabwidget_closeevent_callback(this, cbval1);
            return;
        }
        QTabWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtabwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            qtabwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        QTabWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtabwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qtabwidget_tabletevent_callback(this, cbval1);
            return;
        }
        QTabWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtabwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qtabwidget_actionevent_callback(this, cbval1);
            return;
        }
        QTabWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtabwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            qtabwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        QTabWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtabwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            qtabwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        QTabWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtabwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            qtabwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        QTabWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtabwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            qtabwidget_dropevent_callback(this, cbval1);
            return;
        }
        QTabWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtabwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qtabwidget_hideevent_callback(this, cbval1);
            return;
        }
        QTabWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtabwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qtabwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QTabWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtabwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qtabwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QTabWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtabwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            qtabwidget_initpainter_callback(this, cbval1);
            return;
        }
        QTabWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtabwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qtabwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QTabWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtabwidget_sharedpainter_callback) {
            QPainter* callback_ret = qtabwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return QTabWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtabwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qtabwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        QTabWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtabwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qtabwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QTabWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtabwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qtabwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QTabWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtabwidget_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qtabwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QTabWidget::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtabwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qtabwidget_timerevent_callback(this, cbval1);
            return;
        }
        QTabWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtabwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            qtabwidget_childevent_callback(this, cbval1);
            return;
        }
        QTabWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtabwidget_customevent_callback) {
            QEvent* cbval1 = event;
            qtabwidget_customevent_callback(this, cbval1);
            return;
        }
        QTabWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtabwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtabwidget_connectnotify_callback(this, cbval1);
            return;
        }
        QTabWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtabwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qtabwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        QTabWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend void QTabWidget_SuperTabInserted(QTabWidget* self, int index);
    friend void QTabWidget_SuperTabRemoved(QTabWidget* self, int index);
    friend void QTabWidget_SuperShowEvent(QTabWidget* self, QShowEvent* param1);
    friend void QTabWidget_SuperResizeEvent(QTabWidget* self, QResizeEvent* param1);
    friend void QTabWidget_SuperKeyPressEvent(QTabWidget* self, QKeyEvent* param1);
    friend void QTabWidget_SuperPaintEvent(QTabWidget* self, QPaintEvent* param1);
    friend void QTabWidget_SuperChangeEvent(QTabWidget* self, QEvent* param1);
    friend bool QTabWidget_SuperEvent(QTabWidget* self, QEvent* param1);
    friend void QTabWidget_SuperInitStyleOption(const QTabWidget* self, QStyleOptionTabWidgetFrame* option);
    friend void QTabWidget_SuperMousePressEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_SuperMouseReleaseEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_SuperMouseDoubleClickEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_SuperMouseMoveEvent(QTabWidget* self, QMouseEvent* event);
    friend void QTabWidget_SuperWheelEvent(QTabWidget* self, QWheelEvent* event);
    friend void QTabWidget_SuperKeyReleaseEvent(QTabWidget* self, QKeyEvent* event);
    friend void QTabWidget_SuperFocusInEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_SuperFocusOutEvent(QTabWidget* self, QFocusEvent* event);
    friend void QTabWidget_SuperEnterEvent(QTabWidget* self, QEnterEvent* event);
    friend void QTabWidget_SuperLeaveEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_SuperMoveEvent(QTabWidget* self, QMoveEvent* event);
    friend void QTabWidget_SuperCloseEvent(QTabWidget* self, QCloseEvent* event);
    friend void QTabWidget_SuperContextMenuEvent(QTabWidget* self, QContextMenuEvent* event);
    friend void QTabWidget_SuperTabletEvent(QTabWidget* self, QTabletEvent* event);
    friend void QTabWidget_SuperActionEvent(QTabWidget* self, QActionEvent* event);
    friend void QTabWidget_SuperDragEnterEvent(QTabWidget* self, QDragEnterEvent* event);
    friend void QTabWidget_SuperDragMoveEvent(QTabWidget* self, QDragMoveEvent* event);
    friend void QTabWidget_SuperDragLeaveEvent(QTabWidget* self, QDragLeaveEvent* event);
    friend void QTabWidget_SuperDropEvent(QTabWidget* self, QDropEvent* event);
    friend void QTabWidget_SuperHideEvent(QTabWidget* self, QHideEvent* event);
    friend bool QTabWidget_SuperNativeEvent(QTabWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QTabWidget_SuperMetric(const QTabWidget* self, int param1);
    friend void QTabWidget_SuperInitPainter(const QTabWidget* self, QPainter* painter);
    friend QPaintDevice* QTabWidget_SuperRedirected(const QTabWidget* self, QPoint* offset);
    friend QPainter* QTabWidget_SuperSharedPainter(const QTabWidget* self);
    friend void QTabWidget_SuperInputMethodEvent(QTabWidget* self, QInputMethodEvent* param1);
    friend bool QTabWidget_SuperFocusNextPrevChild(QTabWidget* self, bool next);
    friend void QTabWidget_SuperTimerEvent(QTabWidget* self, QTimerEvent* event);
    friend void QTabWidget_SuperChildEvent(QTabWidget* self, QChildEvent* event);
    friend void QTabWidget_SuperCustomEvent(QTabWidget* self, QEvent* event);
    friend void QTabWidget_SuperConnectNotify(QTabWidget* self, const QMetaMethod* signal);
    friend void QTabWidget_SuperDisconnectNotify(QTabWidget* self, const QMetaMethod* signal);
};

#endif
