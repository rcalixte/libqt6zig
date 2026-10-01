#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPIXMAPREGIONSELECTORWIDGET_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKPIXMAPREGIONSELECTORWIDGET_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KPixmapRegionSelectorWidget
class VirtualKPixmapRegionSelectorWidget final : public KPixmapRegionSelectorWidget {
  public:
    // Virtual class public types (including callbacks and access types)
    using KPixmapRegionSelectorWidget_MetaObject_Callback = QMetaObject* (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_Metacast_Callback = void* (*)(KPixmapRegionSelectorWidget*, const char*);
    using KPixmapRegionSelectorWidget_Metacall_Callback = int (*)(KPixmapRegionSelectorWidget*, int, int, void**);
    using KPixmapRegionSelectorWidget_CreatePopupMenu_Callback = QMenu* (*)(KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_EventFilter_Callback = bool (*)(KPixmapRegionSelectorWidget*, QObject*, QEvent*);
    using KPixmapRegionSelectorWidget_DevType_Callback = int (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_SetVisible_Callback = void (*)(KPixmapRegionSelectorWidget*, bool);
    using KPixmapRegionSelectorWidget_SizeHint_Callback = QSize* (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_MinimumSizeHint_Callback = QSize* (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_HeightForWidth_Callback = int (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_HasHeightForWidth_Callback = bool (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_PaintEngine_Callback = QPaintEngine* (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_Event_Callback = bool (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_MousePressEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_MouseMoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMouseEvent*);
    using KPixmapRegionSelectorWidget_WheelEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QWheelEvent*);
    using KPixmapRegionSelectorWidget_KeyPressEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QKeyEvent*);
    using KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QKeyEvent*);
    using KPixmapRegionSelectorWidget_FocusInEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QFocusEvent*);
    using KPixmapRegionSelectorWidget_FocusOutEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QFocusEvent*);
    using KPixmapRegionSelectorWidget_EnterEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEnterEvent*);
    using KPixmapRegionSelectorWidget_LeaveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_PaintEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QPaintEvent*);
    using KPixmapRegionSelectorWidget_MoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QMoveEvent*);
    using KPixmapRegionSelectorWidget_ResizeEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QResizeEvent*);
    using KPixmapRegionSelectorWidget_CloseEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QCloseEvent*);
    using KPixmapRegionSelectorWidget_ContextMenuEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QContextMenuEvent*);
    using KPixmapRegionSelectorWidget_TabletEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QTabletEvent*);
    using KPixmapRegionSelectorWidget_ActionEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QActionEvent*);
    using KPixmapRegionSelectorWidget_DragEnterEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragEnterEvent*);
    using KPixmapRegionSelectorWidget_DragMoveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragMoveEvent*);
    using KPixmapRegionSelectorWidget_DragLeaveEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDragLeaveEvent*);
    using KPixmapRegionSelectorWidget_DropEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QDropEvent*);
    using KPixmapRegionSelectorWidget_ShowEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QShowEvent*);
    using KPixmapRegionSelectorWidget_HideEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QHideEvent*);
    using KPixmapRegionSelectorWidget_NativeEvent_Callback = bool (*)(KPixmapRegionSelectorWidget*, libqt_string, void*, intptr_t*);
    using KPixmapRegionSelectorWidget_ChangeEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_Metric_Callback = int (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_InitPainter_Callback = void (*)(const KPixmapRegionSelectorWidget*, QPainter*);
    using KPixmapRegionSelectorWidget_Redirected_Callback = QPaintDevice* (*)(const KPixmapRegionSelectorWidget*, QPoint*);
    using KPixmapRegionSelectorWidget_SharedPainter_Callback = QPainter* (*)(const KPixmapRegionSelectorWidget*);
    using KPixmapRegionSelectorWidget_InputMethodEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QInputMethodEvent*);
    using KPixmapRegionSelectorWidget_InputMethodQuery_Callback = QVariant* (*)(const KPixmapRegionSelectorWidget*, int);
    using KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback = bool (*)(KPixmapRegionSelectorWidget*, bool);
    using KPixmapRegionSelectorWidget_TimerEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QTimerEvent*);
    using KPixmapRegionSelectorWidget_ChildEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QChildEvent*);
    using KPixmapRegionSelectorWidget_CustomEvent_Callback = void (*)(KPixmapRegionSelectorWidget*, QEvent*);
    using KPixmapRegionSelectorWidget_ConnectNotify_Callback = void (*)(KPixmapRegionSelectorWidget*, QMetaMethod*);
    using KPixmapRegionSelectorWidget_DisconnectNotify_Callback = void (*)(KPixmapRegionSelectorWidget*, QMetaMethod*);
    using KPixmapRegionSelectorWidget::create;
    using KPixmapRegionSelectorWidget::destroy;
    using KPixmapRegionSelectorWidget::focusNextChild;
    using KPixmapRegionSelectorWidget::focusPreviousChild;
    using KPixmapRegionSelectorWidget::getDecodedMetricF;
    using KPixmapRegionSelectorWidget::isSignalConnected;
    using KPixmapRegionSelectorWidget::receivers;
    using KPixmapRegionSelectorWidget::sender;
    using KPixmapRegionSelectorWidget::senderSignalIndex;
    using KPixmapRegionSelectorWidget::updateMicroFocus;

    // Instance callback storage
    KPixmapRegionSelectorWidget_MetaObject_Callback kpixmapregionselectorwidget_metaobject_callback = nullptr;
    KPixmapRegionSelectorWidget_Metacast_Callback kpixmapregionselectorwidget_metacast_callback = nullptr;
    KPixmapRegionSelectorWidget_Metacall_Callback kpixmapregionselectorwidget_metacall_callback = nullptr;
    KPixmapRegionSelectorWidget_CreatePopupMenu_Callback kpixmapregionselectorwidget_createpopupmenu_callback = nullptr;
    KPixmapRegionSelectorWidget_EventFilter_Callback kpixmapregionselectorwidget_eventfilter_callback = nullptr;
    KPixmapRegionSelectorWidget_DevType_Callback kpixmapregionselectorwidget_devtype_callback = nullptr;
    KPixmapRegionSelectorWidget_SetVisible_Callback kpixmapregionselectorwidget_setvisible_callback = nullptr;
    KPixmapRegionSelectorWidget_SizeHint_Callback kpixmapregionselectorwidget_sizehint_callback = nullptr;
    KPixmapRegionSelectorWidget_MinimumSizeHint_Callback kpixmapregionselectorwidget_minimumsizehint_callback = nullptr;
    KPixmapRegionSelectorWidget_HeightForWidth_Callback kpixmapregionselectorwidget_heightforwidth_callback = nullptr;
    KPixmapRegionSelectorWidget_HasHeightForWidth_Callback kpixmapregionselectorwidget_hasheightforwidth_callback = nullptr;
    KPixmapRegionSelectorWidget_PaintEngine_Callback kpixmapregionselectorwidget_paintengine_callback = nullptr;
    KPixmapRegionSelectorWidget_Event_Callback kpixmapregionselectorwidget_event_callback = nullptr;
    KPixmapRegionSelectorWidget_MousePressEvent_Callback kpixmapregionselectorwidget_mousepressevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseReleaseEvent_Callback kpixmapregionselectorwidget_mousereleaseevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseDoubleClickEvent_Callback kpixmapregionselectorwidget_mousedoubleclickevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MouseMoveEvent_Callback kpixmapregionselectorwidget_mousemoveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_WheelEvent_Callback kpixmapregionselectorwidget_wheelevent_callback = nullptr;
    KPixmapRegionSelectorWidget_KeyPressEvent_Callback kpixmapregionselectorwidget_keypressevent_callback = nullptr;
    KPixmapRegionSelectorWidget_KeyReleaseEvent_Callback kpixmapregionselectorwidget_keyreleaseevent_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusInEvent_Callback kpixmapregionselectorwidget_focusinevent_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusOutEvent_Callback kpixmapregionselectorwidget_focusoutevent_callback = nullptr;
    KPixmapRegionSelectorWidget_EnterEvent_Callback kpixmapregionselectorwidget_enterevent_callback = nullptr;
    KPixmapRegionSelectorWidget_LeaveEvent_Callback kpixmapregionselectorwidget_leaveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_PaintEvent_Callback kpixmapregionselectorwidget_paintevent_callback = nullptr;
    KPixmapRegionSelectorWidget_MoveEvent_Callback kpixmapregionselectorwidget_moveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ResizeEvent_Callback kpixmapregionselectorwidget_resizeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_CloseEvent_Callback kpixmapregionselectorwidget_closeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ContextMenuEvent_Callback kpixmapregionselectorwidget_contextmenuevent_callback = nullptr;
    KPixmapRegionSelectorWidget_TabletEvent_Callback kpixmapregionselectorwidget_tabletevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ActionEvent_Callback kpixmapregionselectorwidget_actionevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragEnterEvent_Callback kpixmapregionselectorwidget_dragenterevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragMoveEvent_Callback kpixmapregionselectorwidget_dragmoveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DragLeaveEvent_Callback kpixmapregionselectorwidget_dragleaveevent_callback = nullptr;
    KPixmapRegionSelectorWidget_DropEvent_Callback kpixmapregionselectorwidget_dropevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ShowEvent_Callback kpixmapregionselectorwidget_showevent_callback = nullptr;
    KPixmapRegionSelectorWidget_HideEvent_Callback kpixmapregionselectorwidget_hideevent_callback = nullptr;
    KPixmapRegionSelectorWidget_NativeEvent_Callback kpixmapregionselectorwidget_nativeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ChangeEvent_Callback kpixmapregionselectorwidget_changeevent_callback = nullptr;
    KPixmapRegionSelectorWidget_Metric_Callback kpixmapregionselectorwidget_metric_callback = nullptr;
    KPixmapRegionSelectorWidget_InitPainter_Callback kpixmapregionselectorwidget_initpainter_callback = nullptr;
    KPixmapRegionSelectorWidget_Redirected_Callback kpixmapregionselectorwidget_redirected_callback = nullptr;
    KPixmapRegionSelectorWidget_SharedPainter_Callback kpixmapregionselectorwidget_sharedpainter_callback = nullptr;
    KPixmapRegionSelectorWidget_InputMethodEvent_Callback kpixmapregionselectorwidget_inputmethodevent_callback = nullptr;
    KPixmapRegionSelectorWidget_InputMethodQuery_Callback kpixmapregionselectorwidget_inputmethodquery_callback = nullptr;
    KPixmapRegionSelectorWidget_FocusNextPrevChild_Callback kpixmapregionselectorwidget_focusnextprevchild_callback = nullptr;
    KPixmapRegionSelectorWidget_TimerEvent_Callback kpixmapregionselectorwidget_timerevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ChildEvent_Callback kpixmapregionselectorwidget_childevent_callback = nullptr;
    KPixmapRegionSelectorWidget_CustomEvent_Callback kpixmapregionselectorwidget_customevent_callback = nullptr;
    KPixmapRegionSelectorWidget_ConnectNotify_Callback kpixmapregionselectorwidget_connectnotify_callback = nullptr;
    KPixmapRegionSelectorWidget_DisconnectNotify_Callback kpixmapregionselectorwidget_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : KPixmapRegionSelectorWidget {
        using KPixmapRegionSelectorWidget::actionEvent;
        using KPixmapRegionSelectorWidget::changeEvent;
        using KPixmapRegionSelectorWidget::childEvent;
        using KPixmapRegionSelectorWidget::closeEvent;
        using KPixmapRegionSelectorWidget::connectNotify;
        using KPixmapRegionSelectorWidget::contextMenuEvent;
        using KPixmapRegionSelectorWidget::createPopupMenu;
        using KPixmapRegionSelectorWidget::customEvent;
        using KPixmapRegionSelectorWidget::disconnectNotify;
        using KPixmapRegionSelectorWidget::dragEnterEvent;
        using KPixmapRegionSelectorWidget::dragLeaveEvent;
        using KPixmapRegionSelectorWidget::dragMoveEvent;
        using KPixmapRegionSelectorWidget::dropEvent;
        using KPixmapRegionSelectorWidget::enterEvent;
        using KPixmapRegionSelectorWidget::event;
        using KPixmapRegionSelectorWidget::eventFilter;
        using KPixmapRegionSelectorWidget::focusInEvent;
        using KPixmapRegionSelectorWidget::focusNextPrevChild;
        using KPixmapRegionSelectorWidget::focusOutEvent;
        using KPixmapRegionSelectorWidget::hideEvent;
        using KPixmapRegionSelectorWidget::initPainter;
        using KPixmapRegionSelectorWidget::inputMethodEvent;
        using KPixmapRegionSelectorWidget::keyPressEvent;
        using KPixmapRegionSelectorWidget::keyReleaseEvent;
        using KPixmapRegionSelectorWidget::leaveEvent;
        using KPixmapRegionSelectorWidget::metric;
        using KPixmapRegionSelectorWidget::mouseDoubleClickEvent;
        using KPixmapRegionSelectorWidget::mouseMoveEvent;
        using KPixmapRegionSelectorWidget::mousePressEvent;
        using KPixmapRegionSelectorWidget::mouseReleaseEvent;
        using KPixmapRegionSelectorWidget::moveEvent;
        using KPixmapRegionSelectorWidget::nativeEvent;
        using KPixmapRegionSelectorWidget::paintEvent;
        using KPixmapRegionSelectorWidget::redirected;
        using KPixmapRegionSelectorWidget::resizeEvent;
        using KPixmapRegionSelectorWidget::sharedPainter;
        using KPixmapRegionSelectorWidget::showEvent;
        using KPixmapRegionSelectorWidget::tabletEvent;
        using KPixmapRegionSelectorWidget::timerEvent;
        using KPixmapRegionSelectorWidget::wheelEvent;
    };

    VirtualKPixmapRegionSelectorWidget(QWidget* parent) : KPixmapRegionSelectorWidget(parent) {};
    VirtualKPixmapRegionSelectorWidget() : KPixmapRegionSelectorWidget() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (kpixmapregionselectorwidget_metaobject_callback) {
            QMetaObject* callback_ret = kpixmapregionselectorwidget_metaobject_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (kpixmapregionselectorwidget_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = kpixmapregionselectorwidget_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (kpixmapregionselectorwidget_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = kpixmapregionselectorwidget_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorWidget::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (kpixmapregionselectorwidget_createpopupmenu_callback) {
            QMenu* callback_ret = kpixmapregionselectorwidget_createpopupmenu_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::createPopupMenu();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* obj, QEvent* ev) override {
        if (kpixmapregionselectorwidget_eventfilter_callback) {
            QObject* cbval1 = obj;
            QEvent* cbval2 = ev;
            bool callback_ret = kpixmapregionselectorwidget_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::eventFilter(obj, ev);
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (kpixmapregionselectorwidget_devtype_callback) {
            int callback_ret = kpixmapregionselectorwidget_devtype_callback(this);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorWidget::devType();
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (kpixmapregionselectorwidget_setvisible_callback) {
            bool cbval1 = visible;
            kpixmapregionselectorwidget_setvisible_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::setVisible(visible);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (kpixmapregionselectorwidget_sizehint_callback) {
            QSize* callback_ret = kpixmapregionselectorwidget_sizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorWidget::sizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (kpixmapregionselectorwidget_minimumsizehint_callback) {
            QSize* callback_ret = kpixmapregionselectorwidget_minimumsizehint_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorWidget::minimumSizeHint();
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (kpixmapregionselectorwidget_heightforwidth_callback) {
            int cbval1 = param1;
            int callback_ret = kpixmapregionselectorwidget_heightforwidth_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorWidget::heightForWidth(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (kpixmapregionselectorwidget_hasheightforwidth_callback) {
            bool callback_ret = kpixmapregionselectorwidget_hasheightforwidth_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::hasHeightForWidth();
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (kpixmapregionselectorwidget_paintengine_callback) {
            QPaintEngine* callback_ret = kpixmapregionselectorwidget_paintengine_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::paintEngine();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (kpixmapregionselectorwidget_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = kpixmapregionselectorwidget_event_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousepressevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectorwidget_mousepressevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::mousePressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousereleaseevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectorwidget_mousereleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::mouseReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousedoubleclickevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectorwidget_mousedoubleclickevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::mouseDoubleClickEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (kpixmapregionselectorwidget_mousemoveevent_callback) {
            QMouseEvent* cbval1 = event;
            kpixmapregionselectorwidget_mousemoveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::mouseMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (kpixmapregionselectorwidget_wheelevent_callback) {
            QWheelEvent* cbval1 = event;
            kpixmapregionselectorwidget_wheelevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::wheelEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (kpixmapregionselectorwidget_keypressevent_callback) {
            QKeyEvent* cbval1 = event;
            kpixmapregionselectorwidget_keypressevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::keyPressEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (kpixmapregionselectorwidget_keyreleaseevent_callback) {
            QKeyEvent* cbval1 = event;
            kpixmapregionselectorwidget_keyreleaseevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::keyReleaseEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (kpixmapregionselectorwidget_focusinevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapregionselectorwidget_focusinevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::focusInEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (kpixmapregionselectorwidget_focusoutevent_callback) {
            QFocusEvent* cbval1 = event;
            kpixmapregionselectorwidget_focusoutevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::focusOutEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (kpixmapregionselectorwidget_enterevent_callback) {
            QEnterEvent* cbval1 = event;
            kpixmapregionselectorwidget_enterevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::enterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (kpixmapregionselectorwidget_leaveevent_callback) {
            QEvent* cbval1 = event;
            kpixmapregionselectorwidget_leaveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::leaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (kpixmapregionselectorwidget_paintevent_callback) {
            QPaintEvent* cbval1 = event;
            kpixmapregionselectorwidget_paintevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::paintEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (kpixmapregionselectorwidget_moveevent_callback) {
            QMoveEvent* cbval1 = event;
            kpixmapregionselectorwidget_moveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::moveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (kpixmapregionselectorwidget_resizeevent_callback) {
            QResizeEvent* cbval1 = event;
            kpixmapregionselectorwidget_resizeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::resizeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (kpixmapregionselectorwidget_closeevent_callback) {
            QCloseEvent* cbval1 = event;
            kpixmapregionselectorwidget_closeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::closeEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (kpixmapregionselectorwidget_contextmenuevent_callback) {
            QContextMenuEvent* cbval1 = event;
            kpixmapregionselectorwidget_contextmenuevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::contextMenuEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (kpixmapregionselectorwidget_tabletevent_callback) {
            QTabletEvent* cbval1 = event;
            kpixmapregionselectorwidget_tabletevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::tabletEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (kpixmapregionselectorwidget_actionevent_callback) {
            QActionEvent* cbval1 = event;
            kpixmapregionselectorwidget_actionevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::actionEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (kpixmapregionselectorwidget_dragenterevent_callback) {
            QDragEnterEvent* cbval1 = event;
            kpixmapregionselectorwidget_dragenterevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::dragEnterEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (kpixmapregionselectorwidget_dragmoveevent_callback) {
            QDragMoveEvent* cbval1 = event;
            kpixmapregionselectorwidget_dragmoveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::dragMoveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (kpixmapregionselectorwidget_dragleaveevent_callback) {
            QDragLeaveEvent* cbval1 = event;
            kpixmapregionselectorwidget_dragleaveevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::dragLeaveEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (kpixmapregionselectorwidget_dropevent_callback) {
            QDropEvent* cbval1 = event;
            kpixmapregionselectorwidget_dropevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::dropEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (kpixmapregionselectorwidget_showevent_callback) {
            QShowEvent* cbval1 = event;
            kpixmapregionselectorwidget_showevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::showEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (kpixmapregionselectorwidget_hideevent_callback) {
            QHideEvent* cbval1 = event;
            kpixmapregionselectorwidget_hideevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::hideEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (kpixmapregionselectorwidget_nativeevent_callback) {
            const QByteArray eventType_qb = eventType;
            libqt_string eventType_str;
            eventType_str.len = eventType_qb.length();
            eventType_str.data = static_cast<char*>(malloc(eventType_str.len));
            memcpy((void*)eventType_str.data, eventType_qb.data(), eventType_str.len);
            libqt_string cbval1 = eventType_str;
            void* cbval2 = message;
            qintptr* result_ret = result;
            intptr_t* cbval3 = (intptr_t*)(result_ret);
            bool callback_ret = kpixmapregionselectorwidget_nativeevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(eventType_str.data);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::nativeEvent(eventType, message, result);
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (kpixmapregionselectorwidget_changeevent_callback) {
            QEvent* cbval1 = param1;
            kpixmapregionselectorwidget_changeevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::changeEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (kpixmapregionselectorwidget_metric_callback) {
            int cbval1 = static_cast<int>(param1);
            int callback_ret = kpixmapregionselectorwidget_metric_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return KPixmapRegionSelectorWidget::metric(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (kpixmapregionselectorwidget_initpainter_callback) {
            QPainter* cbval1 = painter;
            kpixmapregionselectorwidget_initpainter_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::initPainter(painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (kpixmapregionselectorwidget_redirected_callback) {
            QPoint* cbval1 = offset;
            QPaintDevice* callback_ret = kpixmapregionselectorwidget_redirected_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::redirected(offset);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (kpixmapregionselectorwidget_sharedpainter_callback) {
            QPainter* callback_ret = kpixmapregionselectorwidget_sharedpainter_callback(this);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::sharedPainter();
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (kpixmapregionselectorwidget_inputmethodevent_callback) {
            QInputMethodEvent* cbval1 = param1;
            kpixmapregionselectorwidget_inputmethodevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::inputMethodEvent(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (kpixmapregionselectorwidget_inputmethodquery_callback) {
            int cbval1 = static_cast<int>(param1);
            QVariant* callback_ret = kpixmapregionselectorwidget_inputmethodquery_callback(this, cbval1);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return KPixmapRegionSelectorWidget::inputMethodQuery(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (kpixmapregionselectorwidget_focusnextprevchild_callback) {
            bool cbval1 = next;
            bool callback_ret = kpixmapregionselectorwidget_focusnextprevchild_callback(this, cbval1);
            return callback_ret;
        }
        return KPixmapRegionSelectorWidget::focusNextPrevChild(next);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (kpixmapregionselectorwidget_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            kpixmapregionselectorwidget_timerevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (kpixmapregionselectorwidget_childevent_callback) {
            QChildEvent* cbval1 = event;
            kpixmapregionselectorwidget_childevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (kpixmapregionselectorwidget_customevent_callback) {
            QEvent* cbval1 = event;
            kpixmapregionselectorwidget_customevent_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectorwidget_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapregionselectorwidget_connectnotify_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (kpixmapregionselectorwidget_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            kpixmapregionselectorwidget_disconnectnotify_callback(this, cbval1);
            return;
        }
        KPixmapRegionSelectorWidget::disconnectNotify(signal);
    }

    // Friend functions
    friend QMenu* KPixmapRegionSelectorWidget_SuperCreatePopupMenu(KPixmapRegionSelectorWidget* self);
    friend bool KPixmapRegionSelectorWidget_SuperEventFilter(KPixmapRegionSelectorWidget* self, QObject* obj, QEvent* ev);
    friend bool KPixmapRegionSelectorWidget_SuperEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperMousePressEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperMouseReleaseEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperMouseDoubleClickEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperMouseMoveEvent(KPixmapRegionSelectorWidget* self, QMouseEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperWheelEvent(KPixmapRegionSelectorWidget* self, QWheelEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperKeyPressEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperKeyReleaseEvent(KPixmapRegionSelectorWidget* self, QKeyEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperFocusInEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperFocusOutEvent(KPixmapRegionSelectorWidget* self, QFocusEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperEnterEvent(KPixmapRegionSelectorWidget* self, QEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperLeaveEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperPaintEvent(KPixmapRegionSelectorWidget* self, QPaintEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperMoveEvent(KPixmapRegionSelectorWidget* self, QMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperResizeEvent(KPixmapRegionSelectorWidget* self, QResizeEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperCloseEvent(KPixmapRegionSelectorWidget* self, QCloseEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperContextMenuEvent(KPixmapRegionSelectorWidget* self, QContextMenuEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperTabletEvent(KPixmapRegionSelectorWidget* self, QTabletEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperActionEvent(KPixmapRegionSelectorWidget* self, QActionEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperDragEnterEvent(KPixmapRegionSelectorWidget* self, QDragEnterEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperDragMoveEvent(KPixmapRegionSelectorWidget* self, QDragMoveEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperDragLeaveEvent(KPixmapRegionSelectorWidget* self, QDragLeaveEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperDropEvent(KPixmapRegionSelectorWidget* self, QDropEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperShowEvent(KPixmapRegionSelectorWidget* self, QShowEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperHideEvent(KPixmapRegionSelectorWidget* self, QHideEvent* event);
    friend bool KPixmapRegionSelectorWidget_SuperNativeEvent(KPixmapRegionSelectorWidget* self, const libqt_string eventType, void* message, intptr_t* result);
    friend void KPixmapRegionSelectorWidget_SuperChangeEvent(KPixmapRegionSelectorWidget* self, QEvent* param1);
    friend int KPixmapRegionSelectorWidget_SuperMetric(const KPixmapRegionSelectorWidget* self, int param1);
    friend void KPixmapRegionSelectorWidget_SuperInitPainter(const KPixmapRegionSelectorWidget* self, QPainter* painter);
    friend QPaintDevice* KPixmapRegionSelectorWidget_SuperRedirected(const KPixmapRegionSelectorWidget* self, QPoint* offset);
    friend QPainter* KPixmapRegionSelectorWidget_SuperSharedPainter(const KPixmapRegionSelectorWidget* self);
    friend void KPixmapRegionSelectorWidget_SuperInputMethodEvent(KPixmapRegionSelectorWidget* self, QInputMethodEvent* param1);
    friend bool KPixmapRegionSelectorWidget_SuperFocusNextPrevChild(KPixmapRegionSelectorWidget* self, bool next);
    friend void KPixmapRegionSelectorWidget_SuperTimerEvent(KPixmapRegionSelectorWidget* self, QTimerEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperChildEvent(KPixmapRegionSelectorWidget* self, QChildEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperCustomEvent(KPixmapRegionSelectorWidget* self, QEvent* event);
    friend void KPixmapRegionSelectorWidget_SuperConnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
    friend void KPixmapRegionSelectorWidget_SuperDisconnectNotify(KPixmapRegionSelectorWidget* self, const QMetaMethod* signal);
};

#endif
