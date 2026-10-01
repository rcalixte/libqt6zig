#pragma once
#ifndef LIBQSCROLLAREA_HXX
#define LIBQSCROLLAREA_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QScrollArea
class VirtualQScrollArea final : public QScrollArea {
  public:
    // Virtual class public types (including callbacks and access types)
    using QScrollArea_MetaObject_Callback = QMetaObject* (*)(const QScrollArea*);
    using QScrollArea_Metacast_Callback = void* (*)(QScrollArea*, const char*);
    using QScrollArea_Metacall_Callback = int (*)(QScrollArea*, int, int, void**);
    using QScrollArea_SizeHint_Callback = QSize* (*)(const QScrollArea*);
    using QScrollArea_FocusNextPrevChild_Callback = bool (*)(QScrollArea*, bool);
    using QScrollArea_Event_Callback = bool (*)(QScrollArea*, QEvent*);
    using QScrollArea_EventFilter_Callback = bool (*)(QScrollArea*, QObject*, QEvent*);
    using QScrollArea_ResizeEvent_Callback = void (*)(QScrollArea*, QResizeEvent*);
    using QScrollArea_ScrollContentsBy_Callback = void (*)(QScrollArea*, int, int);
    using QScrollArea_ViewportSizeHint_Callback = QSize* (*)(const QScrollArea*);
    using QScrollArea_MinimumSizeHint_Callback = QSize* (*)(const QScrollArea*);
    using QScrollArea_SetupViewport_Callback = void (*)(QScrollArea*, QWidget*);
    using QScrollArea_ViewportEvent_Callback = bool (*)(QScrollArea*, QEvent*);
    using QScrollArea_PaintEvent_Callback = void (*)(QScrollArea*, QPaintEvent*);
    using QScrollArea_MousePressEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseReleaseEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseDoubleClickEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_MouseMoveEvent_Callback = void (*)(QScrollArea*, QMouseEvent*);
    using QScrollArea_WheelEvent_Callback = void (*)(QScrollArea*, QWheelEvent*);
    using QScrollArea_ContextMenuEvent_Callback = void (*)(QScrollArea*, QContextMenuEvent*);
    using QScrollArea_DragEnterEvent_Callback = void (*)(QScrollArea*, QDragEnterEvent*);
    using QScrollArea_DragMoveEvent_Callback = void (*)(QScrollArea*, QDragMoveEvent*);
    using QScrollArea_DragLeaveEvent_Callback = void (*)(QScrollArea*, QDragLeaveEvent*);
    using QScrollArea_DropEvent_Callback = void (*)(QScrollArea*, QDropEvent*);
    using QScrollArea_KeyPressEvent_Callback = void (*)(QScrollArea*, QKeyEvent*);
    using QScrollArea_ChangeEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_InitStyleOption_Callback = void (*)(const QScrollArea*, QStyleOptionFrame*);
    using QScrollArea_DevType_Callback = int (*)(const QScrollArea*);
    using QScrollArea_SetVisible_Callback = void (*)(QScrollArea*, bool);
    using QScrollArea_HeightForWidth_Callback = int (*)(const QScrollArea*, int);
    using QScrollArea_HasHeightForWidth_Callback = bool (*)(const QScrollArea*);
    using QScrollArea_PaintEngine_Callback = QPaintEngine* (*)(const QScrollArea*);
    using QScrollArea_KeyReleaseEvent_Callback = void (*)(QScrollArea*, QKeyEvent*);
    using QScrollArea_FocusInEvent_Callback = void (*)(QScrollArea*, QFocusEvent*);
    using QScrollArea_FocusOutEvent_Callback = void (*)(QScrollArea*, QFocusEvent*);
    using QScrollArea_EnterEvent_Callback = void (*)(QScrollArea*, QEnterEvent*);
    using QScrollArea_LeaveEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_MoveEvent_Callback = void (*)(QScrollArea*, QMoveEvent*);
    using QScrollArea_CloseEvent_Callback = void (*)(QScrollArea*, QCloseEvent*);
    using QScrollArea_TabletEvent_Callback = void (*)(QScrollArea*, QTabletEvent*);
    using QScrollArea_ActionEvent_Callback = void (*)(QScrollArea*, QActionEvent*);
    using QScrollArea_ShowEvent_Callback = void (*)(QScrollArea*, QShowEvent*);
    using QScrollArea_HideEvent_Callback = void (*)(QScrollArea*, QHideEvent*);
    using QScrollArea_NativeEvent_Callback = bool (*)(QScrollArea*, libqt_string, void*, intptr_t*);
    using QScrollArea_Metric_Callback = int (*)(const QScrollArea*, int);
    using QScrollArea_InitPainter_Callback = void (*)(const QScrollArea*, QPainter*);
    using QScrollArea_Redirected_Callback = QPaintDevice* (*)(const QScrollArea*, QPoint*);
    using QScrollArea_SharedPainter_Callback = QPainter* (*)(const QScrollArea*);
    using QScrollArea_InputMethodEvent_Callback = void (*)(QScrollArea*, QInputMethodEvent*);
    using QScrollArea_InputMethodQuery_Callback = QVariant* (*)(const QScrollArea*, int);
    using QScrollArea_TimerEvent_Callback = void (*)(QScrollArea*, QTimerEvent*);
    using QScrollArea_ChildEvent_Callback = void (*)(QScrollArea*, QChildEvent*);
    using QScrollArea_CustomEvent_Callback = void (*)(QScrollArea*, QEvent*);
    using QScrollArea_ConnectNotify_Callback = void (*)(QScrollArea*, QMetaMethod*);
    using QScrollArea_DisconnectNotify_Callback = void (*)(QScrollArea*, QMetaMethod*);
    using QScrollArea::create;
    using QScrollArea::destroy;
    using QScrollArea::drawFrame;
    using QScrollArea::focusNextChild;
    using QScrollArea::focusPreviousChild;
    using QScrollArea::getDecodedMetricF;
    using QScrollArea::isSignalConnected;
    using QScrollArea::receivers;
    using QScrollArea::sender;
    using QScrollArea::senderSignalIndex;
    using QScrollArea::setViewportMargins;
    using QScrollArea::updateMicroFocus;
    using QScrollArea::viewportMargins;

    // Instance callback storage
    QScrollArea_MetaObject_Callback qscrollarea_metaobject_callback = nullptr;
    QScrollArea_Metacast_Callback qscrollarea_metacast_callback = nullptr;
    QScrollArea_Metacall_Callback qscrollarea_metacall_callback = nullptr;
    QScrollArea_SizeHint_Callback qscrollarea_sizehint_callback = nullptr;
    QScrollArea_FocusNextPrevChild_Callback qscrollarea_focusnextprevchild_callback = nullptr;
    QScrollArea_Event_Callback qscrollarea_event_callback = nullptr;
    QScrollArea_EventFilter_Callback qscrollarea_eventfilter_callback = nullptr;
    QScrollArea_ResizeEvent_Callback qscrollarea_resizeevent_callback = nullptr;
    QScrollArea_ScrollContentsBy_Callback qscrollarea_scrollcontentsby_callback = nullptr;
    QScrollArea_ViewportSizeHint_Callback qscrollarea_viewportsizehint_callback = nullptr;
    QScrollArea_MinimumSizeHint_Callback qscrollarea_minimumsizehint_callback = nullptr;
    QScrollArea_SetupViewport_Callback qscrollarea_setupviewport_callback = nullptr;
    QScrollArea_ViewportEvent_Callback qscrollarea_viewportevent_callback = nullptr;
    QScrollArea_PaintEvent_Callback qscrollarea_paintevent_callback = nullptr;
    QScrollArea_MousePressEvent_Callback qscrollarea_mousepressevent_callback = nullptr;
    QScrollArea_MouseReleaseEvent_Callback qscrollarea_mousereleaseevent_callback = nullptr;
    QScrollArea_MouseDoubleClickEvent_Callback qscrollarea_mousedoubleclickevent_callback = nullptr;
    QScrollArea_MouseMoveEvent_Callback qscrollarea_mousemoveevent_callback = nullptr;
    QScrollArea_WheelEvent_Callback qscrollarea_wheelevent_callback = nullptr;
    QScrollArea_ContextMenuEvent_Callback qscrollarea_contextmenuevent_callback = nullptr;
    QScrollArea_DragEnterEvent_Callback qscrollarea_dragenterevent_callback = nullptr;
    QScrollArea_DragMoveEvent_Callback qscrollarea_dragmoveevent_callback = nullptr;
    QScrollArea_DragLeaveEvent_Callback qscrollarea_dragleaveevent_callback = nullptr;
    QScrollArea_DropEvent_Callback qscrollarea_dropevent_callback = nullptr;
    QScrollArea_KeyPressEvent_Callback qscrollarea_keypressevent_callback = nullptr;
    QScrollArea_ChangeEvent_Callback qscrollarea_changeevent_callback = nullptr;
    QScrollArea_InitStyleOption_Callback qscrollarea_initstyleoption_callback = nullptr;
    QScrollArea_DevType_Callback qscrollarea_devtype_callback = nullptr;
    QScrollArea_SetVisible_Callback qscrollarea_setvisible_callback = nullptr;
    QScrollArea_HeightForWidth_Callback qscrollarea_heightforwidth_callback = nullptr;
    QScrollArea_HasHeightForWidth_Callback qscrollarea_hasheightforwidth_callback = nullptr;
    QScrollArea_PaintEngine_Callback qscrollarea_paintengine_callback = nullptr;
    QScrollArea_KeyReleaseEvent_Callback qscrollarea_keyreleaseevent_callback = nullptr;
    QScrollArea_FocusInEvent_Callback qscrollarea_focusinevent_callback = nullptr;
    QScrollArea_FocusOutEvent_Callback qscrollarea_focusoutevent_callback = nullptr;
    QScrollArea_EnterEvent_Callback qscrollarea_enterevent_callback = nullptr;
    QScrollArea_LeaveEvent_Callback qscrollarea_leaveevent_callback = nullptr;
    QScrollArea_MoveEvent_Callback qscrollarea_moveevent_callback = nullptr;
    QScrollArea_CloseEvent_Callback qscrollarea_closeevent_callback = nullptr;
    QScrollArea_TabletEvent_Callback qscrollarea_tabletevent_callback = nullptr;
    QScrollArea_ActionEvent_Callback qscrollarea_actionevent_callback = nullptr;
    QScrollArea_ShowEvent_Callback qscrollarea_showevent_callback = nullptr;
    QScrollArea_HideEvent_Callback qscrollarea_hideevent_callback = nullptr;
    QScrollArea_NativeEvent_Callback qscrollarea_nativeevent_callback = nullptr;
    QScrollArea_Metric_Callback qscrollarea_metric_callback = nullptr;
    QScrollArea_InitPainter_Callback qscrollarea_initpainter_callback = nullptr;
    QScrollArea_Redirected_Callback qscrollarea_redirected_callback = nullptr;
    QScrollArea_SharedPainter_Callback qscrollarea_sharedpainter_callback = nullptr;
    QScrollArea_InputMethodEvent_Callback qscrollarea_inputmethodevent_callback = nullptr;
    QScrollArea_InputMethodQuery_Callback qscrollarea_inputmethodquery_callback = nullptr;
    QScrollArea_TimerEvent_Callback qscrollarea_timerevent_callback = nullptr;
    QScrollArea_ChildEvent_Callback qscrollarea_childevent_callback = nullptr;
    QScrollArea_CustomEvent_Callback qscrollarea_customevent_callback = nullptr;
    QScrollArea_ConnectNotify_Callback qscrollarea_connectnotify_callback = nullptr;
    QScrollArea_DisconnectNotify_Callback qscrollarea_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QScrollArea {
        using QScrollArea::actionEvent;
        using QScrollArea::changeEvent;
        using QScrollArea::childEvent;
        using QScrollArea::closeEvent;
        using QScrollArea::connectNotify;
        using QScrollArea::contextMenuEvent;
        using QScrollArea::customEvent;
        using QScrollArea::disconnectNotify;
        using QScrollArea::dragEnterEvent;
        using QScrollArea::dragLeaveEvent;
        using QScrollArea::dragMoveEvent;
        using QScrollArea::dropEvent;
        using QScrollArea::enterEvent;
        using QScrollArea::event;
        using QScrollArea::eventFilter;
        using QScrollArea::focusInEvent;
        using QScrollArea::focusOutEvent;
        using QScrollArea::hideEvent;
        using QScrollArea::initPainter;
        using QScrollArea::initStyleOption;
        using QScrollArea::inputMethodEvent;
        using QScrollArea::keyPressEvent;
        using QScrollArea::keyReleaseEvent;
        using QScrollArea::leaveEvent;
        using QScrollArea::metric;
        using QScrollArea::mouseDoubleClickEvent;
        using QScrollArea::mouseMoveEvent;
        using QScrollArea::mousePressEvent;
        using QScrollArea::mouseReleaseEvent;
        using QScrollArea::moveEvent;
        using QScrollArea::nativeEvent;
        using QScrollArea::paintEvent;
        using QScrollArea::redirected;
        using QScrollArea::resizeEvent;
        using QScrollArea::scrollContentsBy;
        using QScrollArea::sharedPainter;
        using QScrollArea::showEvent;
        using QScrollArea::tabletEvent;
        using QScrollArea::timerEvent;
        using QScrollArea::viewportEvent;
        using QScrollArea::viewportSizeHint;
        using QScrollArea::wheelEvent;
    };

    VirtualQScrollArea(QWidget* parent) : QScrollArea(parent) {};
    VirtualQScrollArea() : QScrollArea() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qscrollarea_metaobject_callback) {
            QMetaObject* callback_ret = qscrollarea_metaobject_callback(this);
            return callback_ret;
        }
        return QScrollArea::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qscrollarea_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qscrollarea_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscrollarea_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qscrollarea_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qscrollarea_sizehint_callback) {
            QSize* callback_ret = qscrollarea_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollArea::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qscrollarea_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = qscrollarea_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qscrollarea_event_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qscrollarea_event_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::event(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qscrollarea_eventfilter_callback) {
            QObject* cbval1 = param1;
            QEvent* cbval2 = param2;
            bool callback_ret = qscrollarea_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QScrollArea::eventFilter(param1, param2);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qscrollarea_resizeevent_callback) {
            QResizeEvent* cbval1 = param1;
            qscrollarea_resizeevent_callback(this, cbval1);
            return;
        }
        QScrollArea::resizeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qscrollarea_scrollcontentsby_callback) {
            int cbval1 = dx;
            int cbval2 = dy;
            qscrollarea_scrollcontentsby_callback(this, cbval1, cbval2);
            return;
        }
        QScrollArea::scrollContentsBy(dx, dy);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qscrollarea_viewportsizehint_callback) {
            QSize* callback_ret = qscrollarea_viewportsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollArea::viewportSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qscrollarea_minimumsizehint_callback) {
            QSize* callback_ret = qscrollarea_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollArea::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qscrollarea_setupviewport_callback) {
            QWidget* cbval1 = viewport;
            qscrollarea_setupviewport_callback(this, cbval1);
            return;
        }
        QScrollArea::setupViewport(viewport);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qscrollarea_viewportevent_callback) {
            QEvent* cbval1 = param1;
            bool callback_ret = qscrollarea_viewportevent_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::viewportEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qscrollarea_paintevent_callback) {
            QPaintEvent* cbval1 = param1;
            qscrollarea_paintevent_callback(this, cbval1);
            return;
        }
        QScrollArea::paintEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousepressevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollarea_mousepressevent_callback(this, cbval1);
            return;
        }
        QScrollArea::mousePressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollarea_mousereleaseevent_callback(this, cbval1);
            return;
        }
        QScrollArea::mouseReleaseEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollarea_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        QScrollArea::mouseDoubleClickEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qscrollarea_mousemoveevent_callback) {
            QMouseEvent* cbval1 = param1;
            qscrollarea_mousemoveevent_callback(this, cbval1);
            return;
        }
        QScrollArea::mouseMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qscrollarea_wheelevent_callback) {
            QWheelEvent* cbval1 = param1;
            qscrollarea_wheelevent_callback(this, cbval1);
            return;
        }
        QScrollArea::wheelEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qscrollarea_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = param1;
            qscrollarea_contextmenuevent_callback(this, cbval1);
            return;
        }
        QScrollArea::contextMenuEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qscrollarea_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = param1;
            qscrollarea_dragenterevent_callback(this, cbval1);
            return;
        }
        QScrollArea::dragEnterEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* param1) override {
        if (qscrollarea_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = param1;
            qscrollarea_dragmoveevent_callback(this, cbval1);
            return;
        }
        QScrollArea::dragMoveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
        if (qscrollarea_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = param1;
            qscrollarea_dragleaveevent_callback(this, cbval1);
            return;
        }
        QScrollArea::dragLeaveEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qscrollarea_dropevent_callback) {
            QDropEvent* cbval1 = param1;
            qscrollarea_dropevent_callback(this, cbval1);
            return;
        }
        QScrollArea::dropEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qscrollarea_keypressevent_callback) {
            QKeyEvent* cbval1 = param1;
            qscrollarea_keypressevent_callback(this, cbval1);
            return;
        }
        QScrollArea::keyPressEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qscrollarea_changeevent_callback) {
            QEvent* cbval1 = param1;
            qscrollarea_changeevent_callback(this, cbval1);
            return;
        }
        QScrollArea::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qscrollarea_initstyleoption_callback) {
            QStyleOptionFrame* cbval1 = option;
            qscrollarea_initstyleoption_callback(this, cbval1);
            return;
        }
        QScrollArea::initStyleOption(option);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qscrollarea_devtype_callback) {
            int callback_ret = qscrollarea_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qscrollarea_setvisible_callback) {
            bool cbval1 = visible;
            qscrollarea_setvisible_callback(this, cbval1);
            return;
        }
        QScrollArea::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qscrollarea_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = qscrollarea_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qscrollarea_hasheightforwidth_callback) {
            bool callback_ret = qscrollarea_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return QScrollArea::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qscrollarea_paintengine_callback) {
            QPaintEngine* callback_ret = qscrollarea_paintengine_callback(this);
            return callback_ret;
        }
        return QScrollArea::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qscrollarea_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            qscrollarea_keyreleaseevent_callback(this, cbval1);
            return;
        }
        QScrollArea::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qscrollarea_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            qscrollarea_focusinevent_callback(this, cbval1);
            return;
        }
        QScrollArea::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qscrollarea_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            qscrollarea_focusoutevent_callback(this, cbval1);
            return;
        }
        QScrollArea::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qscrollarea_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            qscrollarea_enterevent_callback(this, cbval1);
            return;
        }
        QScrollArea::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qscrollarea_leaveevent_callback) {
            QEvent* cbval1 = event;
            qscrollarea_leaveevent_callback(this, cbval1);
            return;
        }
        QScrollArea::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qscrollarea_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            qscrollarea_moveevent_callback(this, cbval1);
            return;
        }
        QScrollArea::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qscrollarea_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            qscrollarea_closeevent_callback(this, cbval1);
            return;
        }
        QScrollArea::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qscrollarea_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            qscrollarea_tabletevent_callback(this, cbval1);
            return;
        }
        QScrollArea::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qscrollarea_actionevent_callback) {
            QActionEvent* cbval1 = event;
            qscrollarea_actionevent_callback(this, cbval1);
            return;
        }
        QScrollArea::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qscrollarea_showevent_callback) {
            QShowEvent* cbval1 = event;
            qscrollarea_showevent_callback(this, cbval1);
            return;
        }
        QScrollArea::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qscrollarea_hideevent_callback) {
            QHideEvent* cbval1 = event;
            qscrollarea_hideevent_callback(this, cbval1);
            return;
        }
        QScrollArea::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qscrollarea_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = qscrollarea_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return QScrollArea::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qscrollarea_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = qscrollarea_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QScrollArea::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qscrollarea_initpainter_callback) {
            QPainter* cbval1 = painter;
            qscrollarea_initpainter_callback(this, cbval1);
            return;
        }
        QScrollArea::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qscrollarea_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = qscrollarea_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return QScrollArea::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qscrollarea_sharedpainter_callback) {
            QPainter* callback_ret = qscrollarea_sharedpainter_callback(this);
            return callback_ret;
        }
        return QScrollArea::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qscrollarea_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            qscrollarea_inputmethodevent_callback(this, cbval1);
            return;
        }
        QScrollArea::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qscrollarea_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = qscrollarea_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QScrollArea::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscrollarea_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qscrollarea_timerevent_callback(this, cbval1);
            return;
        }
        QScrollArea::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscrollarea_childevent_callback) {
            QChildEvent* cbval1 = event;
            qscrollarea_childevent_callback(this, cbval1);
            return;
        }
        QScrollArea::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscrollarea_customevent_callback) {
            QEvent* cbval1 = event;
            qscrollarea_customevent_callback(this, cbval1);
            return;
        }
        QScrollArea::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscrollarea_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscrollarea_connectnotify_callback(this, cbval1);
            return;
        }
        QScrollArea::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscrollarea_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qscrollarea_disconnectnotify_callback(this, cbval1);
            return;
        }
        QScrollArea::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QScrollArea_SuperEvent(QScrollArea* self, QEvent* param1);
    friend bool QScrollArea_SuperEventFilter(QScrollArea* self, QObject* param1, QEvent* param2);
    friend void QScrollArea_SuperResizeEvent(QScrollArea* self, QResizeEvent* param1);
    friend void QScrollArea_SuperScrollContentsBy(QScrollArea* self, int dx, int dy);
    friend QSize* QScrollArea_SuperViewportSizeHint(const QScrollArea* self);
    friend bool QScrollArea_SuperViewportEvent(QScrollArea* self, QEvent* param1);
    friend void QScrollArea_SuperPaintEvent(QScrollArea* self, QPaintEvent* param1);
    friend void QScrollArea_SuperMousePressEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperMouseMoveEvent(QScrollArea* self, QMouseEvent* param1);
    friend void QScrollArea_SuperWheelEvent(QScrollArea* self, QWheelEvent* param1);
    friend void QScrollArea_SuperContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1);
    friend void QScrollArea_SuperDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1);
    friend void QScrollArea_SuperDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1);
    friend void QScrollArea_SuperDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1);
    friend void QScrollArea_SuperDropEvent(QScrollArea* self, QDropEvent* param1);
    friend void QScrollArea_SuperKeyPressEvent(QScrollArea* self, QKeyEvent* param1);
    friend void QScrollArea_SuperChangeEvent(QScrollArea* self, QEvent* param1);
    friend void QScrollArea_SuperInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option);
    friend void QScrollArea_SuperKeyReleaseEvent(QScrollArea* self, QKeyEvent* event);
    friend void QScrollArea_SuperFocusInEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_SuperFocusOutEvent(QScrollArea* self, QFocusEvent* event);
    friend void QScrollArea_SuperEnterEvent(QScrollArea* self, QEnterEvent* event);
    friend void QScrollArea_SuperLeaveEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_SuperMoveEvent(QScrollArea* self, QMoveEvent* event);
    friend void QScrollArea_SuperCloseEvent(QScrollArea* self, QCloseEvent* event);
    friend void QScrollArea_SuperTabletEvent(QScrollArea* self, QTabletEvent* event);
    friend void QScrollArea_SuperActionEvent(QScrollArea* self, QActionEvent* event);
    friend void QScrollArea_SuperShowEvent(QScrollArea* self, QShowEvent* event);
    friend void QScrollArea_SuperHideEvent(QScrollArea* self, QHideEvent* event);
    friend bool QScrollArea_SuperNativeEvent(QScrollArea* self, const libqt_string eventType, void* message, intptr_t* result);
    friend int QScrollArea_SuperMetric(const QScrollArea* self, int param1);
    friend void QScrollArea_SuperInitPainter(const QScrollArea* self, QPainter* painter);
    friend QPaintDevice* QScrollArea_SuperRedirected(const QScrollArea* self, QPoint* offset);
    friend QPainter* QScrollArea_SuperSharedPainter(const QScrollArea* self);
    friend void QScrollArea_SuperInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1);
    friend void QScrollArea_SuperTimerEvent(QScrollArea* self, QTimerEvent* event);
    friend void QScrollArea_SuperChildEvent(QScrollArea* self, QChildEvent* event);
    friend void QScrollArea_SuperCustomEvent(QScrollArea* self, QEvent* event);
    friend void QScrollArea_SuperConnectNotify(QScrollArea* self, const QMetaMethod* signal);
    friend void QScrollArea_SuperDisconnectNotify(QScrollArea* self, const QMetaMethod* signal);
};

#endif
